CXX = g++
CXXFLAGS = -Wall -O2 

Node.o: Class/Node.cpp Class/Node.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

NodeVariable.o: Class/Node_Variable.cpp Class/Node_Variable.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

NodeOperation.o: Class/Node_Operation.cpp Class/Node_Operation.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

NodeNumber.o: Class/Node_Number.cpp Class/Node_Number.h
	$(CXX) $(CXXFLAGS) -c $< -o $@


testNodeVariable: Tests/testNodeVariable.cpp NodeVariable.o Node.o
	$(CXX) $(CXXFLAGS) $^ -o $@

testNodeOperation: Tests/testNodeOperation.cpp NodeOperation.o NodeNumber.o Node.o 
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f *.o
	rm -f testNodeVariable