class Student:
    def __init__(self,fullname,marks):
        self.name=fullname;
        self.marks=marks;
        print("Addding new studentnin Dtadbase..");


s1=Student("Karan",98);
print(s1.name,s1.marks);

s2=Student("Vimlesh",67);
print(s2.name,s2.marks);