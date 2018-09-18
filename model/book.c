#include <stdlib.h>
#include "chapter.c"
	typedef struct book{ // Class Book
		int id;
		char title[50];
		int numChapters;
		int numPages;
		Chapter chapters;
		struct book *next;
	} Book;

	void printBook(Book *book){
		Book *aux;
		for(aux=book; aux!=NULL; aux= aux->next){
			printf("----------------\n");
			printf("Title - > %s \n",aux->title);
			printf("Number of Chapters - > %d \n",aux->numChapters);
			printf("Number of Pages - > %d\n", aux->numPages);
			printf("---------------\n");
			}
		}
