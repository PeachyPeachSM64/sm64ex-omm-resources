@echo off

:: Check for mingw64.exe in ProgramData
:: Install mingw64 in ProgramData if not found
:: Doesn't require admin perms, and cannot have whitespaces in its path, unlike AppData
set mingw64exe="%ProgramData%\msys2\mingw64.exe"
if not exist %mingw64exe% (
	echo mingw64.exe not found. Installing latest version in %ProgramData%\msys2...
	curl -Lk -o msys2.exe --url "https://github.com/msys2/msys2-installer/releases/download/2023-10-26/msys2-x86_64-20231026.exe"
	msys2.exe install --root "%ProgramData%\msys2" --confirm-command
	del msys2.exe
) else (
	goto update_end
)

:: Initialize mingw64
echo Initializing mingw64... Do not close this window.
%mingw64exe% bash -c "pacman -Sy --noconfirm pacman"
timeout /t 5 /nobreak > nul
:init_loop
tasklist | find /I "pacman.exe" > nul
if errorlevel 1 goto init_end
timeout /t 1 /nobreak > nul
goto init_loop
:init_end

:: Update mingw64
echo Updating mingw64... Do not close this window.
%mingw64exe% bash -c "pacman -Syu --noconfirm"
timeout /t 5 /nobreak > nul
:update_loop
tasklist | find /I "pacman.exe" > nul
if errorlevel 1 goto update_end
timeout /t 1 /nobreak > nul
goto update_loop
:update_end

:: Install dependencies and setup OMM Builder
(
echo pacman -S --noconfirm wget make git zip unzip p7zip python python3 mingw-w64-i686-gcc mingw-w64-x86_64-gcc mingw-w64-i686-glew mingw-w64-x86_64-glew mingw-w64-i686-SDL mingw-w64-x86_64-SDL mingw-w64-i686-SDL2 mingw-w64-x86_64-SDL2
echo git clone --single-branch --depth 1 "https://github.com/PeachyPeachSM64/sm64ex-omm.git" -b builder sm64ex-omm
echo cd sm64ex-omm
echo git reset --hard HEAD
echo git clean -f -d
echo git pull
echo cd -
echo rm -f omm_builder_setup.sh
) > omm_builder_setup.sh
%mingw64exe% bash omm_builder_setup.sh
