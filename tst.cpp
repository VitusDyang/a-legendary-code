#include <windows.h>
#include<stdio.h>
#include<math.h>
void count(){
    int a,b;
    double x,sum,y;
    system("cls");
    printf("\t\t欢迎进入复利计算软件v3:\n");
    printf("请输入需要计算的本金:");
    scanf("%lf",&y);
    printf("输入所要存储的时间（年）:");
    scanf("%d",&a);
    printf("输入利率:");
    scanf("%lf",&x);
    printf("输入复利次数:");
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
    printf("\t\t欢迎进入复利计算软件v3:\n");
    printf("请输入需要计算的本金:");
    scanf("%lf",&y);
    printf("输入所要存储的时间（年）:");
    scanf("%d",&n);
    printf("输入利率:");
    scanf("%lf",&x);
    printf("正在输出:");
    sum=y+y*n*x;
    printf("所得%lf",sum);
    printf("\n");
}

void count3(){
    int a,i;
    double c,sum,b;
    system("cls");
    printf("\t\t\t欢迎进入复利计算软件v3:\n");
    printf("请输入你所需要的总值:");
    scanf("%lf",&sum);
    printf("请输入你所需要的存储年:");
    scanf("%d",&a);
    printf("请输入利率:");
    scanf("%lf",&c);
    printf("请输入复利次数:");
    scanf("%d",&i);
    c=pow((1+c/i),i)-1;
    b=sum/pow(1+c,i);
    printf("正在输出:");
    printf("所需要本金%lf",b);
    printf("\n");    
}

void count4(){
    int i;
    double a,sum,b,n;
    system("cls");
    printf("\t\t\t欢迎进入复利计算软件v3:\n");
    printf("请输入本金:");
    scanf("%lf",&b);
    printf("请输入你所需要的总值:");
    scanf("%lf",&sum);
    printf("输入利率:");
    scanf("%lf",&a);
    printf("输入复利次数:");
    scanf("%d",&i);
    printf("正在输出:");
    a=pow((1+a/i),i)-1;
    n=log(sum/b)/log(1+a);
    printf("所得:%lf",n);
    printf("\n");
}

void x(){
    int n,i;
    double a,sum,b;
    system("cls");
    printf("\t\t\t欢迎进入复利计算软件v3:\n");
    printf("请输入本金:");
    scanf("%lf",&b);
    printf("请输入你所需要的总值:");
    scanf("%lf",&sum);
    printf("输入所要存储年:");
    scanf("%d",&n);
    printf("输入复利次数:");
    scanf("%d",&i);
    printf("正在输出:");
    a=i*(pow(pow(sum/b,1.0/n),1.0/i)-1);
    printf("所得:%lf",a);
    printf("\n");
}

void count5(){
    double sum,b,a;
    int n;
    system("cls");
    printf("\t\t\t欢迎进入复利计算软件v3:\n");
    printf("请输入年投入:");
    scanf("%lf",&b);
    printf("请输入年复合增长率:");
    scanf("%lf",&a);
    printf("请输入持续投入年数:");
    scanf("%d",&n);
    sum=b*(1+a)*pow((1+a),n-1)/a;
    printf("\n得出：%lf\n",sum);
}


main(){
    int a;
    printf("\t\t\t欢迎进入复利计算软件v3:\n");
    printf("\t1.单利计算");
    printf("\n\t2.复利计算");
    printf("\n\t3.求本金");
    printf("\n\t4.求时间");
    printf("\n\t5.求利率");
    printf("\n\t6.投资");
    printf("\n请输入你的选项:");
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