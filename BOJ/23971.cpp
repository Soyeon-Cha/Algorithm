#include <stdio.h>

int main(void){
    int h, w, n, m;
    scanf("%d %d %d %d", &h, &w, &n, &m);  // h,w,n,m 입력 받기
    int a = w / (1 + m);  // 한 행에 앉을 수 있는 사람 수
    if (w % (1+m) > 0){  // (m+1)씩 테이블을 묶은 후 남은 자리가 있으면 한 명 더 앉히기
        a += 1;
    }
    
    // 위와 같은 방법을 사용하여 한 열에서 사람을 앉힐 수 있는 행의 개수 구하기
    int b = h / (1 + n);
    if (h % (1+n) > 0){
        b += 1;
    }
    printf("%d", a*b);
    return 0;
}
