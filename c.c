#include <stdio.h>

int main()
{
    /*  */
    unsigned int a = 10, b = 100U;  /* U transform default int 100 to unsigned int 100 for literals */
    int c = 0x11 + 100;
    printf("a: %d\n", a);

    enum RET_VAL { NO = -1, YES = 0};
    enum RET_VAL fun0_ret_val;
    fun0_ret_val = YES;
    sizeof(fun0_ret_val);  /* 4 */

    /*  */
    /*
     * condition: 1. if-else 2. else-if 3. switch
     * loop: 1. while 2. do-while 3. for
     * other: 1. break 2. continue 3. goto
     */

    
    


}