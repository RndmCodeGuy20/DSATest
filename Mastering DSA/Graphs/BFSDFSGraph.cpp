/**
 * @file BFSDFSGraph.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief
 * @version  1.0.1
 * @date 2022-02-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include "Queue2.h"
using namespace std;

/**
 * @brief
 * @graph       1
 *            /   \
 *          2       3
 *           \     /
 *              4
 *           /     \
 *          5       6
 */

void BFS(int G[][7], int start, int n)
{
    int i = start, p;
    int visited[7] = {0};

    printf("%d   ", i);
    visited[i] = 1;
    enqueue(i);

    while (!isEmpty())
    {
        p = dequeue();

        for (int j = 1; j < n; j++)
        {
            if (G[p][j] == 1 && visited[j] == 0)
            {
                printf("%d    ", j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}

void DFS(int G[][7], int start, int n)
{
    static int visited[7] = {0};

    if (visited[start] == 0)
    {
        printf("%d    ", start);
        visited[start] = 1;

        for (int j = 0; j < n; j++)
        {
            if (G[start][j] == 1 && visited[j] == 0)
            {
                DFS(G, j, n);
            }
        }
    }
}

int main()
{
    int Graph[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 1, 1, 0, 0, 0},
                       {0, 1, 0, 0, 1, 0, 0},
                       {0, 1, 0, 0, 1, 0, 0},
                       {0, 0, 1, 1, 0, 1, 1},
                       {0, 0, 0, 0, 1, 0, 0},
                       {0, 0, 0, 0, 1, 0, 0}}; //- No index with vertex 0, therefore, graph strting from (1,1)

    char choice;

    while (choice != 'X')
    {
        printf("B. BFS\nD. DFS\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 'B':
            printf("Breadth First Search of the given graph : (starting from 4 vertex) \n\n");
            BFS(Graph, 4, 7);
            cout << "\n\n";
            break;

        case 'D':
            printf("Depth First Search of the given graph : (starting from 1 vertex) \n\n");
            DFS(Graph, 1, 7);
            break;

        default:
            break;
        }
    }

    return 0;
}