@echo off
setlocal enableDelayedExpansion
set root_path=C:
if exist "%root_path%/msys64/mingw64.exe" (
	set mingw64_path=%root_path%/msys64/mingw64.exe
) else (
	set /p mingw64_path=< mingw64_path
	if "!mingw64_path!" == "" (
		cls
		echo Trying to locate mingw64.exe in %root_path%...
		where /R %root_path% mingw64.exe > mingw64_path
		set /p mingw64_path=< mingw64_path
		if "!mingw64_path!" == "" (
			cls
			echo Couldn't find mingw64.exe, maybe it's not located in %root_path%?
			echo To change the search path, open omm_builder.bat in a text editor and change the value of root_path.
			pause
			exit
		)
	)
)
echo echo "Setting up OMM Builder and its dependencies..." > omm_builder_setup.sh
echo pacman -Syu --noconfirm >> omm_builder_setup.sh
echo pacman -Syu --noconfirm zip unzip p7zip make git mingw-w64-i686-gcc mingw-w64-x86_64-gcc mingw-w64-i686-glew mingw-w64-x86_64-glew mingw-w64-i686-SDL2 mingw-w64-i686-SDL mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL python3 >> omm_builder_setup.sh
echo git config --global credential.helper store >> omm_builder_setup.sh
echo git clone https://github.com/PeachyPeachSM64/sm64ex-omm-test.git -b master >> omm_builder_setup.sh
echo rm -f mingw64_path >> omm_builder_setup.sh
echo rm -f omm_builder_setup.sh >> omm_builder_setup.sh
start !mingw64_path! bash omm_builder_setup.sh
