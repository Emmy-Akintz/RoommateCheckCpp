#include <iostream>

using namespace std;

int main()
{
    const int rows = 4;
    const int cols = 2;
    string participantInfo[rows][cols] =
        {
            {"Emmanuel", "2203827"},
            {"Miracle", "2203817"},
            {"Collins", "2203797"},
            {"Moses", "2203833"}};

    string regNo;
    cout << "This is to find out if you're a participant of Dorcas Hall E103." << endl;
    cout << "Enter your reg number: ";
    cin >> regNo;
    cout << "Here is your reg no " << regNo << endl;

    bool isMember = false

    for (int i = 0; i < rows; ++i)
    {
        if (regNo == participantInfo[i][1])
        {
            isMember = true;
            
            // this is to remove the user name from the array

            cout << "You're a member of Dorcas Hall room E103 and here are your room mates names:" << endl;
            for (int a = 0; a < rows; ++a)
            {
                cout << participantInfo[a][0] << endl;
            }
            break;
        }
    }

    if (!isMember)
    {
        cout << "You're not a member of Dorcas Hall room E103." << endl;
    }

    return 0;
}
