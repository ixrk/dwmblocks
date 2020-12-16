//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🐧", "statuskernel",					    0,	0},
	{"VOL ", "statusvolume",	                30,	1},
    {"", "statusnetrate",                       1,  0},
	{"CPU ", "statuscpu",						1,	0},
    {"", "statuscharge",                        10, 8},
	{"", "statusdate",						    30,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
