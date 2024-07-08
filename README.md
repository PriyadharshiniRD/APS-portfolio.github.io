### APS-portfolio.github.io
<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Priyadharshini Dongarekar</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>


#### Note:
This page hosts:

1. [Introduction](https://priyadharshinird.github.io/APS-portfolio.github.io/#introduction)
2. [Why E-commerce](https://priyadharshinird.github.io/APS-portfolio.github.io/#why-e-commerce)
3. [Objectives](https://priyadharshinird.github.io/APS-portfolio.github.io/#objectives)
4. [Design](https://priyadharshinird.github.io/APS-portfolio.github.io/#design)
5. [Challenges](https://priyadharshinird.github.io/APS-portfolio.github.io/#challenges)
6. [To-Do](https://priyadharshinird.github.io/APS-portfolio.github.io/#to-do)

### Introduction

E-commerce, or electronic commerce, is the buying and selling of goods and services over the internet. It encompasses a wide range of online business activities for products and services, both retail and wholesale. E-commerce platforms like Amazon, Flipkart, and Meesho have revolutionized the way businesses operate and consumers shop, making transactions more efficient and accessible. These platforms provide a virtual marketplace where businesses can reach a global audience, and consumers can explore and purchase products from the comfort of their homes.
In this portfolio, we will delve into the various functionalities of e-commerce platforms from a DSA perspective, exploring how specific algorithms and data structures are employed to address key tasks and challenges. This exploration will not only highlight the importance of DSA in building robust e-commerce systems but also provide insights into the design and implementation of these critical components.

### Why E-commerce

E-commerce has fundamentally transformed the global market, bringing numerous benefits and opportunities for both businesses and consumers. Here are some key ways in which e-commerce has revolutionized the way we buy and sell:
* Providing a wider reach for businesses to connect with a larger customer base.
* Offering convenience and ease of access for consumers to shop from anywhere at any time.
* Enabling businesses to operate with lower overhead costs compared to traditional brick-and-mortar stores.
* Facilitating a competitive market environment, encouraging better prices and services for consumers.
* Streamlining operations with advanced technologies such as data analytics, automated systems, and secure payment gateways.

### Objectives

* To explore the application of Data Structures and Algorithms (DSA) in solving common tasks in e-commerce platforms.
* To analyze how specific algorithms and data structures optimize various functionalities like product search, recommendation systems and more.
* To provide a detailed design for each functionality, showcasing the use of appropriate data structures and algorithms.
* To increase your audience reach, DSA intelligently targets users based on their search intent, leveraging your product data

### Design

![image](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/assets/105196784/dece267c-337f-4caa-86d8-a7af64e48e5e)

### Challenges

* Scalability: Handling a vast number of users and products requires scalable solutions.
* Real-Time Performance: Ensuring real-time responsiveness for searches, recommendations, and updates.
* Data Consistency: Maintaining data consistency across various components and distributed systems.
* Cost Efficiency: Managing costs associated with implementing and scaling DSA solutions in a cost-effective manner.

### To-Do

* Research: Deepen your understanding of advanced DSA concepts and their applications in e-commerce.
* Case Studies: Include real-world case studies of e-commerce platforms implementing DSA solutions.
* Code Examples: Provide sample code snippets demonstrating the implementation of algorithms and data structures for various functionalities.
* Performance Analysis: Analyze and compare the performance of different algorithms and data structures in practical scenarios.
* Challenges and Solutions: Discuss common challenges and propose potential solutions or improvements.

  
### Functionalities

### Optimized Product Search and Autocomplete using Trie Data Structures.
<table border="0">
  <tr>
    <td>
      <img src="https://raw.githubusercontent.com/PriyadharshiniRD/APS-portfolio.github.io/main/images/Trie%20DS.png" width="475" height="475" alt="Trie DS">
      <p>Fig.2 : Trie Data structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/tier%20pic.png?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.3 : Implementation in real life</p>
    </td>
  </tr>
</table>


Tries in e-commerce optimize search functionalities, enhancing product search and autocomplete features, thereby improving user experience and increasing conversion rates through faster and more accurate product discovery.

#### Impact and Efficiency:
By implementing tries, e-commerce platforms can provide instant search suggestions, reduce search query times, and enhance backend efficiency in managing large product catalogs, leading to improved customer satisfaction and higher sales conversion rates.


| Operation       | Time Complexity | Space Complexity |
|-----------------|-----------------|------------------|
| Insertion       | O(n)            | O(m*n)           |
| Search          | O(n)            | O(1)             |
| Deletion        | O(m)            | O(1)             |
 

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/trie.cpp)

### Optimizing E-commerce Logistics with Dijkstra's Algorithm
<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/dij%20image.png?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.4 : Dijkstra's </p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/dij%20anima.jpg?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.5 : Delivery of products in real life</p>
    </td>
  </tr>
</table>


Logistics, being the heart of e-commerce, utilizes Dijkstra's algorithm to optimize delivery routes, ensuring efficient and timely shipment of goods. By calculating the shortest paths in transportation networks, it minimizes costs and maximizes delivery speed, enhancing customer satisfaction and operational efficiency in e-commerce logistics.

#### Impact and Efficiency:
Using Dijkstra's Algorithm in logistics for e-commerce optimizes delivery routes, reducing transportation costs and time. It ensures efficient order fulfillment, enhances customer satisfaction with timely deliveries, and scales with increasing demand, making logistics operations more streamlined and cost-effective.


|Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity | O((V + E) log V)| 
| Space Complexity| O(V)            |

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/dij.cpp)


###  Efficient Range Query Processing in E-Commerce
<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/mos%20anima.jpg?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.6 : Mo's Algorithm </p>
    </td>
    <td>
      <img src="https://raw.githubusercontent.com/PriyadharshiniRD/APS-portfolio.github.io/main/images/price%20range%20pic.png" width="475" height="475" alt="Tier Pic">
      <p>Fig.7 : Specific range of prices</p>
    </td>
  </tr>
</table>

In e-commerce platforms, Mo's Algorithm can be leveraged to optimize operations that involve analyzing or filtering data within specific ranges, such as finding products within a price range, filtering transactions within a date range, or determining user activity over certain periods. This functionality enhances the user experience by providing fast and relevant search results, improving data analysis, and optimizing resource usage.

#### Impact and Efficiency

 This enhances user experience by providing fast and accurate search results, leading to higher customer satisfaction.It is  highly efficient for large-scale data operations typical in e-commerce platforms.

 |Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity |  O((N + Q) * √N)| 
| Space Complexity| O(N)       |

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/MOs%20algo.cpp)


### Efficient Data Retrieval and Management in E-commerce.

<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/b+%20search.jpg?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.8 : B+ structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/order.jpg?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.9 : Data retrieve based on Order ID</p>
    </td>
  </tr>
</table>

B+ trees are pivotal in e-commerce for their ability to swiftly retrieve data based on keys such as product IDs, order IDs, and customer IDs. This efficiency ensures that platforms can quickly access and manage critical information like product details, order statuses, customer profiles, and inventory levels. By organizing data in a structured and balanced tree format, B+ trees optimize search operations, reduce query times, and enhance system performance. This capability not only improves user experience by providing fast access to relevant information but also supports seamless operations in handling large-scale datasets essential for robust e-commerce platforms.

#### Impact and Efficiency

The impact of using B+ trees in e-commerce is profound, primarily enhancing efficiency by enabling rapid data retrieval and management based on key identifiers like product IDs, customer IDs, and transaction IDs. This efficiency translates into reduced latency in accessing critical information such as product details, order statuses, and customer profiles, thereby improving overall system performance. Moreover, B+ trees' ability to handle large-scale datasets efficiently ensures that e-commerce platforms can scale effectively while maintaining fast response times, ultimately enhancing user satisfaction through streamlined operations and optimized resource utilization.

 |Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity |  O(log n)| 
| Space Complexity| O(n)       |
| Search| O(log n)       |

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/B%2B%20Tree.cpp)

### Efficiency and Impact of Skip Lists in E-commerce Operations

<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/skip-list41.gif?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.10 : Skip list</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/low%20to%20hgh.jpg?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.11 : Sorting of prices feature available in E-commerce</p>
    </td>
  </tr>  
</table>

Skip lists are also used in e-commerce to efficiently display products in ascending or descending order based on various attributes such as price, popularity, or rating. Their ability to maintain sorted data allows for quick traversal in both directions, enabling seamless presentation of products from lowest to highest values or vice versa. This functionality enhances the user experience by providing flexible and responsive sorting options, ensuring that customers can easily browse and find products according to their preferences and criteria.

#### Impact and Efficiency
Skip lists impact e-commerce platforms significantly by enhancing operational efficiency through their logarithmic time complexity for insertion, deletion, and search operations. This efficiency ensures that as the dataset grows, the performance remains optimal, allowing for rapid access and modification of critical data such as product inventory, customer profiles, and transaction records. By providing a balance between the simplicity of linked lists and the efficiency of balanced trees, skip lists streamline data management processes, contributing to faster query responses and improved overall system responsiveness. This, in turn, enhances user experience by facilitating quicker access to information and smoother transaction processing, thereby bolstering customer satisfaction and operational effectiveness in e-commerce environments.

|Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity |  O(log1/pn)| 
| Space Complexity| O(n)       |
| Search| O(log1/pk) |


[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/skipList.cpp)



 ### Product Categorization and Hierarchy Management

 
<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/union%20find.png?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.12 : Union-Find structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/category.jpg?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.13 : Products categorization for easy shopping</p>
    </td>
  </tr>  
</table>
 
Union-Find, or Disjoint Set Union (DSU), is vital in e-commerce for product categorization. It efficiently groups products into categories using Union and Find operations, ensuring quick updates and categorization checks. With nearly constant time complexity for operations, Union-Find supports fast management of product hierarchies, enhancing user experiences through streamlined searches and efficient inventory management in dynamic e-commerce environments.

#### Impact and Efficiency
Its impact lies in enabling quick categorization updates and checks, which are essential for maintaining organized product hierarchies and facilitating efficient inventory management. With nearly constant time complexity for operations, Union-Find ensures rapid responsiveness in dynamic e-commerce platforms, contributing to enhanced user experiences through streamlined searches and optimized product categorization workflows.

|Aspect           | Complexity      | 
|-----------------|-----------------|
| Union |  O(n)| 
| Find| O(n)       |


[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/unionFind.cpp)



### Order Tracking Automation




<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/bfs%20image.jpg?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.14 : BFS</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/order%20track%20anima.png?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.15 : Tracking of orders based on levels</p>
    </td>
  </tr>  
</table>

Order tracking in e-commerce using BFS (Breadth-First Search) is essential for ensuring customers receive real-time updates on their orders' progress from placement to delivery. BFS facilitates efficient navigation through various stages of order processing, including order verification, processing, packaging, shipping, and delivery. This methodical approach guarantees sequential checking of each stage, enabling prompt updates and transparency in the order fulfillment process.

#### Impact and Efficiency

Order tracking in e-commerce using BFS significantly impacts customer satisfaction by providing real-time updates on order status, enhancing transparency, and reducing customer inquiries about their orders. This transparency fosters trust and loyalty among customers, leading to increased repeat purchases and improved brand reputation.

|Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity |  O(V+E)| 
| Space Complexity| O(V)       |

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/bfs.c)


### Efficient Product Recommendation


<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/Topological_Sort.png?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.16 : Topological Sorting structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/recome.png?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.17 : Real time Recommendation</p>
    </td>
  </tr>  
</table>

Topological sorting aids in e-commerce product recommendation systems by organizing products based on their relationships and dependencies. By establishing a logical order through graph-based structures, it enables the system to suggest related items effectively. This method optimizes the relevance of recommendations, enhances user engagement by suggesting complementary products or items frequently purchased together, and supports efficient navigation through product categories. Integrating topological sorting ensures that recommendations are contextually meaningful and responsive to dynamic changes in customer preferences and market trends.

#### Impact and Efficiency

Topological sorting significantly impacts e-commerce recommendation systems by enhancing efficiency in product categorization and recommendation generation. Its linear time complexity allows for rapid sorting of product dependencies, ensuring quick updates to recommendation lists as new products are added or customer preferences evolve. This efficiency translates to improved user experience through timely and relevant product suggestions, boosting sales by promoting cross-selling and upselling opportunities. By organizing products hierarchically, topological sorting optimizes the browsing experience, making it easier for users to discover related items and navigate through product catalogs seamlessly.

|Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity |  O(V+E)| 
| Space Complexity| O(V)       |


[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/topologicalSort.cpp)



### Efficient Symbol-Based Data Compression

<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/huffman.png?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.18 : Huffman structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/1-7-data-reduction-19-320.jpg?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.19 : To store effectively</p>
    </td>
  </tr>  
</table>

Huffman coding reduces data size by assigning shorter binary codes to frequently encountered symbols and longer codes to less common ones, based on their respective frequencies. This compression method optimizes storage and speeds up data transmission in e-commerce applications, benefiting from reduced file sizes and improved efficiency in handling large volumes of information.

#### Impact and Efficiency
Huffman coding's impact lies in its ability to significantly reduce the size of data files through efficient compression techniques. By assigning shorter codes to more frequent symbols and longer codes to less frequent ones, it optimizes storage space and enhances data transmission efficiency in e-commerce and other applications. This compression method not only minimizes storage costs but also accelerates data transfer speeds across networks, improving overall system performance and user experience. Its effectiveness depends on the frequency distribution of symbols within the data, with higher compression ratios achievable in scenarios with predictable or repetitive patterns.

|Aspect           | Complexity      | 
|-----------------|-----------------|
|Building the Huffman Tree               |  O(n log n)| 
|Generating Huffman Codes: | O(n)       |
|Space Huffman Tree | O(n)       |

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/huffmannCode.cpp)




### Managing Products With Fenwick

<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/fenwick.png?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.20 :  Fenwick tree structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/product%20add%20or%20remove.jpg?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.21 : Real time addition and removal of products </p>
    </td>
  </tr>  
</table>

Using a Fenwick Tree (Binary Indexed Tree) to manage products by their IDs offers a robust solution for efficient data management in e-commerce. This data structure facilitates quick updates and queries, ensuring seamless addition and retrieval of product information based on their unique identifiers. By leveraging the Fenwick Tree, e-commerce platforms can dynamically track and manage inventory, sales, or other metrics associated with product IDs with optimal efficiency. This capability is particularly advantageous in handling large datasets and real-time updates, making it a valuable tool for enhancing performance and scalability in e-commerce applications.


#### Impact and Efficiency
Implementing a Fenwick Tree (Binary Indexed Tree) to manage products by their IDs in e-commerce applications significantly enhances operational impact. It allows for rapid updates and queries, facilitating real-time management of inventory, sales tracking, and other key metrics linked to product IDs. This data structure optimizes performance by ensuring that operations like adding products or calculating cumulative sums are executed swiftly, minimizing computational overhead and improving overall system responsiveness and user experience.

|Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity |  O(log n)| 
| Space Complexity| O(n)       |

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/fenwick.cpp)


### Optimize Product Pricing With MaxHeap

<table border="0">
  <tr>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/MaxHeap.jpg?raw=true" width="475" height="475" alt="Trie DS">
      <p>Fig.22 : Max Heap structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/max%20heap%202.png?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Fig.23 : Buying costly things on E-commerce</p>
    </td>
  </tr>  
</table>

Using a max heap to find costly and cheap products efficiently organizes product prices in a data structure where the highest prices are easily accessible. This functionality allows for quick retrieval of the most expensive products (top of the heap) and facilitates comparisons to identify the least expensive ones. In e-commerce applications, this approach supports dynamic pricing strategies, real-time product recommendations based on price ranges, and rapid adjustments to inventory management based on product cost.


#### Impact and Efficiency
Using a max heap to find costly and cheap products significantly enhances operational efficiency in e-commerce platforms. It allows for quick retrieval of the highest priced items for strategic pricing decisions and easy identification of the lowest priced products for promotions or clearance sales. This approach optimizes inventory management by enabling swift adjustments based on price variations, thereby enhancing overall profitability and customer satisfaction through targeted pricing and product placement strategies.



|Aspect           | Complexity      | 
|-----------------|-----------------|
| Time Complexity |  O(log n)| 
| Space Complexity| O(n)       |

[view implementation here](https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/codes/maxHeap.cpp)















### Prerequisites
* Code List 1 [Union-Find](https://github.com/prakashbh/day-today-codes/blob/master/10-union-find-basic.c) concepts.
