#include <iostream>
#include <algorithm>
using namespace std;


#include "header.hpp"

int main(){

	//todo 
	//new list
	LinkedList music_player;
	Node tmp;
	
	tmp.set_node("orange", "lee bada", "3.34");
	tmp.print_node();
	music_player.add_new_song(tmp);
	tmp.print_node();
	tmp.set_node("Tv's On", "lee bada", "3.34");
	music_player.print_list();




	//add node
	//print node
	//delete node


}
