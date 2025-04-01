/*

    The definition of the NumberArray class

*/

#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray{

    private:
        // Define the private values stored in the class
        float *arr = nullptr;
        int len;
    public:
        // Define the prototypes for the class functions
        NumberArray(int size);
        ~NumberArray();
        void storeVal(float item, int index);
        float getVal(int index);
        float getHighest();
        float getLowest();
        float getAvg();
};
#endif