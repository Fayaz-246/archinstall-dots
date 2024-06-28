//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"^c#ca9ee6^  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
  {"^c#e5c890^  ", "~/.config/scripts/cpusage.sh",                                                         10,   0},
  {"^c#a6d189^  ", "acpi -b | grep  -o '[0-9]*%'", 60, 0},
	{"^c#e78284^󰃭 ", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
