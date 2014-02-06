#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<error.h>
int main()
{
  int server_fd; /* server ID */
  int flag=0;  /* setting flag for data issue */
  
  server_fd = socket(AF_INET,SOCK_STREAM,0);
  
  /* above line creates the socket */
