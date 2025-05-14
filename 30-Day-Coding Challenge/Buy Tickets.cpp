//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int timeToBuyTickets(vector<int> tickets, int k) {
//    
//    int trackindex = k;
//    int Seconds = 0;
//    while (tickets[trackindex] != 0)
//    {
//        
//        tickets[0]--;
//        Seconds++;
//        if (tickets[0] == 0)
//        {
//            if (tickets[0] == tickets[trackindex])
//            {
//                tickets.erase(tickets.begin());
//                trackindex = (trackindex - 1 + tickets.size()) % tickets.size();
//                break;
//            }
//            else
//            {
//                tickets.erase(tickets.begin());
//                trackindex = (trackindex - 1 + tickets.size()) % tickets.size();
//            }
//        }
//        else
//        {
//            rotate(tickets.begin(), tickets.begin() + 1, tickets.end());
//            trackindex = (trackindex - 1 + tickets.size()) % tickets.size();
//        }
//    }
//    return Seconds;
//}
