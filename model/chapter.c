#include <stdlib.h>
	typedef struct chapter{ // Class Chapter
		int id;
		char title[50];
		char text[100];
		int numpages;
		struct chapter *next;
	} Chapter;
