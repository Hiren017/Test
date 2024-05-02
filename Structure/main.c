#include<stdio.h>
struct time_struct
{
    int hour ;
    int minute;
    int second
};
int main(int argc, char *argv[])
{

    struct time_strcut time = atoi(argv[1]);
    do
    {
        time.second++;
        if(time.second >60)
        {
            time.second = 00;
            time.minute++;
        }
        else if(time.minute > 60)
        {
            time.minute = 00;
            time.hour++;
        }
        else if(time.hour>24)
        {
            time.hour = 00;
        }
        else
        {
            printf("%d:%d:%d" , time.hour , time.minute , time.second);
        }
    }
}
