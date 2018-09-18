#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller.c"


int main() {
    Controller *controller;
    constructorBook(controller);


    Book *aux = createABook(controller->books);
    if (aux != NULL) {
        controller->books = aux;
    }

    printBook(controller->books);


}
