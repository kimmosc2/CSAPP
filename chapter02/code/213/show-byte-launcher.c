/* show-byte-launcher.c -- 213show_byte.c测试程序,书本32页show-byte.c示例代码 */
#include "show_bytes.c"

void test_show_bytes(int val)
{
    int ival = val;
    float fval = (float)val;
    int *pval = &val;
    // printf("pointer:%p\n",pval);
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(void)
{
    test_show_bytes(12345);
    return 0;
}