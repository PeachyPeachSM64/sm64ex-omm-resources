@echo off

:: Install mingw64 if not found
set mingw64exe="%appdata%\msys2\mingw64.exe"
if not exist %mingw64exe% (
	echo mingw64.exe not found. Installing latest version...
	curl -Lk -o msys2.exe --url "https://github.com/msys2/msys2-installer/releases/download/2022-09-04/msys2-x86_64-20220904.exe"
	msys2.exe install --root "%appdata%\msys2" --confirm-command
	del msys2.exe
)

:: To download the test repo instead of the public one, create a file named "sm64ex-omm-test"
if exist "sm64ex-omm-test" (
	set omm_repo=https://github.com/PeachyPeachSM64/sm64ex-omm-test.git
) else (
	set omm_repo=https://github.com/PeachyPeachSM64/sm64ex-omm.git
)

:: Bash script to update mingw64 and download the omm builder repo
echo echo "Setting up OMM Builder and its dependencies..." > omm_builder_setup.sh
echo pacman -Syu --noconfirm >> omm_builder_setup.sh
echo pacman -Syu --noconfirm zip unzip p7zip make git mingw-w64-i686-gcc mingw-w64-x86_64-gcc mingw-w64-i686-glew mingw-w64-x86_64-glew mingw-w64-i686-SDL2 mingw-w64-i686-SDL mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL python3 >> omm_builder_setup.sh
if not exist "omm_builder.sh" (
	echo git config --global credential.helper store >> omm_builder_setup.sh
	echo git clone --single-branch --depth 1 %omm_repo% -b builder sm64ex-omm >> omm_builder_setup.sh
	echo cd sm64ex-omm >> omm_builder_setup.sh
)
echo git reset --hard HEAD >> omm_builder_setup.sh
echo git clean -f -d >> omm_builder_setup.sh
echo git pull >> omm_builder_setup.sh

:: Run the script and wait for it to start
%mingw64exe% bash omm_builder_setup.sh
timeout /t 5 /nobreak > nul

:: Wait for it to finish
echo Updating mingw64... Do not close this window.
:waitloop
tasklist |find /I "bash.exe" > nul
if errorlevel 1 goto endloop
timeout /t 1 /nobreak > nul
goto waitloop
:endloop

:: Run it again to complete the install
echo rm -f omm_builder_setup.sh >> omm_builder_setup.sh
echo rm -f ../omm_builder_setup.sh >> omm_builder_setup.sh
%mingw64exe% bash omm_builder_setup.sh

:: Setup registry keys (needs admin perms)
reg add HKEY_CLASSES_ROOT\*\shell\OpenMinGW64 /f /ve /t REG_SZ /d "Open MinGW64 here"
reg add HKEY_CLASSES_ROOT\*\shell\OpenMinGW64 /f /v "Icon" /t REG_SZ /d "%mingw64exe%"
reg add HKEY_CLASSES_ROOT\*\shell\OpenMinGW64\command /f /ve /t REG_SZ /d "%mingw64exe% bash"
reg add HKEY_CLASSES_ROOT\Directory\shell\OpenMinGW64 /f /ve /t REG_SZ /d "Open MinGW64 here"
reg add HKEY_CLASSES_ROOT\Directory\shell\OpenMinGW64 /f /v "Icon" /t REG_SZ /d "%mingw64exe%"
reg add HKEY_CLASSES_ROOT\Directory\shell\OpenMinGW64\command /f /ve /t REG_SZ /d "%mingw64exe% bash"
reg add HKEY_CLASSES_ROOT\Directory\Background\shell\OpenMinGW64 /f /ve /t REG_SZ /d "Open MinGW64 here"
reg add HKEY_CLASSES_ROOT\Directory\Background\shell\OpenMinGW64 /f /v "Icon" /t REG_SZ /d "%mingw64exe%"
reg add HKEY_CLASSES_ROOT\Directory\Background\shell\OpenMinGW64\command /f /ve /t REG_SZ /d "%mingw64exe% bash"
reg add HKEY_CLASSES_ROOT\*\shell\OpenOmmBuilder /f /ve /t REG_SZ /d "Open OMM Builder here"
reg add HKEY_CLASSES_ROOT\*\shell\OpenOmmBuilder /f /v "Icon" /t REG_SZ /d "%mingw64exe%"
reg add HKEY_CLASSES_ROOT\*\shell\OpenOmmBuilder\command /f /ve /t REG_SZ /d "%mingw64exe% bash -c \"python3 omm_builder.py\""
reg add HKEY_CLASSES_ROOT\Directory\shell\OpenOmmBuilder /f /ve /t REG_SZ /d "Open OMM Builder here"
reg add HKEY_CLASSES_ROOT\Directory\shell\OpenOmmBuilder /f /v "Icon" /t REG_SZ /d "%mingw64exe%"
reg add HKEY_CLASSES_ROOT\Directory\shell\OpenOmmBuilder\command /f /ve /t REG_SZ /d "%mingw64exe% bash -c \"python3 omm_builder.py\""
reg add HKEY_CLASSES_ROOT\Directory\Background\shell\OpenOmmBuilder /f /ve /t REG_SZ /d "Open OMM Builder here"
reg add HKEY_CLASSES_ROOT\Directory\Background\shell\OpenOmmBuilder /f /v "Icon" /t REG_SZ /d "%mingw64exe%"
reg add HKEY_CLASSES_ROOT\Directory\Background\shell\OpenOmmBuilder\command /f /ve /t REG_SZ /d "%mingw64exe% bash -c \"python3 omm_builder.py\""
