/*
    Project: COUNTY LIBRARY MANAGEMENT SYSTEM
    Author: Owen
    Date: FEBUARY 2022
    Compiler: GNU GCC
    Language: C89
    License: MIT
*/
#include <stdio.h>
#include <stdlib.h>

int menu() {
    int action;
   printf("Select an action below\n");
   printf("1. Add a new patron\n");
   printf("2. View all patron\n");
   printf("3. View all books\n");
   printf("4. Add new book\n");
   printf("Your action:");
   scanf("%d",&action);
   return action;
    printf("\t County Library System\n");
    printf("Welcome Mr owen!\n");
    execute_action(menu());
    return 0;

