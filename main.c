#include <stdio.h>
#include <time.h>

int main()
{
    printf("Weclome to File-Repository!\n");
    printf("Now date and time:\n");
    time_t mytime;
    struct tm *mylocaltime;
    mytime = time(NULL);
    mylocaltime = localtime(&mytime);
    printf("Date:%d-",mylocaltime->tm_year + 1900);
    printf("%d-",mylocaltime->tm_mon + 1);
    printf("%d\n",mylocaltime->tm_mday);
    printf("Time:%d:",mylocaltime->tm_hour);
    printf("%d:",mylocaltime->tm_min);
    printf("%d\n",mylocaltime->tm_sec);
    printf("Hello world!\n");
    return 0;
}
