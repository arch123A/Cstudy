#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int zf(){
    int n,i;
    printf("请输入字符个数\n");
    scanf("%d",&n);
    char a[n+1];
    printf("请输入字符串\n");
    getchar();
    for (int j = 0; j < n; ++j) {
        scanf("%c", &a[j]);

    }
    a[n] = '\0';
    printf("%s\n",a);
    printf("%c",a[n]);
}


int sz() {
    char str[] = "123456";
    printf("str_size=%d\n", sizeof(str));
    printf("str_len=%d\n", strlen(str));
}

int db() {
    for (int i = 0, j = 10; i < j; ++i, --j) {
        printf("i=%d,j=%d\n", i, j);
    }
}
int cf() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < i; ++j) {
            printf("%d*%d=%d\t", j, i, j * i);
        }
        printf("\n");
    }
}

void copy_string() {
    char s1[] = "Oringin string";
    char s2[] = "new string";
    char s3[20];
    strcpy(s1, s2);
    strcpy(s3, "hello everyone!");
    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);
    printf("s3:%s\n", s3);
}

void ct() {
    int ch;
    while ((ch = getchar()) != '\n') {
        if (ch == 'C') {
            continue;
        }
        putchar(ch);
    }
}
void pc() {
//    putchar输出字符
    for (int i = 1; i <255 ; ++i) {
        printf("%d:", i);
        putchar(i);
        printf("\t");

    }
}

void lj() {
//    字符串的连接和复制操作
    char s1[100] = "life is short,";
    char s2[] = "I use python.";
    char s3[100];
    strcat(s1, s2);
    strcpy(s3,s2);
    printf("s1=%s\n",s1);
    printf("s2=%s\n",s2);
    printf("s3=%s\n",s3);

}




int r(void)
{
    int i;
    printf("Ten random numbers from 0 to 99\n\n");
    for(i=0; i<10; i++)
    printf("%d\n", rand() % 100);
    return 0;
}

int ra() {
//    生成数组和打印转置数组
    int a[4][5];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            a[i][j] = rand() % 100 + 1;
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for (int k = 0; k <5 ; ++k) {
        for (int i = 0; i <4 ; ++i) {
            printf("%d\t",a[i][k]);

        }
        printf("\n");

    }
    return a;
}


int main() {
//    int b[4][5];
    ra();

//    c3();
//    db();
//    copy_string();
//    ct();
//    pc();
    return 0;
}
