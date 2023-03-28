#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int pass[100];
    int i, sum, n;
    char c;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 78;
        sum += (pass[i] + '0');
        c = pass[i] + '0';
        putchar(c);
	/*
	* The 2772 comes from the crackme binary disassembled,
	* the checksum function only validates passwords whose
	* values are summed to exactly 2772 in ASCII code.
	*/
        if ((2772 - sum) - '0' < 78)
        {
            n = 2772 - sum - '0';
            sum += n;
            c = n + '0';
            putchar(c);
            break;
        }
    }

    return (0);
}
