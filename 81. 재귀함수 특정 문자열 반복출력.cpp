#include <stdio.h>
#pragma warning(disable:4996)

// ����Լ��� �̿��Ͽ� Ư�� ���ڿ� �ݺ� ���  
// ����Լ�(Recursive Function) : �ڱⰡ �ڱ��ڽ��� �����ϴ� ���� 

void print(int);	// �Լ� ����(������Ÿ��) ����
 
int main(void) {
	 int num;
	 printf("���ڿ��� ��� ����ұ��? : ");
	 scanf("%d", &num);
	 print(num); 
	
	return 0;
}

void print(int count) {		// �Լ� ���� 
	if(count ==  0)
		return;
	else{
		printf("���ڿ��� ����մϴ�.\n");
		print(count - 1);		// �Լ� ���ο��� ���� �Լ�(�ڱ��ڽ�) ȣ�� 
	}
} 

/* ����Լ� 
for���̳� while���� ������� �ʴ��� ����Լ��� ���Ͽ� �ݺ������� ���డ���ϴ�. 
*/ 
