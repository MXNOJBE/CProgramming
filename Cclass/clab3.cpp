#include <stdio.h>

int inhr;
unsigned short inmins, outhr, outmins, day_time, nodaytime;

void readlogin()
{
	system("cls");
	printf("\n Enter Log-in Time : ");
	printf("\n  Enter hour value : ");
	scanf("%d", &inhr);
	printf("\n  Enter minutes value : ");
	scanf("%u", &inmins);
	printf("\nYour Log-In time was at %d:%d", inhr, inmins);
}

void readlogout()
{
	system("cls");
	printf("\n Enter Log-out Time : ");
	printf("\n  Enter hour value : ");
	scanf("%u", &outhr);
	printf("\n  Enter minutes value : ");
	scanf("%u", &outmins);
	printf("\nYour Log-Out time was at %d:%d", outhr, outmins);
}

void convertintomins(int hr, int mins)
{
	unsigned short newhr, newmins;
	system("cls");
	newhr = (hr * 60);
	newmins = newhr + mins;
	printf("\n%u hrs and %u minutes is = %d minutes", hr, mins, (hr * 60 + mins));
}

void convertintohrsmins(int mins)
{
	printf(" %d minutes is = %u hours and %u minutes", mins, (mins / 60), (mins % 60));
}

void display()
{
	system("cls");
	int hrtime, drtime;
	unsigned short int mintime;

	if (outhr <= inhr)
	{
		drtime = 24 - inhr;
		day_time = drtime + outhr;
		if (outmins > inmins)
		{
			mintime = outmins - inmins;
		}
		else
		{
			mintime = inmins - outmins;
		}
		printf("\n The difference between start-time and end-time is %d hours and %u minutes.", day_time, mintime);
	}

	{
		if (outhr > inhr)
		{
			hrtime = inhr - outhr;
		}
		if (outmins > inmins)

		{

			mintime = outmins - inmins;
		}
		else
		{
			mintime = inmins - outmins;
			printf("\n The difference between start-time and end-time is %d hours and %u minutes.", (hrtime * -1), mintime);
		}
	}
}

int main()
{
	int mins;
	unsigned short choice, cont = 1, hr;
	while (cont)
	{
		printf("\n\n\nEnter a Choice: \n");
		printf("\n 1. Read Login time(hour and minutes format) ");
		printf("\n 2. Read Log out time(hour and minutes format)");
		printf("\n 3. To convert the time in hh and mm format to minutes and return minutes");
		printf("\n 4. To convert the minutes into hh and mm format");
		printf("\n 5. To display the difference between endtime and start time in hh and mm format");
		printf("\n\n Enter your choice : ");
		scanf("%u", &choice);

		switch (choice)
		{
		case 1:
			readlogin();
			break;
		case 2:
			readlogout();
			break;
		case 3:
			printf("\n Enter Time in hours and minutes : ");
			printf("\n  Enter hour value : ");
			scanf("%u", &hr);
			printf("\n  Enter minutes value : ");
			scanf("%u", &mins);
			convertintomins(hr, mins);
			break;
		case 4:
			printf("\n Enter Time in minutes : ");
			printf("\n  Enter minutes value : ");
			scanf("%d", &mins);
			convertintohrsmins(mins);
			break;
		case 5:
			display();
			break;
		default:
			printf("\n Invalid Choice");
		}
		printf("\nDo you wish to continue (Enter 1 or 0) : ");
		scanf("%u", &cont);
	}
}


