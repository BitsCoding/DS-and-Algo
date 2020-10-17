# Contributing Guidelines

## Before contributing

Welcome to
[BitsCoding/DS-and-Algo!](https://github.com/BitsCoding/DS-and-Algo)  
Before sending your pull requests, make sure that you **read all the
guidelines**. If you have any doubt on the contributing guide, please feel free
to
[state it clearly in an issue](https://github.com/BitsCoding/DS-and-Algo/issues/new).

**New implementations** are welcome! For example, new solutions for a problem
with different data structure, algorithm designs or complexity.

We appreciate any contribution, from fixing a grammar mistake in a comment to
implementing complex algorithms or documenting the code.

Please help us keep our issue list small by adding fixes: #{\$ISSUE_NO} to the
commit message of pull requests that resolve open issues. GitHub will use this
tag to auto close the issue when the PR is merged.

### Opening Issues

When you open an issue, please make sure the Problem is not already implemented.
Opened Issues by existing Problem will be closed & PR made to those Issues will
be marked as **spam** The Contributer who opened an issue will be assigned
prefered to the issue. If there is no PR within about 24 hours the issue will be
assigned to another Contributer.

### Pull Requests

Only Pull Requests **joined with an Issue** and matching the
**naming-conventions** (See
[Folder Structure](https://github.com/BitsCoding/DS-and-Algo#folder-structure))
will be merged! If there is no Issue number in the PR your PR will be closed and
labeld as **spam**. If your PR doesn't follow the Contributing Guidelines of
this Repository it will be also marked as **spam** and closed!

## Coding Style

We want your work to be readable by others; therefore, we encourage you to note
the following:

- Please focus hard on naming of functions, classes, and variables. Help your
  reader by using **descriptive names** that can help you to remove redundant
  comments.

  - Single letter variable names are _old school_ so please avoid them unless
    their life only spans a few lines.
  - Please follow our naming convension.
    - variable_names and function_names should be snake_case
    - CONSTANTS in UPPERCASE
    - ClassNames should be CamelCase

- Use proper indentation.

- Original code submission require docstrings or comments to describe your work.

- More on docstrings and comments:

  If you used a Wikipedia article or some other source material to create your
  algorithm, please add the URL in a docstring or comment to help your reader.

  The following are considered to be bad and may be requested to be improved:

  ```python
  x += 2	# increased by 2
  ```

  ```cpp
  x += 2    // increased by 2
  ```

  These are too trivial. Comments are expected to be explanatory. For comments,
  you can write them above, on or below a line of code, as long as you are
  consistent within the same piece of code.

- Avoid importing external libraries.

## Language Specific Coding Style

### Python 3

- [**List comprehensions and generators**](https://docs.python.org/3/tutorial/datastructures.html#list-comprehensions)
  are great but don't forget to keep the readablity of your program.

- Typical structure of a program:

  ```python
  class Animal:
      """
      A class used to represent an Animal
      ...
      Attributes
      ----------
      name : str
          the name of the animal
      sound : str
          the sound that the animal makes
      num_legs : int
          the number of legs the animal has (default 4)

      Methods
      -------
      says(sound=None)
          Prints the animals name and what sound it makes
      """

      def __init__(self, name, sound, num_legs=4):
          """
          Parameters
          ----------
          name : str
              The name of the animal
          sound : str
              The sound the animal makes
          num_legs : int, optional
              The number of legs the animal (default is 4)
          """

          self.name = name
          self.sound = sound
          self.num_legs = num_legs

      def says(self):
          """Prints what the animals name is and what sound it makes.

          Returns
          ------
          str
              animal name and sound it makes
          """
          return "A {} says {}".format(self.name, self.sound)


  def main():
      dog = Animal('Dog', 'Woof')
      print(dog.says())


  if __name__ == "__main__":
      main()
  ```

### C++ and C

- Don't use bits/stdc++.h because this is quite Linux specific and slows down
  the compilation process.

- Organize your code using struct, class and/or namespace keywords.

- Typical structure of a program:

  ```cpp
  #include

  /**
  * Class documentation
  */
  class class_name {
  private:
      int variable;  /// short info of this variable
      char *message;  /// short info

  public:
      // other members also documented as below
  }

  /**
  * Function documentation
  * @tparam T this is a one-line info about T
  * @param param1 on-line info about param1
  * @param param2 on-line info about param2
  * @returns `true` if ...
  * @returns `false` if ...
  */
  template<class T>
  bool func(int param1, T param2) {
      if (/*something bad*/) {
          return false;
      }

      return true;
  }

  int main() {
      // code here
      return 0;
  }
  ```

### Java

Typical structure of a program:

```java
import java.io.*;

public class AddNum {
   /**
   * This method is used to add two integers. This is
   * a the simplest form of a class method, just to
   * show the usage of various javadoc Tags.
   * @param numA This is the first paramter to addNum method
   * @param numB  This is the second parameter to addNum method
   * @return int This returns sum of numA and numB.
   */
   public int addNum(int numA, int numB) {
      return numA + numB;
   }

   /**
   * This is the main method which makes use of addNum method.
   * @param args Unused.
   * @return Nothing.
   * @exception IOException On input error.
   * @see IOException
   */

   public static void main(String args[]) throws IOException {
      AddNum obj = new AddNum();
      int sum = obj.addNum(10, 20);

      System.out.println("Sum of 10 and 20 is :" + sum);
   }
}
```

### JavaScript

Document your fuctions as follows:

```javascript
/**
 * Raises a number to exponent
 * @param {number} value - The base to raise
 * @param {number} exponent - The exponent
 * @return {number} - The exponent power
 */
function pow(value, exponent) {
  return value ** exponent;
}
```

## Getting Started

- Fork this repository (Click the Fork button at the top right of this page)
- Clone your fork down to your local machine

```markdown
git clone https://github.com/yourUserName/DS-and-Algo.git
```

- Comment to the Issue you want to work on - so I can assign you to it OR create
  a new Issue with Problem that is not implemented yet.
- Make your changes.
- Commit and Push

```markdown
git add . git commit -m 'commit message' git push origin main
```

- Create a New Pull Request from your forked repository ( Click the 'New Pull
  Request' Button located at the top of your repo)
- Wait for your PR review and merge approval!
- **Star this repository** if you had fun!

## Which PR's will be accepted?

- Ones you are assigned to
- PR linked with the Issue.
- Your Solution must be correct.
