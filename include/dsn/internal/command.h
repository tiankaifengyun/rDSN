#pragma once

# include <string>
# include <vector>
# include <functional>

namespace dsn {
    
    typedef std::function<std::string(const std::vector<std::string>&)> command_handler;

    void register_command(
        const std::vector<const char*>& commands, // commands, e.g., {"help", "Help", "HELP", "h", "H"}
        const char* help_one_line,
        const char* help_long,
        command_handler handler
        );

    void register_command(
        const char* command, // commands, e.g., "help"
        const char* help_one_line,
        const char* help_long,
        command_handler handler
        );
}
