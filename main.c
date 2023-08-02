#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define OK 0x00
#define ERR 0x01

char* generatePassword(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
    int charsetLength = strlen(charset);

    char* password = (char*)malloc((length + 1) * sizeof(char));

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int index = rand() % charsetLength;
        password[i] = charset[index];
    }

    password[length] = '\0';

    return password;
}

int main(int argc, const char** argv)
{
    int passwordLength;

    printf("Enter the password length: ");
    scanf("%d",&passwordLength);

    if(passwordLength<=10){
	    printf("\nPlease enter a bigger password. Stay secure.\n\n");

	    return ERR;
    }

    char* password = generatePassword(passwordLength);

    printf("Generated password: %s\n", password);

    free(password);

    return OK;
}
