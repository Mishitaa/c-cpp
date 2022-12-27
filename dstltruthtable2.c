#include<stdio.h>
void main()
{
    int a[4] = { 1, 0, 1, 0 };
    int b[4] = { 0, 1, 1, 0 };
    int i,or_ans,ans,and_ans;

    for (i = 0; i < 5; i++) {
        if (a[i] == 0 && b[i] == 0)
            or_ans = 0;
        else
            or_ans = 1;

        printf("\n %d or %d = %d",
               a[i], b[i], or_ans);
    }
    for (i = 0; i < 5; i++) {
        if (a[i] == 1 && b[i] == 1)
            and_ans = 1;
        else
            and_ans = 0;

        printf("\n %d AND %d = %d",
               a[i], b[i], and_ans);
    }
    for (i = 0; i < 5; i++) {
        if (a[i] == 0)
            ans = 1;
        else
            ans = 0;
        printf("\n  NOT %d = %d", a[i], ans);
    }
}
