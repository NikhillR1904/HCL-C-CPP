#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<string> undoStack;
    stack<string> redoStack;

    string text = "";

    undoStack.push(text);

    text += "Hello ";
    undoStack.push(text);

    text += "World";
    undoStack.push(text);

    cout << "Current: " << text << endl;

    redoStack.push(undoStack.top());
    undoStack.pop();
    text = undoStack.top();

    cout << "After Undo: " << text << endl;

    undoStack.push(redoStack.top());
    redoStack.pop();
    text = undoStack.top();

    cout << "After Redo: " << text << endl;
}
