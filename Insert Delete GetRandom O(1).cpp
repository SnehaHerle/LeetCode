//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3358/

//Insert Delete GetRandom O(1)

/*
unordered_map has an average complexity of O(1) for insertion and deletion. 
But you cannot perform random access there as you have no index like an array for random access.
To perform Random Access we will use a vector along with this unordered_map.
*/

class RandomizedSet 
{
    unordered_map<int, int> map;  //(element, index)
    vector<int> vec;  //element
    int n = 0; //for size of array as size() will take O(N).
    
public:
    RandomizedSet() {}
    
    bool insert(int val) 
    {
      if(map.count(val))  //O(1)
          return false;
        
      map[val] = n++;    //insert the new key and its index in the map.
      vec.push_back(val);  //insert the new key in the vector also to keep track.
      return true;
    }
    
    bool remove(int val) 
    {
       if(!map.count(val))
          return false;
    
        int index = map[val];   //store the index of the value to be deleted.
        int last_element_vec = vec.back();   //store the last element in the vector.
        vec[index] = last_element_vec;  //insert the last element at the position of index in the vector.
        map[last_element_vec] = index;  //change the position of the last element of vector in map.
        vec.pop_back();   //remove last elementof vector.
        n--;
        map.erase(val);   //remove the key,index from map.
        return true;
    }
    
    int getRandom() 
    {
     return vec[rand()%n];
    }
};
