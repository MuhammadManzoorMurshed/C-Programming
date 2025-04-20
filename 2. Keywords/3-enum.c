/*

*/


#include <stdio.h>

enum week {Sun, Mon, Tue, Wed, Thur, Fri, Sat};

int main()
{
    enum week day;

    day = Wed;

    printf("%d\n", day);

    return 0;
}
