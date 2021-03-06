<b>String Matching using OpenMP</b>

Problem Description: The problem I decided to tackle was parallelizing a string matching algorithm. A string matching algorithm basically checks if a substring exists in larger string. In this case the terminology we used for this was the substring was called the pattern, and the larger string was called the text. So in this problem we had to find how many instances a pattern existed in the text. To parallelize this application I actually used OpenMP. In turn to test this by application, I benchmarked my algorithm with two different data sets, one being 103 megabytes with 108,106,275 characters, the second one being 20.7 megabytes with 21,621,255 characters. All of the datasets we created by copying and pasting an article from the verge on the apple watch. Both datasets are included in the application folder. 



Design: 
  1.	Partitioning- The partition is done by splitting up the main text into multiple pattern sized segments. So in this case we used domain decomposition. 
  2.	Communication- Here we use local communication, once the domain is decomposed, there is no communication needed from the other segments to perform its calculation.
  3.	Agglomeration- There is no agglomeration needed here since the base operation is already very simple, and this comparing pattern sized substring from the text with the pattern. 
  4.	Mapping- Here the mapping occurs by the amount of threads, here I have chosen to test between 8 and 4 threads, so depending on how the domain is decomposed, there will be a enough slots to be assigned for either 4 or 8 at a time. 

