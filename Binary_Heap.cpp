#include<vector>

template <class comparable>

class BinaryHeap
{
    public:
        explicit BinaryHeap (int capacity = 100);
        bool isEmpty() const;
        bool isFull() const;

        const comparable & findMin() const;
        void insert( const comparable & x);
        void deleteMin();
        void deleteMin( comparable & minItem);

        void makeEmpty();

    private:
        int currentSize;
        std::vector <comparable>array;
        void buildHeap();
        void percolateDown( int hole);
};