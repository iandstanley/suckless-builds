
# Suckless Builds

These are the builds of my suckless tools for FreeBSD. FreeBSD comes with both binary and ports for various suckless tools. However, the binary package is just the plain default configuration and the ports directory could get overwritten with an upgrade -or- a make clean.

The ports have their own makefile that allows you to override the configuration files with a make directive pointing to a file outside the ports folders. To simplify this build I have use a 'build' script to call the appropriate make directive to build from the ports tree.

## dwm

1. Edit *config.h* to add your liking 
2. Run *./build* to build dwm from ports with your changes.

## dwmblocks

1. Edit *blocks.def.h* to add your liking 
2. Run *./build* to build dwmblocks from ports with your changes.
3. Install the scripts from the blocks directory into your path (In my case the originals are in my scripts '~/bin' folder.

These scripts can be easily modified to change the output format in order that the output can be edited without changing the *blocks.def.h* file and recompiling. 

## st (original st build)

1. Edit *config.h* to add your liking 
2. Run *./build* to build dwm from ports with your changes.

## lukes-st-build

This is Luke Smith's build of st includes copy/paste and capture urls etc. This can be built using *sudo make install clean"
