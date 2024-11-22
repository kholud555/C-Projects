#pragma once

#include <iostream>
#include "clsDate.h"
#include "queue"
#include "stack"

using namespace std;

class clsQueueLine
{

private:

    short _TotalTickets = 0;
    short _AverageServeTime = 0;
    string _Prefix = "";

    class clsTicket
    {
    private:

        short _Number = 0;
        string _Prefix;
        string _TicketTime;
        short _WaitingClients = 0;
        short _AverageServeTime = 0;
        short _ExpectedServeTime = 0;

    public:
        clsTicket(string Prefix, short Number, short WaitingClients, short AverageServeTime)
        {

            _Number = Number;
            _TicketTime = clsDate::GetSystemDateTimeString();
            _Prefix = Prefix;
            _WaitingClients = WaitingClients;
            _AverageServeTime = AverageServeTime;
        }

        string Prefix()
        {
            return _Prefix;

        }
        short Number()
        {
            return _Number;
        }

        string FullNumber()
        {
            return _Prefix + to_string(_Number);
        }

        string TicketTime()
        {
            return _TicketTime;
        }

        short WaitingClients()
        {
            return _WaitingClients;
        }

        short ExpectedServeTime()
        {
            return _AverageServeTime * _WaitingClients;
        }

        void Print()
        {
            cout << "\n\t\t\t  _______________________\n";
            cout << "\n\t\t\t\t    " << FullNumber();
            cout << "\n\n\t\t\t    " << _TicketTime;
            cout << "\n\t\t\t    Wating Clients = " << _WaitingClients;
            cout << "\n\t\t\t      Serve Time In";
            cout << "\n\t\t\t       " << ExpectedServeTime() << " Minutes.";
            cout << "\n\t\t\t  _______________________\n";


        }
    };

public:

    queue <clsTicket> QueueLine;

    clsQueueLine(string Prefix, short AverageServeTime)
    {
        _Prefix = Prefix;
        _TotalTickets = 0;
        _AverageServeTime = AverageServeTime;
    }



    void IssueTicket()
    {
        _TotalTickets++;
        clsTicket Ticket(_Prefix, _TotalTickets, WaitingClients(), _AverageServeTime);
        QueueLine.push(Ticket);

    }

    int WaitingClients()
    {
        return QueueLine.size();

    }


    string WhoIsNext()
    {
        if (QueueLine.empty())
            return "No Clients Left.";
        else
            return QueueLine.front().FullNumber();

    }

    bool ServeNextClient()
    {
        if (QueueLine.empty())
            return false;


        QueueLine.pop();

        return true;

    }

    short ServedClients()
    {
        return _TotalTickets - WaitingClients();
    }

    void PrintInfo()
    {
        cout << "\n\t\t\t _________________________\n";
        cout << "\n\t\t\t\tQueue Info";
        cout << "\n\t\t\t _________________________\n";
        cout << "\n\t\t\t    Prefix   = " << _Prefix;
        cout << "\n\t\t\t    Total Tickets   = " << _TotalTickets;
        cout << "\n\t\t\t    Served Clients  = " << ServedClients();
        cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
        cout << "\n\t\t\t _________________________\n";
        cout << "\n";

    }

    void PrintTicketsLineRTL()
    {

        if (QueueLine.empty())
            cout << "\n\t\tTickets: No Tickets.";
        else
            cout << "\n\t\tTickets: ";

        //we copy the queue in order not to lose the original
        queue <clsTicket> TempQueueLine = QueueLine;


        while (!TempQueueLine.empty())
        {
            clsTicket Ticket = TempQueueLine.front();

            cout << " " << Ticket.FullNumber() << " <-- ";

            TempQueueLine.pop();
        }

        cout << "\n";

    }

    void PrintTicketsLineLTR()
    {
        if (QueueLine.empty())
            cout << "\n\t\tTickets: No Tickets.";
        else
            cout << "\n\t\tTickets: ";

        //we copy the queue in order not to lose the original
        queue <clsTicket> TempQueueLine = QueueLine;
        stack <clsTicket> TempStackLine;

        while (!TempQueueLine.empty())
        {
            TempStackLine.push(TempQueueLine.front());
            TempQueueLine.pop();
        }

        while (!TempStackLine.empty())
        {
            clsTicket Ticket = TempStackLine.top();

            cout << " " << Ticket.FullNumber() << " --> ";

            TempStackLine.pop();
        }
        cout << "\n";
    }


    void PrintAllTickets()
    {

        cout << "\n\n\t\t\t       ---Tickets---";

        if (QueueLine.empty())
            cout << "\n\n\t\t\t     ---No Tickets---\n";

        //we copy the queue in order not to lose the original
        queue <clsTicket> TempQueueLine = QueueLine;


        while (!TempQueueLine.empty())
        {
            TempQueueLine.front().Print();
            TempQueueLine.pop();
        }

    }


};

//#pragma once
//#include <iostream>
//#include <queue>
//#include <iomanip>
//#include "clsString.h"
//#include "clsDate.h"
//using namespace std;
//
//
//class clsQueueLine
//{
//
//    string _Prefix = "";
//    short _AverageServeTime = 0;
//    short _TotalTickets = 0;
//    short _WaitingClients = 0;
//
//    class clsTicket
//    {
//    private:
//        short _Number = 0;
//        string _Prefix;
//        string _TicketTime = "";
//        short _WaitingClients = 0;
//        short _AverageServeTime = 0;
//        short _ExpectedServeTime = 0;
//    public:
//        clsTicket(string Prefix, short Number, short WaitingClients, short AverageServeTime)
//        {
//            _Number = Number;
//            _TicketTime = clsDate::GetSystemDateTimeString();
//            _Prefix = Prefix;
//            _WaitingClients = WaitingClients;
//            _AverageServeTime = AverageServeTime;
//        }
//
//        string Prefix()
//        {
//            return _Prefix;
//        }
//
//        short Number()
//        {
//            return _Number;
//        }
//
//        string FullNumber()
//        {
//            return _Prefix + to_string(_Number);
//        }
//
//        string TicketTime()
//        {
//            return _TicketTime;
//        }
//
//        short WaitingClients()
//        {
//            return _WaitingClients;
//        }
//
//        short ExpectedServeTime()
//        {
//            return _AverageServeTime * _WaitingClients;
//        }
//
//        void Print()
//        {
//            cout << setw(25) << left << "" << "-------------------------------------" << endl;
//            cout << setw(40) << left << "" << FullNumber() << "\n\n";
//            cout << setw(35) << left << "" << _TicketTime << endl;
//            cout << setw(35) << left << "" << "WaitingClients = " << _WaitingClients << endl;
//            cout << setw(35) << left << "" << "Serve Time In" << endl;
//            cout << setw(38) << left << "" << ExpectedServeTime() << "Minutes" << endl;
//            cout << setw(25) << left << "" << "-------------------------------------" << "\n\n";
//        }
//
//    };
//
//public:
//
//    queue <clsTicket> QueueLine;
//
//    clsQueueLine(string Prefix, int AverageServeTime)
//    {
//        _Prefix = Prefix;
//        _AverageServeTime = AverageServeTime;
//    }
//
//    void IssueTicket()
//    {
//        _TotalTickets++;
//        clsTicket Ticket(_Prefix, _TotalTickets, , _AverageServeTime);
//        QueueLine.push(Ticket);
//    }
//
//    void PrintInfo()
//    {
//        cout << setw(20) << left << "" << "\t\t\n";
//        cout << setw(20) << left << "" << "-------------------------------------\n";
//        cout << setw(20) << left << "" << "\t\tQueue Info \n";
//        cout << setw(20) << left << "" << "--------------------------------------\n";
//        cout << setw(20) << left << "" << "Prefix = " << _PrefixName << endl;
//        cout << setw(20) << left << "" << "Total Tickets = " << _TotalTickets << endl;
//        cout << setw(20) << left << "" << "Served Clients = " << _ServedClients << endl;
//        cout << setw(20) << left << "" << "Waiting Clients = " << Ticket.WaitingClients << endl;
//        cout << setw(20) << left << "" << "--------------------------------------\n";
//    }
//
//    void PrintTicketsLineRTL()
//    {
//        queue <clsTicket> TempQueue = QueueLine;
//
//        cout << "\n" << setw(20) << left << "" << "Tickets: ";
//
//        while (!TempQueue.empty())
//        {
//            cout << _PrefixName << TempQueue.front().PrefixNum << "<---";
//            TempQueue.pop();
//        }
//        cout << endl;
//    }
//
//    void PrintTicketsLineLTR()
//    {
//        queue <clsTicket> TempQueue = QueueLine;
//
//        cout << "\n" << setw(20) << left << "" << "Tickets: ";
//
//        while (!TempQueue.empty())
//        {
//            cout << _PrefixName << TempQueue.back().PrefixNum-- << "--->";
//            TempQueue.pop();
//        }
//        cout << endl;
//    }
//
//    void PrintAllTickets()
//    {
//        cout << "\n\n" << setw(33) << left << "" << "-----Tickets------" << endl;
//
//        queue <clsTicket> TempQueue = QueueLine;
//
//        while (!TempQueue.empty()) {
//            cout << setw(25) << left << "" << "-------------------------------------" << endl;
//            cout << setw(40) << left << "" << _PrefixName << TempQueue.front().PrefixNum << "\n\n";
//            cout << setw(35) << left << "" << TempQueue.front().DateAndTime << endl;
//            cout << setw(35) << left << "" << "WaitingClients = " << TempQueue.front().WaitingClients << endl;
//            cout << setw(35) << left << "" << "Serve Time In" << endl;
//            cout << setw(38) << left << "" << TempQueue.front().ServeTime * TempQueue.front().WaitingClients << "Minutes" << endl;
//            cout << setw(25) << left << "" << "-------------------------------------" << "\n\n";
//            TempQueue.pop();
//        }
//
//
//    }
//
//    void DeleteQueue()
//    {
//
//        while (!QueueLine.empty())
//        {
//            Ticket.WaitingClients--;
//            QueueLine.pop();
//        }
//    }
//
//    void ServedNextClient()
//    {
//
//        QueueLine.pop();
//        Ticket.WaitingClients--;
//        _ServedClients++;
//
//        if (QueueLine.size() != 0)
//        {
//            int Size = QueueLine.size();
//
//            DeleteQueue();
//
//            for (int i = 1; i <= Size; i++)
//            {
//                Ticket.PrefixNum = i;
//                Ticket.WaitingClients = i - 1;
//                QueueLine.push(Ticket);
//            }
//        }
//    }
//
//};

