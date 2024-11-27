#!/usr/bin/python3

class shortest_path:
    def __init__(self):
        
        self.graph = {
            5: [3, 7],
            3: [2, 4],
            7: [8],
            2: [],
            4: [8],
            8: []
        }
        
    def spath(self,start,stop):
        queue = [[start]]
        visited = set()
        
        while queue:
            path = queue.pop(0)
            node = path[-1]
            
            if node == stop:
                return path
                
            if node not in visited:
                visited.add(node)
                
                for x in self.graph[node]:
                    if x not in visited:
                        new_path = path + [x]
                        queue.append(new_path)
        
        return None

if __name__ == '__main__':
    sp = shortest_path()
    print(f"[+] shortest path: {sp.spath(5,8)}")
