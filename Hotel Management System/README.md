Hotel Management System
A simple Hotel Management System written in C++, designed to manage hotel operations like room booking, check-in, check-out, and generating guest reports. The program also incorporates file handling to ensure data persistence.
________________________________________
Features
1. Room Management
•  Add rooms with details like:
o  AC or Non-AC
o  Single or Double Comfort
o  Bed or Suite Size
o  Daily Rent
•  View available rooms.
2. Customer Management
•  Check-in customers by assigning them to a room.
•  Maintain customer details, including:
o  Name, Address, and Phone Number
o  Booking ID
o  Stay Duration (From-To Dates)
o  Advance Payment
•  Search customers by name.
3. Check-Out Management
•  Calculate the total bill based on room rent and number of days stayed.
•  Deduct advance payment from the total bill.
4. Guest Summary Report
•  View a summary of all checked-in customers.
5. File Handling
•  Data persistence through binary files (rooms.dat).
•  Automatically loads room data at the start of the program.
•  Saves room and customer data after every operation.
