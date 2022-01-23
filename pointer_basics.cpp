// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //pointers to pointers stuff
    int x = 10;
    int *p = &x; // assign p to address of x
    int *a = p; // pointer a points to pointer p


    // the values stored in p and a are both the address of x
    //00000047BD0FF584 - the address of x
    cout << p << endl;
    cout << a << endl;
    cout << &x << endl;


    // the output of the pointers *p and *a both output 10, the value of x
    cout << *p << endl;
    cout << *a << endl;

    cout << &p << endl;     //000000F7752FF9F8 address of p 
    cout << &a << endl;     //000000F7752FFA18 address of a

    cout << &*p << endl;     //0000003A5B0FFCD4 - the address of x
    cout << &*a << endl;     //0000003A5B0FFCD4 - the address of x
    cout << endl << endl;

    cout << *p << endl; // print the value the pointer points to: 10
    cout << p << endl; // print address of x
    cout << &p << endl;  // output the actual address of the pointer p. & operator is "address of operator"
    cout << a << endl;  // print the address of x, pointed to by p, pointed to by a
    //(pointer to a pointer still holds the memory address of the first pointer)
    
    *p = 24; // manipulate the value of x by putting pointer p to store 24
    cout << x << endl << endl << endl; //output 24

    // example 2
    x = 25; // put 25 in x
    cout << x << '\n'; // output 25
    p = &x; //store the address of x in p
    cout << *p << '\n'; //prints the value stored in the memory space to which p points, which is the value of x.

    *p = 55; // pointer *p stores 55, which actually "manipulates" the value of x, too.
    cout << *p << '\n'; // output 55
    cout << x << '\n'; // output 55

    // see the difference here?
    cout << &p << '\n'; // output the address of p, the pointer.
    cout << &*p << '\n'; // output the address of x, pointed to by pointer p
    //----continue-----//
    cout << &x << '\n'; // output the address of x by using the address of operator.
    // you can get the address of any variable by putting the & before it.

}

