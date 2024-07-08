**### APS-portfolio.github.io**
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
      <p>Trie Data structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/tier%20pic.png?raw=true" width="475" height="475" alt="Tier Pic">
      <p>Implementation in real life</p>
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
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/dij%20image.png" width="475" height="475" alt="Trie DS">
      <p>Trie Data structure</p>
    </td>
    <td>
      <img src="https://github.com/PriyadharshiniRD/APS-portfolio.github.io/blob/main/images/dij%20anima.jpg" width="475" height="475" alt="Tier Pic">
      <p>Implementation in real life</p>
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
      <p>Trie Data structure</p>
    </td>
    <td>
      <img src="https://raw.githubusercontent.com/PriyadharshiniRD/APS-portfolio.github.io/main/images/price%20range%20pic.png" width="475" height="475" alt="Tier Pic">
      <p>Implementation in real life</p>
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
### Prerequisites
* Code List 1 [Union-Find](https://github.com/prakashbh/day-today-codes/blob/master/10-union-find-basic.c) concepts.
