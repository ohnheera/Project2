/*Software Engineering Project 2*/
/*2014722069 OhnHeera*/
/*2014722001 YangHyoryeong*/
/*2014722030 ParkHyunah*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm * time1, * time2;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
void datecmp(void);
void timecmp(void);

int main(void)
{
	filestat1();
	filestat2();
	filetime1();
	filetime2();
	sizecmp();
	blockcmp();
	datecmp();
	timecmp();
}

void filestat1(void)
{
  //heeraohn
  //get file stat to stat2
  stat("text1",&stat1); 
}
void filestat2(void)
{
  //heeraohn
  //get file stat to stat2
  stat("text2",&stat2);
}
void filetime1(void)
{
	//2014722001 hyoryeongYang
	//get time info of file 1
	printf("file1\n");
	time1=localtime(&stat1.st_mtime);
	printf("size : %d\n", (int)stat1.st_size);
	printf("blocks: %d\n", (int)stat1.st_blocks);
	printf("month: %d\n", time1->tm_mon+1);
	printf("date: %d\n", time1->tm_mday);
	printf("hour: %d\n", time1->tm_hour);
	printf("min: %d\n", time1->tm_min);

}
void filetime2(void)
{
	//2014722001 hyoryeongYang
	//get time info of file 2
	printf("file2\n");
	time2=localtime(&stat2.st_mtime);
	printf("size : %d\n", (int)stat2.st_size);
        printf("blocks: %d\n", (int)stat2.st_blocks);
        printf("month: %d\n", time2->tm_mon+1);
        printf("date: %d\n", time2->tm_mday);
	printf("hour: %d\n", time2->tm_hour);
        printf("min: %d\n", time2->tm_min);


}
void sizecmp(void)
{
	//2014722001 hyoryeongYang
	//compare size of two files

}
void blockcmp(void)
{
  //heeraohn
  //compare block count of two file
}
void datecmp(void)
{
//hyunah
}
void timecmp(void)
{
//hyunah
}


