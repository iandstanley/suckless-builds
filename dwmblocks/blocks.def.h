//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{"", "dwmblocks-wlan-ip",	0,			0},
	{"", "dwmblocks-ue-ip",		0,			0},
	{"", "dwmblocks-who",		0,			0},
	{"", "dwmblocks-cpu",	 	60,			0},
	{"", "dwmblocks-load", 	 	60,			0},
	{"", "dwmblocks-battery",	60,			0},
	{"", "dwmblocks-mem",		60,			0},
	{"", "dwmblocks-date",		60,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

