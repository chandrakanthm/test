#include <stdio.h>
#include <linux/kernel.h>
#include <linux/unistd.h>

#define __NR_my_syscall 359
int main()
{
char buff[1024];
int chandu = syscall(__NR_my_syscall,-1,1024,buff);
// -1 is to read number of lines from the kernel code
int i=0;
printf("%s\n",buff);
//while(i<chandu){
//int ch = syscall(__NR_my_syscall,i,1024,buff);
//printf("system call my_syscall %s \n",buff);
//i++;
//}
return 0;

}
