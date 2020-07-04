#include "vec.hpp"
#include "simulate.hpp"
#include "path.hpp"
#include <iostream>

int main() {
    Path path = generate_path(Vec(0,0), Vec(-40,0), Vec(-30, -30), Vec(-40, 0), 30);
    cout << "Path:\n" << path << "\n";

    std::vector<Vec> locs = simulate(path, Vec(0, 0), Vec(-40, 0), 2);
    
    string out;
    for (int i=0; i<locs.size(); i++) {
      out.append(locs.at(i).to_string()+"\n");
    }

    cout << "Simulated locations:\n" << out;


    return 0;
}
