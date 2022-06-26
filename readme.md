# password validator and generator

## requirement

a. has function for user to select which kind of password they want to validate or generate.  

b. password requirement kind:  

  1. enter how long your password is, minimum and maximum value
  2. enter whether your password need number, character, uppercase letter, or special character.

c. save the generated password to the file.  

1. choose to save or not.
2. choose which file directory you want to save.
3. enter the file name you want to save.

## Design

a. start user interface

1. start menu
2. please enter generator or validator
3. if validator should enter user's password
4. switch select request interface

b. request interface

1. enter the minimum and maximum length of your password
2. choose your password need number, character, uppercase letter, or special character. yes or not
3. if generator show the created password, if validator show the password is meet the requests or not
4. ask user want to save the password or not, if yes switch to save interface, else switch to main frame or exit

c. save password interface

1. open file manager, let user select which file directory he want to save. or let user enter the file directory.
2. let user enter file name.
3. exit or return to main frame.

## Implement

a. main frame  
just print welcome and let user choose  
go to generator method  
go to validator method with password

b. request frame  
show the request for user to select  
generator set password null then modify its request attributes. then generate it and switch to file frame.  
validator set password to what user enter then modify its request attributes.then validate it and switch to file frame.

password class  
frame method  
validate and generate method  
save file method  
