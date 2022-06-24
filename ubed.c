#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18 && age<=65){
        printf("You are allowed to do this ride\n");
    }
else{
    printf("You are not allowed to do this ride\n");
}
return 0;
}