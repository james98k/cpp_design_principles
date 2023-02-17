#include <iostream>
#include <algorithm>

using namespace std;

class node {

	public :
		string title;
		string author;
		string length;

		node * next_node;
		node * prev_node;
		node * head;

		node(string title, string author, string length);
		void set_next_node();
		void delete_current_node();
		void change_position_of_node();

	private :
		

}

class doubly_linked_list(){
	
	public : 
		int * next_node;
		int * prev_node;

	private : 
		int * head;

}


class music_player{
	public : 
		int add_new_song();
		int delete_song_by_number(int number);
		int change_order(int target_position);
		int set_playlist_repeat();

	private :
		node * head;


	
	int add_new_song(){
		
	}
}


class 



int main(){



}
