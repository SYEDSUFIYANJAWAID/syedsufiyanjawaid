

#include<stdio.h>
int main(){
    int num;
    int a;
    printf("Enter any number : ");
    scanf("%d",&num);
    for (a=2; a<=num;a++){
    	if(num%a==0){
    		break;
		}
	}
   if(num==a){
    	printf("\nprime number");
	} else
	printf("\n Not a prime number");
             return 0;
 }


