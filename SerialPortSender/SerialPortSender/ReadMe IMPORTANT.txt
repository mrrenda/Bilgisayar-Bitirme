Problems I have encountered and their solutions i have found:

Problem1:
getting the program to connect to device
Solution:
follow the steps on javax.comm.zip (this works on windows only)
also add the jar file to the project structure
and the java jdk version has to be the 32 bit version or it wont work

Problem 2:
Disconnection problem
Solution:
Must call methods OStream.close();  and  com.close();  both.
just one is not enough. and i had to reassign the value of com because reconnecting
after disconnecting was giving an error. 
(i added printport = CommPortIdentifier.getPortIdentifiers(); to the connect method)