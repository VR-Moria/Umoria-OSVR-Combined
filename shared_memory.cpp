#include "shared_memory.h"
// #include <iostream>
// #include <mutex>
// vessel hold;
// Player_t play;
// Dungeon_t dung;
// std::string mess;
// hold.py = play;
// hold.dg = dung;
// hold.msg = mess; 

std::mutex mtx;
bool ready_to_read = false;

// void writing_to_shared_memory(Player_t play, Dungeon_t dung, std::string msg)  {
//     const std::lock_guard<std::mutex> lock(mtx);
//     // hold.msg = msg;
//     // hold.py = &play;
//     // hold.dg = &dung;
//     ready_to_read = true;
//     // std::ofstream outfile("writing.txt", std::ofstream::out | std::ofstream::app);
//     // outfile << "HOLD DEFINED.";
//     // outfile << "\n";
//     // outfile << hold.py;
//     // outfile << "\n";
//     // outfile << hold.dg;
//     // outfile << "\n";
//     // outfile << hold.msg;
//     // outfile << "\n";

//     // outfile.close();
// }

// void reading_from_shared_memory() {
//     const std::lock_guard<std::mutex> lock(mtx);
//     // Logic to read from msg, py and dg 
//     // could use dungeon parse

//     ready_to_read = false;
// }