#include <windows.h>
#include<stdio.h>
#include<math.h>
void count(){
    int a,b;
    double x,sum,y;
    system("cls");
    printf("\t\t��ӭ���븴���������v3:\n");
    printf("��������Ҫ����ı���:");
    scanf("%lf",&y);
    printf("������Ҫ�洢��ʱ�䣨�꣩:");
    scanf("%d",&a);
    printf("��������:");
    scanf("%lf",&x);
    printf("���븴������:");
    scanf("%d",&b);
    printf("Loading...:");
    x=pow((1+x/b),b)-1;
    sum=y*(pow(1+x,a)); 
    printf("%lf",sum);
    printf("\n");
}

void count1(){
    int n;
    double x,sum,y;
    system("cls");
    printf("\t\t��ӭ���븴���������v3:\n");
    printf("��������Ҫ����ı���:");
    scanf("%lf",&y);
    printf("������Ҫ�洢��ʱ�䣨�꣩:");
    scanf("%d",&n);
    printf("��������:");
    scanf("%lf",&x);
    printf("�������:");
    sum=y+y*n*x;
    printf("����%lf",sum);
    printf("\n");
}

void count3(){
    int a,i;
    double c,sum,b;
    system("cls");
    printf("\t\t\t��ӭ���븴���������v3:\n");
    printf("������������Ҫ����ֵ:");
    scanf("%lf",&sum);
    printf("������������Ҫ�Ĵ洢��:");
    scanf("%d",&a);
    printf("����������:");
    scanf("%lf",&c);
    printf("�����븴������:");
    scanf("%d",&i);
    c=pow((1+c/i),i)-1;
    b=sum/pow(1+c,i);
    printf("�������:");
    printf("����Ҫ����%lf",b);
    printf("\n");    
}

void count4(){
    int i;
    double a,sum,b,n;
    system("cls");
    printf("\t\t\t��ӭ���븴���������v3:\n");
    printf("�����뱾��:");
    scanf("%lf",&b);
    printf("������������Ҫ����ֵ:");
    scanf("%lf",&sum);
    printf("��������:");
    scanf("%lf",&a);
    printf("���븴������:");
    scanf("%d",&i);
    printf("�������:");
    a=pow((1+a/i),i)-1;
    n=log(sum/b)/log(1+a);
    printf("����:%lf",n);
    printf("\n");
}

void x(){
    int n,i;
    double a,sum,b;
    system("cls");
    printf("\t\t\t��ӭ���븴���������v3:\n");
    printf("�����뱾��:");
    scanf("%lf",&b);
    printf("������������Ҫ����ֵ:");
    scanf("%lf",&sum);
    printf("������Ҫ�洢��:");
    scanf("%d",&n);
    printf("���븴������:");
    scanf("%d",&i);
    printf("�������:");
    a=i*(pow(pow(sum/b,1.0/n),1.0/i)-1);
    printf("����:%lf",a);
    printf("\n");
}

void count5(){
    double sum,b,a;
    int n;
    system("cls");
    printf("\t\t\t��ӭ���븴���������v3:\n");
    printf("��������Ͷ��:");
    scanf("%lf",&b);
    printf("�������긴��������:");
    scanf("%lf",&a);
    printf("���������Ͷ������:");
    scanf("%d",&n);
    sum=b*(1+a)*pow((1+a),n-1)/a;
    printf("\n�ó���%lf\n",sum);
}


main(){
    int a;
    printf("\t\t\t��ӭ���븴���������v3:\n");
    printf("\t1.��������");
    printf("\n\t2.��������");
    printf("\n\t3.�󱾽�");
    printf("\n\t4.��ʱ��");
    printf("\n\t5.������");
    printf("\n\t6.Ͷ��");
    printf("\n���������ѡ��:");
    scanf("%d",&a);
    switch (a){
    case 1:
        count1();
        break;
    case 2:
        count();
        break;
    case 3:
        count3();
        break;
    case 4:
        count4();
        break;
    case 5:
        x();
        break;
    case 6:
        count5();
        break;
    default:
        return 0;
    }
}