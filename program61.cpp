// Template for probplems on N Numbers

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)              // Parametrised constructor
        {
            this->iSize = iValue;
            Arr = new int[iSize];       // Allocate the Resource
        }

        ~ArrayX()                       // Destructor
        {
            delete []Arr;               // Deallocate the resource
        }

        void Accept()  
        {
            int iCnt = 0;
            cout<<"Enter the elements"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                    cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of array are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        
};

int main()
{
    ArrayX obj1(5);

    obj1.Accept();      
    obj1.Display();     

    obj1.___________();

    return 0;
}
