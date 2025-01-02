#include <stdio.h>





/*int main()
{
    int a,b; 

    scanf("%d",&a); 
    scanf("%d",&b);

    printf("%d + %d = %d",a, a+b, b); 
    return 0;
}

*/


























/*
int main()
{
    int a,b; 
    float topla; 

    scanf("%d",&a); 
    scanf("%d",&b); 
    topla=a+b; 
    
    printf("toplam  = %.3f\n",topla); 
    return 0;
}
*/






































float bolme(int a,int b)
{
    if(b==0)
    {
        printf("0'a bölme hatası\n");
        return 0;
    }

    return a/b;
}

int topla(int b,int a)
{
    return a+b;
}

int main()
{
    int a,b; 
    scanf("%d",&a); 
    scanf("%d",&b); 

    int toplamı = topla(a,b);

    printf("%d\n",toplamı); 

    float bolüm = bolme(a, b);

    int f = a;
    int g = b;
    printf("%f ", bolme(f, g));

    return 0;
}





