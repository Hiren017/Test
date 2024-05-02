/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}


main()
{
    int number ;
    float amount ;
    number = 100;
    amount = 30.45+56.78;
    printf("%d\n",number);
    printf("%4.5f", amount);
}




#define PERIOD 10
#define PRINCIPAL 5000.00
main()
{
    int year;
    float amount , value, inrate;
    amount = PRINCIPAL;
    inrate = 0.11;
    year = 0;
    while(year <= PERIOD)
    {
        printf("%08d %8.4f\n", year,amount);
        value = amount + inrate*amount;
        year = year +1;
        amount = value;
    }
}



#include<stdio.h>
int mul(int a , int b);
main()
{
          int a , b ,c ;
          a=5;
          b=6;
          c= mul(a,b);

          printf("multiplication of %d and %d is %d", a,b,c);
}

int mul( int x, int y)
{
    int p;
    p = x*y;
    return(p);

}


#include<stdio.h>
#include <math.h>
#define PI 3.1416
#define MAX 180
main()
{
    int angle;
    float x,y;
    angle = 0;
    printf("ANGLE   Cos(angle)\n\n");
    while(angle<=MAX)
    {

    x = (PI/MAX)*angle;
    y = cos(x);
    printf("%d %f\n", angle,y);
    angle =angle + 10;

    }

}





#include<stdio.h>
main ()
{
    char name[50];
    char address[90];
    char city;
    int pincode;
    printf("Enter your Name ");
    scanf("%s",&name);
    printf("enter your address");

    scanf("%s \n ",&address);
    printf("enter your city");
    scanf("%s \n " , &city);
    printf("enter you pin code");
    scanf("%d\n", &pincode);
    printf("%s \n %d \n %c%d" , name , address , city , pincode);


}
*/


/*

#include<stdio.h>
int main()
{
    int i , j;
    for( i = 1 ; i<5 ; i++)
        {
            printf("*");
            for(j = 2; j<5 ; j++)
            {
                printf("*");
            }
        }
return 0;
}

#include<stdio.h>
int main()
{

int n=5;
int i=1;
int ans;
for( i=1 ; i<11 ;i++)
{
    ans = n*i;
    printf("%d * %d  = %d\n" , n , i , ans);
}
return 0;
}






#include<stdio.h>
int main()
{

    float r ;
    float area ;
    float pi = 3.14;
    printf("Enter th radius of the circle  ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("The area of the circle is %f = ", area);
    return 0;
}

*/
/*

#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int main()
{
    int a = 20 , b = 10;
    int c,d;
    c = add(a,b);
    d = sub(a,b);
    printf("%d + %d = %d\n",a ,b ,c);
    printf("%d - %d = %d",a ,b ,d);
    return 0;
}

int add(int x , int y)
{
    int add;
    add = x+y;
    return(add);
}
int sub(int x, int y)
{
    int sub;
    sub = x-y;
    return(sub);
}





#include<stdio.h>
int main()
{
 int a=250,b=85,c=25;
 float x;
 x= a/(b-c);
 printf("%d",x);
 return 0;
}

*/










/*
#include<stdio.h>
int main()
{

    int year, period;
    float amount, inrate , value;

    printf("input amount , interest rate , and period\n\n");
    scanf("%f %f %d", &amount , &inrate , &period);
    printf("\n");
    year = 1;


    while(year<= period)
    {

    value =  amount + inrate *amount;
    printf("%2d Rs % 8.2f\n" , year , value);
    amount = value;
    year = year + 1;
    }
}





#include<stdio.h>
#define N 10
int main()
{
    int count ;
    float sum, average, number;
    sum = 0;
    count = 0;
    while(count<N)
    {
        scanf("%f",&number);
        sum = sum + number ;
        count = count + 1;

    }
    average = sum/N;
    printf("N =%d Sum = %f", N , sum);
    printf("Average = %f" , average);


}





#include<stdio.h>
main()
{
    float x,p;
    double y, q;
    unsigned k;

    int m = 54321;
    long int  n = 1234567890;

    x = 1.234567890000;
    y = 9.87654321;
    k = 54321;
    p= q = 1.0;
    printf("m = %d\n", m);
    printf("n = %ld\n", n);
    printf("x = %.12lf\n", x);
    printf("x = %f\n",x);
    printf("y = %.12lf\n",y);
    printf("y = %lf\n" ,y);
    printf("k = %u p = %f q = %.12lf\n",k ,p ,q);
}




*/





/*



#include<stdio.h>
#define N 10
int main()
{
    int count ;
    float sum,average, number ;
    sum = 0;
    count = 0;
    while(count < N)
    {
        scanf("%f", &number);
        sum = sum+number;
        count = count + 1;

    }
    average = sum/N;
    printf("N = %d Sum = %f \n" , N , sum);
    printf("Average = %f", average);

}

*/


/*

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 2)
    {

        printf("Usage : %s\n",argv[0]);
        return 1;
    }
    if (leap_year(year))
     {

         printf("%d is a leap year.\n",year);
     }
     else
        {
            printf("%d is not a leap year.\n",year);
        }
return 0;
}

int leap_year(int year)
{
    return((year %4 == 0 && year % 100 != 0) || year %400 == 0);
}







#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int year ;
    printf("\nNumber of arguments:%d", argc);
        printf("\nThe argument[1] is: %d\n",argv[1]);
    if((year %4 == 0 && year % 100 != 0) || year %400 == 0)
    {
        printf("%d is a leap year", year );
    }
    else
    {
        printf("%d is not a leap year", year);

    }
    return 0;
}








#inc;ude<stdio.h>
int main()
{
    int count , i;
    float weight, height;

    count = 0;
    printf("Enter weight and height for 10 boys \n");

    for(i = 1; i<= 10 ; i++)
    {
        scanf("%f %f , &weight , &height ");
        if(weught <50 && heih=ght >170)
            count = count +1;

    }
    printf("number of boys with weight <50 kg\n");
    printf("and height > 170 cm = %d\n" ,count);
}

*/


/*

#include<stdio.h>
#include<conio.h>
#include<math.h>
int GCD(int m , int n);
void main()
{
   int num1 , num2;
   printf("Enter the two numbers whose GCD is to be found :  ");
   scanf("%d %d", &num1, &num2);

   printf("\nGCD of %d and %d is %d \n", num1 , num2,GCD(num1,num2));
   getch();

}
int GCD(int a, int b)
{
    if (b>a)
        return GCD(b,a);
    if(b == 0)
        return a;
    else
        return GCD(b,a%b);

}


*/





/*




#include<stdio.h>
#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0
main()
{
    int level, jobnumber;
    float gross,
    basic,
    house_rent,
    perks,
    net,
    incometax;

    input:
        printf("\n Enter level , Job number , and Basic pay\n");
        printf("Enter 0 for level to END\n\n");
        scanf("%d" , &level);
        if(level == 0) goto stop;
        scanf("%d %f", &jobnumber, &basic);
        switch (level)
        {
        case 1:
            perks = CA1 + EA1;
            break;
        case 2:
            perks = CA2 + EA2;
            break;
        case 3:
            perks = CA3 + EA4;
            break;
        case 4:
            perks = CA4 + EA4;
            break;
        default:
            printf("Error in level code\n");
            goto stop;
        }
house_rent = 0.25*basic;
gross = basic + house_rent + perks;
if (gross <= 2000)
    incometax = 0;
else if (gross <= 4000)
    incometax = 0.03 * gross;
else if (gross <= 5000)
    incometax = 0.05 *gross;
else
    incometax = 0.08*gross;
net = gross - incometax;
printf("%d %d .2f\n",level, jobnumber, net);
goto input;
stop:print("\n\n END OF THE PROGRAM");


}




#include<stdio.h>
int main()
{
    int n=101 ;
    int i = 0;
    if((100<n<200) && (n/7 = 0))
    {
        i = n + i;
        n+1;
        printf(" The Sum of all the integers between 100 and 200 that are divisible by 7 is  %d" , i);
    }
}



*/






/*




#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    if( n >80 && n <=100 )
    {
        printf("Student have obtained marks in the range of 81-100");
    }
    else if( n >61 && n<=80)
    {
        printf("Student have obtained marks in the range of 61-80");
    }
    else if (n > 41 && n <= 60)
    {
        printf("Student have obtained marks in the range of 41-60");
    }
    else {
        printf("Student have obtained marks in the range of 0-40");
    }
return 0;
}





#include<stdio.h>
int main()
{
    int phy ;
    int math ;
    int chem;
    int total ;
    scanf("%d %d %d ",&math , &phy ,&chem);
    total = phy + math + chem;
    if ((phy >= 50) && (math>= 60) && (chem>=40))
    {
        printf("student is applicable for th course");
    }
    return 0;
}

*/


/*



#include<stdio.h>
int main()
{
    int count, n;
    float x,y;
    printf("enter the values of x and n : ");
    scanf("%f %d", &x , &n);
    y = 1.0;
    count = 1;
    while(count <= n)
    {
        y = y*x;
        count ++;
    }
    printf("\n x = %f; n = %d; x to power n = %f\n", x,n,y);
}


*/
















/*


#include<stdio.h>
#define COLMAX 20
#define ROWMAX 20
main()
{
    int row,column , y;
    row = 1;
    printf("            MULTIPLICATION TABLE        \n");
    do
    {
        column = 1;
        do
        {
            y = row * column;
            printf("%4d",y);
            column = column + 1;
        }
        while (column <= COLMAX);
        printf("\n");
        row = row+1;

    }
    while ( row<=ROWMAX);
}


*/


















/*

#include<stdio.h>
#include<conio.h>

void main()
{
    int prime (int num);
    int n,i;
    int temp;
    printf( "Enter the value of n :  ");
    scanf("%d" , &n);

    printf("Prime numbers between 1 and %d are: \n" ,n);
    for(i =2 ; i<=n; i++)
    {
        temp = prime(i);
        if(temp == -99)
            continue;
        else
            printf("%d\t", i);
    }
    getch();

}

int prime(int num)
{
    int j ;
    for( j= 2 ; j <num ; j++)
    {
        if(num%j == 0)
            return (-99);
        else
        ;
    }
    if (j == num)
        return (num);
}
*/





#include<stdio.h>
#include<conio.h>
void main()
{
    int num, i, y, x =40;
    printf("\n Enter a  number for generating pyramid: \n");
    scanf("%d", &num);
    for(y = 0; y<=num ; y++);
    {
        gotoxy(x,y+1);
        for(i=0-y; i<=y ; i++);
        printf("%3d", abs(i));
        x= x-3;

    }
    getch();
}







#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

    if (argc > 10 )
    {
        printf()
    }
return 0;
}




