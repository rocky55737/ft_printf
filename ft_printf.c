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

int do_printf(va_list arg_ptr, const char *fmt)
{
    int print_cnt;
    int fmt_idx;
    char    next_chr;

    print_cnt = 0;
    fmt_idx = 0;
    while (fmt[fmt_idx])
    {
        if (fmt[fmt_idx] == '%' && fmt[fmt_idx + 1])
        {
            next_chr = fmt[fmt_idx + 1];
            if (next_chr == 'd' || next_chr == 'i')
                print_cnt += ft_putnbr(*(int *)arg_ptr);
            //etc
            //
            //
            //
            arg_ptr++;
            fmt_idx++;
        }
        else
            print_cnt += ft_putchr(fmt[fmt_idx]);
        fmt_idx++;
    }
    return (print_cnt);
}