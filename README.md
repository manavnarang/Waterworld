# WaterWorld Problem
Year is 3030, water is a scare resource.
Civilizations live around glaciers in clusters, with a federal body (identified as F) in center melting glaciers and controlling the water distribution.
Each cluster has need for water for a day and a water storage capacity.
Cluster are connected to each other with a pipe identified by _.
Linked clusters are connected with overflow pipes.
Every time water starts flowing through pipe, the clusters drain their tanks in an instant, as they can use the water flowing to fill the tanks, and federal body sends water till the capacity is full.
Federal body releases water at start of day, cluster uses water at end of day.
In a pipe link like F-C1-C2-C3-C4, when federal water body targets C3, only C3 and nodes before it (here C1,C2,C3) can fill the tank, C4 can fill it only when it’s targeted.
Pipes are flow controlled and water flows in forward direction only.

Calculate the minimum water needed to help the civilizations survive for n days.

Input is multiline. First line is the number of days to survive. Second line the number of clusters followed by their definitions. Next is the number of links in the system, followed by the link definition.

Read the test cases to understand the scenarios better.

Cluster defintion
C1 100 300
here

C1 - cluster name
100 - daily water need
300 - storage capacity
Link definition
F_C1
here

F - is the federal source of pipe
C - is the sink/destination of pipe (cluster tank)
Clusters don’t share water that was allocated to them with others, but water from federal body flows through them if needed.

Input
2
3
C1 100 300
C2 150 300
C3 100 100
3
F_C1
F_C2
C2_C3
Output
1100
In the above on day 1, C1 gets 300, C2 gets 300, C3 gets 100
End of day 1, C1 would have 200, C2 would have 150, C3 would have 0

On start of day 2, C3 needs water.
To supply water to C3, water needs to flow through C2.
C2 would immediately drain the remaining water for other purpose so that it can fill water tank fully again from federal body.​
