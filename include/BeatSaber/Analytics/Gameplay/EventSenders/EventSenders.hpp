#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "BeatSaber/Analytics/Gameplay/EventSenders/BeatmapAttempt.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/BlockLevelGameplayEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/EventSenderBase.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapAttemptEventData.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapLevelData.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapPracticeSettings.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsGameplayModifiers.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/HMDSessionEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/IBeatmapAttemptEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/IBlockLevelGameplayEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/IHMDSessionEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/NoopBeatmapAttemptEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/NoopBlockLevelGameplayEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/NoopHMDSessionEventSender.hpp"
#ifdef __cpp_modules
                    export module EventSenders;
                    #endif
                
