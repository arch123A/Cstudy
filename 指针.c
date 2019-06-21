#include <stdio.h>
#include <string.h>

int point() {
//    学习指针的用法，和打印方法
    int f = 23;
    char a = 'F';
    char *pc;
    int *pi = &f;
    pc = &a;
    printf("*pi=%d\n", *pi);
    printf("*pc=%c\n", *pc);

    printf("pi=%p\n", pi);
    printf("pc=%p\n", pc);

    printf("sizeof pi=%d\n", sizeof(pi));
    printf("sizeof pc=%d\n", sizeof(pc));

}

void p2() {
    int a;
    int *p = &a;
    printf("please input:");
    scanf("%d", p);
    printf("a=%d\n", a);
    printf("*p=%d\n", *p);

    printf("please input:");
    scanf("%d", &a);
    printf("a=%d\n", a);
    printf("*p=%d\n", *p);
}

void p3() {
    char str[100];
    printf("please input:");
    scanf("%s", str);
    printf("you haved input:%s\n", str);

    printf("str address:%p\n", str);
    printf("str[0] address:%p\n", &str[0]);
}

void p4() {
    char a[] = "python";
    char *p = a;
    int len = strlen(a);
//    for (int i = 0; i < len; ++i) {
////        printf("*(p+%d)=%c\n", i, *(p + i));
//        printf("*(p+%d)=%c\n", i, *p++);
//    }
//    printf("%p", *p);
//        printf("\t*(a+i)=%c\n",*(a+i));
    int c = 0;
    while (*p++ != '\0') {
//        先取出*p的值和‘\0’进行比较，然后再进行自增运算。
        printf("%c\n", *p);
        c++;

    }
    printf("%d", c);


}

void p5() {
    int a[5] = {2, 6, 8, 1, 3};
    int *pInt;
    pInt = &a[0];
    for (int i = 0; i < 5; ++i) {
        printf("*(pInt+%d)=%d\n", i, *(pInt + i));
        printf("pInt+%d)=%p\n", i, pInt + i);
    }
}

void p6() {
//    指针数组是一个数组，每一个元素是一个指针
    int a = 1, b = 2, c = 3;
    int *p1[3] = {&a, &b, &c};
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *p1[i]);
    }
}

void p7() {
    char *p[3] = {"you are ok", "just do it", "good bye"};
    for (int i = 0; i < 3; ++i) {
        printf("%s\n", p[i]);

    }
}

void p8() {
    int t[10] = {1, 2, 3, 4, 5,6,7,8,9,10};
//    char (*p)[5];
    int (*p)[5];
    p = &t;
    printf("%d\n", *(*(p + 1)));
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(*p + i));
        printf("%p\n", p + i);
        printf("*(*(p+1)+%d)=%d\n",i, *(*(p + 1)+i));

    }
}

void p9() {
    int a[5], i, *pa;
    pa = a;
    for (i = 0; i < 5; i++) {
        *pa = i;
        pa++;
    }
    pa = a;
    for (i = 0; i < 5; i++) {
        printf("a[%d]=%d\n", i, *pa);
        pa++;
    }
}

void p10() {
//    二维数组名实际是一个跨度是 列数*size 的指针
    int a[4][5] = {0};
    printf("a=%p\n", a);
    printf("a+1=%p\n", a + 1);
}

void p11() {
    int a[4][5] = {0};
    int k = 0;
    for (int l = 0; l < 4; ++l) {
        for (int m = 0; m <5 ; ++m) {
            a[l][m] = k;
            k++;
        }
    }
    printf("*a:%p\n", *a);
    printf("*(a+1):%p\n", *(a+1));
    printf("&a[1]%p\n",&a[1]);
    printf("*(a+1)+1:%p\n", *(a+1)+1);
    printf("&a[1][1]:%p\n",&a[1][1]);

    printf("*(*(a+1)+3):%d\n",*(*(a+1)+3));
    printf("a[1][3]:%d\n", a[1][3]);


}

void p12() {
    int a[2][3] = {{1, 2, 3},
                   {4, 5, 6}};
    int (*p)[3]=a;
    printf("**(p + 1):%d\n", **(p + 1));
    printf("**(a + 1):%d\n", **(a + 1));
    printf("a[0][1]:%d\n", a[1][0]);

    printf("*(*(p + 1)+2):%d\n", *(*(p + 1)+2));
    printf("*(*(a + 1)+2):%d\n", *(*(a + 1)+2));
    printf("a[1][2]:%d\n", a[1][2]);

}

void p13() {
//    void指针的使用
    int n = 12;
    int *pint = &n;
    char *ps = "cold hold";
    void *pv;

    pv = pint;
    printf("pint\t%p\n", pint);
    printf("pint\t%p\n", pv);

    printf("*pint\t%d\n", *pint);
    printf("*pv\t%d\n", *(int *)pv);

    pv = ps;
    printf("ps\t%p\n", ps);
    printf("pint\t%p\n", pv);

//    打印字符串时，不需要在指针前加*
    printf("*ps\t %s\n", ps);
    printf("*pv\t%s\n", (int *)pv);



}
void p14() {
    int *p1 ;
    int *p2 = NULL;
    printf("%d\n",*p1);
    printf("%d\n",*p2);
}

void p15() {
    int n = 555;
    int *p = &n;
    int **pp=&p ;
    pp = &p;
    printf("%d\n", *p);
    printf("%d\n", **pp);

    printf("%p\n", p);
    printf("%p\n", *pp);

    printf("pp:%p\n", pp);
    printf("&p:%p", &p);

}
void p16() {
//    指向指针的指针的使用，和普通指针的区别是 pp=&p
    char *b[] = {"a1111",
                 "b222222",
                 "c3333333",
                 "d444444",
                 "e55555555"
    };
    char **c[4];
    c[0] = &b[0];
    c[1] = &b[1];
    c[2] = &b[2];
    c[3] = &b[3];
    for (int i = 0; i < 4; ++i) {
        printf("%s\n", *c[i]);

    }
}

void p17() {
    int a[3][2] = {{1, 2},
                   {3, 4},
                   {5, 6}};
//    数组指针
    int (*p)[2];
    p = a;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("a[%d][%d]=%d\n", i, j, *(*(p + i) + j));

        }
    }

}

void p18() {
    const int p = 320;
    const int cp = 5000;
    const int *pc = &cp;

    printf("*pc=%d,pc:\t%p\n", *pc, pc);
    printf("cp=%d,&cp:\t%p\n", cp, &cp);

    pc = &p;
    printf("*pc=%d,pc:\t%p\n", *pc, pc);
    printf("cp=%d,&cp:\t%p\n", cp, &cp);


}

int main() {
//    point();
    p18();
    return 0;
}
