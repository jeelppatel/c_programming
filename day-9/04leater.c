#include <stdio.h>



int stringLength(char str[100]){
    int length = 0;
    while (str[length] != '\0'){
        length++;
    }
    return length;
}



int main(){
    char input[100];
    int i;
    printf("Enter any string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++){
        if (input[i] == '\n'){
            input[i] = '\0';
            break;
        }
    }
    

    int length = stringLength(input);
    printf("Length is: %d\n", length);
    
    return 0;
}
