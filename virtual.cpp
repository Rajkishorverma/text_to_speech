#include<iostream>
#include<fstream>
#include <windows.h>
#include<stdio.h>
#include<string.h>
#include<ctime>


using namespace std;

const char* ACCOUNT_FILE = "account.dat";

void registerUser()
{
string username, password;

    cout << "======================" << endl;
    cout << "| REGISTER NEW USER |" << endl;
    cout << "======================" << endl
         << endl;

    cout<<"======================="<<endl;
    cout<<"| ENTER YOUR USERNAME |"<<endl;
    cout<<"======================="<<endl<<endl;
    cin >> username; 

    cout<<"======================="<<endl;
    cout<<"| ENTER YOUR PASSWORD |"<<endl;
    cout<<"======================="<<endl<<endl;
    cin >> password;

        ofstream file;
        file.open(ACCOUNT_FILE); 
        file << username << endl << password;
        file.close();
        cout << "Welcome " << username << "!" << endl;
}

bool loginUser()
{
    cout << "====================" << endl;
    cout << "| USER LOGIN |" << endl;
    cout << "====================" << endl
         << endl;

    string username, password;
    string un, pw;

    cout<<"======================="<<endl;
    cout<<"| ENTER YOUR USERNAME |"<<endl;
    cout<<"======================="<<endl<<endl;
    cin >> username; 

    cout<<"======================="<<endl;
    cout<<"| ENTER YOUR PASSWORD |"<<endl;
    cout<<"======================="<<endl<<endl;
    cin >> password;

    ifstream read(ACCOUNT_FILE);
    getline(read, un);  
    getline(read, pw); 

    if(un == username && pw == password) 
    {
          cout << "Login Successful!" << endl;
        string phrase = "Login Successful";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        return true;
    }
    else
    {
        return false;
    }
}


void help(){
    
  cout << "\n\n";
  system("color e");
  cout << "\t\t\t\t\t\t\t\t===========================\n";
  cout << "\t\t\t\t\t\t\t\t          Commands          \n";
  cout << "\t\t\t\t\t\t\t\t===========================\n\n";
  cout << "\t\t\t\t\t\t\t\t    1.hi / hey / hello / hii  \n";
  cout << "\t\t\t\t\t\t\t\t    2.bye / stop / exit  \n";
  cout << "\t\t\t\t\t\t\t\t    3.what is your name / who are you / tell me about yourself / about   \n";
  cout << "\t\t\t\t\t\t\t\t    4.how are you / whatsup / how is your day       \n";
  cout << "\t\t\t\t\t\t\t\t    5.time / date                 \n";
  cout << "\t\t\t\t\t\t\t\t    6.open notepad      \n";
  cout << "\t\t\t\t\t\t\t\t    7.Opening calculator          \n";
  cout << "\t\t\t\t\t\t\t\t    8.open telegram      \n";
  cout << "\t\t\t\t\t\t\t\t    9.open google\n";
  cout << "\t\t\t\t\t\t\t\t   10.open youtube     \n";
  cout << "\t\t\t\t\t\t\t\t   11.open instagram             \n";
  cout << "\t\t\t\t\t\t\t\t   12.find my ip / ip / find ip       \n";
  cout << "\t\t\t\t\t\t\t\t   13.open chrome             \n";
  cout << "\t\t\t\t\t\t\t\t   10.exit/quit/q            \n";
  cout << "\t\t\t\t\t\t\t\t   11.shutdown/restart       \n";
  cout << "\t\t\t\t\t\t\t\t   12.install                \n";
  system("pause");
  system("cls");
  system("color a");

}

void playmusic(){

    
    int num,num1;
    cout<<"\n1.English \n2.hindi"<<endl;
    cout<<"======================="<<endl;
    cout<<"|      1.English      |"<<endl;
    cout<<"|      2.Hindi        |"<<endl;
    cout<<"======================="<<endl<<endl;
    cout<<"======================="<<endl;
    cout<<"|  Select the Number  |"<<endl;
    cout<<"======================="<<endl<<endl;
    cin>>num;
   

    if(num==1){
        system("color b");
        cout<<"\t\t\t\t\t\t\t\t======================="<<endl;
        cout<<"\t\t\t\t\t\t\t\t|   Available Songs   |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t======================="<<endl<<endl;
        string phrase = "available songs";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        system("color b");
        cout << "\t\t1.Blinding Lights      \t\t\t\t\t\t   2.Sunflower             \n";
        cout << "\t\t3.Stay                 \t\t\t\t\t\t   4.Shape of You       \n";
        cout << "\t\t5.death bed            \t\t\t\t\t\t   6.Bad Liar             \n";
        cout << "\t\t7.I Hate You I Love You\t\t\t\t\t\t   8.Girls Like You       \n";
        cout << "\t\t9.Friends              \t\t\t\t\t\t   10.Flower             \n";
        cout << "\t\t11.Shivers             \t\t\t\t\t\t   12.Bad Habits       \n";
        cout << "\t\t13.Die For You         \t\t\t\t\t\t   14.Counting Stars             \n";
        cout << "\t\t15.Calm Down Calm Down \t\t\t\t\t\t   16.Butter       \n";
        cout << "\t\t17.Kings Queens        \t\t\t\t\t\t   18.Mood             \n";
        cout << "\t\t19.Peaches             \t\t\t\t\t\t   20.Unstoppable       \n";
        cout << "\t\t\t\t\t\t Enter 100 for not available song\n";
        system("color b");
        cout<<"====================================="<<endl;
        cout<<"|  Select the Number to play Song   |"<<endl;
        cout<<"====================================="<<endl<<endl;
        cin>>num1;
        if(num1 == 1){

             cout<< "playing Blinding Lights...."<<endl;
            string phrase = "playing Blinding Lights";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\The_Weeknd_-_Blinding_Lights.mp3");
        }
        else if(num1 == 2){

             cout<< "playing Sunflower...."<<endl;
            string phrase = "playing Sunflower";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Sunflower.mp3");
        }

        else if(num1 == 3){

             cout<< "playing Stay...."<<endl;
            string phrase = "playing Stay";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Stay.mp3");
        }

        else if(num1 == 4){

             cout<< "playing Shape of You...."<<endl;
            string phrase = "playing Shape of You";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\ShapeofYou.mp3");
        }

        else if(num1 == 5){

             cout<< "playing death bed...."<<endl;
            string phrase = "playing death bed";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\deathbed.mp3");
        }

        else if(num1 == 6){

             cout<< "playing Bad Liar...."<<endl;
            string phrase = "playing Bad Liar";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\BadLiar.mp3");
        }

        else if(num1 == 7){

             cout<< "playing I Hate You I Love You...."<<endl;
            string phrase = "playing I Hate You I Love You";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\IHateYouILoveYou.mp3");
        }

        else if(num1 == 8){

             cout<< "playing Girls Like You...."<<endl;
            string phrase = "playing Girls Like You";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\GirlsLikeYou.mp3");
        }

        else if(num1 == 9){

             cout<< "playing Friends...."<<endl;
            string phrase = "playing Friends";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Friends.mp3");
        }

        else if(num1 == 10){

             cout<< "playing Flower...."<<endl;
            string phrase = "playing Flower";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Flower.mp3");
        }

        else if(num1 == 11){

             cout<< "playing Shivers...."<<endl;
            string phrase = "playing Shivers";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Shivers.mp3");
        }
        else if(num1 == 12){

             cout<< "playing Bad Habits...."<<endl;
            string phrase = "playing Bad Habits";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\BadHabits.mp3");
        }

        else if(num1 == 13){

             cout<< "playing Die For You...."<<endl;
            string phrase = "playing Die For You";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\DieForYou.mp3");
        }

        else if(num1 == 14){

             cout<< "playing Counting Stars...."<<endl;
            string phrase = "playing Counting Stars";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\CountingStars.mp3");
        }

        else if(num1 == 15){

             cout<< "playing Calm Down Calm Down...."<<endl;
            string phrase = "playing Calm Down Calm Down";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\CalmDownCalmDown.mp3");
        }

        else if(num1 == 16){

             cout<< "playing Butter...."<<endl;
            string phrase = "playing Butter";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Butter.mp3");
        }

        else if(num1 == 17){

             cout<< "playing Kings Queens...."<<endl;
            string phrase = "playing Kings Queens";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\KingsQueens.mp3");
        }

        else if(num1 == 18){

             cout<< "playing Mood...."<<endl;
            string phrase = "playing Mood";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Mood.mp3");
        }

        else if(num1 == 19){

             cout<< "playing Peaches...."<<endl;
            string phrase = "playing Peaches";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Peaches.mp3");
        }

        else if(num1 == 20){

             cout<< "playing Unstoppable...."<<endl;
            string phrase = "playing Unstoppable";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Unstoppable.mp3");
        }

        else{

            cout << "Opening YouTube....." << endl;
            string phrase = "Opening YouTube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com");
        }
        
    }
    else if (num==2){
        
        system("color d");
        cout<<"\t\t\t\t\t\t\t\t======================="<<endl;
        cout<<"\t\t\t\t\t\t\t\t|   Available Songs   |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t======================="<<endl<<endl;
        string phrase = "available songs";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        system("color d");
        cout << "\t\t1.Aacha Lage Se        \t\t\t\t\t\t   2.Aal Izz Well             \n";
        cout << "\t\t3.Akhiyaan-Mitraz      \t\t\t\t\t\t   4.Behti Hawa Sa Tha Woh       \n";
        cout << "\t\t5.Besabriyaan          \t\t\t\t\t\t   6.Bhagwadhari             \n";
        cout << "\t\t7.Bye                  \t\t\t\t\t\t   8.Bharat Ka Baccha Baccha Jai Shri Ram Bolega       \n";
        cout << "\t\t9.Give Me Som Sunshine \t\t\t\t\t\t   10.Hamari Adhuri Kahani             \n";
        cout << "\t\t11.Jeena Jeena Badlapur\t\t\t\t\t\t   12.Kesariya Tera Ishq Hai Piya       \n";
        cout << "\t\t13.Khairiyat Chhichhore\t\t\t\t\t\t   14.Maan Meri Jaan             \n";
        cout << "\t\t15.Malang Sajna        \t\t\t\t\t\t   16.Naacho Naacho       \n";
        cout << "\t\t17.Namo Namo           \t\t\t\t\t\t   18. Mere Liye Tum Kaafi Ho             \n";
        cout << "\t\t19.Peaches             \t\t\t\t\t\t   20.Unstoppable       \n";
        cout << "\t\t\t\t\t\t Enter 100 for not available song\n";
        system("color d");
        cout<<"====================================="<<endl;
        cout<<"|  Select the Number to play Song   |"<<endl;
        cout<<"====================================="<<endl<<endl;
        cin>>num1;
        if(num1 == 1){

             cout<< "playing Aacha Lage Se...."<<endl;
            string phrase = "Aacha Lage Se";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\AachaLageSe.mp3");
        }
        else if(num1 == 2){

             cout<< "playing Aal Izz Well...."<<endl;
            string phrase = "playing Aal Izz Well";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\AalIzzWell.mp3");
        }

        else if(num1 == 3){

             cout<< "playing Akhiyaan-Mitraz...."<<endl;
            string phrase = "playing Akhiyaan Mitraz";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\AkhiyaanMitraz.mp3");
        }

        else if(num1 == 4){

             cout<< "playing Behti Hawa Sa Tha Woh...."<<endl;
            string phrase = "playing Behti Hawa Sa Tha Woh";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\BehtiHawaSaThaWoh.mp3");
        }

        else if(num1 == 5){

             cout<< "playing Besabriyaan...."<<endl;
            string phrase = "playing Besabriyaan";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\ai\\hindisong\\Besabriyaan.mp3");
        }

        else if(num1 == 6){

             cout<< "playing Bhagwadhari...."<<endl;
            string phrase = "playing Bhagwadhari";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\Bhagwadhari.mp3");
        }

        else if(num1 == 7){

             cout<< "playing Bye...."<<endl;
            string phrase = "playing Bye";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\Bye.mp3");
        }

        else if(num1 == 8){

             cout<< "playing Bharat Ka Baccha Baccha Jai Shri Ram Bolega...."<<endl;
            string phrase = "playing Bharat Ka Baccha Baccha Jai Shri Ram Bolega";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\BharatKaBacchaBacchaJaiShriRamBolega.mp3");
        }

        else if(num1 == 9){

             cout<< "playing Give Me Som Sunshine...."<<endl;
            string phrase = "playing Give Me Som Sunshine";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\GiveMeSomSunshine.mp3");
        }

        else if(num1 == 10){

             cout<< "playing Hamari Adhuri Kahani...."<<endl;
            string phrase = "playing Hamari Adhuri Kahani";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\HamariAdhuriKahani.mp3");
        }

        else if(num1 == 11){

             cout<< "playing Jeena Jeena Badlapur...."<<endl;
            string phrase = "playing Jeena Jeena Badlapur";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\JeenaJeenaBadlapur.mp3");
        }
        else if(num1 == 12){

             cout<< "playing Kesariya Tera Ishq Hai Piya...."<<endl;
            string phrase = "playing Kesariya Tera Ishq Hai Piya";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\KesariyaTeraIshqHaiPiya.mp3");
        }

        else if(num1 == 13){

             cout<< "playing Khairiyat Chhichhore...."<<endl;
            string phrase = "playing Khairiyat Chhichhore";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\KhairiyatChhichhore.mp3");
        }

        else if(num1 == 14){

             cout<< "playing Maan Meri Jaan...."<<endl;
            string phrase = "playing Maan Meri Jaan";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\MaanMeriJaan.mp3");
        }

        else if(num1 == 15){

             cout<< "playing Malang Sajna...."<<endl;
            string phrase = "playing Malang Sajna";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\MalangSajna.mp3");
        }

        else if(num1 == 16){

             cout<< "playing Naacho Naacho...."<<endl;
            string phrase = "playing Naacho Naacho";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\NaachoNaacho.mp3");
        }

        else if(num1 == 17){

             cout<< "playing Namo Namo...."<<endl;
            string phrase = "playing Namo Namo";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\NamoNamo.mp3");
        }

        else if(num1 == 18){

             cout<< "playing  Mere Liye Tum Kaafi Ho...."<<endl;
            string phrase = "playing  Mere Liye Tum Kaafi Ho";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\hindisong\\MereLiyeTumKaafiHo.mp3");
        }

        else if(num1 == 19){

             cout<< "playing Peaches...."<<endl;
            string phrase = "playing Peaches";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Peaches.mp3");
        }

        else if(num1 == 20){

             cout<< "playing Unstoppable...."<<endl;
            string phrase = "playing Unstoppable";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("C:\\Users\\Admin\\OneDrive\\Desktop\\ai\\song\\Unstoppable.mp3");
        }

        else{

            cout << "Opening YouTube....." << endl;
            string phrase = "Opening YouTube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com/");
        }
        
    }
    system("pause");
}

// function to wish user according to time
void wishme(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Boss"<<endl;
        string phrase = "Good Morning Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Boss"<<endl;
        string phrase = "Good Afternoon Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Boss"<<endl;
        string phrase = "Good Evening Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}


int main()
{
    system("cls");
    system("color a");

    cout<<"\t\t\t<============================================= W E L C O M E ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M A VIRTUAL ASSISTANT ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= MY NAME IS SAKUSA ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M HERE TO HELP YOU ==========================================>"<<endl<<endl;

  
    char ch[100]; // to take command from the user

    do
    {
        cout << "==========================" << endl;
        cout << "   | CHOOSE AN OPTION |" << endl;
        cout << "==========================" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "==========================" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            registerUser();
            break;

        case 2:
            if (loginUser())
            {
                STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

                cout << "\n<==================================================================================================>\n\n";
                wishme();
                do
                {
                    system("cls");
                    system("color a");
                    cout << "\n<==================================================================================================>\n\n";
                    cout << endl
                         << "How can I help you, boss...." << endl
                         << endl;

                    string phrase = "How can I help you, boss";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                    cout<<"Your query ===> ";
                    gets(ch);
                    cout<<endl;
                    cout<<"Here is the result for your query ===> ";

                    if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 || strcmp(ch, "hii") == 0)
                    {
                        cout << "Hello Boss..." << endl;
                        string phrase = "Hello Boss...";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                    }

                    else if (strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0)
                    {
                        cout << "Goodbye sir, have a nice day!!!!" << endl;
                        string phrase = "Goodbye sir, have a nice day";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        exit(0);
                    }

                    else if (strcmp(ch, "what is your name") == 0)
                    {
                        cout << "My name is sakusa." << endl;
                        string phrase = "My name is sakusa.";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                    }

                     else if (strcmp(ch, "playsong") == 0 || strcmp(ch, "music") == 0 || strcmp(ch, "song") == 0 || strcmp(ch, "playmusic") == 0)
                    {
                        system("cls");
                        system("color b");
                        cout << "select the language" << endl;
                        string phrase = "select the language";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        playmusic();
                    }

                    else if (strcmp(ch, "shutdown") == 0 || (strcmp(ch, "restart") == 0))
                    {

                        if(strcmp(ch, "shutdown") == 0)
                        {
                        cout << "Your Pc will get shutdown...." << endl;
                        string phrase = "Your Pc will get shutdown";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("shutdown /s");
                        }

                        else
                        {
                        cout << "Your Pc will get restart...." << endl;
                        string phrase = "Your Pc will get restart";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("shutdown /r");
                        }
                        
                    }


                    else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell_me_about_yourself") == 0 || strcmp(ch, "about") == 0)
                    {
                        cout << "\n\t\t\t\t\tI am sakusa, a virtual assistant \n\t\t\t\t\tRajkishor verma has made me. \n\t\t\t\t\tI was created on 08 June ,2023" << endl;
                        string phrase = "I am sakusa, a virtual assistant Rajkishor verma has made me. I was created on 08 June ,2023";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        
                    }

                    else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0)
                    {
                        cout << "I'm good sir, tell me how can I help you.." << endl;
                        string phrase = "I'm good sir, tell me how can I help you";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand); 
                    }


                    else if (strcmp(ch, "open notepad") == 0)
                    {
                        cout << "Opening notepad....." << endl;
                        string phrase = "Opening notepad";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    }

                    else if (strcmp(ch, "open calculator") == 0)
                    {
                        cout << "Opening calculator....." << endl;
                        string phrase = "Opening calculator";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.WindowsCalculator_11.2210.0.0_x64__8wekyb3d8bbwe\\CalculatorApp.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    }

                    else if (strcmp(ch, "open photoshop") == 0)
                    {
                        cout << "Opening photoshop....." << endl;
                        string phrase = "Opening photoshop";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        CreateProcess(TEXT("C:\\Program Files\\Adobe\\Adobe Photoshop 2022\\Photoshop.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    }

                    else if (strcmp(ch, "open bms") == 0 || strcmp(ch, "open Bank Management system") == 0)
                    {
                        cout << "Opening Bank Management system....." << endl;
                        string phrase = "Opening Bank Management system";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        CreateProcess(TEXT("E:\\Bank Management system\\Bank Management system.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    }

                    else if (strcmp(ch, "open chrome")==0)
                    {
                        cout << "Opening chrome....." << endl;
                        string phrase = "Opening chrome";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("start chrome");
                    }

                    else if (strcmp(ch, "open spotify")==0)
                    {
                        cout << "Opening spotify....." << endl;
                        string phrase = "Opening spotify";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("start spotify");
                    }

                    else if (strcmp(ch, "open telegram") == 0)
                    {
                        cout << "Opening telegram....." << endl;
                        string phrase = "Opening telegram";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("start https://web.telegram.org/");
                    }

                    else if (strcmp(ch, "open google") == 0)
                    {
                        cout << "Opening Google....." << endl;
                        string phrase = "Opening Google";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("start https://www.google.com");
                    }

                    else if(strcmp(ch, "open youtube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                    else if (strcmp(ch, "open instagram") == 0)
                    {
                        cout << "Opening Instagram....." << endl;
                        string phrase = "Opening Instagram";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("start https://www.instagram.com");
                    }

                    else if (strcmp(ch, "find my ip") == 0 || strcmp(ch, "find ip") == 0 || strcmp(ch, "ip") == 0)
                    {
                        cout << "Finding your IP address...." << endl;
                        string phrase = "Finding your IP address";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("ipconfig");
                        system("pause");
                    }

                    else if (strcmp(ch, "help") == 0 || strcmp(ch, "command list") == 0)
                    {
                        cout << "you can use only these cammands...." << endl;
                        string phrase = "you can use only these cammands";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                        system("cls");
                        help();
                    
                    }

                    else
                    {
                        cout << "Sorry, could not understand your query. Please try again!" << endl;
                        string phrase = "Sorry, could not understand your query. Please try again";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                    }

                } while (1);
            }
            else
            {
                cout << "\n<==================================================================================================>\n\n";
                cout << "==========================" << endl;
                cout << "X Incorrect Password X" << endl;
                cout << "==========================" << endl
                     << endl;
                string phrase = "Incorrect Password, Please enter the correct password";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
            }
            break;

        case 3:
        {
            cout << "\n<==================================================================================================>\n\n";
            cout << "================================" << endl;
            cout << "| PROGRAM TERMINATED |" << endl;
            cout << "================================" << endl;
            string phrase = "PROGRAM TERMINATED";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            exit(0);
        }
            break;

        default:{
            cout << "Invalid choice. Please try again!" << endl;
            string phrase = "Invalid choice, Please try again";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            break;
        }
        break;
        }
    } while (1);

    return 0;
}


