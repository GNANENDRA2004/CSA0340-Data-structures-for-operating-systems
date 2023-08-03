#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Stack {
    int arr[MAX_SIZE];
    int top;
};
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}
void push(struct Stack* stack, int data) {
    if (isFull(stack)) {
        printf("Stack Overflow: Cannot push element, stack is full.\n");
    } else {
        stack->arr[++stack->top] = data;
    }
}
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element, stack is empty.\n");
        return -1; 
    } else {
        return stack->arr[stack->top--];
    }
}
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1; 
    } else {
        return stack->arr[stack->top];
    }
}
int main() {
    struct Stack stack;
    initializeStack(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printf("Top element: %d\n", peek(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack)); 
    return 0;
}

