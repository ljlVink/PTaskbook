def task(task:str):
    print(f"you are using a fake pt4,task:{task},ONLY FOR TESTING!")
def get_int():
    x=int(input())
    return x

def put(x:any):
    print("--->",end='')
    print(x,end='\n')

def start(solve):
    try:
        solve()
    except Exception as ex:
        print("Exception :"+ex)