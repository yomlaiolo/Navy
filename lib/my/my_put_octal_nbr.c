/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** put a nbr
*/

void my_putchar(char c);

void my_put_octal_nbr(int nbr)
{
    unsigned int nbr2;

    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr >= 8) {
        nbr2 = nbr % 8;
        nbr = nbr / 8;
        my_put_octal_nbr(nbr);
        my_putchar(nbr2 + 48);
    } else {
        my_putchar(nbr + 48);
    }
}
