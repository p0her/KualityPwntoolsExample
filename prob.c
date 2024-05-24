#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void init_buf() {
        setvbuf(stdin, 0, 2, 0);
        setvbuf(stdout, 0, 2, 0);
        setvbuf(stderr, 0, 2, 0);
}
int main() {
        init_buf();
        srand(time(0));
        for(int i = 0; i < 100; i++) {
                int u, v;
                int x = rand() & 0xffff;
                int y = rand() & 0xffff;
                int ans = x + y;
                printf("[*] ROUND %d\n%d + %d = ?\n", i+1, x, y);
                printf("> ");
                scanf("%d %d", &u, &v);
                if(u + v == ans) {
                        printf("right!\n");
                } else {
                        printf("wrong\n");
                        exit(1);
                }
        }
}
