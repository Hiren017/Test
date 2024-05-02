#include <stdio.h>
struct date_struct
{
    int day;
    char month[50];
    int year;
};
struct date_struct date;

int input (int day, char month[], int year);
int output();
int print();
int main()
{
    int day;
    long int year;
    char month[50];
    scanf("%d %s %ld", &day , &month[50] , &year);

    input(day , month[50] , year);
    output();
    print();
}
int input (int day , char month[50] , int year)
{
   date.day = day;
   date.month[50] = month[50];
   date.year =  year;
}

int output()
{
   if(date.day>0 && date.day<32)
   {
       date.day;
   }
   else
   {
       printf("Invalid Date");
   }
}
int print()
{
    printf("%s %d,%ld", date.month , date.day, date.year);
}
