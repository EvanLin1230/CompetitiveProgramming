/*
    # Type of Time:
    # 00:12:12AM => No change(00, AM)
    # 12:12:12AM => No change(00, AM)
    # 00:12:12PM => NO change(00, AM)
    # 06:12:12PM => change(06, PM) -> (18)
    # 12:12:12PM => change(12, PM) -> (00)
*/

string intToString(int integer){
    string tempStr;
    
    // integer = 124
    while(integer){
        //tempInt = 124
        int tempInt = integer;
        int tenCount = 0;
        
        while(tempInt>10){            
            tempInt/=10;
            tenCount ++;
        }
        
        // tempStr = 1
        // integer = 24
        tempStr += to_string(tempInt);
        integer %= int(pow(10, tenCount));
    }
    return tempStr;
}

string timeConversion(string s) {
    //PM or AM
    string format = s.substr(8,10);
    int hours = stoi(s.substr(0,2));
    //return intToString(hours);
    if(format == "PM"){
        if(hours > 0 && hours < 12){
            hours += 12;
            s = s.replace(0,2,intToString(hours));
        }
        else if (hours == 0) {
            s = s.replace(0,2,"00");
        }
    }
    else{
        if(hours == 24){
            s = s.replace(0,2,"00");
        }
        else if (hours == 12) {
            s = s.replace(0,2,"00");
        }
    }
    return s.substr(0,8);
}
