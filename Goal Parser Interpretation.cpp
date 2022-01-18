class Solution {
public:
    string interpret(string command) {
        string result;
        for(int i = 0; i < command.length(); i++){
            if(command[i] == 'G')
                result = result + command[i];
            else if( command[i] == '(' && command[i+1] == ')'){
                result = result + 'o';
                i++;
            }
            else{
                result = result + 'a' + 'l';
                i+=3;                
            }
                
        }
        return result;
    }
};
