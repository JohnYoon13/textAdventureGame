Text Adventure Game based on Pixar's "The Incredibles"
------------------
STEPS:
- Create array of items.
- Dynamically create the spaces (“levels”) that will be used.
- Link up all the spaces with each other.
- Create a “current” space pointer to keep track of which level you’re on, and set it to the first level, “home.”
- Prompt the user to start the game.
- If they start, then enter gameplay by using a loop that applies the “current” level’s special and activate functions.
- During the loop, the Items array is updated if the user chooses the correct combination of choices.
- The current level is then updated with the next linked space (the S1), and then the loop continues until the user reaches the Desert level, or until the user dies.
- Assuming the user stays alive, the levels will follow the order of: “home”, “jungle”, “volcano”, “city”, “desert”, and potentially “gold”.
- If the user reaches the Desert level, and did not collect both the Key and the Card during the game, then the game simply ends.
- However, if the user has collected both the Key and the Card, then the “home” space is removed, and the “gold space” is added.
- In the “Gold” level, Mr. Incredible uses the Key and the Card to find the treasure.
- Game ends.

KEY to WIN GAME:
To make it all the way to the final level in the 'GOLD' room, use the following combinations:
- For 'Home' level: 1 & 2
- For 'Jungle' level: 1 & 2
- For 'Volcano' level: 1 & 1
- For 'City' level: 1 & 2
- For 'Desert' level: Either 1 or 2

