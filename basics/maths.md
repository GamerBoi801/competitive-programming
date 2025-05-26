# some_maths
# Arithmetic Progression (AP)

- The **difference** between consecutive numbers is constant (denoted by \( d \)).
- \( a \): first term
- \( d \): common difference
- \( n \): term number (or number of terms)
- \( L \): last term

### Formula for the \( n^{th} \) term:
\[
a_n = a + (n - 1)d
\]

### Sum of first \( n \) terms:
\[
S_n = \frac{n(a + L)}{2}
\]

---

# Geometric Progression (GP)

- The **ratio** between consecutive numbers is constant (denoted by \( r \)).
- \( a \): first term
- \( r \): common ratio
- \( n \): term number (or number of terms)

### Formula for the \( n^{th} \) term:
\[
a_n = a \times r^{n - 1}
\]

### Sum of first \( n \) terms:
\[
S_n = a \times \frac{1 - r^n}{1 - r} \quad \text{(for } r \neq 1 \text{)}
\]

# Sum THeory
# Summation Notation and Formulas

The summation symbol $\sum$ means "add up" the terms.

For example, the sum of the first $n$ natural numbers is:

$$
\sum_{x=1}^{n} x = 1 + 2 + \dots + n = \frac{n(n+1)}{2}
$$

Similarly, the sum of the squares of the first $n$ natural numbers is:

$$
\sum_{x=1}^{n} x^2 = \frac{n(n+1)(2n+1)}{6}
$$

# Set Theory

A **set** is a collection of elements. For example, the set  
\[
X = \{2, 4, 7\}
\]  
contains elements 2, 4, and 7.

- The symbol \(\varnothing\) denotes the **empty set**.
- \(|S|\) denotes the **size** (cardinality) of a set \(S\), i.e., the number of elements in the set.  
  For example, in the above set, \(|X| = 3\).

If a set \(S\) contains an element \(x\), we write  
\[
x \in S
\]  
and otherwise, we write  
\[
x \notin S
\]  
For example, in the above set:  
\[
4 \in X \quad \text{and} \quad 5 \notin X
\]

---

## Set Operations

New sets can be constructed using the following operations:

- **Intersection** \(A \cap B\):  
  Consists of elements that are in both \(A\) and \(B\).  
  Example:  
  \[
  A = \{1, 2, 5\}, \quad B = \{2, 4\} \implies A \cap B = \{2\}
  \]

- **Union** \(A \cup B\):  
  Consists of elements that are in \(A\) or \(B\) or both.  
  Example:  
  \[
  A = \{3, 7\}, \quad B = \{2, 3, 8\} \implies A \cup B = \{2, 3, 7, 8\}
  \]

- **Complement** \(\overline{A}\):  
  Consists of elements that are *not* in \(A\). The interpretation depends on the **universal set**, which contains all possible elements.  
  Example:  
  \[
  A = \{1, 2, 5, 7\}, \quad \text{Universal set} = \{1, 2, \ldots, 10\} \implies \overline{A} = \{3, 4, 6, 8, 9, 10\}
  \]

- **Difference** \(A \setminus B = A \cap \overline{B}\):  
  Consists of elements that are in \(A\) but not in \(B\). Note that \(B\) can contain elements not in \(A\).  
  Example:  
  \[
  A = \{2, 3, 7, 8\}, \quad B = \{3, 5, 8\} \implies A \setminus B = \{2, 7\}
  \]

---

## Subsets

If every element of \(A\) also belongs to \(S\), we say that \(A\) is a **subset** of \(S\), denoted by  
\[
A \subset S
\]

A set \(S\) always has \(2^{|S|}\) subsets, including the empty set. For example, the subsets of the set \(\{2, 4, 7\}\) are:  
\[
\varnothing, \{2\}, \{4\}, \{7\}, \{2, 4\}, \{2, 7\}, \{4, 7\}, \{2, 4, 7\}
\]

---

## Common Sets

Some often-used sets are:

- \(\mathbb{N}\): Natural numbers  
- \(\mathbb{Z}\): Integers  
- \(\mathbb{Q}\): Rational numbers  
- \(\mathbb{R}\): Real numbers  

The set \(\mathbb{N}\) can be defined in two ways depending on the context:  
\[
\mathbb{N} = \{0, 1, 2, \ldots\} \quad \text{or} \quad \mathbb{N} = \{1, 2, 3, \ldots\}
\]

---

## Constructing Sets Using a Rule

We can also construct a set using a rule of the form:  
\[
\{ f(n) : n \in S \}
\]  
where \(f(n)\) is some function. This set contains all elements of the form \(f(n)\), where \(n\) is an element in \(S\).

**Example:**  
\[
X = \{ 2n : n \in \mathbb{Z} \}
\]  
contains all even integers.

---

*End of Set Theory Summary*
