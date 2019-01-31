# std_list_problem
std::list iterator move intigrety test
It seems to me, we have a problem with the iterator integrity, when we move-assign a std::list in it's stdlibc++ implementation. 
On other container (std::forward_list)this moving works without such iterator problems, 
in other implementations (the msvc, sad to say) also.  
