#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include "InsertLinkedList.h"
#include <stdio.h> // stderr를 사용하기 위해 추가
#include <stdlib.h> // malloc을 사용하기 위해 추가

// 공백 연결 리스트 생성
linkedList_h* createLinkedList_h(void) {
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h));
    if (L == NULL) {
        // 메모리 할당 실패 (처리되지 않은 예외가 throw됨 : 쓰기 액세스 위반입니다. L이(가) 0x32300170였습니다.)
        fprintf(stderr, "메모리 할당 실패\n"); 
        return NULL;
    }
    L->head = NULL; // 연결 리스트의 head를 NULL로 설정
    return L;
}


// 연결 리스트의 전체 메모리 해제하는 연산
void freeLinkedList_h(linkedList_h* L) {
    listNode* p;
    while (L->head != NULL) {
        p = L->head;
        L->head = L->head->link;
        free(p);
        p = NULL;
    }
}

// 연결 리스트를 순서대로 출력하는 연산
void printList(linkedList_h* L) {
    listNode* p;
    printf("L = (");
    p = L->head;
    while (p != NULL) {
        printf("%s", p->data);
        p = p->link;
        if (p != NULL) printf(", ");
    }
    printf(") \n");
}

// 첫번째 노드로 삽입하는 연산
void insertFirstNode(linkedList_h* L, char* x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x); // 새 노드에 데이터 저장
    newNode->link = L->head; // 새 노드의 링크 필드에 x 저장
    L->head = newNode;
}

// 노드 pre 뒤에 노드를 삽입하는 연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x); // 새 노드 리스트에 데이터 저장
    if (L->head == NULL) { // 첫 번째 노드로 삽입하는 경우
        newNode->link = NULL;
        L->head = newNode;
    }
    else if (pre == NULL) { // 첫 번째 위치에 삽입하는 경우 pre가 NULL인 경우
        newNode->link = L->head;
        L->head = newNode;
    }
    else {
        newNode->link = pre->link; // 삽입된 노드의 link에 다음 노드 연결
        pre->link = newNode;
    }
}

// 마지막 노드로 삽입하는 연산
void insertLastNode(linkedList_h* L, char* x) {
    listNode* newNode;
    listNode* temp;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x); // 새 노드 리스트에 데이터 저장
    newNode->link = NULL;
    if (L->head == NULL) { // 첫 번째 노드로 삽입하는 경우
        L->head = newNode;
    }
    else {
        // 첫 번째 리스트의 마지막 노드를 찾는 과정
        temp = L->head;
        while (temp->link != NULL) temp = temp->link;
        temp->link = newNode; // 마지막 노드에 새 노드 연결
    }
}
