#ifndef MAIN_H
#define MAIN_H

I/**
 * This is a header file
 * It contains all the prototype of my functions
 * So this is like me creating my own library with declarations
 */
int main(void);
int _putchar(char n);
char *_strcat(char *dest, char *src);
void reverse_array(int *a, int n);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
