#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

extern void init();
extern int find(char key[]);
extern void add(char key[], int idx);

#define FIND    100
#define ADD     200

#define MAX_KEY     11

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int main() {
    setbuf(stdout, NULL);

    int T;
    scanf("%d", &T);

    int N;

    int cmd, ret;
    char key[MAX_KEY]; int idx;

    for (int TC = 1; TC <= T; TC++) {

        init();

        int score = 100;

        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            scanf("%d", &cmd);

            switch (cmd) {
            case FIND:
                scanf("%s %d", &key, &idx);

                ret = find(key);

                if (ret != idx) {
                    score = 0;
                }
                break;

            case ADD:
                scanf("%s %d", &key, &idx);
                add(key, idx);
                break;
            }
        }

        printf("#%d %d\\n", TC, score);
    }

    return 0;
}
