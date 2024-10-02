#include <stdio.h>
#include <string.h>



int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char delimiter[] = " ! @  # $  % ^ & * () _ - + = {} [] \\ | ` ~ : ; <  > / ? , . 1 2 3 4 5 6 7 8 9 0 \" '' ";
    
    char *word = strtok(sentence, delimiter);
    printf("Words in the sentence:\n");
    int nm = 1;			
    int list = 1;
    printf("List Sentence :\n");
    while (word != NULL) {
        	
        printf("%i. %s\n", list, word);
        word = strtok(NULL,delimiter);
        list++;
    }

    return 0;
}
