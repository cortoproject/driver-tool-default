/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef DRIVER_TOOL_DEFAULT_BAKE_CONFIG_H
#define DRIVER_TOOL_DEFAULT_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <corto>
#include <bake.util>

/* Headers of private dependencies */
#ifdef DRIVER_TOOL_DEFAULT_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if DRIVER_TOOL_DEFAULT_IMPL && defined _MSC_VER
#define DRIVER_TOOL_DEFAULT_EXPORT __declspec(dllexport)
#elif DRIVER_TOOL_DEFAULT_IMPL
#define DRIVER_TOOL_DEFAULT_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define DRIVER_TOOL_DEFAULT_EXPORT __declspec(dllimport)
#else
#define DRIVER_TOOL_DEFAULT_EXPORT
#endif

#endif

