#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

using namespace std;

int main()
{

    int test = 268435456;
    float testfloat = 2.1;
    char memory[4];
    memcpy(memory, &testfloat, 4);

    printf("integer in hex: %04X\n", test);

    unsigned int  i = 0;
    for (i = 0; i <sizeof(memory); i++)
    {
        printf("Float Byte %d is: %02X\n", i+1, memory[i]);
    }

    cout << memory[3] << endl;
}
