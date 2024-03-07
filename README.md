
# Dll hijacking Experiment

inspired by this paper, https://www.cyfirma.com/outofband/xeno-rat-a-new-remote-access-trojan-with-advance-capabilities/, in which a threat actor used "active directory viewer" from sysinternals to hijack the real samcli.dll located in System32




## replication
- Compile dll
- rename dll to samcli.dll
- place in same folder as ADExplorer64.exe from the /poc/ folder
- run ADExplorer64.exe and a message box should appear
