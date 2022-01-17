#include<iostream>
#include <thread>
#include<stdlib.h>
#include<ctime>
using namespace std;
using std::this_thread::sleep_for;
int main()
{
    time_t start , finish;
    time(&start);
    time(&finish);
    while ((difftime(finish,start)) != 70)
    {
        int seconds = difftime(finish,start);
        int mins= seconds/60;
        printf("*************\n");
        printf("%2.2i:%2.2i\n",mins,(seconds%60));
        printf("*************\n");
        sleep_for(1000ms);
        system("CLS");
        time(&finish);
    }
}