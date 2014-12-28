/*	  
 *	commands.h 
 *	the genie shell commands part for ucosII 
 *	under skyeye 
 * 
 *	Bugs report:	 Yang Ye  ( yangye@163.net ) 
 *	Last modified:	 2003-02-19  
 * 
 */ 
#ifndef __COMMANDS_H__
#define __COMMANDS_H__
#include "ucos_ii.h"
#include "stdio.h"
#include "string.h"

#ifndef COMMANDDEF 
 
#define MAX_COMMAND_NUM    2 
 
typedef struct{ 
	int 			num; 			//����ĵ�ǰ����
	char 		*name; 		//��������
	char			*help;			//���������Ϣ
	INT8U (*CommandFunc)(INT8U argc,char **argv); 
}command; 
 
#endif 
void shell_task_init(void);


/* ����� */
void command_export(INT8U (*CommandFunc)(INT8U argc,char **argv),const char *Name,const char *help);

#endif
