#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/Main/GraphQL/Models/BSLeaderboardAroundMeModel.hpp"
#include "BeatSaber/Main/GraphQL/Models/BSLeaderboardFriendsModel.hpp"
#include "BeatSaber/Main/GraphQL/Models/BSLeaderboardHealthModel.hpp"
#include "BeatSaber/Main/GraphQL/Models/BSLeaderboardTopNModel.hpp"
#include "BeatSaber/Main/GraphQL/Models/BSUpsertLeaderboardEntryModel.hpp"
#include "BeatSaber/Main/GraphQL/Models/BSUpsertUserModel.hpp"
#include "BeatSaber/Main/GraphQL/Models/LeaderboardEntryWithRankModel.hpp"
#ifdef __cpp_modules
export module Models;
#endif
