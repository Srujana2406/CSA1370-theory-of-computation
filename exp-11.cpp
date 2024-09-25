#include <stdio.h>
#define MAX_STATES 10
void eClosure(int nfa[MAX_STATES][MAX_STATES], int state, int closure[MAX_STATES], int numStates) {
    closure[state] = 1; 
    for (int i = 0; i < numStates; i++) {
        if (nfa[state][i] == 1 && closure[i] == 0) {
            eClosure(nfa, i, closure, numStates); 
        }
    }
}
int main() {
    int nfa[MAX_STATES][MAX_STATES] = {0}; 
    int numStates, numEpsilonTransitions;
    printf("Enter the number of states: ");
    scanf("%d", &numStates);
    printf("Enter the number of e-transitions: ");
    scanf("%d", &numEpsilonTransitions);
    printf("Enter the e-transitions (from_state to_state):\n");
    for (int i = 0; i < numEpsilonTransitions; i++) {
        int from, to;
        scanf("%d %d", &from, &to);
        nfa[from][to] = 1; 
    }
    for (int i = 0; i < numStates; i++) {
        int closure[MAX_STATES] = {0}; 
        eClosure(nfa, i, closure, numStates);
        printf("e-closure(%d) = { ", i);
        for (int j = 0; j < numStates; j++) {
            if (closure[j]) {
                printf("%d ", j);
            }
        }
        printf("}\n");
    }

    return 0;
}
