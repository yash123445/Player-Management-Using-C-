## **Cricket Player Management**

## **Features:**
**Add Player:**
Collect player details such as jersey number, name, team, age, role, gender, matches played, and runs scored.Calculate the average based on runs and matches played.
Create a player object with the entered information.Add the player to the management system.

**Search Player:**
Prompt the user to enter a jersey number for the player they want to search.Iterate through the existing players and find a match based on the entered jersey number.
Display the details of the found player or notify if not found.

**Update Player Info:**
Prompt the user to enter a jersey number for the player they want to update.Display a menu for updating various player information (name, team, age, matches played, runs scored).
Update the selected information for the specified player.Calculate the new average based on the updated runs and matches played.

**Remove Player:**
Prompt the user to enter a jersey number for the player they want to delete.Search for the player with the entered jersey number.
If found, shift the remaining players to remove the specified player.Update the index and free up memory.

**Display Players:**
Iterate through the existing players and display their details.
Include a separator between player records for better readability.

## **Implementation Guidance:**

**Class Structure:**
Have a player class with appropriate member variables for player details and methods for setting and getting those details.
Create a management class to handle the overall management of player records.

**Adding a Player:**
In the main function, create an instance of the management class.Utilize a loop to repeatedly display a menu for the user to choose an operation.
For adding a player, prompt the user for player details, create a player object, and use the addPlayer method in the management class.

**Searching a Player:**
Implement the searchPlayer method in the management class to iterate through the players and find the specified jersey number.

**Updating Player Info:**
Implement the updatePlayer method in the management class to search for the player, display a menu for updating, and update the selected information.

**Removing a Player:**
Implement the deletePlayer method in the management class to search for the player and remove them if found.

**Displaying Players:**
Implement the display method in the management class to iterate through players and print their details.

**Average Calculation:**
Ensure that the average is recalculated whenever there's a change in runs or matches played. This can be done in the updatePlayer method.

**Memory Management:**
Handle memory allocation and deallocation appropriately, especially when adding and removing players.

**User Interaction:**
Implement a user-friendly menu in the console interface for easy interaction.

## **Installation**
**Dev C++**

Contributing Contributions to enhance the system's features, improve user experience, or fix issues are highly encouraged. 
If you have suggestions, bug reports, or feature requests, please open an issue or submit a pull request. 
Your input is invaluable in making this Library Management System even better!
