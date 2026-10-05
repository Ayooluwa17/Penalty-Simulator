#Penalty Simulator 

A text-based, multi-file C++ simulation of a 5-round football penalty shootout. 

Architecture & Concepts
This project demonstrates foundational C++ software design:
- Multi-File Structure: Logic is cleanly separated across 'main.cpp', 'match_engine.cpp', and 'match_engine.h'.
- Control Flow: Utilizes 'for' loops for the match state and nested 'if/else' branching for the match engine logic.
- State Management: Tracks goals, saves, and win/loss states dynamically over multiple iterations.

 How to Compile and Run
This project is compiled via the terminal. Navigate to the project directory and run:

g++ PenaltySimulator.cpp match_engine.cpp -o PenaltySimulator.exe
.\PenaltySimulator.exe