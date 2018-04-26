# Group: Michelle, Anthony, Jordan
## Anthony's Feedback for Group 1 specification (Quymbee, Angela, Myles)

1. Differences between Group 1's specifications and labs/projects

..* Overall, the specifications are less detailed, and are noticably lacking examples and pictures. However, taking time spent on the asasignment into account, its not bad.
..* Specification assumes the reader knows that it is talking about connect 4, even though the game is not mentioned anywhere.
..* Specification seems to lack detailed guidelines on the functions, compared to official labs/projects. Function descriptions are short and vague, giving lots of leeway.
..* Isn't this supposed to be two player? Playing against a random number generator is very easy.

2. Group 1's specification's details and workability

..* The specifications are workable as long as they tell the reader that the game is connect 4. However, it is pretty vague on how they want the functions to fit together.

3. Division of responsibilities

..* There is no direct guidance on what an individual in a group of 3 is to do, but the functions can easily be divided in a group.

4. Guidance

..* The specification is a web of references so the reader will have to pop around.
..* Makes no comment on what the pieces are. Readers will have to decide by themselves. 


## Thoughts after trying to implement makeMove

..* Normal people would choose a column between 1 and 7, arrays start at 0.
..* I would rather modify a grid than build a grid every time a piece moves.
..* makeMove asks for input, so it shouldn't take col as a parameter. However, it should get the board/grid to modify and the turn/piece of the person playing.