def topologicalSort():

    # perform DFS on all unvisited vertices
    for i in range(V):
        if(visited[i] == 0):
            DFS(i)

    # Print vertices in topological order
    for i in range(V - 1, -1, -1):
        print(departure[i], end = " ")
