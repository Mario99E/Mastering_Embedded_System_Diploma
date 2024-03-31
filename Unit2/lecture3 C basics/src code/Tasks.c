#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"
void task1()
{
	printf("C Programming"); 
}

void task2()
{
	int x=0;
	printf("Enter an Integer:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	printf("you entered:%d",x);

}

void task3()
{
	int x=0,y=0;
	printf("Enter two Integers:");
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	fflush(stdin);
	printf("sum:%d",x+y);

}

void task4()
{
	float x=0,y=0;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	fflush(stdin);
	printf("Product:%f",x*y);

}

void task5()
{
	char x;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%s",&x);
	fflush(stdin);
	printf("ASCII value of %c is %d",x,x);

}

void task6()
{
	float a=0,b=0;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	float temp=a;
	a=b;
	b=temp;
	fflush(stdin);
	printf("value of a:%.2f \nvalue of b:%.2f",a,b);

}

void task7()
{
	float a=0,b=0;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	printf("swap without temp variable\n");
	//Swap without temp variable
	a=a+b;	//a now is the sum of both
	b=a-b;	//b is the old value of a
	a=a-b;	//a is the old  value of b
	fflush(stdin);
	printf("value of a:%.2f \nvalue of b:%.2f",a,b);

}
//HW2
void ex1()// even or odd number
{

	int x=0;
	while(1)
	{
		printf("Enter an interger to check:");
		fflush(stdout);
		scanf("%d",&x);
		fflush(stdin);
		printf("%d is %s \n",x, (x%2==0)? "even" : "odd" );
	}
}

void ex2()// Vowel or consonant
{

	char x;
	while(1)
	{
		printf("Enter an Alphabet:");
		fflush(stdout);
		scanf("%c",&x);
		fflush(stdin);
		switch(x)
		{
		case 'i':
		case 'a':
		case 'e':
		case 'o':
		case 'u':
		case 'I':
		case 'A':
		case 'E':
		case 'O':
		case 'U':
		{
			printf("%c is Vowel.\n",x);
		}
		break;
		default:
			printf("%c is Consonant.\n",x);

		}

	}
}

void ex3() //the largest number among three numbers
{
	float x,y,z;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	scanf("%f",&y);
	fflush(stdin);
	scanf("%f",&z);
	fflush(stdin);

	if(x>y)
	{
		if(x>z)
			printf("Largest number:%f\n",x);
		else
			printf("Largest number:%f\n",z);
	}
	else
		printf("Largest number:%f\n",y);

}

void ex4() //positive or negative
{
	float x;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	if(x>0)
	{
		printf("%f is positive.\n",x);
	}
	else if(x<0)
	{
		printf("%f is negative.\n",x);
	}
	else
	{
		printf("You entered Zero.\n");
	}
}

void ex5()		//Is alphabet or not
{
	char mych;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&mych);
	fflush(stdin);
	if( (mych>='a' && mych<='z') || (mych>='A' && mych<='Z') )
		printf("%c is an alphabet.\n",mych);
	else
		printf("%c is not an alphabet.\n",mych);

}

void ex6()		//sum of natural numbers
{
	int n=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);

}

void ex7()		//factorial of a number
{
	int n=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);
	int fac=1;
	if(n<0)
		printf("Error !!! Factorial of negative number doesn't exist.\n");
	else
	{
		for(int i=1;i<=n;i++)
		{
			fac*=i;
		}
		printf("Factorial = %d",fac);

	}
}

void ex8()		//Simple Calculator
{
	char op;
	do{
		printf("Enter an operator( + | / | * | - ) : ");
		fflush(stdout);
		scanf("%c",&op);
		fflush(stdin);
		switch(op)
		{
		case'*':
		case'/':
		case'+':
		case'-':
			break;
		default:
			printf("invalid operator.\n");
			fflush(stdout);
			op='^' ; //value to check in while it's not valid
		}
	}while(op=='^');
	float x,y;
	printf("Enter two operands : ");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	scanf("%f",&y);
	fflush(stdin);
	switch(op)
	{
	case'*':
	{
		printf("%f %c %f = %f",x,op,y,x*y);
		break;
	}
	case'/':
	{
		printf("%f %c %f = %f",x,op,y,x/y);
		break;
	}
	case'+':
	{
		printf("%f %c %f = %f",x,op,y,x+y);
		break;
	}
	case'-':
	{
		printf("%f %c %f = %f",x,op,y,x-y);
		break;
	}

	}


}
