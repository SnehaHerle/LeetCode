string restoreString(string s, vector<int>& indices) {
	const int n = s.size();
	for(int i=0;i<n;++i){
		while(indices[i]!=i){
			swap(s[i],s[indices[i]]);
			swap(indices[i],indices[indices[i]]);
		}
	}
	return s;
}
