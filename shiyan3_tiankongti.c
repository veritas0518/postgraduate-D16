//#include<stdio.h>
//#include<stdlib.h>
//#define  MAXLEN  100
//typedef  struct  stacknode
//{
//	int  data;
//	struct  stacknode* next;
//}stacknode;
//typedef  struct
//{
//	stacknode* top;
//}linkstack;
//void  Conversion(int  n)
//{
//	linkstack  s;
//	stacknode* p;
//	int  x;
//	s.top = NULL;
//	if (n < 0) {
//		printf("data error!");
//		return;
//	}
//
//	while (n)
//	{
//		x = n % 16;
//		n = n / 16;
//		p = (stacknode*)malloc(sizeof(stacknode));
//		p->data = x;
//		p->next = s.top;
//		s.top = p;
//		//continue;
//	}
//	//printf("%d", x);
//
//	while (1) {
//		if (s.top != NULL) {
//			p = s.top;
//			x = p->data;
//			s.top = p->next;
//			free(p);
//			//return ;  //注意这里的类型是 void 类型，所以没有返回值
//		}
//		else
//			break ;
//		if (x < 10)
//			printf("%d", x);
//		else {
//			switch (x) {
//			case 10:
//				printf("A");
//				break;
//			case 11:
//				printf("B");
//				break;
//			case 12:
//				printf("C");
//				break;
//			case 13:
//				printf("D");
//				break;
//			case 14:
//				printf("E");
//				break;
//			case 15:
//				printf("F");
//				break;
//			}
//		}
//		//printf("%d", x);
//	}
//
//}
//
//int  main(void)
//{
//	int  n;
//	scanf("%d", &n);
//	Conversion(n);
//	return  0;
//}
