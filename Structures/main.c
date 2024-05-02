//#include<stdio.h>
//struct personal
//{
//     char name[20];
//     int day;
//     char month[10];
//     int year;
//     float salary;
//};
//main()
//{
//    struct personal person;
//    printf("Input Values\n");
//    scanf("%s %d %s %d %f" , person.name , &person.day , person.month , &person.year , &person.salary);
//    printf("%s %d %s %d %f\n" , person.name , person.day , person.month , person.year , person.salary);
//
//}


//#include<stdio.h>
//struct class
//{
//    int number;
//    char name[20];
//    float marks;
//};
//main()
//{
//    int x;
//    struct class student1 = {111,"Rao" , 72.50};
//    struct class student2 = {222 , "Reddy" , 45.7};
//    struct class student3;
//
//    student3 = student2;
//    x = ((student3.number == student2.number)&&
//         (student3.marks == student2.marks)) ? 1:0;
//
//    if(x == 1)
//    {
//        printf("\nstudent2 and student3 are same\n\n");
//        printf("%d %s %f\n", student3.number , student3.name , student3.marks);
//    }
//    else
//        printf("\nstudent2 and student3 are different\n\n");
//}
//

//
//
//#include<stdio.h>
//struct marks
//{
//    int sub1;
//    int sub2;
//    int sub3;
//    int total;
//};
//main()
//{
//    int i;
//    struct marks student[3] = {{45,67,81,0},{75,53,69,0},{57,78,54,0}};
//    struct marks total;
//    for(i=0 ; i<=2 ; i++)
//    {
//        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
//        total.sub1 = total.sub1 + student[i].sub1;
//        total.sub2 = total.sub2 + student[i].sub2;
//        total.sub3 = total.sub3 + student[i].sub3;
//        total.total = total.total + student[i].total;
//    }
//    printf(" STUDENT           TOTAL\n\n");
//    for(i=0 ; i<=2 ; i++)
//    {
//        printf("Student[%d]   %d\n",i+1,student[i].total);
//    }
//    printf("\n SUBJECT     TOTAL\n\n");
//    printf("%s   %d\n%s   %d\n%s   %d\n",
//               "Subject 1  ", total.sub1,
//               "Subject 2  ", total.sub2,
//               "Subject 3  ", total.sub3);
//
//    printf("\n Grand Total = %d\n", total.total);
//    return 0 ;
//}
//
//
//
//#include<stdio.h>
//union family
//{
//   char name[50];
//   int age
//};
//int main()
//{
//    union family mem1 = {"kriti" , 21};
//    union family mem2 = {"shruti" , 16};
//    union family mem3;
//    mem3 = mem2;
//
//    printf("%s  %d ",mem1.name , mem1.age);
//    printf("%s %d ", mem2.name, mem2.age);
//    printf("%s %d", mem3.name , mem3.age);
//}






//#include <stdio.h>
//struct time_struct
//{
//    int hour;
//    int minute;
//    int second;
//};
//struct time_struct time ;
//int input(int hour , int minute , int second );
//int output();
//
//int main()
//{
//    int hour, minute, second;
//    scanf("%d %d %d", &hour , &minute , &second);
//
//    input(hour , minute , second);
//    output();
//}
//int input(int hour , int minute , int second)
//{
//    time.hour = hour;
//    time.minute = minute;
//    time.second = second;
//
//}
//int output()
//{
//    time.second++;
//        if(time.second >60)
//        {
//            time.second = 00;
//            time.minute++;
//        }
//        else if(time.minute > 60)
//        {
//            time.minute = 00;
//            time.hour++;
//        }
//        else if(time.hour>24)
//        {
//            time.hour = 00;
//        }
//        else
//        {
//            printf("%d:%d:%d" , time.hour , time.minute , time.second);
//        }
//    printf("\ntime = %d:%d:%d ", time.hour, time.minute, time.second);
//}












#include<stdio.h>
struct class
{
    int roll_no;
    char grade ;
    float marks;
};
void display(struct class record[3])
{
    int i , len = 3;
    for(i=0 ; i<len ; i++)
    {
        printf("roll no. : %d\n",record[i].roll_no);
        printf("grade : %c\n" , record[i].grade);
        printf("average marks : %.3f\n", record[i].marks);
        printf("\n");
    }
}

int main()
{
    struct class record[3] = {{1,'A' , 87.9},{2 , 'B' , 34.4},{3,'C',45.3}};

    display(record);
    return 0 ;
}












































//create two structures in c named metric and british which store the values of distances.
//the metric structure stores the value in metres and centimetres and the british structures stores the values in feet and inches.
//write a c program that reads values for the structure variables and adds values contained in one variable of metric to the contents of the another variables of the british .
//the program should display the result int hte format of the feet and inches .
//write a c program that reads values for the structure varaibles and adds values contained in one variable of metric to the feet and inches or metres and centimetres as required .
