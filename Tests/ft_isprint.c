#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void test_isprint(char c) {
    int ft_result = ft_isprint(c);
    int lib_result = isprint(c);
    if (ft_result == lib_result) {
        printf("Test passed: ft_isprint('%c') == isprint('%c')\n", c, c);
    } else {
        printf("Test failed: ft_isprint('%c') == %d, isprint('%c') == %d\n", c, ft_result, c, lib_result);
    }
}

int main() {
    // test lowercase letters
    for (char c = 'a'; c <= 'z'; c++) {
        test_isprint(c);
    }
    // test uppercase letters
    for (char c = 'A'; c <= 'Z'; c++) {
        test_isprint(c);
    }
    // test digits
    for (char c = '0'; c <= '9'; c++) {
        test_isprint(c);
    }
    // test punctuation characters
    test_isprint('!');
    test_isprint('"');
    test_isprint('#');
    test_isprint('$');
    test_isprint('%');
    test_isprint('&');
    test_isprint('\'');
    test_isprint('(');
    test_isprint(')');
    test_isprint('*');
    test_isprint('+');
    test_isprint(',');
    test_isprint('-');
    test_isprint('.');
    test_isprint('/');
    test_isprint(':');
    test_isprint(';');
    test_isprint('<');
    test_isprint('=');
    test_isprint('>');
    test_isprint('?');
    test_isprint('@');
    test_isprint('[');
    test_isprint('\\');
    test_isprint(']');
    test_isprint('^');
    test_isprint('_');
    test_isprint('`');
    test_isprint('{');
    test_isprint('|');
    test_isprint('}');
    test_isprint('~');

    // test non-printable characters
    for (int i = 0; i < 32; i++) {
        test_isprint((char)i);
    }
    test_isprint(127);

    return 0;
}
