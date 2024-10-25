#ifndef NODE_H
#define NODE_H

template <typename T>

class Node {
    public:
        T data;
        Node<T>* next = nullptr;

        Node(T value) {
            this->data = value;
        }

        T  printValue() {
            return this->data;
        }
};

#endif
