//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/543/week-5-june-29th-june-30th/3376/

//Word Search II

//DFS - BACKTRACKING

class Solution {
    public List<String> findWords(char[][] board, String[] words) {
        if(board == null || board.length == 0 || words == null) throw new IllegalArgumentException();
        
        List<String> res = new ArrayList<>();
        boolean flag = false;
        for(String word : words){
            flag = false;
            for(int i = 0; i < board.length; i++){
                for(int j = 0; j < board[0].length; j++){
                    if(board[i][j] == word.charAt(0)){
                        boolean[][] visited = new boolean[board.length][board[0].length];
                        if(dfs(board, i, j, word, visited)){
                            res.add(word);
							// If able to find the word then we would break out of the loop
							// to check for the next word
                            flag = true;
                            break;
                        }
                    }
                }
                if(flag) break;
            }
        }
        
        return res;
    }
    
    boolean dfs(char[][] board, int i, int j, String word, boolean[][] visited){
        if(word.length() == 0) return true;
        if(i < 0 || i >= board.length 
           || j < 0 || j >= board[0].length 
           || board[i][j] != word.charAt(0) || visited[i][j]) return false;
        
		// marking the current character as visited = true
        visited[i][j] = true;
        boolean res = dfs(board, i - 1, j, word.substring(1), visited)
                        || dfs(board, i, j - 1, word.substring(1), visited)
                            || dfs(board, i, j + 1, word.substring(1), visited)
                                || dfs(board, i + 1, j, word.substring(1), visited);
		
		// marking the current character as visited = false
        visited[i][j] = false;
        return res;
    }
    
}
