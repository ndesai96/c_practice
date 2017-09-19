#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

using namespace std;

int main()
{

    int test = 1;

    //bitshifting
    test = test<<3;
    cout << test << endl;

    //bitmasking
    uint16_t engconid = 2; //last 2 bits
    uint16_t configid = 4531; //first 14 bits
    uint16_t comp = 0; //composite of engconid and configid

    comp = engconid<<14;
    comp = comp|configid; //bitwise or

    fprintf(stdout, "comp in hex is: %02X\n", comp); //another way to print to stdout
    printf("comp in hex is: %02X\n", comp); //another way to print to stdout



}
