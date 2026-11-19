struct Time {
	int min;
	int hour;
};

struct Date {
	int year;
	int month;
	int day;
	Time time;
	static int hmode;
};

int main()
{
	// Date d1 = { .hmode = 0 }; // invalid - static member
	// Date d2 = { .month = 3, .year = 1998 }; // invalid - wrong order
	// Date d3 = { 3, .year = 1998 }; // invalid - mix init
	// Date d4 = {.time.min = 25; // invalid. Nested member access is not allowed.};

	Date d5 = { .time = {32, 4} }; // valid
}
