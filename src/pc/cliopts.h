#ifndef _CLIOPTS_H
#define _CLIOPTS_H

struct PCCLIOptions  {
    unsigned int SkipIntro;
    unsigned int FullScreen;
    unsigned int LevelSelect;
    unsigned int Profiler;
    unsigned int Debug;
    char ConfigFile[1024];
};

extern struct PCCLIOptions gCLIOpts;

void parse_cli_opts(int argc, char* argv[]);

#endif // _CLIOPTS_H