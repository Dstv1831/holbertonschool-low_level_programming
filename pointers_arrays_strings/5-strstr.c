#include "main.h"

/**
 * _strstr - function that locates
 * the first occurrence of the substring "2"
 * in the string "1"
 *
 * @haystack: String 1
 * @needle: Substring 2
 *
 * Return: pointer to the beginning of
 * the located substirng
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	/**
	 * run through the values of the pointer until '/0'
	 */

	while (*haystack)
	{
		if (haystack[i] == needle[i])
			/**
			 * increase the index as long
			 * as both pointers keep matching
			 */
			while (haystack[i] == needle[i])
			{
				i++;
				if (needle[i] == '\0')
					return (haystack);
					/**
					 * IMPORTANT - haystack[i] its a different value
					 * than "haystack++", the former its the value in "i"
					 * the later is the the position to which is pointing
					 */
			}
		haystack++;
	}
	return ('\0');
}
