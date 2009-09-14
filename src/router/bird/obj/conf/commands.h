{ "configure soft", "[\"<file>\"]", "Reload configuration and ignore changes in filters", 1 },
{ "configure", "[\"<file>\"]", "Reload configuration", 1 },
{ "configure", "[soft] [\"<file>\"]", "Reload configuration", 0 },
{ "debug", "(<protocol> | <pattern> | all) (all | off | { states | routes | filters | events | packets })", "Control protocol debugging", 1 },
{ "debug", "...", "Control protocol debugging", 0 },
{ "disable", "<protocol> | \"<pattern>\" | all", "Disable protocol", 1 },
{ "down", "", "Shut the daemon down", 1 },
{ "dump attributes", "", "Dump attribute cache", 1 },
{ "dump interfaces", "", "Dump interface information", 1 },
{ "dump neighbors", "", "Dump neighbor cache", 1 },
{ "dump protocols", "", "Dump protocol information", 1 },
{ "dump resources", "", "Dump all allocated resource", 1 },
{ "dump routes", "", "Dump routing table", 1 },
{ "dump sockets", "", "Dump open sockets", 1 },
{ "dump", "...", "Dump debugging information", 0 },
{ "echo", "[all | off | <mask>] [<buffer-size>]", "Configure echoing of log messages", 1 },
{ "enable", "<protocol> | \"<pattern>\" | all", "Enable protocol", 1 },
{ "exit", "", "Exit the client", 1 },
{ "help", "", "Description of the help system", 1 },
{ "quit", "", "Quit the client", 1 },
{ "restart", "<protocol> | \"<pattern>\" | all", "Restart protocol", 1 },
{ "show interfaces summary", "", "Show summary of network interfaces", 1 },
{ "show interfaces", "", "Show network interfaces", 1 },
{ "show ospf interface", "[<name>] [\"<interface>\"]", "Show information about interface", 1 },
{ "show ospf neighbors", "[<name>] [\"<interface>\"]", "Show information about OSPF neighbors", 1 },
{ "show ospf state", "[<name>]", "Show information about OSPF network state", 1 },
{ "show ospf topology", "[<name>]", "Show information about OSPF network topology", 1 },
{ "show ospf", "[<name>]", "Show information about OSPF protocol", 1 },
{ "show protocols all", "[<name>]", "Show routing protocol details", 1 },
{ "show protocols", "[<name>]", "Show routing protocols", 1 },
{ "show route", "[<prefix>|for <prefix>|for <ip>] [table <t>] [filter <f>|where <cond>] [all] [primary] [(export|preexport) <p>] [protocol <p>] [stats|count]", "Show routing table", 1 },
{ "show static", "[<name>]", "Show details of static protocol", 1 },
{ "show status", "", "Show router status", 1 },
{ "show symbols", "[<symbol>]", "Show all known symbolic names", 1 },
{ "show", "...", "Show status information", 0 },
