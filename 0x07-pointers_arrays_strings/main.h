#ifndef MAIN_H
#define MAIN_H

har *_memset(char *s, char b, unsigned intn);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
int _putchar(char c);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
