// Array-based List Class for Playlists
// Max Luttrell CS 110C
//
// Jose Gonzalez  2/3/2021
// Assignment 2: PlayList
//


#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;


template<class ItemType>
class List
{
private:
    static const int CHUNK_SIZE = 5;
    ItemType* list;
    int numItems;
    int maxItems;
public:
    // default constructor and destructor
    List() {
        numItems = 0; maxItems = CHUNK_SIZE;
        list = new ItemType[CHUNK_SIZE];
    }
    ~List() { delete[] list; }

    // list member functions
    bool isEmpty()  const { return numItems == 0; }
    int getLength() const { return numItems; }
    bool insert(int pos, const ItemType& item);
    bool remove(int pos);

    // clear the list
    // clear can simply set numItems to zero.  The array list may still contain
    // items already inserted into the list, but since numItems is zero, there
    // isn't any way to get at them using getEntry() or setEntry()
    void clear() { numItems = 0; }

    // return entry at postion pos
    // throw invalid_argument if pos<1 or pos>getLength()
    ItemType getEntry(int pos) const;

    // set entry at postion pos to item
    // throw invalid_argument if pos<1 or pos>getLength()
    void setEntry(int pos, const ItemType& item);
};

template<class ItemType>
bool List<ItemType>::insert(int pos, const ItemType& item)
{
    bool canAdd;
    canAdd = ((pos > 0) && (pos <= numItems + 1));

    if (canAdd)
    {
        // first, we have to move everything after our insertion point over one
        // position to make room for our new item.  start at the back of the list.
        // don't forget arrays start at postion zero and our list ADT starts at
        // position 1.
        if ((pos > 0) && (numItems == maxItems)) {
            ItemType* increase;
            increase = new ItemType[CHUNK_SIZE + 1];

            for (int i = 0; i < numItems; i++) {
                increase[i] = list[i];
            }

            delete[] list;
            list = increase;
            
        }
        for (int i = numItems; i >= pos; i--)
            list[i] = list[i - 1];

        // now put our item at position pos-1
        list[pos - 1] = item;

        numItems++;
    }
    

    return canAdd;
}

template<class ItemType>
ItemType List<ItemType>::getEntry(int pos) const
{
    if (pos<1 || pos>getLength()) {
        throw invalid_argument("ERROR: getEntry() using invalid position");
    }
    return list[pos - 1];
}

// TODO: add implementations for setEntry() and remove() functions
template<class ItemType>
void List<ItemType>::setEntry(int pos, const ItemType& item) {
    if (pos<1 || pos>getLength())
        throw invalid_argument("ERROR: setEntry() is using an invalid position\n");
    else
        list[pos - 1] = item;
}


template<class ItemType>
bool List<ItemType>::remove(int pos) {
    bool canMove;
    canMove = (pos > 0 && pos < getLength());
        if (canMove) {
            for (int i = pos - 1; i < (getLength() - 1); i++) {
                list[i] = list[i + 1];
            }
            numItems--;
            return true;
        }
}

// Utility function to input a track number with some input checking
// to make sure it's a number
int getTrack()
{
    bool inputCheck;
    int trackNumber;

    do
    {
        inputCheck = true;
        cout << "Please enter the track number you'd like to view: ";
        if (!(cin >> trackNumber))
        {
            cout << "Please enter numbers only.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            inputCheck = false;
        }
    } while (!inputCheck);
    return trackNumber;
}


int main()
{
    List<string> songs;
    char goAgain = 'y';
    int trackNumber;
    string trackName;

    // Insert some songs into our list
    songs.insert(1, "One More Saturday Night");
    songs.insert(1, "Friday I'm in Love");
    songs.insert(3, "Sunday Morning Coming Down");
    songs.insert(1, "California Love");

    cout << "Welcome!  There are " << songs.getLength() << " tracks.\n";
    while (goAgain != 'n')
    {
        trackNumber = getTrack();
        try
        {
            trackName = songs.getEntry(trackNumber);
        }
        catch (invalid_argument arg)
        {
            cout << arg.what() << endl;
            trackName = "No Track";
        }


        cout << "Your track name is " << trackName << endl;
        cout << "Go again? (y/n) ";
        cin >> goAgain;
    }
    cout << "Rock on!\n\n";


    // THIS IS THE ACTUAL TESTING PART FOR THE STUDENT AKA ME :)
    ////////////////////////////////////////////////////////////
    //Testing the setEntry 
    cout << "We will replace the first song entry which is " << songs.getEntry(1) << " with NewSong.\n";
    songs.setEntry(1,"NewSong");
    cout << "The new track is now " << songs.getEntry(1) << endl;

    //Testing setEntry Invalid argument
    cout << "Next, we attempted to replace a song outside the range.\n";

    try {
        songs.setEntry(20, "This should fail");
    }
    catch (invalid_argument arg) {
        cout << arg.what() << endl;
    }

    // Testing Remove Functions
    cout << "We will remove song at list 2 which is " << songs.getEntry(2) << endl;
    songs.remove(2);
    cout<< "The updated song is now "<< songs.getEntry(2)<<" and we now have "<< songs.getLength() << " tracks.\n\n";
    //Testing Remove Invalid Argument 
    cout << "Next we will remove a song outside the list: " << endl;
    if (songs.remove(7) == false) {
        cout << "You are trying to delete something that is not there"<<endl;
    }

    //Testing the new insert Function that will alocate more room in list

    cout << "\n As we stands, we have 3 songs out of 5 Chunck sizes"<<endl;
    cout << "We will now insert 3 new songs to get over the limit and test the Insert Function\n";
    cout << "Now inserting two new songs. ";
    songs.insert(4, "Song4");
    songs.insert(5, "Song5");
    

    cout <<"The PlayList length is now:"<< songs.getLength() << endl;
    cout << " Now inserting a song that will go over the Chunk size:";
    songs.insert(6, "song6");

    cout << "The PlayList length is now:" << songs.getLength() << endl;
    cout << "The song at list 6 is " << songs.getEntry(6) << endl;

    return 0;
}
/*

[jgonz337@hills ~]$ ./a.out
Welcome!  There are 4 tracks.
Please enter the track number you'd like to view: 1
Your track name is California Love
Go again? (y/n) n
Rock on!

We will replace the first song entry which is California Love with NewSong.
The new track is now NewSong
Next, we attempted to replace a song outside the range.
ERROR: setEntry() is using an invalid position

We will remove song at list 2 which is Friday I'm in Love
The updated song is now One More Saturday Night and we now have 3 tracks.

Next we will remove a song outside the list:
You are trying to delete something that is not there

 As we stands, we have 3 songs out of 5 Chunck sizes
We will now insert 3 new songs to get over the limit and test the Insert Function
Now inserting two new songs. The PlayList length is now:5
 Now inserting a song that will go over the Chunk size:The PlayList length is now:6
The song at list 6 is song6
[jgonz337@hills ~]$

*/