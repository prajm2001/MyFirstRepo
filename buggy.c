#include<stdio.h>
void hi()
{
printf("\nHI!\n");
}
int main(){
int num;
do{
printf("Enter a positive integer");
scanf("%d",&num);
}while(num<0);

int factorial, i;
for(i=1;i<=num;i++){
factorial=factorial*i;
}
printf("%d!=%d",num,factorial);
hi();
return 0;
}
