#include <stdio.h>

int main(){
    // Stored KYC records
    int pan[] = {1111, 2222, 3333};
    int aadhar[] = {4444, 5555, 6666};
    int apaar[] = {7777, 8888};
    int DL[] = {9999, 1234};
    int passport[]= {5678, 4321};

    int choice, id, i, found = 0;

    // Menu
    printf("KYC Verification System\n");
    printf("Select ID Type:\n");
    printf("1. PAN Number\n");
    printf("2. AADHAR Number\n");
    printf("3. APAAR Id\n");
    printf("4. Driving License\n");
    printf("5. Passport\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Input the ID number
    printf("Enter ID number: ");
    scanf("%d", &id);

    switch(choice) {
        case 1:
            for(i = 0; i < 3; i++) {
                if(pan[i] == id) {
                    found = 1;
                    break;
                }
            }
            break;
        case 2:
            for(i = 0; i < 3; i++) {
                if(aadhar[i] == id) {
                    found = 1;
                    break;
                }
            }
            break;
        case 3:
            for(i = 0; i < 2; i++) {
                if(apaar[i] == id) {
                    found = 1;
                    break;
                }
            }
            break;
        case 4:
            for(i = 0; i < 2; i++) {
                if(DL[i] == id) {
                    found = 1;
                    break;
                }
            }
            break;
        case 5:
            for(i = 0; i < 2; i++) {
                if(passport[i] == id) {
                    found = 1;
                    break;
                }
            }
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    if(found) 
        {
             printf("Verified: ID found in records.\n");
         } else
    {
        printf("Not Verified: ID not found.\n");
    }

    return 0;
}
