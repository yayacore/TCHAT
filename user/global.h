#pragma once

#define MAX_USERS 50
int users[MAX_USERS];

int serv_fd; 
int identifiants_clients[MAX_USERS];

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
// #include <dirent.h> // listing des fichiers
// #include <fcntl.h>  // gérer ls fichiers
#include <sys/stat.h> 
#include <pthread.h> // pr ls thread

#define BUF_SIZE 500

typedef struct delivery {
    char prenom [255];
    int id_user;
    char message[255];
    int id_room;
    int receptionneur;
    int user_fd;
}t_delivery; 

typedef struct room {
    int id_room;
    char name;
    int nb_users;
}t_room;
#include "fonctions.c"