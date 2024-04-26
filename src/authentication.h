//
// Created by hungt on 4/26/2024.
//

#ifndef AUTHENTICATIONMODULE_AUTHENTICATION_H
#define AUTHENTICATIONMODULE_AUTHENTICATION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "entities.h"
#define USERNAME_PREFIX "username: "
#define MAX_LINE_LENGTH 256


void register_auth(const char *filename, const User* user);
int login(const char *filename, const char *fileTokenPath,const char *username, const char *password);


#endif //AUTHENTICATIONMODULE_AUTHENTICATION_H
