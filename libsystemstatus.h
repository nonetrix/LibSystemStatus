#pragma once

#include <iostream>



//Get the total system memory

//Get the total system ram in kb
int GetMemTotalInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "MemTotal: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get the total system memory in mb
int GetMemTotalInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "MemTotal: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get the total free system memory

//Get the total system memory in kb
int GetMemFreeInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "MemFree: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get the total system memory in mb
int GetMemFreeInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "MemFree: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get the total memory available
//Note to self find out what the diffrence is form MemFree and MemAvailable in /proc/meminfo

//Get the total memory available in kb
int GetMemAvailableInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "MemAvailable: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get the total memory available in mb
int GetMemAvailableInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "MemAvailable: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get the buffers
//Not to self again wtf is a buffer?!

//Get the buffers in kb
int GetMemBuffersInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Buffers: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get the buffers in mb
int GetMemBuffersInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Buffers: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get cached memory
//Note to self for the 10000000th time wtf is Cached for? Well I guess it explains it's self.. nvm

//Get cached memory in kb
int GetMemCachedInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Cached: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get cached memory in mb
int GetMemCachedInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Cached: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get cached swap

//Get cached swap in kb
int GetSwapCachedInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Cached: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get cached swap in mb
int GetSwapCachedInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Cached: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get active ram

//Get active ram in kb
int GetMemActiveInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Active: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get active ram in mb
int GetMemActiveInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Active: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get inactive memory
//I clearly do not know much about memory.. How is this diffrent form MemFree?!

//Get inactive memory in kb
int GetMemInactiveInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Inactive: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get inactive memory in mb
int GetMemInactiveInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Inactive: %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get active memory anon
//Again wtf is this shit even mean?! Why does the ram think it's some edgy anon hacker?!.. Pleawse don't hack me memory san OwO

//Get active memory anon in kb
int GetMemActiveAnonInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Active(anon): %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get active memory anon in mb
int GetMemActiveAnonInMb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Active(anon): %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get inactive memory anon

//Get inactive memory anon in kb
int GetMemInactiveAnonInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Inactive(anon): %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram;
        }
    }

    fclose(meminfo);
    return -1;
}

//Get inactive memory anon in mb
int GetMemInactiveAnonInKb(void) {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if(meminfo == NULL)
        return 0;

    char line[256];
    while(fgets(line, sizeof(line), meminfo))
    {
        int ram;
        if(sscanf(line, "Inactive(anon): %d kB", &ram) == 1)
        {
            fclose(meminfo);
            return ram / 1024;
        }
    }

    fclose(meminfo);
    return -1;
}
//This is most code I've made but it's just copypasta neat
