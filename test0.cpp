#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    int num = 5;
    int *test;
    //int *test2;

    test = &num;
    //*test2 = test;
    cout << test << endl;

    /*
    char *word = "kitten";
    cout << &word << endl;
    cout << *word << endl;
    cout << word << endl;
    for (char *c = word; *c != '\0'; c++) {
      cout << &c << endl;
    }
    */
    /*
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
    */

}
