/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** main for palindrome
*/

#include <unistd.h>
#include "my.h"

void my_palindrome(int i, int j)
{
    if (i == j)
        write(1, "palindrome!\n", 12);
    else
        write(1, "not a palindrome.\n", 18);
}

void check_word(char *word)
{
    int len = 0;
    int i = 0;
    int j = 0;
    
    len = word_len(word);
    word = change_to_lower(word);
    for (i = 0; i < len / 2; i++) {
        if (word[i] == word[len - i - 1]) {
            j += 1;
        }
    }
    my_palindrome(i, j);
}

int check_error(int argc, char *argv1)
{
    int i = 0;
    
    if (argc != 2)
        return (84);
    while (argv1[i] != '\0') {
        if (argv1[i] < 'A' || (argv1[i] > 'Z' && argv1[i] < 'a')
                || argv1[i] > 'z')
            return (84);
        i += 1;
    }
    return (0);
}

int check_argv(char *argv)
{
    if (argv == NULL) {
        write(2, "Error, missing arguments.\n", 26);
        return (84);
    }
    else
        return (0);
}

int main(int argc, char **argv)
{
    if (check_argv(argv[1]) == 84)
        return (84);
    if (check_error(argc, argv[1]) == 84)
        return (84);
    check_word(argv[1]);
    return (0);
}
