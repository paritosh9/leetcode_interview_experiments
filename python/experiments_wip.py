print("Hello World")

class Student:
    def __init__(self, fname, fid):
        self.name = fname
        self.id = fid

student1 = Student("john", 24)

#####
a = [1,2,3]
for i in a:
    print(i, end=' ')
    
####
my_tuple = ('sara', 6, 5, 0.97)
my_list = ['sara', 6, 5, 0.97]
print(my_tuple[0])     # output => 'sara'
print(my_list[0])     # output => 'sara'
##my_tuple[0] = 'ansh'    # modifying tuple => throws an error

####
my_list = [[10,20,30],[40,50,60],[70,80,90]]
flattened = []
for sub_list in my_list:
    for x in sub_list:
        flattened = flattened + [x]
        
print(flattened)

####
mul = lambda a,b:a*b
print(mul(2,3))

####

