# OFFICE - Rating 519

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T10:07:17.977Z  

```c_cpp
#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    float x,y,z;
	    scanf("%f",&x);
	    scanf("%f",&y);
	    scanf("%f",&z);
	    if((x*y)/2<z)
	    {
	        printf("YEs\n");
	    }
	    else
	    printf("NO\n");
	}

}


```

---

[View on CodeChef](https://www.codechef.com/problems/OFFICE)