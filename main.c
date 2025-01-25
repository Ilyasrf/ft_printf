#include "ft_printf.h"

int main(void)
{
    int ret;

    // Test characters and strings
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, ft_printf!");

    // Test integers with flags
    ft_printf("Integer: %d\n", 42);
    ft_printf("Integer with +: %+d\n", 42);
    ft_printf("Integer with space: % d\n", 42);
    ft_printf("Negative integer: %d\n", -42);

    // Test unsigned integers
    ft_printf("Unsigned: %u\n", 4294967295);

    // Test hexadecimal (lowercase and uppercase) with flags
    ft_printf("Hexadecimal (lower): %x\n", 255);
    ft_printf("Hexadecimal (upper): %X\n", 255);
    ft_printf("Hexadecimal with #: %#x\n", 255);
    ft_printf("Hexadecimal (upper) with #: %#X\n", 255);

    // Test pointers
    int a = 42;
    ft_printf("Pointer: %p\n", &a);

    // Test percentage
    ft_printf("Percentage: %%\n");

    // Compare with printf for verification
    ret = ft_printf("ft_printf: %+d\n", 123);
    printf("Return value (ft_printf): %d\n", ret);

    ret = printf("printf: %+d\n", 123);
    printf("Return value (printf): %d\n", ret);

    return 0;
}