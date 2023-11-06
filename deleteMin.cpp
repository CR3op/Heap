template<class Comparable>

BinaryHeap<Comparable>::deletMin(Comparable & minItem)
{
    if (isEmpty())
    {
        throw underFlow();

        minItem = array[1];
        array[1] = array[currentSize--];
        percolateDown (1);
    }
}