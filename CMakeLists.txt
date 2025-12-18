cmake_minimum_required(VERSION 3.10)

project(Timer)

set(CMAKE_CXX_STANDARD 17)


add_executable(Timer
    main.cc
    Resource.cc
    ResourceManager.cc
    Time.cc
    TimeInterval.cc

    )
