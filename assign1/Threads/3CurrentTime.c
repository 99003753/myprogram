//Write a program to print current time periodically (Hint:- alarm, time, ctime)
#include <time.h> 
#include <stdio.h> 

  
// driver code 
int main() 
{ 
    time_t s, val = 1; 
    struct tm* current_time; 
  
    // time in seconds 
    s = time(NULL); 
  
    // to get current time 
    current_time = localtime(&s); 
  
    // print time in minutes, 
    // hours and seconds 
    printf("%02d:%02d:%02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec); 
  
    return 0; 
}