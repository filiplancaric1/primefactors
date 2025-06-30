#include <stdio.h>

void primeFactors(int a, int m)
{
    int pocet = 0;
    int delitel = 2;

    while (pocet != m)
    {
        int delitele_delitela = 0;
        for (int i = 1; i <= delitel; i++){
            if (delitel % i == 0){
                delitele_delitela++;
            }
        }

        if (delitele_delitela == 2)
        {
            if (a % delitel == 0)
            {
                if (a != delitel)
                {
                    printf("%d\n", delitel);
                }

                if (a == delitel)
                {
                    printf("%d", delitel);
                }

                a = a / delitel;
                pocet++;
            }

        }

        if (a == 1)
        {
            break;
        }

        delitel++;
    }

}

int main(){
    int a; int m;

    scanf("%d %d", &a, &m);
    if (a <= 1){
        printf("ERROR");
        return 1;
    }

    primeFactors(a, m);

    return 0;
}