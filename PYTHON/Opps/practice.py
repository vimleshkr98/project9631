class Student:
    def __init__(self,name,marks):

        self.name=name;
        self.marks=marks;


    def get_avg(self):
        sum=0;
        for val in self.marks:
         sum +=val;
        print("Hii",self.name,"Your avg score is:",sum/3);

s1=Student("Vimlesh",[97,98,94]);
print(s1.name,s1.marks);

s1.get_avg();
s1.name="Kamlesh Kumar"
