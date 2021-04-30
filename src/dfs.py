
# class Graph:
#     def __init__(self, edges, N):
#         self.adjList = [[] for _ in range(N)]
#         for (src, dest) in edges:
#             self.adjList[src].append(dest)

def DFS(graph, v, discovered, arrival, departure, time):

    time = time + 1
    arrival[v] = time
    discovered[v] = True
    for i in graph.adjList[v]:
        if not discovered[i]:
            time = DFS(graph, i, discovered, arrival, departure, time)
    time = time + 1
    departure[v] = time
    return time


# if __name__ == '__main__':
#     edges = [(0, 1), (0, 2), (2, 3), (2, 4), (3, 1), (3, 5), (4, 5), (6, 7)]
#     N = 8
#     graph = Graph(edges, N)
#     arrival = [None] * N
#     departure = [None] * N
#     discovered = [False] * N
#     time = -1
#     for i in range(N):
#         if not discovered[i]:
#             time = DFS(graph, i, discovered, arrival, departure, time)
#     for i in range(N):
#         print("Vertex", i, (arrival[i], departure[i]))
