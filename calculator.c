#include<stdio.h>
int cal(int x,int y){
    char opt;
    printf("Enter Operator: ");
    scanf(" %c",&opt);
    if(opt== '+'){
        printf("Result = %d",x+y);
        return 0;
    }
    else if(opt=='-'){
        printf("Result = %d",x-y);
        return 0;
    }
    else if(opt=='*'){
        printf("Result = %d",x*y);
        return 0;
    }
    else if(opt=='/'){
        printf("Result = %d",x/y);
        return 0;
    }
    else{
        printf("Invalid operator");
        return 0;
    }
}
int main(){
    int x,y;
    printf("Enter First number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    cal(x,y);
    return 0;
}