//  abstract base class and pure virtual functions

// Rules for virtual functions
// 1, they cannot be static
// 2, they are accessed by object pointers
// 3, virtual functions can be a freind of another class
// 4, a virtual function in base class might not be used
// 5, if a virtual function is defined in a base class , there is no necessity of redefining it in the derived class.

#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;
    ;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do nothing function --> pure virtual function
};

class cwhVideo : public cwh
{
    int videoLength;

public:
    cwhVideo(string s, float r, int vl) : cwh(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "ratins : " << rating << " out of 5 stars " << endl;
        cout << "length of this video is : " << videoLength << "minutes" << endl;
    }
};

class cwhText : public cwh
{
    int words;

public:
    cwhText(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing text tutorial with title " << title << endl;
        cout << "ratins : " << rating << " out of 5 stars " << endl;
        cout << "no. of words in text tutuorial is : " << words << "words" << endl;
    }
};

int main()
{
    string title;
    int rating, vlen;
    int words;

    // for code with video
    title = "oops tutorial";
    vlen = 5;
    rating = 4;
    cwhVideo video(title, rating, vlen);
    // video.display();

    // for code with text
    title = "oops tutorial text";
    words = 50;
    rating = 4;
    cwhText text(title, rating, words);
    // text.display();

    cwh *tuts[2];
    tuts[0] = &video;
    tuts[1] = &text;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}