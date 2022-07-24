#include <iostream>
#include "DynamicStack.h"

int main()
{
    DynamicStack<int, 10> a{1,2,3,4,5,6,7,8,9};

    DynamicStack<int, 10> b;
    
    b.print();
    b = a;
    a.print();
    b.print();
    a.push(10);
    a.print();
    a.pop();
    a.print();
    cout << a.peek() << "\n";
    cout << a.length() << "\n";
    a.clear();
    a.print();
    a.push(15);

    cout << a.length() << "\n";
    a.print();


    return 0;
}