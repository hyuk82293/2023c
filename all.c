#include<stdio.h>
int main()
{
    int a = 3, b = 4, c;
    c = a + b;
    printf("%d\n", c);
    return 0;
}



#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("%d\n", c);
    return 0;
}



#include <stdio.h>
int main()
{
    int a[3];
    puts("Enter:");
    scanf("%d %d",&a[0], &b[1]);
    a[2] = a[0] + a[1];
    printf("%d\n", a[2]);
    return 0;
}



#include<stdio.h>
int main()
{
    int a, b, c;
    FILE fp;
    fp = fopen("my.txt","r");
    fscanf(fp, "%d %d", &a, &b);
    fclose(fp);
    c = a + b;
    printf("%d\n", c);
    return 0;
}



#include<stdio.h>
struct Math{
    int a, b;
} me;
int main ()
{
    me.a = 3;
    me.b = 4;
    printf("%d\n", me.a + me.b);
    return 0;
}
