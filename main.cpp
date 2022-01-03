#include <iostream>
#include <list>

void show_list(std::list <std::string> g)
{
    std::list <std::string> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        std::cout << '\t' << *it;
   std::cout << '\n';
}

int main() {
    std::string name;
    std::list <std::string> list;
    while(true) {
        std::cin >> name;
        if(name == ":q"){
            break;
        }
        list.push_back(name);
    }
    list.sort();
    show_list(list);
    return 0;
}
