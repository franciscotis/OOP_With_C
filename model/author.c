#include <stdlib.h>
#include "model/book.c"
	typedef struct author{
		int id;
		char name[50];
		char surname[50];
		Book books;
		struct author *next;

	} Author;
