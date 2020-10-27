//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🐧", "uname -r",					                                    0,	0},
	{"VOL ", "pamixer --get-volume-human",	                                30,	1},
	{"CPU ", "printf '%.2f, %d°C' $(cut -d' ' -f1 /proc/loadavg) $(($(cat /sys/class/thermal/thermal_zone2/temp) / 1000))",	2,	0},
	{"", "date '+%a %F %H:%M'",					    	                    30,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
