#include <stdio.h>
int main()
{
    double x;
    int n;
    scanf("%lf",&x);
    if(x < 0)
    {
        printf("- ");
        x = -x;
    }
    else
        printf("+ ");
        n = x;
    printf("%d ",n);
    printf("%g",x-n);
    //%g�������ʵ������������ֵ�Ĵ�С���Զ�ѡf��ʽ��e��ʽ��ѡ�����ʱռ��Ƚ�С��һ�֣����Ҳ�����������0��
    return 0;
}
