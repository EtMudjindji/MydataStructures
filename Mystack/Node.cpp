#ifndef NODE_H
#define NODE_H

class Node {
    public:
        int data;
        Node* next = nullptr;

        Node(int value) {
            this->data = value;
        }

        int printValue() {
            return this->data;
        }
};

#endif
