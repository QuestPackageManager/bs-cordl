#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "BeatSaber/Analytics/Gameplay/EventsBuilder.hpp"
#include "BeatSaber/Analytics/Gameplay/EventsBuilderFactory.hpp"
#include "BeatSaber/Analytics/Gameplay/EventsBuilderSharedCache.hpp"
#include "BeatSaber/Analytics/Gameplay/GameplayEventsDispatcher.hpp"
#include "BeatSaber/Analytics/Gameplay/HMDDeviceDetector.hpp"
#include "BeatSaber/Analytics/Gameplay/IGameplayEventsDispatcher.hpp"
#include "BeatSaber/Analytics/Gameplay/NoopGameplayEventsDispatcher.hpp"
#include "BeatSaber/Analytics/Gameplay/SegmentState.hpp"
#ifdef __cpp_modules
                    export module Gameplay;
                    #endif
                
