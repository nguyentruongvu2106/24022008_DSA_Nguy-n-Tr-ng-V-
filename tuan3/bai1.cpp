// Cài đặt Stack số nguyên bằng Linked List và List.
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};


struct Stack {
    Node* top;

    Stack() {
        top = nullptr;
    }

    void push(int x) {
        Node* p = new Node(x);
        p->next = top;
        top = p;
    }

    
    void pop() {
        if (top == nullptr) {
            cout << "Stack rong, khong the pop!\n";
            return;
        }

        Node* p = top;
        top = top->next;
        delete p;
    }

    
    int peek() {
        if (top == nullptr) {
            cout << "Stack rong!\n";
            return -1;
        }

        return top->data;
    }

    
    bool isEmpty() {
        return top == nullptr;
    }

    
    int size() {
        int count = 0;
        Node* p = top;

        while (p != nullptr) {
            count++;
            p = p->next;
        }

        return count;
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Stack rong!\n";
            return;
        }

        Node* p = top;
        cout << "Top -> ";

        while (p != nullptr) {
            cout << p->data << " -> ";
            p = p->next;
        }

        cout << "nullptr\n";
    }

    
    ~Stack() {
        while (top != nullptr) {
            Node* p = top;
            top = top->next;
            delete p;
        }
    }
};
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top: " << s.peek() << '\n';
    cout << "Size: " << s.size() << '\n';

    s.pop();
    s.display();

    cout << "Stack rong? "
         << (s.isEmpty() ? "Co" : "Khong") << '\n';

    return 0;
}
