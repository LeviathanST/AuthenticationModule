//
// Created by hungt on 4/26/2024.
//

#include "src/authentication.h"

int main () {
    User user;

    printf("Username:");
    scanf("%s", user.username);

    printf("Password:");
    scanf("%s", user.password);

    login("database.txt", "token.txt", user.username, user.password);

    return 0;

}
