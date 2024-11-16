#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

// Define the maximum room capacity
#define max 100

// Class Customer
class Customer {
public:
    char name[100];
    char address[100];
    char phone[12];
    char from_date[20];
    char to_date[20];
    float payment_advance;
    int booking_id;

    void saveToFile(ofstream& file) const {
        file.write((char*)this, sizeof(*this));
    }

    void loadFromFile(ifstream& file) {
        file.read((char*)this, sizeof(*this));
    }
};

// Class Room
class Room {
public:
    char type;
    char stype;
    char ac;
    int roomNumber;
    int rent;
    int status; // 0 - Available, 1 - Reserved
    Customer cust;

    void saveToFile(ofstream& file) const {
        file.write((char*)this, sizeof(*this));
    }

    void loadFromFile(ifstream& file) {
        file.read((char*)this, sizeof(*this));
    }

    Room addRoom(int);
    void displayRoom();
};

// Hotel Management Class
class HotelMgnt {
public:
    vector<Room> rooms;

    void loadRoomsFromFile();
    void saveRoomsToFile();
    void checkIn();
    void getAvailRoom();
    void searchCustomer(const char*);
    void checkOut(int);
    void guestSummaryReport();
};

// Room Methods
Room Room::addRoom(int rno) {
    Room room;
    room.roomNumber = rno;
    cout << "\nType AC/Non-AC (A/N): ";
    cin >> room.ac;
    cout << "\nType Comfort (S/N): ";
    cin >> room.type;
    cout << "\nType Size (B/S): ";
    cin >> room.stype;
    cout << "\nDaily Rent: ";
    cin >> room.rent;
    room.status = 0;

    cout << "\nRoom Added Successfully!";
    cin.ignore();
    return room;
}

void Room::displayRoom() {
    cout << "\nRoom Number: " << roomNumber;
    cout << "\nType AC/Non-AC (A/N): " << ac;
    cout << "\nType Comfort (S/N): " << type;
    cout << "\nType Size (B/S): " << stype;
    cout << "\nRent: " << rent;
    cout << "\nStatus: " << (status == 0 ? "Available" : "Reserved");
}

// Hotel Management Methods
void HotelMgnt::loadRoomsFromFile() {
    ifstream file("rooms.dat", ios::binary);
    if (!file.is_open()) {
        cout << "\nNo existing data found. Starting fresh.";
        return;
    }
    Room room;
    while (file.read((char*)&room, sizeof(room))) {
        rooms.push_back(room);
    }
    file.close();
}

void HotelMgnt::saveRoomsToFile() {
    ofstream file("rooms.dat", ios::binary | ios::trunc);
    if (!file.is_open()) {
        cout << "\nError saving data!";
        return;
    }
    for (const auto& room : rooms) {
        room.saveToFile(file);
    }
    file.close();
}

void HotelMgnt::checkIn() {
    int rno;
    cout << "\nEnter Room number: ";
    cin >> rno;

    for (auto& room : rooms) {
        if (room.roomNumber == rno) {
            if (room.status == 1) {
                cout << "\nRoom is already Booked";
                return;
            }

            cout << "\nEnter booking id: ";
            cin >> room.cust.booking_id;
            cout << "\nEnter Customer Name (First Name): ";
            cin >> room.cust.name;
            cout << "\nEnter Address (only city): ";
            cin >> room.cust.address;
            cout << "\nEnter Phone: ";
            cin >> room.cust.phone;
            cout << "\nEnter From Date: ";
            cin >> room.cust.from_date;
            cout << "\nEnter to Date: ";
            cin >> room.cust.to_date;
            cout << "\nEnter Advance Payment: ";
            cin >> room.cust.payment_advance;

            room.status = 1;
            saveRoomsToFile();
            cout << "\nCustomer Checked-in Successfully.";
            return;
        }
    }
    cout << "\nRoom not found.";
}

void HotelMgnt::getAvailRoom() {
    bool found = false;
    for (auto& room : rooms) {
        if (room.status == 0) {
            room.displayRoom();
            found = true;
        }
    }

  void HotelMgnt::searchCustomer(const char* pname) {
    for (auto& room : rooms) {
        if (room.status == 1 && strcmp(room.cust.name, pname) == 0) {
            cout << "\nCustomer Name: " << room.cust.name;
            cout << "\nRoom Number: " << room.roomNumber;
            return;
        }
    }
    cout << "\nPerson not found.";
}

void HotelMgnt::checkOut(int roomNum) {
    for (auto& room : rooms) {
        if (room.status == 1 && room.roomNumber == roomNum) {
            int days;
            float billAmount;

            cout << "\nEnter Number of Days: ";
            cin >> days;
            billAmount = days * room.rent;

            cout << "\n######## CheckOut Details ########";
            cout << "\nCustomer Name: " << room.cust.name;
            cout << "\nRoom Number: " << room.roomNumber;
            cout << "\nTotal Amount Due: " << billAmount;
            cout << "\nAdvance Paid: " << room.cust.payment_advance;
            cout << "\n*** Total Payable: " << billAmount - room.cust.payment_advance << " ***";

            room.status = 0;
            saveRoomsToFile();
            cout << "\nChecked out successfully.";
            return;
        }
    }
    cout << "\nRoom not found.";
}

void HotelMgnt::guestSummaryReport() {
    for (auto& room : rooms) {
        if (room.status == 1) {
            cout << "\nCustomer Name: " << room.cust.name;
            cout << "\nRoom Number: " << room.roomNumber;
            cout << "\nAddress: " << room.cust.address;
        }
    }
}

// Main Function
int main() {
    HotelMgnt hm;
    hm.loadRoomsFromFile();

    int opt, rno;
    char pname[100];

    do {
        cout << "\n######## Hotel Management System #########";
        cout << "\n1. Add Room";
        cout << "\n2. Check-In Room";
        cout << "\n3. Available Rooms";
        cout << "\n4. Search Customer";
        cout << "\n5. Check-Out Room";
        cout << "\n6. Guest Summary Report";
        cout << "\n7. Exit";
        cout << "\n\nEnter Option: ";
        cin >> opt;

        switch (opt) {
        case 1: {
            cout << "\nEnter Room Number: ";
            cin >> rno;
            hm.rooms.push_back(hm.rooms[0].addRoom(rno));
            hm.saveRoomsToFile();
            break;
        }
        case 2:
            hm.checkIn();
            break;
        case 3:
            hm.getAvailRoom();
            break;
        case 4:
            cout << "\nEnter Customer Name: ";
            cin >> pname;
            hm.searchCustomer(pname);
            break;
        case 5:
            cout << "\nEnter Room Number: ";
            cin >> rno;
            hm.checkOut(rno);
            break;
        case 6:
            hm.guestSummaryReport();
            break;
        case 7:
            cout << "\nThank you for using the software!";
            break;
        default:
            cout << "\nPlease enter a valid option.";
        }
    } while (opt != 7);

    return 0;
}
    if (!found) {
        cout << "\nAll rooms are reserved.";
    }
}


