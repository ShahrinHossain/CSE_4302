#include<iostream>
using namespace std;

class Counter
{
private:
    int count=0;
    int increment_step;
public:
    void setIncrementStep(int step_val)
    {
        increment_step = step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count += increment_step;
    }
    void resetCount()
    {
        count = 0;
    }

};

int main()
{
    Counter c1;
    int step_val;
    cin >> step_val;

    cout << c1.getCount() << endl;
    c1.setIncrementStep(step_val);
    c1.increment();
    cout << c1.getCount() << endl;
    c1.setIncrementStep(step_val);
    c1.increment();
    cout << c1.getCount() << endl;
    c1.resetCount();
    cout << c1.getCount() << endl;
}
