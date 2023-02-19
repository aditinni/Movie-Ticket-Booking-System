//give movie name as Movie1,Movie2 and Movie3
#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
class CardException:public exception
{
    public:
    const char* what()const throw()
    {
        return "You have entered less than 16 digits";
    }
};

class CvvException:public exception
{
   public:
    const char* what()const throw()
    {
        return "Cvv must be of 3 digit";
    }

};
class DateException:public exception
{

    public:
         const char* what()const throw()
    {
        return "A year has only 12 months!!";
    }
};
class YearException:public exception
{
    public:
         const char* what()const throw()
    {
        return "Year below 2023 not excepted!!";
    }


};
class Booking
{

    public:
       string movie;
       int pmov1 = 500;
       int pmov2 = 300;
       int pmov3 = 550;
       int t;

public:
    void display()
    {
        int i;
        int ch;
        for(i=0;i<50;i++)
        {
            cout<<"*";
        }
        cout<<"\n";
        for(i=0;i<14;i++)
        {

            cout<<"-";
        }
        cout<<"WELCOME TO MOVIE DEKHO";
        for(i=0;i<14;i++)
        {
            cout<<"-";
        }
        cout<<"\n";
        for(i=0;i<50;i++)
        {

            cout<<"*";
        }
        cout<<"\n";

        do
        {

            cout<<"Press 1. Display Movies 2.Timing of Movies 3.Cost of Ticket 4.Exit"<<endl;
            cout<<"Enter the choice"<<endl;
            cin>>ch;

            switch(ch)
            {
                int i;

            case 1:
                cout<<"----Movie1----"<<endl;
                 cout<<"----Movie2----"<<endl;
                  cout<<"----Movie3----"<<endl;
                  break;

            case 2:
                cout<<"Movies available are Movie1, Movie2,Movie3"<<endl;
                cout<<"Enter the Movie to know timing"<<endl;
                cin>>movie;

                if(movie=="Movie1")
                {
                    cout<<"Timing of "<<movie<<" are 10:45am, 2:00pm, 5:00pm"<<endl;
                }
                else if(movie=="Movie2")
                {

                    cout<<"Timing of "<<movie<<" are 11:45am, 3:00pm, 7:00pm"<<endl;
                }

                else if(movie=="Movie3")
                {
                    cout<<"Timing of "<<movie<<" are 11:00am, 4:00pm , 9:00pm"<<endl;
                }
                break;

            case 3:

                cout<<"Enter the movie name"<<endl;
                cin>>movie;

                if(movie=="Movie1")
                {

                    cout<<"Cost of Ticket is: "<<pmov1<<endl;
                }
                else if(movie=="Movie2")
                {

                    cout<<"Cost of Ticket is: "<<pmov2<<endl;
                }
                else if(movie=="Movie3")
                {
                    cout<<"Cost of Ticket is: "<<pmov3<<endl;
                }
                break;


            case 4:
                   cout<<"Enter 0 to exit"<<endl;
                   cin>>ch;
                   break;

                   default: cout<<"Wrong choice"<<endl;





            }
        }while(ch!=0);





    }
};

class BookingT:public Booking
{
public:
    char Row;
    int choice;
    int Ticketno;
    int seat[100];
    int Date;
    int m;
    int y;
    string timing;



public:
    void SelectRow()
    {

            cout<<"Select Row"<<endl;
            cin>>Row;
            if(Row=='A'||Row=='B'||Row=='C'||Row=='D')
            {

                cout<<"Row selected "<<Row<<endl;
            }
            else
            {

                cout<<"You have entered wrong Row!"<<endl;
                cout<<"Select row between A to D"<<endl;
                cin>>Row;

            }

    }
    void DateCinema()
    {
        cout<<"Enter the date of booking"<<endl;
        cin>>Date;
        if(Date<0||Date>28)
        {

            cout<<"Enter date between 1 to 28"<<endl;
            cin>>Date;
        }
        cin>>m;
        if(m!=2)
        {

            cout<<"All the film ticket are available in the month of febuary now"<<endl;
            cin>>m;
        }
        cin>>y;
        if(y!=2023)
        {

            cout<<"Enter the current year"<<endl;
            cin>>y;
        }


    }
        void EnterTicket()
        {
            int i;
            for(i=0;i<52;i++)
            {

                cout<<"#";

            }
            cout<<"\n";
            for(i=0;i<14;i++)
            {

                cout<<"-";
            }
            cout<<"WELCOME TO TICKET COUNTER";
            for(i=0;i<14;i++)
            {

                cout<<"-";
            }

            cout<<"\n";
            for(i=0;i<52;i++)
            {

                cout<<"#";
            }
            cout<<"\n";
            cout<<"Which Movie Ticket you want :)"<<endl;
            cout<<"Movies Available: Movie1, Moive2 and Movie3"<<endl;
             cin>>movie;
            cout<<"Enter the no. of ticket"<<endl;
            cin>>Ticketno;
        }
        void SelectSeat()
        {
            int i;
            cout<<"Select the seat"<<endl;
            for(i=0;i<Ticketno;i++)
            {
                int j;
                cin>>seat[i];

                for(j=0;j<i;j++)
                {
                if(seat[i]<0||seat[i]>100||seat[i]==seat[j])
                {

                    cout<<"Enter seat number between 1 to 100 or distinct seat Number "<<endl;
                     for(i=0;i<Ticketno;i++)
                    {

                        cin>>seat[i];
                    }
                }
                }


            }
            cout<<"Seat selected: "<<endl;
            for(i=0;i<Ticketno;i++)
            {

                cout<<"Seat No. "<<seat[i]<<endl;
            }




        }

         void Paying()
         {
             int pay;

             if(movie=="Movie1")
             {

                 cout<<"Pay Amount: Rs. "<<pmov1*Ticketno<<endl;
                 cout<<"press 1  to pay or 0 to decline!"<<endl;
                 cin>>pay;
                 if(pay==1)
                 {

                     cout<<"Amount"<<pmov1*Ticketno<<" successfully paid"<<endl;
                 }
                 else if(pay==0)
                 {

                     cout<<"Payment Declined"<<endl;
                 }
             }

             if(movie=="Movie2")
             {

                 cout<<"Pay Amount: Rs. "<<pmov2*Ticketno<<endl;
                 cout<<"press 1 to pay or 0 to decline!"<<endl;
                 cin>>pay;
                 if(pay==1)
                 {

                     cout<<"Amount"<<pmov2*Ticketno<<" successfully paid"<<endl;
                 }
                 else if(pay==0)
                 {
                     cout<<"Payment Declined"<<endl;


                 }
             }

             if(movie=="Movie3")
             {

                 cout<<"Pay Amount: Rs. "<<pmov3*Ticketno<<endl;
                 cout<<"Press 1 to pay or 0 to decline!"<<endl;
                 cin>>pay;
                 if(pay==1)
                 {

                     cout<<"Amount"<<pmov3*Ticketno<<" successfully paid"<<endl;
                 }
                 else
                 {
                     cout<<"Payment Declined"<<endl;
                 }
             }
             cout<<"\n";
         }

         void Timing()
         {

             if(movie=="Movie1")
             {
                 cout<<"Select the time slot"<<endl;
                cin>>timing;
                 if(timing=="10:45am"||timing=="2:00pm"||timing=="5:00 pm")
                 {
                     cout<<"Timing selected: "<<timing<<endl;

                 }
                 else
                 {

                     cout<<"Enter correct timing"<<endl;
                     cin>>timing;
                 }
             }

             if(movie=="Movie2")
             {
                 cout<<"Select the time slot"<<endl;
                 cin>>timing;
                 if(timing=="11:45 am"||timing=="3:00 pm"||timing=="7:00 pm")
                 {
                     cout<<"Timing selected: "<<timing<<endl;

                 }
                   else
                 {

                     cout<<"Enter correct timing"<<endl;
                     cin>>timing;
                 }

             }

             if(movie=="Movie3")
             {
                 cout<<"Select the time slot"<<endl;
                 cin>>timing;
                 if(timing=="11:00 am"||timing=="4:00 pm"||timing=="9:00 pm")
                 {
                     cout<<"Timing selected: "<<timing<<endl;

                 }
                  else
                 {

                     cout<<"Enter correct timing"<<endl;
                     cin>>timing;
                 }
             }
         }

         void Ticket()
         {

             int i;
             for(i=0;i<50;i++)
             {

                 cout<<"#";

             }
           cout<<"\n";
            for(i=0;i<18;i++)
            {

                cout<<"!";
            }
            cout<<"CINEMA TICKET";
            for(i=0;i<20;i++)
            {
                cout<<"!";
            }
            cout<<"\n";

             int c = rand();
             int d= rand();
             cout<<"   THEATER NO. "<<c%6;
             cout<<" Row: "<<Row<<endl;
             for(i=0;i<Ticketno;i++)
             {

                 cout<<"    Seat No. \t"<<seat[i]<<endl;
             }
             cout<<"   Movie:   "<<movie<<endl;

             cout<<"   DATE: "<<Date<<"/ "<<m<<"/"<<y<<endl;
             cout<<"    Time:   "<<timing <<endl;
             if(movie=="Movie1")
             {

                 cout<<"  Price: Rs. "<<Ticketno*pmov1<<endl;
             }
             else if(movie=="Movie2")
             {

                 cout<<"  Price: Rs. "<<Ticketno*pmov2<<endl;
             }
             else if(movie=="Movie3")
             {

                 cout<<"    Price: Rs. "<<Ticketno*pmov3<<endl;
             }
             cout<<"    ID:      "<<d<<endl;
             time_t tim = time(0);
             tm *gottime = localtime(&tim);
              cout<<"    Ticket Produced at: "<<gottime->tm_hour<<":"<<gottime->tm_min<<endl;

             for(i=0;i<50;i++)
             {

                 cout<<"#";

             }
             cout<<"\n";





         }





};
class Payment
{
    Booking t = Booking();
public:
     int seat[100];
    unsigned long long card;
    char Name[30];
    string cvv;
    string c;
    int month;
    int year;

public:


     void design()
     {
         int i;
         for(i=0;i<40;i++)
         {
             cout<<"#";
         }
         cout<<"\n";
         cout<<"---------------PAYMENT SECTION---------"<<endl;
         for(i=0;i<40;i++)
         {

             cout<<"#";
         }
         cout<<"\n";


     }
     void NameonCard()
         {
             cout<<"Enter the name on card"<<endl;
             cin>>Name;



         }

         void NumberonCard()
         {

             try
             {
                 cout<<"Enter the number on card"<<endl;
                 cin>>card;
                  c = to_string(card);
                 if(c.length()!=16)
                 {

                     CardException c;
                     throw c;
                 }


             }
              catch(exception& e)
                 {
                     do{

                     cout<<e.what()<<endl;
                     cout<<"Enter 16 digits"<<endl;
                     cin>>card;
                    c = to_string(card);
                     }while(c.length()!=16);


                 }

         }

         void CvvonCard()
         {

             try
             {

                 cout<<"Enter the Cvv on the Card"<<endl;
                 cin>>cvv;
                 if(cvv.length()!=3)
                 {

                     CvvException c1;
                     throw c1;
                 }

             }

             catch(exception& e1)
             {
                 do{
                 cout<<e1.what()<<endl;
                 cout<<"Enter the cvv again!"<<endl;
                 cin>>cvv;
                 }while(cvv.length()!=3);
             }
         }
         void ExpiryDate()
         {

            try
            {

                cout<<"Enter the expiry month of Card"<<endl;
                cin>>month;
                if(month<0||month>12)
                {

                    DateException d;
                    throw d;
                }
            }

            catch(exception& e3)
            {
                do{
                cout<<e3.what()<<endl;
                cout<<"Enter again"<<endl;
                cin>>month;
                }while(month<0||month>12);


            }
         }
         void ExpiryYear()
         {
             try
             {


             cout<<"Enter the expiry Year of card"<<endl;
             cin>>year;
             if(year<2023)
             {

                 YearException y;
                 throw y;
             }
            }

            catch(exception& e4)
            {
                do{
                cout<<e4.what()<<endl;;
                cout<<"Enter again"<<endl;
                cin>>year;
                }while(year<2023);
            }


         }


};
int main()
{
    BookingT b = BookingT();
    Payment p =  Payment();
    b.display();
    int c;

    do
    {

        cout<<"1.Book A Ticket 2.Do The Payment 3.Generate Ticket 4.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            b.EnterTicket();
             b.SelectRow();
             b.SelectSeat();
             b.DateCinema();
              b.Timing();
              break;

        case 2:

            p.design();
              p.NameonCard();
              p.NumberonCard();
               p.CvvonCard();
            p.ExpiryDate();
               p.ExpiryYear();
              b.Paying();
              break;
        case 3:
             b.Ticket();
             break;

        case 4:
            cout<<"Enter 0 to stop!"<<endl;
            cin>>c;
            break;

           default: cout<<"Enter correct choice"<<endl;





        }
    }while(c!=0);
return 0;
}

