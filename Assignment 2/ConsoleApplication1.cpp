#include <iostream>

using namespace std;
int main()
{
    cout << "What program would you like to launch?" << endl;
    int prog_ID;
    cin >> prog_ID;
    switch (prog_ID)
    {
    case 1:
    {
        char c;
        cout << "Enter character:";
        cin >> c;
        if (c < 65 || c>122)
        {
            cout << "You entered wrong syllable" << endl;
            return 0;
        }
        if (isupper(c))
        {
            cout << "You entered an uppercase letter" << endl;
            return 0;
        }
        else
        {
            if (c == 121)
            {
                cout << c << " sometimes acts as vowel or a consonant" << endl;;
                return 0;
            }
            if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
            {
                cout << c << " is a vowel" << endl;
                return 0;
            }
            else
            {
                cout << c << " is a consonant" << endl;
                return 0;
            }
        }
    }
    case 2:
    { 
        double w, h, x, y;
        cout << "Enter width and height of a rectangle centered at (0,0):";
        cin >> w >> h;
        if (w <= 0 || h <= 0)
        {
            cout << "You entered wrong value(s)" << endl;
            return 0;
        }
        cout << "Enter the two coordinates of the point: :";
        cin >> x >> y;
        if (x > (-w / 2) && x<(w / 2) && y>(-h / 2) && y < (h / 2))
        {
            cout << "Point  (" << x << "," << y << ") is in the rectangle";
        }
        else
        {
            cout << "Point  (" << x << "," << y << ") is not in the rectangle";
        }
        return 0;
    }
    case 3:
    {
        bool made = false;
        double first, second, third, temp=0;
        cout << "Enter your 3 numbers:";
        cin >> first >> second >> third;
        while (made == false)
        {
            if (first <= second)
            {
                temp = first;
                first = second;
                second = temp;
            }
            if (second <= third)
            {
                temp = second;
                second = third;
                third = temp;
            }
            if (third <= first)
            {
                temp = third;
                third = first;
                first = temp;
            }
            if (first <= second && second <= third)
            {
                cout << endl << "Ascending order:" << first << " " << second << " " << third << endl;
                made = true;
            }
        }
        cout << "Descending order:" << third<<" "<< second << " " << first << endl;
        return 0;
    }
    case 4:
    {
        cout << "Enter an integer:";
        int num;
        cin >> num;
        cout << " " << endl;
        if (num % 5==0 && num % 6==0)
        {
            cout<< "Is " << num << " divisble by 5 and 6? Yes"<<endl;
            cout << "Is " << num << " divisble by 5 or 6? Yes" << endl;
            cout << "Is " << num << " divisble by 5 or 6,but not both? No" << endl;
            return 0;
        }
        if (num % 5 == 0 || num % 6 == 0)
        {
            cout << "Is " << num << " divisble by 5 and 6? No" << endl;
            cout << "Is " << num << " divisble by 5 or 6? Yes" << endl;
            cout<< "Is " << num << " divisble by 5 or 6,but not both? Yes" << endl;
            return 0;
        }
        else
        {
            cout << "Is " << num << " divisble by 5 and 6? No" << endl;
            cout << "Is " << num << " divisble by 5 or 6? No" << endl;
            cout << "Is " << num << " divisble by 5 or 6,but not both? No" << endl;
            return 0;
        }
    }
    case 5:
    {
        int weight, height;
        double BMI;
        cout << "Enter weight in pounds:" << endl;
        cin >> weight;
        if (weight < 0 || weight == 0)
        {
            cout << "You entered wrong weight";
            return 0;
        }
        cout << "Enter height in inches:" << endl;
        cin >> height;
        if (height < 0 || height == 0)
        {
            cout << "You entered wrong height";
            return 0;
        }
        BMI = (weight * 0.45359237 / pow(height * 0.0254, 2));
        cout << endl;
        cout << "BMI is:" << BMI << endl;
        if (BMI < 18.5)
        {
            cout << "You are underweight" << endl;
            return 0;

        }
        if (BMI > 18.5 && BMI < 24.9)
        {
            cout << "You are normal weight" << endl;
            return 0;

        }
        if (BMI > 24.9 && BMI < 29.9)
        {
            cout << "You are overweight" << endl;
            return 0;

        }
        if (BMI > 30)
        {
            cout << "You are obese" << endl;
            return 0;
        }
    }
    default:
    {
        cout << "You entered wrong symbol";
        return 0;
    }
    }
}

