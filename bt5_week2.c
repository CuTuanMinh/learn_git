#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
struct sockaddr_in ip,ip2;
int main()
{
   char str[INET_ADDRSTRLEN];
   inet_pton(AF_INET,"127.0.0.1",&ip.sin_addr);
   inet_ntop(AF_INET,&ip.sin_addr,str,INET_ADDRSTRLEN);
   printf("%s\n",str);

   ip2.sin_addr.s_addr = inet_addr("127.0.0.1");
   printf("%d\n",ip.sin_addr.s_addr);

   inet_ntop(AF_INET,&ip2.sin_addr,str,INET_ADDRSTRLEN);
   printf("%s\n",str);
  
}
