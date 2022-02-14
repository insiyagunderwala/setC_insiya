include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define STR_LEN 80
#define MAX_SEN 20

int main(void)
{
    char *article[] = {"the", "a", "one", "some", "any"};
    char *noun[] = {"boy", "girl", "dog", "town", "car"};
    char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[] = {"to", "from", "over", "under", "on"};
    int num;
    char sentence[MAX_SEN][STR_LEN];
    char (*i)[STR_LEN];
    srand((unsigned) time(NULL));
    for(i = sentence; i < sentence + MAX_SEN; i++)
    {
        num = rand() % (sizeof(article)/sizeof(article[0]));
        strcpy(*i, article[num]);
        num = rand() % (sizeof(noun)/sizeof(noun[0]));
        strcat(strcat(*i, " "), noun[num]);
        num = rand() % (sizeof(noun)/sizeof(verb[0]));
        strcat(strcat(*i, " "), verb[num]);
        num = rand() % (sizeof(preposition)/sizeof(preposition[0]));
        strcat(strcat(*i, " "), preposition[num]);
        (*i)[0]=toupper((*i)[0]);
        printf("%s.\n", *i);

    }

    return 0;
}