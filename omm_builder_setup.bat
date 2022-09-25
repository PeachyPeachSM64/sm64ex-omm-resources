@echo off
set mingw64exe="%appdata%\msys2\mingw64.exe"
if not exist %mingw64exe% (
	echo mingw64.exe not found. Installing latest version...
	curl -Lk -o msys2.exe --url "https://github.com/msys2/msys2-installer/releases/download/2022-09-04/msys2-x86_64-20220904.exe"
	msys2.exe install --root "%appdata%\msys2" --confirm-command
	del msys2.exe
)
if exist "sm64ex-omm-test" (
	set omm_repo=https://github.com/PeachyPeachSM64/sm64ex-omm-test.git
) else (
	set omm_repo=https://github.com/PeachyPeachSM64/sm64ex-omm.git
)
echo echo "Setting up OMM Builder and its dependencies..." > omm_builder_setup.sh
echo pacman -Syu --noconfirm >> omm_builder_setup.sh
echo pacman -Syu --noconfirm zip unzip p7zip make git mingw-w64-i686-gcc mingw-w64-x86_64-gcc mingw-w64-i686-glew mingw-w64-x86_64-glew mingw-w64-i686-SDL2 mingw-w64-i686-SDL mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL python3 >> omm_builder_setup.sh
if not exist "omm_builder.sh" (
	echo git config --global credential.helper store >> omm_builder_setup.sh
	echo git clone --single-branch %omm_repo% -b master sm64ex-omm >> omm_builder_setup.sh
	echo cd sm64ex-omm >> omm_builder_setup.sh
)
echo git reset --hard HEAD >> omm_builder_setup.sh
echo git clean -f -d >> omm_builder_setup.sh
echo git pull >> omm_builder_setup.sh
echo rm -f omm_builder_setup.sh >> omm_builder_setup.sh
%mingw64exe% bash omm_builder_setup.sh
