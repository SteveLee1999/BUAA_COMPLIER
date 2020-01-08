#ifndef _MY_STRUCTURE_H_
#define _MY_STRUCTURE_H_

struct word // ����
{
	char name[100];
	char code[10];
	int line; // ��������
	struct word *next;
	struct word *before;
};

struct function // ����
{
	char name[100];
	int returntype; // 0void,1int,2char
	int para_num; // ��������
	int para_table[50]; // 1��ʾint,2��ʾchar
	struct function *next;
};

struct symbol // ���ű�
{
	char name[100];
	int type; // 1int,2��ʾchar,3��ʾvoid
	bool isarray; // true��ʾ������
	bool isfunction; // true��ʾ�Ǻ�����
	bool isconst; // true��ʾ�ǳ���
	struct symbol *next;
};

struct constant // ������
{
	char name[100];
	int type; // 1int,2��ʾchar
	int value; // int�����ֵ��char����asciiֵ
	struct constant *next;
};

struct object // mips
{
	char name[100];
	int value;
	int offset; // ����Ǿֲ�������������ջ��ƫ�ƣ�0, 4, 8...)
	bool is_in_reg; // �Ƿ��ڼĴ�����
	int reg_num; // �Ĵ�����ţ�����У�
	bool is_valid;
	struct object *next;
};

struct dag_point
{
	char name[100];
	int number; // dagͼ�н�����
	struct dag_point *next;
};

struct dag_vertex // dagͼ
{
	char name[100]; // ������������������scanf
	bool is_mid; // �Ƿ����м�ڵ�
	int number; // dagͼ�н�����,Ҳ����scanf��˳��
	int father[200]; // ���ڵ㣨���ܶ����������ţ�0��ʾ��
	int father_num; //���ڵ��������1��ʼ�ƣ�
	int left_son;
	int right_son;
};

struct dag_print_vertex
{
	int type; // ���ֿ��ܣ�1:%s%d 2:%s%c 3:%d 4:%c 5:%s
	int var; // �������Ƕ�Ӧ��dagͼ�ڵ��
	char str[500]; // (�����)�ַ���
	struct dag_print_vertex *next;
};

struct dag_scan_vertex
{
	int type; // ���ֿ��ܣ�1:%d 2:%c
	char var[100]; // Ҫ��ȡ�ı�����
	int number; // ��Ӧ��dagͼ�ڵ��
	struct dag_scan_vertex *next;
};

#endif 