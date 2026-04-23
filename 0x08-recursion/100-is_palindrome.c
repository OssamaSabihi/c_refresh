#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
    if(*s != '\0')
    {
       return 1 + _strlen_recursion(s + 1);
        
    }
    return (0);
}
/**
 * _check - compares each character of the string.
 * @s: string
 * @x: smallest iterator.
 * @y: biggest iterator.
 * Return: 1 else 0
 */
int _check(char *s, int i, int j)
{
    if(i >= j)
        return (1);
    if(*(s + i) == *(s + j))
        return (_check(s, i + 1, j - 1));
    if(*(s + i) != *(s + j))
        return(0);
        
    return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
    if(*s == '\0')
        return(1);
        
    return (_check(s, 0, (_strlen_recursion(s) - 1)));

}