#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd1;
	char buf[5],buf1[2],buf2[3];
	fd1 = open("file.txt",O_RDWR,777);
	lseek(fd1,1,SEEK_SET);
	read(fd1,buf,5);
	printf("%s",buf);
	lseek(fd1,-2,SEEK_END);
	read(fd1,buf1,2);
	printf("%s",buf1);
	lseek(fd1,-2,SEEK_END);
	lseek(fd1,-2,SEEK_CUR);
	read(fd1,buf2,3);
	printf("%s",buf2);
	close(fd1);
	
	return 0;
}
