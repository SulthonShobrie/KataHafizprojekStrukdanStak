#include <iostream>

using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack
{
    itemType Item[MAXSTACK];
    int Count;
} Stack;

void InitializeStack(Stack *M);
int Empty(Stack *M);
void Pop(Stack *M, itemType *S);
void Push(Stack *M, itemType S);
void display(Stack *M);

int main(int argc, char const *argv[])
{
    cout << "Hello Dunia!" << endl;
    
    return 0;
}
void InitializeStack(Stack *M) {
    M->Count = 0;
}
int Full(Stack *M) {
    return (M->Count == MAXSTACK);
}
int Empty(Stack *M) {
    return (M->Count == 0);
}
void Pop(Stack *M, itemType *S) {
    if (M->Count == 0)
    {
        cout << "Stack masih kosong" << endl;
    } else {
        --(M->Count);
        *S = M->Item[M->Count];
    }
    
}
void Push(Stack *M, itemType S) {
    if (M->Count == MAXSTACK) {
        cout << "Stack sudah penuh" << endl;
    } else {
        M->Item[M->Count] = S;
        ++(M->Count);
    }
}
}

void display(Stack *M) {
    cout << "Menampilkan data stack" << endl;

    for (int i = (M->Count) - 1; i >= 0; --i)
    {
        cout << M->Item[i] << endl;
    }
    
}