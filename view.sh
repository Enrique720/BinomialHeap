g++ main.cpp
./a.out > graph.vz
dot -Tpdf graph.vz -o grafo.pdf
evince grafo.pdf