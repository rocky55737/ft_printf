#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    int ret;
    va_list arg_ptr;

    ret = 0;
    va_start(arg_ptr, format);
    ret = do_printf(arg_ptr, format);
    va_end(arg_ptr);
    return (ret);
}

int do_printf(va_list arg_ptr, const char *format)
{
    int print_cnt;
    int format_index;

    print_cnt = 0;
    
}