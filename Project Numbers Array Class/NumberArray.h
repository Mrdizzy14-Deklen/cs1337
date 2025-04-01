#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray{

    private:
        float *arr;
        int len;

    public:
        NumberArray(int size){
            arr = new float[size];
            for(int i = 0; i < size; i++){
                cin >> arr[i];
            }
            len = size;
        }

        ~NumberArray(){
            delete [] arr;
        }

        void storeVal(float item, int index) const{
            arr[index] = item;
        }

        float getVal(int index) const{
            return arr[index];
        }

        float getHighest() const{
            int temp = 0;
            for(int i = 0; i < len; i++){
                if(arr[i] > arr[temp]){
                    temp = i;
                }
            }
            return arr[temp];
        }

        float getLowest() const{
            int temp = 0;
            for(int i = 0; i < len; i++){
                if(arr[i] < arr[temp]){
                    temp = i;
                }
            }
            return arr[temp];
        }

        float getAvg() const{
            float avg = 0;
            for(int i = 0; i < len; i++){
                avg += arr[i];
            }
            return avg/len;
        }
};
#endif