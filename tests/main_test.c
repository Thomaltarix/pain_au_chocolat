/*
** EPITECH PROJECT, 2023
** main_test.c
** File description:
** main test for test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_printf, test1, .init = redirect_all_std)
{
    my_printf("Hello World!");
    cr_assert_stdout_eq_str("Hello World!");
}
