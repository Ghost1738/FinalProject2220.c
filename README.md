# FinalProject2220.c
create an address book application, which uses a struct defined as a user-defined data type.
create an address book application, which uses a struct defined as a user-defined data type.
The struct should contain all fields related to what all people in your contacts have in common,
e.g., ID, first name, last name, street address, city, state, zip, phone, e-mail,
etc., i.e., include fields you would typically expect to find in an address book. Make sure all data entered by the user is appropriately validated.

The application program should use a menu system to do the functions concerning processing contacts,
i.e., Create, Retrieve, Update, and Delete (CRUD). Whether you use an array, dynamic array, or list,
 the idea here is if the user selected Create from the main menu, it would create a new contact record,
 and then, add it to a single collection, e.g., an array. As far as retrieving contacts,
 it should be able to retrieve all contacts, including all of their data displayed in an appropriate list/table,
 and one or more contact's information as a result of a search, which you can also use for the Update and Delete functions.
 Other search and sort functions should be included as appropriate. It does need to be able to permanently store the information,
 e.g., to a file on the hard drive. Make sure you thoroughly test saving and retrieving the information from a file,
 because using pointers can make this tricky, i.e., the next time the program is run from a different system,
 it may not retrieve the data as expected; in other words, make sure you are saving the actual data and not just a pointer to the data.
 Hint: Check for the appropriate file and retrieve any data at the start if necessary, i.e., the file may not exist initially, and then,
 create and save the data to a file at the end ready to be retrieved the next time the program runs; in other words,
 you do not need to constantly save and retrieve data from a file while the program is running,
 although continuously updating the file is what you would do in the real world, e.g., like how a database works.
