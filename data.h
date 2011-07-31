#ifndef DATA_H
#define DATA_H

#include <limits.h>

struct table_t
{
    char hash[32];
    char filename[PATH_MAX];
    long size;
    char url[255];
};

#endif DATA_H
