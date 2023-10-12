// Jose Gonzalez Assignment 0 Getting started

#include <iostream>
#include <string>
using namespace std;

// Class function
class Song {
private:
	string name, artist;

public:
	void setName(string n);
	void setArtist(string a);
	string getName();
	string getArtist();
};

//Initiation
void Song::setName(string n) {
	name = n;
}
void Song::setArtist(string a) {
	artist = a;
}
string Song::getName() {
	return name;
}
string Song::getArtist() {
	return artist;
}
// Example output using get line
int main() {
	string name, artist;

	cout << "Plese enter the name of the song: " << endl;
	getline(cin,name);

	cout << "Please enter the name of the artist: " << endl;
	getline(cin, artist);

	Song Example;

	Example.setName(name);
	Example.setArtist(artist);

	cout <<endl<< "The name of the song is " << Example.getName() << endl;
	cout << "The name of the artist is " << Example.getArtist() << endl;



	return 0;
}
/* Sample Output

[jgonz337@hills ~]$ ./a.out
Plese enter the name of the song:
Ring of Fire
Please enter the name of the artist:
JohnnyCash

The name of the song is Ring of Fire
The name of the artist is JohnnyCash
[jgonz337@hills ~]$


*/