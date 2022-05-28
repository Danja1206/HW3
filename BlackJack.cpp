#include <iostream>

using namespace std;

class Card
{
public:
    enum suit {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };
    enum value {
        ACE = 1,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING
    };
    void Flip() 
    {
        if (!cardPosition)
            cardPosition = true;
        else cardPosition = false;
    }
    value getValue()
    {
        if (cardPosition)
        {
            return v;
        }
    }
private:
    suit s;
    value v;
    bool cardPosition;
};

int main()
{
    Card C;
    C.Flip();
    C.getValue();
}
