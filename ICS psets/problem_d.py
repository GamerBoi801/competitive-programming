import sys
import random

DIMENSION = 10

def create_crossword(words: list) -> list:
    """
    Generate a 10x10 word search puzzle containing the given words.
    
    Args:
        words: A list of words to include in the puzzle.
        
    Returns:
        A 2D array (list of lists) representing the word search puzzle.
    """
     # key is word placed, value is set or list of all the coordinates of the word
    
    record = dict()
    choices = ['vert', 'hori']
    letters = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    
    crossword = [[None for _ in range(DIMENSION)]for _ in range(DIMENSION)]
    # for across change y (hori)
    # for down change x (vert)
    
    
    def candid_positions(crossword, word, record=None):
        """Returns a list of candidate positions for a word on the crossword considering letter matches 
        for overlaps and boundary constraints
        
        Args:
        crossword: Crossword Puzzle
        word: Word to be placed
        record: dict or set of occupied position to avoid 
        
        Returns:
        list of tuples in the form (row, col, orientation) """

        candidates = []
        word_letters = list(word)

        for row in range(DIMENSION):
            for col in range(DIMENSION):
                cell_letter = crossword[row][col]

                if cell_letter in word_letters:
                    #find all possible positions of this letter to algin with the overlap
                    for i, letter in enumerate(word_letters):
                        #calc starting position
                        start_col = col - i # for hori placement
                        start_row = row - i # for vert placement

                        #checking whether hori placement is valid
                        if 0 <= start_col <= DIMENSION - len(word):
                            candidate = (row, col, 'hori')
                            if record in None or candidate not in record:
                                candidates.append(candidate)

                        #checking whether vert placement is valid or not
                        if 0<= start_row <= DIMENSION - len(word):
                            candidate = (row, col, 'vert')
                            if record is None or candidate not in record:
                                candidates.append(candidate)

                else:
                    # IF NOT the same then consider all the other  possible conditions

                    #vertical fitting fromm current pos
                    if col <= DIMENSION - len(word):
                        candidate = (row, col, 'hori')
                        if record is None or candidate not in record:
                            candidates.append(candidate)
                                              
                    #horizontal fitting from current pos
                    if row <= DIMENSION - len(word):
                        candidate = (row, col, 'vert')
                        if record is None or candidate not in record:
                            candidates.append(candidate)
            
        
        return candidates


    def check_validity(crossword, word, option, record=None):
      """Takes a candidate placement and  verifies:
        - word fits the current boundaries 
        - no conflicting letters r over written
        * placement respects crossword rules

        Args:
        crossword: Crossword Puzzle
        word: validating this candid placement
        options: list || set  of candidate positions (x, y, choice)
        record: List of coordinates where words r already placed

        Returns:
        Boolean indicating whether the placement valid or not"""    
      row, col, choice = option
      #x, y are starting positions
    
      #checking out of bounds error
      if choice == 'hori':          
        if  col + len(word) >  DIMENSION:
            return False
        else:  #vertical
            if row+len(word) > DIMENSION:
                return False
            
    
      if choice == 'hori':
          #if horizontal then change col
          for index, char in enumerate(word):
              new_points = (row, col+index)
              if crossword[]:
                  return False

      else:
          for index, char in enumerate(word):
              new_points = (row + index, col)
              if new_points in record and crossword[new_points] == word[index]:
                  return False

    
      return True
            




    def print_horizontal(word, x, y): #x,y r starting coordinates
        #change y val
        temp_set = set()
        for i in range(len(word)):
            crossword[x][y+i] = word[i]
            temp_set.add((x, y+i))
        record[word] = temp_set
            

    def print_vertical(word, x, y): #x,y r starting coordinates
    #change x val
        temp_list  = set()
        for i in range(len(word)):
            crossword[x+i][y] = word[i]
            temp_list.add((x+i, y))
        
        record[word] = temp_list

    for word in words:
        #choose orientation 
        choice = random.choice(choices)
        x, y = random.randint(0, 9), random.randint(0, 9)
        #first print at the original random position
           
        #check for overflow and adjust
        x, y = check_over_flow(word, x, y, choice) #these r starting coordinates
        
        if choice == 'hori':
            #check for collision then print
            if not check_collision(occupied_set, x, y):
                print_horizontal(word, x, y)
            else: 
                #if there is then print vert
                print_vertical(word, x, y)
        else:
            if not check_collision(occupied_set, x, y):
                print_vertical(word, x, y)
            else:
                print_horizontal(word, x, y)

    return crossword
            
            

# --- Main execution block. DO NOT MODIFY.  ---
if __name__ == "__main__":
    try:
        # Read words from first line (comma-separated)
        words_input = input().strip()
        words = [word.strip() for word in words_input.split(',')]
        
        # Generate the word search puzzle
        puzzle = create_crossword(words)
        
        # Print the result as a 2D grid
        for row in puzzle:
            print(''.join(row))
            
    except ValueError as e:
        print(f"Input Error: {e}", file=sys.stderr)
        sys.exit(1)
    except EOFError:
        print("Error: Not enough input lines provided.", file=sys.stderr)
        sys.exit(1)
    except Exception as e:
        print(f"An unexpected error occurred: {e}", file=sys.stderr)
        sys.exit(1)