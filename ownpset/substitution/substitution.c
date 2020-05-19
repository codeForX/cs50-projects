# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>


void coder(string key, string message);
bool checkfordouble(string str);


int main(int argc, string argv[])
{
    if(argc > 2||argc < 2  || !isalpha(argv[1]) || strlen(argv[1]) != 26 )
    {
        printf("ERROR: WRONG KEY ARGUMENT\n");
        return 1;
    }
    else
    {
        string key = argv[1];
        printf("%s \n",key);
        if(checkfordouble(key))
        {
            printf("ERROR: DOUBLES\n");
            return 1;
        }
        string str =  get_string("enter input to be coded: ");
        coder(key,str);
        
    }
}

void coder(string key, string message)
{
    char chr;
    char result[strlen(message)];
    printf("%s",message);
    for(int i = 0; i < strlen(message);i++)
    {
        if(isupper(message[i]))
        {
           chr = toupper(key[message[i] - 'A']);
        }
        else if(isalpha(message[i]))
        {
           chr = tolower(key[message[i] - 'a'] ) ;
        }
        else
        {
            chr = message[i];
        }
        
        result[i] = chr;
    }
    printf("%s",result);
}


bool checkfordouble(string str)
{
    for(int i = 0; i < strlen(str); i++ )
    {
        for( int d = i + 1; d < strlen(str); d++ )
        {
           if(str[i] == str[d])
           {
               return true;
           }
        }
    }
    return false;
}
