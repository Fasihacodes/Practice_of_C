#include<stdio.h>
#include<math.h>
#include<ctype.h>

/*int main(){
//program 1
int a, b, c, d, result;
printf("Enter a");
scanf_s("%d", &a);
printf("Enter b");
scanf_s("%d", &b);
printf("Enter c");
scanf_s("%d", &c);
printf("Enter d");
scanf_s("%d", &d);
printf("Result=%d", result = a * b);
return 0;
}*/

/* int main(){
	printf("%d\n", 4 == 4 && !(2 > 3));
	return 0;
}*/
/* int main(){
	int a;
	printf("enter");
	scanf_s("%d",&a);
	if (a % 2 == 0)
		printf("True\n");
	else
		printf("False");
	return 0;
}*/
/* int main(){
	int sunday=0,raining=1;
	printf("%d", sunday || raining);
	return 0;
}*/
/* int main(){
	int num;
	printf("Enter number");
	scanf_s("%d",&num);
	if (num > 9 && num < 100)
		printf("True");
	else
		printf("False");
	return 0;
}*/
	//function header
	void checkOddEven(int num)
	{ 
		if(num%2==0)
			printf("Even");
		else
			printf("Odd");
	}
	/*int main()
	{
		int num;
		printf("Enter num");
		scanf_s("%d", &num);
		//function call
		checkOddEven(num);
		return 0;
	}*/
	/*int main()
	{
		char ch;
		printf("Enter character");
		scanf_s("%c", &ch);
		if (ch >= 'a' && ch <= 'z')
			printf("Lower");
		else if
		(ch >= 'A' && ch <= 'Z')
			printf("Upper");
		else if (ch >= '0' && ch <= '9')
			printf("digit");
		else 
			printf("sp");
		return 0;
}*/
	/*int main()
	{
		float hoursworked, hourlyrate,grosspay;
		printf("Enter hoursworked");
		scanf_s("%f", &hoursworked);
		printf("\nEnter hourlyrate");
		scanf_s("%f", &hourlyrate);
		if (hoursworked > 40)
		{
			grosspay = (hourlyrate * 40) + ((hoursworked - 40) * (hourlyrate * 1.5));
			printf("grosspay=%f", grosspay);
		}
		else 
		{
			grosspay = (hourlyrate * hoursworked);
			printf("grosspay=%f", grosspay);

		}
		return 0;
	}*/
	/*int main()
	{
		int num;
		printf("Enter num");
		scanf_s("%d", &num);
		if (num % 5 == 0)
		{
			printf("Divisible by 5");
		}
			
		else if (num % 11 == 0)
		{
			printf("Divisible by 11");
		}
		else if (num % 5 == 0 && num % 11 == 0)
		{
			printf("Divisible by 5 and 11");
		}
		else
		{
			printf("Not Divisible by 5 and 11");
		}
		return 0;
}*/
	float calculateBMI(float weight,float height)
	{
		return(weight / pow(height, 2));

	}
	/*int main()
	{
		float height, weight,bmi;
		printf("Enter weight");
		scanf_s("%f", &weight);
		printf("\nEnter height");
		scanf_s("%f", &height);
		bmi=calculateBMI(weight, height);
		printf("\nBMI=%f", bmi);


		return 0;
	}*/
	/*int main()
	{
		int a, b, c;
		printf("Enter angle1Enter angle2Enter angle3");
		scanf_s("%d%d%d", &a, &b, &c);
		if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
			printf("\n valid\n");
		if (a == b && b == c)
		{
			printf("equaliteral");
		}
		else if (a == b|| b == c||a==c)
		{
			printf("iscelous");
		}
		else {
			printf("scalene");
		}

		return 0;
	}*/
	/*int main()
	{
		int year;
		printf("enter year");
		scanf_s("%d",&year);
		if(year%4==0&&year%100!=0||year%400==0)
			printf("leap year");
		else
			printf("not leap year");

		return 0;
	}*/
	/*int main()
	{
		int x, y;
		printf("Enter coordinates");
		scanf_s("%d%d", &x, &y);
		if (x == 0 && y == 0)
		{
			printf("Origan");
		}
		else if (x > 0 && y > 0)
		{
			printf("1st");
		}
		else if (x > 0 && y < 0)
		{
			printf("4th");
		}
		else if (x < 0 && y < 0)
		{
			printf("3rd");
		}
		else if (x==0)
		{
			printf("Yaxis");
		}
		else if (y == 0)
		{
			printf("xaxis");
		}
		else
		{
			printf("2nd");
		}
		return 0;
	}*/
	/*int main()
	{
		int choice, a, b;
		printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n");
		scanf_s("%d", &choice);
		printf("Enter numbers");
		scanf_s("%d%d", &a, &b);
		switch (choice) {
		case 1:
			printf("REsult=%d", a + b);
			break;
		case 2:
			printf("REsult=%d", a - b);
			break;
		case 3:
			printf("REsult=%d", a * b);
			break;
		case 4:
			if (b != 0)
				printf("REsult=%.f", a / b);
			else
				printf("Cannot divide be 0");
			break;
		default:
			printf("Invalid choice");
		}

		return 0;
	}*/
/*int main()
{
	float a, b, c,disc,root1,root2;
	printf("Enter numbers");
	scanf_s("%f%f%f", &a, &b,&c);
	disc = (pow(b, 2) - 4 * a * c);
	if (disc > 0)
	{
		root1 = (-b + sqrt(disc)) / (2 * a);
		root2 = (-b - sqrt(disc)) / (2 * a);
		printf("Two real numbers=%.2f and %.2f", root1, root2);
	}
	if (disc == 0)
	{
		root1 = -b / (2 * a);
		printf("one real numbers=%.2f", root1);
	}
	else
	{
		printf("Complex roots");
	}
		return 0;
	}*/
/*int main()
{
	int units;
	float bill;
	printf("Enter units consumed");
	scanf_s("%d", &units);
	if (units <= 50)
	{
		bill = units * 0.50;
	}
	else if (units <= 150)
	{
		bill = 50 * 0.50 + (units - 50)* 0.75;
	}
	else if (units <= 250)
	{
		bill = 50 * 0.50 + 100 * 0.75 + (units - 150 )* 1.20;
	}
	else
	{
		bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
	}
	bill = bill + bill * 0.20;
	printf("bill=%.2f", bill);
	return 0;
}*/
/*int main()
{
	int days, months, year,maxdays;
	printf("enter days month and year");
	scanf_s("%d%d%d", &days, &months, &year);
	switch (months)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		maxdays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		maxdays = 30;
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			maxdays = 29;
		else
			maxdays = 28;
		break;
	default:
		printf("Invalid month");
	}
	if (days >= 1 && days <= maxdays)
		printf("Valid");
	else
		printf("InValid");
	return 0;
}*/
/*int main()
{
	int ip,tp,hours=0;
	printf("Enter initial population:");
	scanf_s("%d",&ip);
	printf("Enter target population:");
	scanf_s("%d", &tp);
	while (ip<tp)
	{
		ip = ip * 2;
		hours++;
		printf("\nTarget reached in %d hours.(Population:%d)\n", hours, ip);
	}
	
	if (hours < 24)
	{
		printf("\nFast growing culture");
	}
	else
	{
		printf("\nSlow growing culture");
	}
	return 0;
}*/
/*int main()
{
	int pin = 1234, choice, enteredpin;
	
	do {
		printf("Enter pin:");
		scanf_s("%d", &enteredpin);
		if (enteredpin != pin)
		{
			printf("Try again!\n");
		}

	} while (enteredpin!=pin);
	{
		printf("Authenticated\n");
	}
	printf("Choose action:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("Available Balance=");
		break;
	case 2:
		printf("Enter deposit amount=");
		break;
	case 3:
		printf("Enter withdrawal amount=");
		break;
	case 4:
		printf("Exit");
		break;
	default:
		printf("Invalid action");
	}*/
	
/*int main()
{
	float total_revenue=0.0;
	char ch;
	printf("Enter vehicle\nEnter C for Cars\nEnter T for Truck\nEnter M for Motorbike\nEnter Q for quit");
	scanf_s("%c", &ch);
	while (ch != 'q'&& ch!='Q')
	{
		if (ch == 'C' || ch == 'c')
		{
			total_revenue = 2.00+ total_revenue;
		}
		else if (ch == 'T' || ch == 't')
		{
			total_revenue = 5.00+ total_revenue;
		}
		else if (ch == 'M' || ch == 'm')
		{
			total_revenue = 1.00 + total_revenue;
		}
		else
			printf("Invalid character is entered");

		printf("Enter next vehicle:");
		scanf_s(" %c", &ch);
	}
	printf("Total veneu collected=$%.2f",total_revenue);
	return 0;
}*/
/*int main()
{
	
	int choice,time;
	double distance;
	do {
		printf("Choose action:\nEnter 1 for Air\nEnter 2 for Water \nEnter 3 for steel\nEnter 4 for Quit");
		scanf_s("%d", &choice);
		if (choice >= 1 && choice <= 3)
		{
			printf("Enter time:");
			scanf_s(" %d", &time);
			switch (choice)
			{
			case 1:
				distance = 1100 * time;
				printf("Distance travel in air =%lf",distance);
				break;
			case 2:
				distance = 4900 * time;
				printf("Distance travel in water =%lf", distance);
				break;
			case 3:
				distance = 16400 * time;
				printf("Distance travel in steel =%lf", distance);
				break;
			}
		}
	} while (choice != 4);
	return 0;
}*/
int main()
{
	int width, height;
	printf("Enter width and height");
	scanf_s("%d\n%d",&width,&height);
	for (int row = 0; row < height; row++)
	{
		for (int col = 0; col < height; col++)
		{

			if (row % 2 == 0)
				printf("#");
			else
				printf("*");

		}
		printf("\n");
	}
	
	return 0;
}
