#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	// ����ü ���ǿ� ����(shared) ���� 
	union shared_tag {
		char c;
		int i;
		long l;
		float f;
		double d;
	} shared;
	
	// shared ����ü �������  �ʱ�ȭ
	shared.c = '$';
	printf("\n char c = %c \n", shared.c);
	printf("\n int i = %d \n", shared.i);
	printf("\n long l = %ld \n", shared.l);
	printf("\n float f = %f \n", shared.f);
	printf("\n double d = %f \n", shared.d); 

	shared.d = 12345678.3464364;
	printf("\n char c = %c \n", shared.c);
	printf("\n int i = %d \n", shared.i);
	printf("\n long l = %ld \n", shared.l);
	printf("\n float f = %f \n", shared.f);
	printf("\n double d = %f \n", shared.d); 
	
	return 0;
}



/*
����ü�� �̿��ϸ� �ʱ�ȭ�� �ܷΰ��� �����ϰ�� ������� ������ �� ����.
�ֳ��ϸ� ������ �������� ����� ���� � �ڷᰡ �Ǵ��Ŀ� ���� �ٸ������ ����
�ٸ� �ڷ尪�� ������ ��ø�Ǿ� ���� �ִ� �ڷ�� �������� ���� 
*/
