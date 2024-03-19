/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    char alpha;
    scanf("%c",&alpha);
    switch ((int)alpha)
    {
        case 97:
        case 101:
        case 105:
        case 111:
        case 117:
            printf("O\n");
            break;
    
        default:
            printf("X\n");
            break;
    }
    return 0;
}