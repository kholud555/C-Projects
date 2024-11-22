
#include <iostream>
using namespace std;
#include "clsQueueLine.h"

int main()
{
    clsQueueLine PayBillQueue("A0", 10);
    clsQueueLine SubscriotionQueue("B0", 5);

    PayBillQueue.IssueTicket();
    PayBillQueue.IssueTicket();
    PayBillQueue.IssueTicket();
    PayBillQueue.IssueTicket();
    PayBillQueue.IssueTicket();

    cout << "Pay Bills Queue Info: " << endl;
    PayBillQueue.PrintInfo();

    PayBillQueue.PrintTicketsLineRTL();
    PayBillQueue.PrintTicketsLineLTR();

    PayBillQueue.PrintAllTickets();

    PayBillQueue.ServedClients();

    cout << "\n after client served" << endl;
   
    PayBillQueue.PrintAllTickets();

    PayBillQueue.PrintInfo();

    cout << "\nSubscriotion Queue:" << endl;

    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();
    SubscriotionQueue.IssueTicket();

    SubscriotionQueue.PrintInfo();

    SubscriotionQueue.PrintTicketsLineRTL();
    SubscriotionQueue.PrintTicketsLineLTR();

    SubscriotionQueue.PrintAllTickets();

    SubscriotionQueue.PrintInfo();

    SubscriotionQueue.ServedClients();

    SubscriotionQueue.PrintAllTickets();

    SubscriotionQueue.PrintInfo();

   
}

