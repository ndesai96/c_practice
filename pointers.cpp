#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{

    int test = 0;
    int * testptr1 = &test;
    int ** testptr2 = &testptr1;

    //cout << **testptr2 << endl;

    double list1[3] = {1,2,3};
    cout << *list1 << endl;
    cout << list1 << endl;
    cout << &list1 << endl << endl;

    double * listptr1 = list1;
    cout << *listptr1 << endl;
    cout << listptr1 << endl;
    cout << &listptr1 << endl << endl;

    cout << list1[0] << endl;
    cout << &list1[0] << endl;
    cout << list1[1] << endl;
    cout << &list1[1] << endl;
    cout << list1[2] << endl;
    cout << &list1[2] << endl;


}
