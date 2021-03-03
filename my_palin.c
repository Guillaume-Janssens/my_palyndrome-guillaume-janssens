/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** file for palindrome detection
*/

char *change_to_lower(char *word)
{
    int i = 0;

    while (word[i] != '\0') {
	if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] += 32;
        i += 1;
    }
    return (word);
}

int word_len(char *word)
{
    int i = 0;

    while (word[i] != '\0')
        i += 1;
    return (i);
}
