#include<iostream>
using namespace std;

class Time
{
private:
    int hour = 0 ,minute = 0 ,second = 0;
    void setTime()
    {
        int extra;
        if(second >= 60)
        {
            extra = second/60;
            second %= 60;
            minute += extra;
        }
        if(minute >= 60)
        {
            extra = minute/60;
            second %= 60;
            hour += extra;
        }
        if(hour >= 24)
        {
            hour = 0;
        }
    }
public:
    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void advance(int h, int m, int s)
    {
        hour += h;
        minute += m;
        second += s;
        setTime();
    }
    void print()
    {
        cout << "HOUR: " << hour << endl;
        cout << "MINUTE: " << minute << endl;
        cout << "SECOND: " << second << endl;
    }
};

int main()
{
    Time t1;
    int hs,ms,ss;
    cin >> hs;
    cin >> ms;
    cin >> ss;

    t1.print();
    t1.advance(hs,ms,ss);
    t1.print();
    cout << t1.hours() << endl;
    cout << t1.minutes() << endl;
    cout << t1.seconds() << endl;
    t1.reset(3,20,15);
    t1.print();
}
