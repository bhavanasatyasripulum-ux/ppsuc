#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter operator(+,-,*,/,%):");
	scanf("%c",&op);
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
	case '+':c=a+b;
	      printf("Addition is :%d\n",c);
	      break;
	case '-':c=a-b;
	      printf("Subtraction is :%d\n",c);
       	  break;
	case '*':c=a*b;
	      printf("Multiplication is :%d\n",c);
	      break;
	case '/':c=a*b;
	      printf("Division is :%d\n",c);
	      break;
	case '%':c=a%b;
	      printf("Remainder is :%d",c);
	      break;
	
	default:printf("Invalid Operator");
	      break;
    }
    return 0;
}
