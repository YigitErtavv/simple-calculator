#include<stdio.h>
int main(){
	int choice;
	float a, b;
	
	printf("Choose an operation:\n");
	printf("1 - add\n");
	printf("2 - subtract\n");
	printf("3 - multiply\n");
	printf("4 - divide\n");
	printf("Your choice  : ");
	scanf("%d",&choice);
	
	printf("Enter two numbers:");
	scanf("%f %f", &a,&b);
	
	switch(choice){
		case 1:
		    printf("result: %.2f\n", a + b);
		    break;
		    
		case 2:
		    printf("result: %.2f\n",a - b);
		    break;
		    
		case 3:
		    printf("result: %.2f\n",a * b);
		    break;
		
		case 4:
		    if(b !=0)
		       printf("result: %.2f\n",a / b);
		    else
		       printf("Error : Cannot divide by zero! \n");
		    break;
		       
		       
	  default:
	     printf("Invalid choice! \n");
	}
	
	return 0;
}
