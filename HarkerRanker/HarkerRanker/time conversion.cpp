//#include <string>
//#include <sstream>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
///*
// * Complete the timeConversion function below.
// */
//string timeConversion(string s) {
//    /*
//     * Write your code here.
//     */
//    string tmptime(s);
//    int h_time = 0;
//    //tmptime.replace(2,s.length()-2,"");
//    tmptime.erase(2, s.length() - 2);
//    stringstream ss(tmptime);
//    ss >> h_time; //get hour
//
//    if (s.find("AM")!= -1)
//    {
//        //s.replace(s.length()-2,2,"");
//        s.erase(s.length() - 2, 2);
//        if (h_time == 12)
//            s.replace(0, 2, "00");
//    }
//
//    if (s.find("PM") != -1)
//    {
//        //s.replace(s.length()-2,2,"");
//        s.erase(s.length() - 2, 2);
//        if (h_time != 12)
//            h_time += 12;
//        stringstream iss;
//        iss << h_time;
//        iss >> tmptime;
//        s.replace(0, 2, tmptime);
//    }
//    return s;
//
//}
//
//int main()
//{
//   // ofstream fout(getenv("OUTPUT_PATH"));
//
//    string s;
//    getline(cin, s);
//
//    string result = timeConversion(s);
//
//    cout << result << endl;
//   // fout << result << "\n";
//
//    //fout.close();
//
//    return 0;
//}
