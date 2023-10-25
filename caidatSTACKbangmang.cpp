#include <iostream>
#define MAX 100
using namespace std;
struct stack {
    int top;
    int A[MAX];
};

void Init(stack& s) {
    s.top = -1;
}

int Empty(stack s) {

    if (s.top == -1) {
        return 1;
    }
  
    return 0;
}

int IsFull(stack s) {
    if (s.top == MAX - 1) {
        return 1;
    }
    return 0;
}

void Push(stack& s, int x) {
    
    if (IsFull(s) == 0) {
        s.top++;
        s.A[s.top] = x;
    }
}

void Pop(stack& s) {
    if (!Empty(s)) {
        s.top--;
    }
    else {
        cout << "Not available" << endl;
    }
}

int Top(stack& s) {
    if (!Empty(s)) {
        return s.A[s.top];
    }
    else {
        return NULL;
    }
}
void Input(stack& s, int n) {
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Push(s, x);
    }
}
void Output(stack s) {
    for (int i = s.top; i > -1; i--) {
        cin >> s.A[i];
    }
}
int main() {
    stack s;
    int n;
    cin >> n;
    Init(s);
    Input(s, n);
    Output(s);
    Top(s);
    Pop(s);
    Output(s);
}
