All changes were made with Red Gate Reflector 7.6.0.808
Feel free to scan those or send them to VirusTotal.

Assembly-CSharp.dll :
Modified to connect to the PrivateServer (127.0.0.1:1031)
Changed the "Register" button to load "https://github.com/tux3/LoE-PrivateServer/"
Changed the version string to v20140122-/mlp/, made it actually visible
Changed "Connecting to the official Legends of Equestria server" by "Connecting to the private Legends of Equestria server"
Changed some other minor messages.
Changed WebDataLoader to download files from the PrivateServer instead of the official server.
Patched chat to only keep the last 50 messages
Patched to show a somewhat helpful error instead of sleeping forever on the "Downloading..." screen after a deserialization error.

LegendsOfEquestria.Shared.dll :
Modified to ignore the chat filters.
Modified to connect to the PrivateServer (127.0.0.1:1031)

LegendsOfEquestria.Data.dll :
Modified to connect to the PrivateServer (127.0.0.1:1031)
Modified to store 1 in a new public static field if there was a deserialization error.