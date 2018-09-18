#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "model/author.c"

typedef struct controller{
		Book *books;
		Author *authors;

} Controller;
			int checkIfBookExists(Book *book, char name[50]){
		if(book !=NULL) {
		Book *aux;
		for(aux = book; aux!=NULL;aux=aux->next){
			if(strcmp(aux->title,name)==0)
				return 1;
				
			}
		}
			return 0;
		}

	void constructorBook(Controller *controller){
			controller->books = NULL;
		}

		
			void flush(){
		fflush(stdin);
		__fpurge(stdin);
			}
			

	Book* createABook(Book *book){
		Book *bk;
		char tt[50];
		bk = (Book *) malloc(sizeof(Book));
		printf("I bet you're here to create a book huh?\n");
		printf("Give me it's title\n");
		scanf ("%[^\n]",tt);
		flush();
		if(checkIfBookExists(book,tt)){
			printf("The book already exists!\n");
			return NULL; } 
			else { 
		strcpy(bk->title,tt);
		printf("Give me it's number of Chapters\n");
		scanf("%i",&bk->numChapters);
		flush();
		printf("Give me it's number of Pages\n");
		scanf("%d",&bk->numPages);	
		flush();
	}
	bk->next = book;
	return bk;

		}
		

		
	Author *addAnAuthor(Author *author){
		Author *temporary;
		temporary = (Author *) malloc(sizeof(Author));
		printf("Tell me the Author's name");
		scanf ("%[^\n]",author->name);
		flush();
		printf("Tell me the Author's surname");
		scanf ("%[^\n]",author->surname);
		flush();
		temporary->next = author;
		return temporary;
		}
