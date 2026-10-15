#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
    int r[6]={0};

    srand((unsigned)time(NULL));

    for (int i=0;i<6;i++) {
        r[i] = rand()%45+1;
        for (int j=0;j<i;j++) {
            if (r[i] == r[j]) {
                i--;
                break;
            }
        }
    }
    for (int i=0;i<6;i++) printf("%d ",r[i]);

    return 0;
}