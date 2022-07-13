vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<string>::iterator iter;
    vector<int> result;
    for(iter=queries.begin();iter!=queries.end();iter++){
        if(find(strings.begin(),strings.end(),*iter)!=strings.end()){
            result.push_back(count(strings.begin(),strings.end(),*iter));
        }
        else{
            result.push_back(0);
        }
    }
    return result;
}
