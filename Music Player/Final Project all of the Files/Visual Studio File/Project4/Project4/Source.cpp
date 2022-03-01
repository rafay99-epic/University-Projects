#include<iostream>
#include<string>

using namespace std;

struct node {
	int song_id;
	string song_name;
	string singer_name;
	string movie;
	node * next;
	node * prev;
};

class dll {
	node *front = nullptr;
	node *rare = nullptr;

public:

	void insert(int value, string song, string singer, string movie) {

		node *temp = new node();

		if (front == nullptr)
		{

			temp->song_id = value;
			temp->singer_name = singer;
			temp->song_name = song;
			temp->movie = movie;
			temp->prev = nullptr;
			temp->next = front;
			front = temp;
			rare = temp;
		}
		else
		{
			int i = 0;
			if (checkD(value,i))
			{
				
				if (i==1) {
					cout << "The Id already exit in the Music Player" << endl;
					return;
				}
				else
				{
					temp->song_id = value;
					temp->singer_name = singer;
					temp->song_name = song;
					temp->movie = movie;
					rare->next = temp;
					temp->prev = rare;
					temp->next = nullptr;
					rare = temp;
				}
			}
			
		
		}
	}

	int checkD(int value,int i) 
	{
		
		int a = value;
		node * temp= front;
		while (temp != nullptr)
		{
			//cout << "Inside the Loop" << endl;
			if (a == temp->song_id)
			{
				i = 1;
				return i;
			}

			temp = temp->next;
		}

		
	}
	void delete_node() {
		int song_id;

		cout << "\nEnter the Song ID to delete : ";
		cin >> song_id;

		delete_song(song_id);
	}

	void delete_song(int song_id)
	{
		node * current = front;
		while ((song_id != current->song_id) || (current != nullptr)) {
			if (song_id == current->song_id)
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				delete current;
				cout << "Song Deleted.\n";
				return;
			}
			current = current->next;
		}
	}
	void display()
	{
		node *current = front;

		if (front == nullptr)
		{
			cout << "No Song Exit." << endl;
		}
		else
		{
			while (current != nullptr)
			{

				//system("cls");
				cout << "song ID : " << current->song_id << "\n";
				cout << "Singer Name : " << current->singer_name << "\n";
				cout << "Song : " << current->song_name << "\n";
				cout << "Movie Name : " << current->movie << "\n";
				cout << "_____________________________________________________\n\n\n";


				current = current->next;
			}
		}
		
		cout << "\nAll the information displayed.\n";
	}

	void dispaly_reverse() {
		node *current = rare;

		while (current != nullptr) {
			//	system("cls");
			cout << "song ID : " << current->song_id << "\n";
			cout << "Singer Name : " << current->singer_name << "\n";
			cout << "Song : " << current->song_name << "\n";
			cout << "Movie Name : " << current->movie << "\n";
			current = current->prev;
		}
		cout << "\nAll the information displayed.\n";
	}

	void menu() {
		int choice;
		do {
			//system("cls");
			cout << "\n****************Audio Player****************\n";
			cout << "1.Display all songs.\n";
			cout << "2.Display the songs in reverse order.\n";
			cout << "3.Insert the song.\n";
			cout << "4.Sort the songs.\n";
			cout << "5.Delete the song.\n";
			cout << "\nEnter your choice : ";
			cin >> choice;


			condition_checker(choice);

		} while (choice != 0);
		

	}

	void condition_checker(int choice) {
		if (choice == 0) {
			cout << "\nGood Bye ";
		}
		else if (choice == 1) {
			cout << "\n****************All Playlist****************\n";
			display();
		}
		else if (choice == 2) {
			cout << "\n****************Reverse Playlist****************\n";
			dispaly_reverse();
		}
		else if (choice == 3) {
			cout << "\n****************Insertion in a Playlist****************\n";
			sending_data();
		}
		else if (choice == 4) {
			cout << "\n****************Sorting****************\n";
			cout << "The songs has been sorted.\n";
			sort();
		}
		else if (choice == 5) {
			cout << "\n****************Deleation****************\n";
			delete_node();
		}
		else {
			cout << "\nSome error found in insertion of data check manually and try again.";
		}
	}

	void sending_data()
	{
		int song_id;
		string song_name;
		string singer_name;
		string movie;

		cout << "Enter the song id : ";
		cin >> song_id;
		cin.ignore();
		cout << "\nEnter the song name : ";
		getline(cin, song_name);
		cout << "\nEnter the Singer name : ";
		getline(cin, singer_name);
		cout << "\nEnter the name of movie : ";
		getline(cin, movie);
		insert(song_id, song_name, singer_name, movie);
	}

	void sort() {
		node *current = front;
		node *curr = front->next;
		while (current != nullptr) {
			if (current->song_id < curr->song_id) {
				swap(current->song_id, curr->song_id);
				swap(current->singer_name, curr->song_name);
				swap(current->singer_name, curr->singer_name);
				swap(current->movie, curr->movie);
			}
			current = current->next;
			if (current->next == curr->next) {
				cout << "Data sorted.";
				return;
			}
			curr = curr->next;
		}
	}
};

int main() {
	dll d;
	d.menu();
	system("pause");
	return 0;
}