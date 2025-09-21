#include <bits/stdc++.h>
using namespace std;
//* Alias
#define ll long long
/*SORTING*/
void bubble(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}
void insertion(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int k = a[i], j = i - 1;
        while (j >= 0 && a[j] > k)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
    }
}
void selection(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[m])
                m = j;
        }
        swap(a[i], a[m]);
    }
}
class MyQueue
{
    int *a, front, rear, n, cnt;

public:
    MyQueue(int size)
    {
        a = new int[size];
        n = size;
        front = rear = cnt = 0;
    }
    void enqueue(int x)
    {
        if (cnt < n)
        {
            a[rear] = x;
            rear = (rear + 1) % n;
            cnt++;
        }
    }
    void dequeue()
    {
        if (cnt > 0)
        {
            front = (front + 1) % n;
            cnt--;
        }
    }
    int peek()
    {
        return (cnt > 0) ? a[front] : -1;
    }
    bool empty()
    {
        return cnt == 0;
    }
};
class MyStack
{
    int *a, top, n;

public:
    MyStack(int size)
    {
        a = new int[size];
        n = size;
        top = -1;
    }
    void push(int x)
    {
        if (top < n - 1)
            a[++top] = x;
    }
    void pop()
    {
        if (top >= 0)
            top--;
    }
    int peek()
    {
        return (top >= 0) ? a[top] : -1;
    }
    bool empty()
    {
        return top == -1;
    }
};

//! Set
//! Most useful data structure for Contests
//? Set (Auto sorts),Unordered_Set for no dupes
//? Multiset for dupes

// // Traversal
// set<int> st = {5, 1, 3};
// for (auto i : st)
//     cout << i << " ";

// for (auto i = st.begin(); i != s.end(); i++)
// {
//     cout << *it << " ";
// }

// // Inserting - O(log n)
// st.insert(5);
// st.emplace(3);

// //? INSTEAD OF FUCKING USING O(NlogN) SORT EVERYTIME, USE THIS

// // Deleting - O(log n)
// st.erase(5);

// // Accessing - O(n)
// auto i = st.begin();  // First element
// auto i2 = next(i, 2); // Third element
// cout << *i1 << " " << i2;

// // Finding - O(log n)
// if (st.find(a) != st.end())
// {
//     return 0; // if found
// }
// if (st.find(a) == st.end())
// {
//     return 0; // if not found
// }

// // Empty
// if (st.empty())
//     ;

// // Size
// if (st.size())
//     ;

//! Linked Lists
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//! Binary tree
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//! Heap
// Max Heap
int kthSmallest(vector<int> arr, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}
// Min Heap
int findKthLargest(vector<int> nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}
// // Traversing
// while (!pq.empty())
// {
//     cout << pq.top() << ' ';
//     pq.pop();
// }
//! Graph
class Graph1
{
    vector<vector<int>> adj_mat;

public:
    Graph1(int n)
    {
        adj_mat = vector<vector<int>>(n, vector<int>(n, 0));
    }
    void add_edge(int u, int v)
    {
        adj_mat[u][v] = 1;
        adj_mat[v][u] = 1;
    }
};
//? Adjacency List
class Graph2
{
    map<int, list<int>> adjList;

public:
    void add_edge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
};
// Breadth First Search Traversal
class SolutionBFS
{
public:
    vector<int> bfsGraph(int V, int n, vector<int> adj[])
    {
        int vis[n] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
// SC: O(3N) TC: O(N) + O(2E)
// Depth First Search
class SolutionDFS
{
public:
    void dfsGraph(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &ls)
    {
        vis[node] = 1;
        ls.push_back(node);
        for (auto id : adj[node])
        {
            if (!vis[id])
                dfsGraph(id, adj, vis, ls);
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>> &adj)
    {
        int n = adj.size();
        vector<int> vis(n, 0);
        vector<int> ls;
        dfsGraph(0, adj, vis, ls);
        return ls;
    }
};
// Topological Sorting
void solveTopoSort(int v, vector<vector<int>> adj, vector<int> &vis, stack<int> &st)
{
    vis[v] = true;
    for (int i : adj[v])
    {
        if (!vis[i])
            solveTopoSort(i, adj, vis, st);
    }
    st.push(v);
}
vector<int> topologicalSort(int v, vector<vector<int>> &edges, vector<int> &vis)
{
    stack<int> st;
    vector<vector<int>> adj;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
            topologicalSort(i, adj, vis);
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

//! DP
// class Solution
// {
// public:
//     // 1. PURE RECURSION (Exponential Time - O(2^n))
//     int fibRecursive(int n)
//     {
//         if (n == 0)
//             return n;
//         if (n == 1)
//             return n;

//         return fibRecursive(n - 1) + fibRecursive(n - 2);
//     }

//     // 2. MEMOIZATION (TOP-DOWN DP) - O(n) time, O(n) space
//     int fibMemo(int n)
//     {
//         vector<int> memo(n + 1, -1);
//         return solve(n, memo);
//     }

//     int solve(int n, vector<int> &memo)
//     {
//         if (n == 0)
//             return n;
//         if (n == 1)
//             return n;

//         // memoization step
//         if (memo[n] != -1)
//             return memo[n];

//         memo[n] = solve(n - 1, memo) + solve(n - 2, memo);
//         return memo[n];
//     }

//     // 3. TABULATION (BOTTOM-UP DP) - O(n) time, O(n) space
//     int fibTabulation(int n)
//     {
//         if (n <= 1)
//             return n;

//         vector<int> dp(n + 1);

//         // Store base cases in table
//         dp[0] = 0;
//         dp[1] = 1;

//         for (int i = 2; i <= n; i++)
//         {
//             dp[i] = dp[i - 1] + dp[i - 2];
//         }

//         return dp[n];
//     }

//     // 4. SPACE OPTIMIZED - O(n) time, O(1) space
//     // We only need the last 2 values, not the entire array
//     int fibOptimized(int n)
//     {
//         if (n <= 1)
//             return n;

//         int prev2 = 0;
//         int prev1 = 1;
//         int current;

//         for (int i = 2; i <= n; i++)
//         {
//             current = prev1 + prev2;
//             prev2 = prev1; // Shift values
//             prev1 = current;
//         }

//         return current;
//     }
// };
//! Array Slicing
vector<int> slicing(const vector<int> &pog, int x, int y)
{
    return vector<int>(pog.begin() + x, pog.begin() + y + 1);
}
/* IMPORTANT PROPERTY OF BITWISE IS:
 (A and B) =(A+B) - (A xor B)   */

// way to sort in the way like-> {7,0},{7,1},{6,1},{5,0},{5,1},{4,4}
static bool comp(vector<int> &a, vector<int> &b)
{ // Comparator function for the logic of sort
    if (a[0] == b[0])
        return a[1] < b[1];
    return a[0] > b[0];
}
//! To ensure non-negative remainder
// int non_negative_rem = ((arr[i] % k) + k) % k;
//! Traverse stack
// void traverse_stack(stack<T> &st)
// {
//     if (st.empty())
//         return;
//     T x = st.top();
//     cout << x << " ";
//     st.pop();
//     traverse_stack(st);
//     st.push(x);
// }
//! Shift Operator
// int shift_operator = (1 << n) - 1; // equivalent to 2^n - 1
//! Count the occurrences of the target value in the vector
// int cnt_the_occurences = count(vec.begin(), vec.end(), target);
//! Input array when size not given
// // int num;
// // while (cin >> arr)
// // {
// //     arr.push_back(num);
// // }
//! Declaring 2D array
// vector<vector<int>> TwoD_ARRAY(m, vector<int>(n, 0)); // Initialize with 0
//! Convert Bool into integers
// // cout << boolalpha << is_in(vec, x) << endl;
// boolalpha makes 1 to true,0 to false
// Is Substring?
bool isSubString(string a, string b)
{
    return b.find(a) != string::npos;
}
//! Tuple Operations
tuple<char, int, float> geek;

// making tuple
// geek = make_tuple('a', 10, 15.5);

// printing tuple
// // cout << "The initial values of tuple are: ";
// // cout << get<0>(geek) << " " << get<1>(geek);
// // cout << " " << get<2>(geek) << endl;

// modifying tuple
// get<0>(geek) = 'b';
// get<2>(geek) = 20.5;
//! Check if sorted
// is_sorted(a.begin(), a.end());

//! To check even or odd....much faster than modulo
// if(x&1==0)--> even
// if(x&1==1)--> odd

//! Multiply or Divide by 2^k
// multiply--> x<<k
// divide--> x>>k

//! Swap two numbers without temp
// x=x^y
// y=x^y
// x=x^y

//!. With Temp
// int temp=a;
// a=b;
// b=temp;

//? Toggle with values
// x=10^5^x;
// is the same as
// if(x==10) x=5;
// else if(x==5) x=10;

//? Lambda Function
// [capture](parameters) -> return_type { function_body }
// [&] tells compiler to take original value, not make copy

//! Erase elements
//? For C++ 20
// vector<int> arr = {1, 0, 3, 0, 5, 0, 7};
// erase(arr, 0);  // Removes all occurrences of 0

void solve()
{
    int x, k;
    cin >> x >> k;
    if (x < k || (x % k != 0))
    {
        cout << 1 << endl;
        cout << x << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << x - k - 1 << " " << k + 1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // set ; of the digits in decimal
    // cout.precision(6); cout.setf(ios::fixed);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

//? Class (A blueprint (like a template) that defines data members (variables) and member functions (methods))
// class Animal {
//     // Data members (properties)
//     string name;
//     int age;

// public:
//     // Member functions (behaviors)
//     void setData(string n, int a) {
//         name = n;
//         age = a;
//     }

//     void showData() {
//         cout << "Animal: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     ? Creating objects (A real-world instance of a class, which has actual values for the variables)
//     Animal lion, elephant;

//     lion.setData("Lion", 5);
//     elephant.setData("Elephant", 10);

//     lion.showData();
//     elephant.showData();

//     return 0;
// }

//* Encapsulation - Wrapping data (variables) and functions (methods) together inside a single unit (class)
// Protects data by making it private
// Only accessible via public methods (getters/setters)

// class Animal {
// private:   // data hidden
//     string name;
//     int age;

// public:
//     // Setter methods
//     void setName(string n) {
//         name = n;
//     }
//     void setAge(int a) {
//         if (a > 0) age = a;  // simple validation
//     }

//     // Getter methods
//     string getName() {
//         return name;
//     }
//     int getAge() {
//         return age;
//     }
// };

//* Abstraction - Showing only the essential details and hiding the background implementation
// Abstract class (cannot be instantiated)
// class Animal {
// public:
//     virtual void sound() = 0; // pure virtual function
// };

// // Derived classes implement details
// class Dog : public Animal {
// public:
//     void sound() override {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() override {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Animal* a;   // pointer of base class

//     Dog d;
//     Cat c;

//     a = &d; a->sound();   // Dog barks
//     a = &c; a->sound();   // Cat meows

//     return 0;
// }
//* Inheritance - : One class (child/derived) can acquire properties & behaviors of another class (parent/base)
// 1. Single Inheritance
// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "This animal eats food" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog barks" << endl;
//     }
// };
// 2. Multi-level Inheritance
// class LivingBeing {
// public:
//     void breathe() {
//         cout << "Breathing..." << endl;
//     }
// };

// class Animal : public LivingBeing {
// public:
//     void eat() {
//         cout << "Animal eats" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
//};
// 3. Multiple Inheritance
// class Terrestrial {
// public:
//     void walk() {
//         cout << "Can walk on land" << endl;
//     }
// };

// class Aquatic {
// public:
//     void swim() {
//         cout << "Can swim in water" << endl;
//     }
// };

// class Frog : public Terrestrial, public Aquatic {
// public:
//     void sound() {
//         cout << "Frog croaks" << endl;
//     }
// };
// 4. Hierarchical Inheritance
// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Animal eats" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal
// {
// public:
//     void meow()
//     {
//         cout << "Cat meows" << endl;
//     }
// };
//* Polymorphism
//"One name, many forms."

// Compile-time polymorphism → Resolved at compile time.

// Achieved by function overloading and operator overloading.
// class Animal
// {
// public:
//     // Function overloading: same function name "sound" with different params
//     void sound()
//     {
//         cout << "Some generic animal sound" << endl;
//     }

//     void sound(string animalType)
//     {
//         cout << animalType << " makes a sound" << endl;
//     }

//     void sound(string animalType, int times)
//     {
//         cout << animalType << " makes sound " << times << " times" << endl;
//     }
// };
// Operator Overloading - Redefining the meaning of operators (+, -, <<, etc.) for user-defined types.
// class Animal
// {
//     int age;

// public:
//     Animal(int a = 0)
//     {
//         age = a;
//     }

//     // Operator overloading for +
//     Animal operator+(Animal const &obj)
//     {
//         Animal temp;
//         temp.age = this->age + obj.age;
//         return temp;
//     }

//     void showAge()
//     {
//         cout << "Age: " << age << endl;
//     }
// };
// Run-time polymorphism
// The function to be executed is determined at runtime (not compile time)

// Achieved by function overriding and virtual functions

// function overriding
// class Animal
// {
// public:
//     void sound()
//     {
//         cout << "Some generic animal sound" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void sound()
//     { // overrides Animal’s sound
//         cout << "Dog barks" << endl;
//     }
// };

// virtual functions
// class Animal
// {
// public:
//     virtual void sound()
//     { // marked virtual
//         cout << "Some generic animal sound" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void sound() override
//     { // override base class function
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal
// {
// public:
//     void sound() override
//     {
//         cout << "Cat meows" << endl;
//     }
// };
// Pure Virtual Functions and Abstract Classes
// f a base class function has no definition and must be overridden, declare it as pure virtual (= 0)

// This makes the base class an abstract class (cannot be instantiated)

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() = 0; // pure virtual function
// };

// class Dog : public Animal {
// public:
//     void sound() override {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() override {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Animal* a;   // only pointers/references allowed

//     Dog d;
//     Cat c;

//     a = &d; a->sound();  // Dog barks
//     a = &c; a->sound();  // Cat meows

//     return 0;
// }

// class Animal
// {
//     string name; // private by default
// public:
//     void setName(string n) { name = n; }
//     void showName() { cout << "Animal: " << name << endl; }
// };

// struct Bird
// {
//     string name; // public by default
//     void showName() { cout << "Bird: " << name << endl; }
// };

//* Constructor - : A special member function of a class that is automatically called when an object is created.

// Same name as the class.

// No return type (not even void)

// Default

// class Animal
// {
// public:
//     Animal()
//     { // default constructor
//         cout << "An animal is created" << endl;
//     }
// };
// Parameterized
// class Animal
// {
//     string name;
//     int age;

// public:
//     Animal(string n, int a)
//     { // parameterized constructor
//         name = n;
//         age = a;
//     }
//     void show()
//     {
//         cout << "Animal: " << name << ", Age: " << age << endl;
//     }
// };
// Copy
// class Animal
// {
//     string name;
//     int age;

// public:
//     Animal(string n, int a)
//     { // parameterized
//         name = n;
//         age = a;
//     }

//     Animal(const Animal &obj)
//     { // copy constructor
//         name = obj.name;
//         age = obj.age;
//     }
// };
//* Destructor - A special member function that is automatically called when an object goes out of scope or is deleted
// class Animal
// {
// public:
//     Animal()
//     {
//         cout << "Animal created" << endl;
//     }
//     ~Animal()
//     { // destructor
//         cout << "Animal destroyed" << endl;
//     }
// };
//* Friend - A non-member function that has access to private/protected members of a class
// class Animal
// {
// private:
//     string name;
//     int age;

// public:
//     Animal(string n, int a)
//     {
//         name = n;
//         age = a;
//     }

//     // friend function declaration
//     friend void showDetails(Animal a);
// };
// class Animal
// {
// private:
//     string name;
//     int age;

// public:
//     Animal(string n, int a)
//     {
//         name = n;
//         age = a;
//     }

//     // Declare class Vet as a friend
//     friend class Vet;
// };
