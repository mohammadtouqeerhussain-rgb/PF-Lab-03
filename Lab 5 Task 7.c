#include <stdio.h>

int main() {
    char username[20], password[20];
    int otp;

    printf("Enter Username: ");
    scanf("%s", username);


    if (username[0] == 'a' &&
        username[1] == 'd' &&
        username[2] == 'm' &&
        username[3] == 'i' &&
        username[4] == 'n' &&
        username[5] == '\0') {

        printf("Enter Password: ");
        scanf("%s", password);

        if (password[0] == '1' &&
            password[1] == '2' &&
            password[2] == '3' &&
            password[3] == '4' &&
            password[4] == '\0') {

            printf("Enter OTP: ");
            scanf("%d", &otp);

            if (otp == 1111) {
                printf("Login Successful\n");
            } else {
                printf("Invalid OTP\n");
            }

        } else {
            printf("Incorrect Password\n");
        }

    } else {
        printf("Invalid Username\n");
    }

    return 0;
}
