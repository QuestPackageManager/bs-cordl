#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/Main/Leaderboards/BeatLeaderboards.hpp"
#include "BeatSaber/Main/Leaderboards/BeatLeaderboardsState.hpp"
#include "BeatSaber/Main/Leaderboards/GraphQLClientLogger.hpp"
#include "BeatSaber/Main/Leaderboards/GraphQLErrorCode.hpp"
#include "BeatSaber/Main/Leaderboards/LeaderboardHelpers.hpp"
#include "BeatSaber/Main/Leaderboards/QueryLeaderboardAroundMe.hpp"
#include "BeatSaber/Main/Leaderboards/QueryLeaderboardFriends.hpp"
#include "BeatSaber/Main/Leaderboards/QueryLeaderboardHealth.hpp"
#include "BeatSaber/Main/Leaderboards/QueryLeaderboardTopN.hpp"
#include "BeatSaber/Main/Leaderboards/UpsertLeaderboardEntryMutation.hpp"
#include "BeatSaber/Main/Leaderboards/UpsertUserMutation.hpp"
#ifdef __cpp_modules
export module Leaderboards;
#endif
