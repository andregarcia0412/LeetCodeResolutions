#include <iostream>
using namespace std;

struct Node
{
    char value;
    Node *prev;

    Node(char value)
    {
        this->value = value;
        prev = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(char value)
    {
        Node *newNode = new Node(value);
        newNode->prev = top;
        top = newNode;
    }

    char pop()
    {
        Node *removedNode = top;
        char removedValue = removedNode->value;
        top = top->prev;
        delete removedNode;
        return removedValue;
    }

    char peek()
    {
        if (top == nullptr)
        {
            return -1;
        }
        return top->value;
    }

    ~Stack()
    {
        while (top != nullptr)
        {
            pop();
        }
    }
};

class Solution
{
public:
    bool isValid(string s)
    {
        Stack stack = Stack();

        for (int i = 0; i < s.length(); i++)
        {
            char input = s[i];
            if (input == '(' || input == '{' || input == '[')
            {
                stack.push(input);
            }
            else
            {
                char top = stack.peek();

                if (top == '(' && input == ')')
                {
                    stack.pop();
                }
                else if (top == '[' && input == ']')
                {
                    stack.pop();
                }
                else if (top == '{' && input == '}')
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return stack.peek() == -1;
    }
};

int main()
{
    string input;
    cin >> input;
    Solution solution = Solution();

    cout << solution.isValid(input) << endl;
}