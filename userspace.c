#include <stdio.h>
#include <linux/kernel.h>
#include <linux/unistd.h>

#define __NR_my_syscall 359
int main()
{
int *pidss[1024];
char *buffs[1024];
int  *timess[1024];
char *coms[1024];  
int chandu = syscall(__NR_my_syscall,0,1024,pidss,timess,coms,buffs);
// -1 is to read number of lines from the kernel code
int i=0;
//printf("%s \n",buff);
while(i<sizeof(buffs)){
//int ch = syscall(__NR_my_syscall,i,1024,buff);
printf("%s \n",coms[i]);
i++;
}
return 0;

}
