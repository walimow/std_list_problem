#include <iostream>
#include <list>
#include <forward_list>

#include <cassert>


void   liter(){
    /*
    std::forward_list<int> fl0;
    auto itf=fl0.begin();
    assert( itf==fl0.end() );
    auto fl01 = std::move(fl0);
    assert( itf==fl01.end() );
    */
    
    
    std::list<int> l0{};
    auto it0 = l0.begin();
    std::cout<<"-1-...\n";
    assert(it0==l0.end());
    std::cout<<"-2-...\n";
    auto  l1 = std::move(l0);
    std::cout<<"list iterator move integrity test...\n";
    assert(it0==l1.end());    //will fail in  std::list (in  GNU ISO C++ Library (libstdc++8) and (it seems so) in libc++ , not in msvc std::list , nor in any forward_list or vector in libstdc)
    //auto it1 = std::move(it0);
    //assert(it1==l0.end());  //would not fail
    
    std::cout<<"--passed--\n";
}




int main(int argc, char **argv) {
    liter();
    std::cout << " ...  " << std::endl;
    return 0;
}
