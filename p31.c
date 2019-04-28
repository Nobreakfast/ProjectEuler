#include <stdio.h>
int price[8]={1,2,5,10,20,50,100,200};
int sum,count;
int main(int argc, char const *argv[]) {
        for(int i1=0; i1<=200; ++i1)
                for(int i2=0; i2<=100; ++i2)
                        for(int i3=0; i3<=40; ++i3)
                                for(int i4=0; i4<=20; ++i4)
                                        for(int i5=0; i5<=10; ++i5)
                                                for(int i6=0; i6<=4; ++i6)
                                                        for(int i7=0; i7<=2; ++i7)
                                                                for(int i8=0; i8<=1; ++i8)
                                                                {
                                                                        sum=i1*1+i2*2+i3*5+i4*10+i5*20+i6*50+i7*100+i8*200;
                                                                        if (sum==200)
                                                                                ++count;
                                                                }
        printf("%d\n", count);
        return 0;
}
