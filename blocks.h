//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	  /*Command*/		          /*Update Interval*/	/*Update Signal*/
	{"",        "update-blk",			  		1800,		             3},
	{"",        "battery-blk",					1,		               0},
	{"",        "brightness-blk",			  1,		               0},
	{"",        "volume-blk",					  1,		              10},
	{"",        "network-blk",					1,		               0},
	{"",        "weather-blk",					1800,                0},
	{"",        "date +'%l:%M%p   '",		5,		               0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "      ";
static unsigned int delimLen = 6;
