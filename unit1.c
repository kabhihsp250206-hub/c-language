// 1st question
// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("Entewr first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);

//     int sum=a+b;
//     int difference=a-b;
//     int product =a*b;
//     int quotient=a/b;
//     int reminder=a%b;

//     printf("Sum= %d\n",sum);
//     printf("Difference= %d\n",difference);
//     printf("Product= %d\n",product);
//     printf("Quotient= %d\n",quotient);
//     printf("Reminder= %d\n",reminder);
//     return 0;
// }


// 2nd question
// #include<stdio.h>
// int main(){
//     float radius;
//     float pi=3.14;
//     printf("Enter radius: ");
//     scanf("%f",&radius);
//     printf("Diameter= %.2f\n",2*radius);
//     printf("Circumference= %.2f\n",2*pi*radius);
//     printf("Area= %.2f",pi*radius*radius);
//}


// 3rd question
// #include<stdio.h>
// int main(){
//     float l,b;
//     printf("Enter lenght: ");
//     scanf("%f",&l);
//     printf("Enter breath: ");
//     scanf("%f",&b);
//     printf("Area= %.2f\n",l*b);
//     printf("Perimeter= %.2f",2*(l+b));

// }

// 4th question
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     int sum,large,small;
//     float avg;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Enter third number: ");
//     scanf("%d",&c);
//     sum=a+b+c;
//     avg=(a+b+c)/3.0;
//     large=(a>b)?((a>c)?a:c):((b>c)?b:c);
//     small=(a<b)?((a<c)?a:c):((b<c)?b:c);
//     printf("sum=%d\n",sum);
//     printf("Average=%.2f\n",avg);
//     printf("Largest=%d\n",large);
//     printf("Smallest=%d\n",small);
//     printf("All number are equal=%s",(a==b && b==c)?"YES":"NO");
// }

// 5th question
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Bitwise AND=%d\n",a&b);
//     printf("Bitwise Or=%d\n",a|b);
//     printf("Bitwise XOR=%d\n",a^b);
//     printf("Left shift of first number=%d\n",a<<1);
//     printf("Right shift of first number=%d",a>>1);
//     return 0;
// }


// final question
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);

//     printf("Sum= %d\n",a+b);
//     printf("Difference= %d\n",a-b);
//     printf("Product= %d\n",a*b);
//     printf("Quotient= %d\n",a/b);
//     printf("Reminder= %d\n",a%b);
//     printf("First number is greater= %s\n",(a>b)?"Yes":"NO");
//     printf("Both numbers are even= %s\n",(a%2==0 && b%2==0)?"YES":"NO");
//     printf("Largest= %d\n",(a>b)?a:b);
//     printf("Bitwise AND= %d\n",a&b);
//     printf("Bitwise OR= %d\n",a|b);
//     printf("Bitwise XOR= %d\n",a^b);
// }
