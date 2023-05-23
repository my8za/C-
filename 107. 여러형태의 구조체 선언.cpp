#include <stdio.h>
#pragma warning(disable:4996)

// 여러가지 형태의 구조체 선언

/* 1. 구조체형과 변수를 동시에 선언할 경우, 구조체명을 명시하지 않아도 된다.*/ 
struct {
	int kor;
	int eng;
} man1, man2;



/* 2. jumsu 구조체 정의, jumsu 구조체 변수 선언과 초기화*/
struct jumsu {
	int kor;
	int  eng;
};
struct jumsu man1 = {90, };



/* 3. jumsu 구조체 정의와 man2변수 선언, 이후에 변수 초기화*/
struct jumsu {
	int kor;
	int eng;
} man2;
struct jumsu man2 = {80, };



/* 4. typedef 이용하여 구조체를 jumsu라는 자료형으로 정의, 이후에 jumsu 자료형으로 man1 변수 선언과 초기화*/ 
typedef struct {
	int kor;
	int eng;
} jumsu;
jumsu man1 = {80, };
