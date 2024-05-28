#include <stdio.h>


//int main()
//{
//	int val = 21;
//	int val_minus = -21;
//	int result = 0;
//
//	result = val + val_minus;
//	printf("result is %d\n", result);
//
//	return 0;
//
//}

//int main(void)
//{
//	float num = 85.125;
//	double dnum = 85.125;
//
//
//	return 0;
//
//}

//int main()
//{
//	int num = 10;
//	int *pnum = &num;
//
//	printf("%d, %d \n", num, *pnum);
//
//	return 0;
//
//}

//int main(void)
//{
//	char string[3][10] = { "Dreams", "come", "true!" };
//	const char *ptr[3] = { "Dreams", "come", "true!" };
//
//	return 0;
//}

//int main(void)
//{
//
//	char s1[10] = "string";
//	char s2[10] = { 's', 't', 'r', 'i','n','g' };
//
//}
//
//
//int main() {
//    int array[2][3][4];
//    int value = 1;
//
//    // 배열의 각 요소를 1부터 시작하여 순차적으로 증가하는 값으로 초기화.
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            for (int k = 0; k < 4; k++) {
//                array[i][j][k] = value++;
//            }
//        }
//    }
//
//    // 초기화된 배열을 출력.
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            for (int k = 0; k < 4; k++) {
//                printf("array[%d][%d][%d] = %d\n", i, j, k, array[i][j][k]);
//            }
//        }
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char students[2][3][50]; // 각 문자열을 저장할 수 있는 크기를 충분히 할당
//
//    // strcpy_s() 함수를 사용하여 문자열을 복사합니다.
//    strcpy_s(students[0][0], sizeof(students[0][0]), "Hong Gil Dong");
//    strcpy_s(students[0][1], sizeof(students[0][1]), "Computer Electronic");
//    strcpy_s(students[0][2], sizeof(students[0][2]), "202100101");
//
//    strcpy_s(students[1][0], sizeof(students[1][0]), "Hong Gil Soon");
//    strcpy_s(students[1][1], sizeof(students[1][1]), "Computer Science");
//    strcpy_s(students[1][2], sizeof(students[1][2]), "202100201");
//
//    // 전체 내용을 출력합니다.
//    for (int i = 0; i < 2; i++) {
//        printf("학생 %d의 이름: %s\n", i + 1, students[i][0]);
//        printf("학생 %d의 학과: %s\n", i + 1, students[i][1]);
//        printf("학생 %d의 학번: %s\n", i + 1, students[i][2]);
//        printf("\n학생 %d\n", i + 1);
//        for (int j = 0; j < 3; j++) {
//            printf("    %s\n", students[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//
////과제3
//int main() {
//    int i, j, k;
//    char student[2][3][20];
//
//    for (i = 0; i < 2; i++) {
//        printf("\n 학생 %d의 이름:", i + 1);
//        fgets(student[i][0], sizeof(student[i][0]), stdin);
//        printf("학생 %d의 학과:", i + 1);
//        fgets(student[i][1], sizeof(student[i][1]), stdin);
//        printf("학생 %d의 학번:", i + 1);
//        fgets(student[i][2], sizeof(student[i][2]), stdin);
//    }
//
//    for (i = 0; i < 2; i++) {
//        printf("\n\t 학생 %d", i + 1);
//        for (j = 0; j < 3; j++) {
//            printf("\n\t");
//            for (k = 0; student[i][j][k] != '\0'; k++) {
//                printf("%c", student[i][j][k]);
//            }
//        }
//    }
//
//    return 0;
//}

////과제 1
//#include <stdio.h>
//
//int main() {
//    // 포인터 배열을 선언하여 문자열을 저장합니다.
//    const char* lines[2][4] = {
//        {"Korea", "Seoul", "Mapo", "152번지 2/3"},
//        {"Korea", "Seoul", "Jongno", "152번지 2/3"}
//    };
//
//    // 포인터 배열을 순회하여 각 문자열을 출력합니다.
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 4; j++) {
//            printf("%s\n", lines[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

////과제 2
//
//#include <stdio.h>
//
//int main() {
//    char input[100]; // 입력 문자열을 저장할 배열
//    int length = 0; // 문자열의 길이를 저장할 변수
//
//    // 사용자로부터 문자열 입력 받기
//    printf("문자열을 입력하세요: ");
//    fgets(input, sizeof(input), stdin);
//
//    // 문자열의 길이 계산
//    for (length = 0; input[length] != '\0' && input[length] != '\n'; length++) {
//        // 아무 동작도 필요 없음
//    }
//
//    // 입력된 문자열 출력
//    printf("\n입력된 문자열은\n\"%s\"\n입니다.\n", input);
//
//    // 입력된 문자열의 길이 출력
//    printf("\n입력된 문자열의 길이=%d\n\n", length);
//
//    return 0;
//}
