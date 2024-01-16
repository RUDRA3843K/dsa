#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> items;
public:
    void push(int item) {
        items.push_back(item);
    }
    int pop() {
        int lastItem = items.back();
        items.pop_back();
        return lastItem;
    }
    int peek() {
        return items.back();
    }
    bool isEmpty() {
        return items.empty();
    }
};

int main() {
    Stack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    cout << myStack.pop() << endl; // Output: 3
    cout << myStack.peek() << endl; // Output: 2
    cout << myStack.pop() << endl; // Output: 2
    cout << myStack.isEmpty() << endl; // Output: 0 (false)
    return 0;
}
