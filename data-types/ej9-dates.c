#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dd = atoi(argv[1]);
    int mm = atoi(argv[2]);
    
    if (dd == 0 || mm == 0 || dd > 31 || mm > 12 || (mm == 2 && dd > 29) || (mm == 9 && dd > 30) || (mm == 11 && dd > 30) || (mm == 4 && dd > 30) || (mm == 6 && dd > 30)) {
        printf("Invalid inputs\n");
        return 0;
    }

    if (mm >= 3 && mm <= 6) {
        if (mm == 3) {
            if (dd < 20)
            {
                printf("False");
                return 0;
            }
            printf("True");
            return 0;
        }
        if (6 == mm) {
            if (dd < 20)
            {
                printf("False");
                return 0;
            }
            printf("True");
            return 0;
        }
        printf("True");
        return 0;
    }
    printf("False");
    return 0;
}
