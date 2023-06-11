CXX = g++
CXXFLAGS = -Wall -O2 

Node.o: Class/Node.cpp Class/Node.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

NodeVariable.o: Class/Node_Variable.cpp Class/Node_Variable.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

testNodeVariable: Tests/testNodeVariable.cpp NodeVariable.o Node.o
	$(CXX) $(CXXFLAGS) $^ -o $@


clean:
	rm -f *.o
	rm -f testNodeVariable