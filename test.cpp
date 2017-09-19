#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{

    int test1 = 0;
    int test2 = 1;
    int * testpointer = &test1;

    cout << "test1 equals " << test1 << endl;
    cout << "test1 is at " << &test1 << endl;

    cout << "test2 eqauls " << test2 << endl;
    cout << "test2 is at " << &test2 << endl;

    memcpy(&test1,&test2,sizeof(test2));
    cout << "test1 now equals " << test1 << endl;

    cout << "testpointer is " << testpointer << endl;
    cout << "testpointer is at " << &testpointer << endl;
    cout << "testpointer points to " << *testpointer << endl << endl;

    string str1 = "test string";
    cout << "size of string " << sizeof(str1) << endl;

    int int1 = 0;
    cout << "size of integer " << sizeof(int1) << endl;

    bool bool1 = true;
    cout << "size of boolean " << sizeof(bool1) << endl;

    char char1 = 'a';
    cout << "size of character " << sizeof(char1) << endl;

    unsigned int uint1 = 0;
    cout << "size of unsigned integer " << sizeof(uint1) << endl;

    float float1 = 0.0;
    cout << "size of float " << sizeof(float1) << endl;

    return 0;
}
