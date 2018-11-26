#include <stdio.h>

class calculator{
    public:
    double x;
    double y;

    void Add(){
        printf("addition %lf\n",x+y);
    }

    void Sub(){
        printf("subtraction %lf\n",x-y);
    }

    void Mul(){
        printf("multiplocayion %lf\n",x*y);
    }

    void Div(){
        printf("division %lf\n",x/y);
    }
};

int main(){
    calculator data1;

    printf("Input x\n");
    scanf("%lf", &data1.x);

    printf("Input y\n");
    scanf("%lf", &data1.y);

    data1.Add();
    data1.Sub();
    data1.Mul();
    data1.Div();

    return 0;
 }