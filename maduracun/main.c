#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool madu = true;
    bool racun = false;

    printf("benar dan benar maka %d \n",madu&&madu);
    printf("benar dan salah maka %d \n",madu&&racun);
    printf("salah dan benar maka %d \n",racun&&madu);
    printf("salah dan salah maka %d \n",racun&&racun);

    printf("benar atau benar ? %d \n",madu||madu);
    printf("benar atau salah ? %d \n",madu||racun);
    printf("salah atau benar ? %d \n",racun||madu);
    printf("salah atau salah ? %d \n",racun||racun);

    return 0;
}
