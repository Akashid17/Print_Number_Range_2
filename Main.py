
def DisplayRangeEven(iNo1, iNo2):

    if iNo1 > iNo2:
        print("Invalid Range")
        return

    for x in range(iNo1,iNo2+1):
        if x % 2 == 0:
            print(x,end=" ")
    print()

def main():

    iValue1 = int(input("Enter First Number\n"))
    iValue2 = int(input("Enter Second Number\n"))
    
    DisplayRangeEven(iValue1,iValue2)

if __name__ == "__main__":
    main()