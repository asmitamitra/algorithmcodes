#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h>

#define SIZE 5

   void printstringasbinary(char* s)
{
    // A small 9 characters buffer we use to perform the conversion
    char output[9];

    // Until the first character pointed by s is not a null character
    // that indicates end of string...
    while (*s)
    {
        // Convert the first character of the string to binary using itoa.
        // Characters in c are just 8 bit integers, at least, in noawdays computers.

        itoa(*s, output, 2);

        // print out our string and let's write a new line.
        puts(output);

        // we advance our string by one character,
        // If our original string was "ABC" now we are pointing at "BC".
        ++s;
    }
}

 int main()
 {

    int sfd,lfd,len,i,j,status,flag,k;
    char str[20],frame[20],temp[20],ack[20],l;
    struct sockaddr_in saddr,caddr;
    sfd=socket(AF_INET,SOCK_STREAM,0);
    memset(&saddr,0,sizeof(saddr));
    saddr.sin_family=AF_INET;
    saddr.sin_addr.s_addr=htonl(INADDR_ANY);
    saddr.sin_port=htons(5465);
    bind(sfd,(struct sockaddr*)&saddr,sizeof(saddr));
    listen(sfd,5);
    printstringasbinary("To");




 }
