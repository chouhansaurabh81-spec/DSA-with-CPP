class MyCalendar {
public:
vector<pair<int,int>> bookings;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto booking : bookings){
            int oldstart = booking.first;
            int oldend = booking.second;

            if(startTime < oldend && endTime > oldstart){
                return false;
            }
        }
        bookings.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */