// https://www.youtube.com/watch?v=AXjmTQ8LEoI&t=801s

// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3329/

// Implement Trie (Prefix Tree)

// https://medium.com/basecs/trying-to-understand-tries-3ec6bede0014


class TrieNode
{
public:
    
    char data; 
    unordered_map<char, TrieNode*> children;   //unordered_map to hold all its children.
    bool isEndingHere;    //to check if this node is the end of the word.
    
    TrieNode(char data)
    {
        this->data = data;
        isEndingHere = false;
    }
};


class Trie 
{
    TrieNode* root;
    
    void insertWord(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            root->isEndingHere = true;
            return;
        }
        
        TrieNode* child;
        
        //find() returns the position of char if present and end of hashmap if it is not present.
        
        if(root->children.find(word[0]) != root->children.end())   
            child = root->children[word[0]];
        
        else
        {
            root->children[word[0]] = new TrieNode(word[0]);
            child = root->children[word[0]];
        }
        
        //word.substr(1) will change the word to (1,end)
        
        insertWord(child, word.substr(1));
    }
    
    int doSearch(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            if(root->isEndingHere)
                return 1;
            
            return 0;
        }
        
        if(root->children.find(word[0])!=root->children.end())
            return doSearch(root->children[word[0]], word.substr(1));
        
        return -1;
    }
    
public:
    
    // Initialize with '\0'  character => initially the trie is empty
    Trie() 
    {
        root = new TrieNode('\0');
    }
    
    // This recursively calls our inbuilt function
    void insert(string word) 
    {
        insertWord(root, word);
    }
    
    // Returns if the word is in the trie.
    bool search(string word) 
    {
        if(doSearch(root, word) == 1)
            return true;
        
        return false;
    }
    
    // Returns if there is any word in the trie that starts with the given prefix.
    bool startsWith(string prefix) 
    {
        int res = doSearch(root, prefix);
        
        if(res>=0)
            return true;
        
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
