#include <stdio.h>

int main(void) {
	enum syllable {Do, Re, Mi, Fa} tone;	  // enume syllable Ÿ���� tone ����
	for(tone = Do; tone <= Fa; tone  += 1) {	  // Do, Fa�� ����ó�� ��� ���� 
		switch(tone) {
			case Do: printf("���� �Ͼ� ������ \n");
			break; 
			case Re: printf("���� �ձ� ���ڵ�  \n");
			break;
			case Mi: printf("�̴� �Ķ� �̳���  \n");
			break;
			case Fa: printf("�Ĵ� ���� �Ķ���  \n");
			break;
		} 
	} 
}
