#include <SDL.h>
#include <string>
#include <fstream>

#include "../include/Config.h"

Config::Config(std::string fileName)
{
    configFile.open(fileName);
    if (configFile.is_open())
    {
        // TODO: Add config values to map
    }
    else
    {
        SDL_ShowSimpleMessageBox(
            SDL_MESSAGEBOX_ERROR,
            "Configuration Error",
            "Could not open configuration file!",
            NULL);
    }
}

Config::~Config()
{
    configFile.close();
}

mapDataTypes Config::getValue(std::string key)
{
    // TODO: Retrieve values from map
}