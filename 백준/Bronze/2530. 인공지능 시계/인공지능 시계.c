#include <stdio.h>

int main(){
    int time, min, sec;
    scanf("%d %d %d", &time, &min, &sec);
    int add;
    scanf("%d", &add);
    min += add/60;
    sec += add%60;
    if(sec>59){
        min += sec/60;
        sec = sec%60;
    }
    if(min>59){
        time += min/60;
        min = min%60;
    }
    if(time>23){
        time = time%24;
    }
    printf("%d %d %d", time, min, sec);
}