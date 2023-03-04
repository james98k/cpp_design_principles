#include "header.h";


node::node(string title, string author, string length){
	title = title;
	author = author;
	length = length;
};

void node::print_node(){
	cout<<number<<"."<< title << "\t" << author<< "\t " << length;
}
void node::set_node_number(int number){
	number = number;
}

linked_list::linked_list(){

	this->head = 0x0;
	this->tail = 0x0;
	count = 0;
};

void linked_list::delete_ll(){

	while(head != 0x0){
		
	}
};

void linked_list::delete_node(node t){
	node * tmp;
	tmp = &t;

	//if ll is empty;
	if(head == 0x0)
		return;
	else{
		//if ll has only one node;
		if(head == tail){
			free(tmp);
			head = 0x0;
			tail = 0x0;
		}
		//if ll has two or more node;
		else
			if(tmp == head)
				head = tmp->next_node;
			else if(tmp == tail)
				tail = tmp->prev_node;
			else{
				tmp->prev_node->next_node = tmp->next_node;
				tmp->next_node->prev_node = tmp->prev_node;
			}
		count--;
	};
};

void linked_list::add_new_song(node t){
	node * tmp;
	tmp = &t;

	count++;
	tmp->set_node_number(count);
	
	if(head != 0x0 && tail != 0x0){
		tmp->prev_node = tail->prev_node;
		tmp->next_node = 0x0;
		tail = tmp;
		
	}
	else{
		head = tmp;
		tail = tmp;
	}
}


















