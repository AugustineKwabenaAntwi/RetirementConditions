#include <stdio.h>

int main()
{
	int age  = 0;

	printf("How old are you?\n");
	scanf("%d",&age);

	if(age<18||age>60)
	{
		printf("you are not requrired tomwork by law!");
	}
	else if(age>18&&age<60&&!(age>=50&&age<=60))
	{
		printf("printf you are within the age to work");
	}
	else
	{
		printf("plan retirement\n");
	}

	//(age >=60)? printf("\nYou must retire\n"):printf("\nyou have %d years left\n",60 -age);
}
