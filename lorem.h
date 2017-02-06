#ifndef 	LOREM_H_
#define 	LOREM_H_

#include 	<stdlib.h>
#include 	<stdio.h>
#include 	<pthread.h>
#include 	<unistd.h>
#include 	<sys/types.h>
#include 	<sys/stat.h>
#include 	<fcntl.h>

typedef struct s_data
{
	char *word;
	struct s_data *prec;
} t_data;

#endif 		/*!LOREM_H_*/