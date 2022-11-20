//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	  /*Command*/		                                                              /*Update Interval*/	/*Update Signal*/
	/* {"\ue322 ", "free -h | awk '/^Mem/ { print $3  \" | \" $2 }' | sed s/i//g",	            30,		              0}, */
	{"\ue050 ", "wpctl get-volume @DEFAULT_AUDIO_SINK@ | awk '{ print $2 * 100 }'",					1,		              0},
	{"",        "date +'%l:%M%p  '",					                                        5,		              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 5;
