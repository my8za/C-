#include <stdio.h>
#pragma warning(disable:4996)

// �������� ������ ����ü ����

/* 1. ����ü���� ������ ���ÿ� ������ ���, ����ü���� ������� �ʾƵ� �ȴ�.*/ 
struct {
	int kor;
	int eng;
} man1, man2;



/* 2. jumsu ����ü ����, jumsu ����ü ���� ����� �ʱ�ȭ*/
struct jumsu {
	int kor;
	int  eng;
};
struct jumsu man1 = {90, };



/* 3. jumsu ����ü ���ǿ� man2���� ����, ���Ŀ� ���� �ʱ�ȭ*/
struct jumsu {
	int kor;
	int eng;
} man2;
struct jumsu man2 = {80, };



/* 4. typedef �̿��Ͽ� ����ü�� jumsu��� �ڷ������� ����, ���Ŀ� jumsu �ڷ������� man1 ���� ����� �ʱ�ȭ*/ 
typedef struct {
	int kor;
	int eng;
} jumsu;
jumsu man1 = {80, };
