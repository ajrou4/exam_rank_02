#ifndef FT_LIST_H
#define FT_LIST_H

#include<stdlib.h>
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
#endif