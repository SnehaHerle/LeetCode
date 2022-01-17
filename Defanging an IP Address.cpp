class Solution {
public:
    string defangIPaddr(string address) {
    string str;
    for(int itr = 0; itr < address.size(); itr++){
        if(address[itr] == '.') str += "[.]";                
        else str += address[itr];                
    }            
    return str;
}
};
