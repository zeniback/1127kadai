#include <stdio.h>

class calculator{
    public:
    double x;
    double y;

    void Add(){
        printf("%lf\n",x+y);
    }

    void Sub(){
        printf("%lf\n",x-y);
    }

    void Mul(){
        printf("%lf\n",x*y);
    }

    void Div(){
        printf("%lf\n",x/y);
    }
};

int main(){
    calculator data1;

    printf("Input x\n");
    data1.x =10;

    printf("Input y\n");
    data1.y =2;

    data1.Add();
    data1.Sub();
    data1.Mul();
    data1.Div();

    return 0;
 }