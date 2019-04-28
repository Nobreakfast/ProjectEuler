#include <stdio.h>
#include <math.h>
int digit[10];
int sumall;
int main(int argc, char const *argv[]) {
        for(int i = 0; i<10; ++i)
        {
                digit[i]=pow(i,5);
                printf("%d\n", digit[i]);
        }
        printf("!!!!!!!!!!!!!!!!!!!\n" );

        for(long int i=100; i<10000000; ++i)
        {
                int bit1,bit2,bit3,bit4,bit5,bit6,bit0;
                bit0=i/1000000;
                bit6=i%10;
                bit5=(i/10)%10;
                bit4=(i/100)%10;
                bit3=(i/1000)%10;
                bit2=(i/10000)%10;
                bit1=(i/100000)%10;
                int sum=digit[bit0]+digit[bit1]+digit[bit2]+digit[bit3]+digit[bit4]+digit[bit5]+digit[bit6];
                if(sum==i)
                {
                        printf("%d\n", sum);
                        sumall=sumall+sum;
                }
        }
        printf("!!!!!!!!!!!!!!!!!!!\n" );
        printf("%d\n", sumall);
        return 0;
}
