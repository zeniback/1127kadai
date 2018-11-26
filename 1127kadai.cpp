#include <stdio.h>

class calculator{
    public:
    int x;
    int y;

    void Add(){
        printf("%d\n",x+y);
    }

    void Sub(){
        printf("%d\n",x-y);
    }

    void Mul(){
        printf("%d\n",x*y);
    }

    void Div(){
        printf("%d\n",x/y);
    }
};

int main(){
    calculator data1;
    data1.x =10;
    data1.y =2;

    data1.Add();
    data1.Sub();
    data1.Mul();
    data1.Div();

    return 0;
 }