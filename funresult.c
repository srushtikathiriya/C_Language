#include <stdio.h>
void dis(int x, int y, int z, int t, float p)
{
    printf("maths\tsci\teng\ttotal\tper\n");
    printf("%d\t%d\t%d\t%d\t%.2f", x, y, z, t, p);
}
void calc(int a, int b, int c)
{
    int total;
    float per;
    total = a + b + c;
    per = (float)total / 3;
    dis(a, b, c, total, per);
}
void setdata()
{
    int maths, sci, eng;
    printf("enter maths marks:");
    scanf("%d", &maths);
    printf("enter sci marks:");
    scanf("%d", &sci);
    printf("enter eng marks:");
    scanf("%d", &eng);
    calc(maths, sci, eng);
}
void main()
{
    setdata();
}