/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int time;
    
    while(scanf("%d",&time)==1){
        if((0<=time)&&(time<=23)){
            if(time<12)
                printf("AM\n");
            else
                printf("PM\n");
            break;
        }
        else
            printf("error: rewrite\n");
    }
    return 0;
}