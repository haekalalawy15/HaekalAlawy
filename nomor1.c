#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

pthread_t tid1;
pthread_t tid2;
int status;
int string1;
int string2;
 
void* ifah(void *arg)
{
    status = 0;
 
    FILE * in;
    char * line=NULL;
    int count=0;
    size_t len=0;
    ssize_t read;
    in = fopen("novel.txt" , "r");
    while((read=getline(&line,&len,in))!=1)
    {
     if(Strstr(line,"ifah")!=NULL)
     count++;
    };
    fclose(in);
 
    status = 1;
 
    return NULL;
}


void* fina(void *arg)
{
    while(status != 1)
    {
	FILE * wk;
      	char line
    }

    printf("Nomor %d\n", nomor);
}
 
int main(void)
{

    pthread_create(&(tid1), NULL, &tulis, NULL);
    pthread_create(&(tid2), NULL, &baca, NULL);
 
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
 
    return 0;
}
