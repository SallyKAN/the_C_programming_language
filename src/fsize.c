#include <stdio.h>
#include <string.h>
// #include "syscalls.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "dirent.h"

#define NAME_MAX 14

typedef struct
{
    long ino; /*inode number */
    char name[NAME_MAX + 1];
} Dirent;

typedef struct
{
    int fd;
    Dirent d;
} DIR;

DIR *opendir(char *dirname);
Dirent *readdir(DIR *dfd);
void closedir(DIR *dfd);

char *name;
struct stat stbuf;
int stat(char *, struct stat *);
// stat(name, &stbuf);