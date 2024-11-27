#!/usr/bin/python3

from datetime import datetime

class chatbot:
    
    def __init__(self) -> None:
        self.name = 'zara'
        self.version = '0.1'
        
        self.rule = {
            "hi":"how can i assist you!",
            "greet":{
                    0:"good morning! have a nice day!",
                    1:"good afternoon!",
                    2:"good evening!",
                    3:"good night!"
                },
            "time":f"{datetime.now()}",
            "none":"input cannot be processed!"
        }
        
    def response(self,resp) -> None:
        print(f'{self.name}: {resp}')
    
    def process(self,usrinp = '') -> str:
        
        if usrinp in ['hi','hello','hey']:
            self.response(self.rule['hi'])
        
        elif 'morning' in usrinp:
            self.response(self.rule['greet'][0])
        elif 'afternoon' in usrinp:
            self.response(self.rule['greet'][1])
        elif 'evening' in usrinp:
            self.response(self.rule['greet'][2])
        elif 'night' in usrinp:
            self.response(self.rule['greet'][3])
        elif "time" in usrinp:
            self.response(self.rule['time'])
        
        else:
            self.response(self.rule['none'])
        
    def __del__(self) -> None:
        pass
    
    
if __name__ == '__main__':
    trial = chatbot()
    while 1:
        usrinp = input('user: ').lower()
        if usrinp in ['bye','exit','end','terminate','kill']:
            trial.response('sorry to see you going!')
            exit(1)
        trial.process(usrinp)
