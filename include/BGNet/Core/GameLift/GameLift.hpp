#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BGNet\Core\GameLift\GameLiftPlayerSessionProvider.hpp"
#include "BGNet\Core\GameLift\GetMultiplayerInstanceRequest.hpp"
#include "BGNet\Core\GameLift\GetMultiplayerInstanceResponse.hpp"
#include "BGNet\Core\GameLift\IGameLiftPlayerSessionProvider.hpp"
#include "BGNet\Core\GameLift\PlayerSessionInfo.hpp"
#ifdef __cpp_modules
export module GameLift;
#endif
