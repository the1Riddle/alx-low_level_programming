#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
int main(int argc, char *argv[]);
void check_elf(unsigned char *e_ident);
void print_info(unsigned char *e_ident);
void close_elf(int elf);

#endif
