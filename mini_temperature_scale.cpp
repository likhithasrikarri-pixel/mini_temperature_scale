#include<stdio.h>
int main(){
	printf("*====LIKHITHA'S MINI TEMPERATURE SCALE ====*");
	int choice;
	double input,result;
	printf("\nEnter temperature:  ");
	scanf("%lf",&input);
	printf("select the conversion");
	printf("\n 1.celsius    to  fahrenheit");
	printf("\n 2.celsius    to  kelvin");
	printf("\n 3.celsius    to  reaumur");
	printf("\n 4.fahrenheit to  celsius");
	printf("\n 5.fahrenheit to  kelvin");
	printf("\n 6.fahrenheit to  reaumur");
	printf("\n 7.kelvin     to  celsius");
	printf("\n 8.kelvin     to  fahrenheit");
	printf("\n 9.kelvin     to  reaumur");
	printf("\n 10.reaumur   to  celsius");
	printf("\n 11.reaumur   to  fahrenheit");
	printf("\n 12.reaumur   to  kelvin");
	printf("\n enter choice:  ");
	scanf(" \n %d", &choice);
	
	if(choice==1){
		result=(input*9/5)+32;
		printf("fahrenheit=%lf",result);
	}
	else if(choice==2){
		result=(input+273.15);
		printf("kelvin=%lf",result);
	}
	else if(choice==3){
		result=input*4/5;
		printf("reaumur=%lf",result);
	}
	else if(choice==4){
		result=(input-32)*5/9;
		printf("celsius=%lf",result);
	}
	else if(choice==5){
		result=(input-32)*5/9+273.15;
		printf("kelvin=%lf",result);
	}
	else if(choice==6){
		result=(input-32)*4/9;
		printf("reaumur=%lf",result);
	}
	else if(choice==7){
		result=input-273.15;
		printf("celsius=%lf",result);
	}
	else if(choice==8){
		result=(input-273.15)*9/5+32;
		printf("fahrenheit=%lf",result);
	}
	else if(choice==9){
		result=(input-273.15)*4/5;
		printf("reaumur=%lf",result);
	}
	else if(choice==10){
		result=input*5/4;
		printf("celsius=%lf",result);
	}
	else if(choice==11){
		result=input*9/4+32;
		printf("fahrenheit=%lf",result);
	}
	else if(choice==12){
		result=input*5/4+273.15;
		printf("kelvin=%lf",result);
	}
	else{
		printf("invalid choice");
	}
	return 0;
}
