#ifdef __cpp_modules
module;
#endif

#pragma once
#include "GameLift/AuthenticateGameLiftUserRequest.hpp"
#include "GameLift/AuthenticateGameLiftUserResponse.hpp"
#include "GameLift/GameLiftMessageReceivedAcknowledge.hpp"
#include "GameLift/GameLiftMessageType.hpp"
#include "GameLift/GameLiftMultipartMessage.hpp"
#include "GameLift/IGameLiftClientToServerMessage.hpp"
#include "GameLift/IGameLiftMessage.hpp"
#include "GameLift/IGameLiftServerToClientMessage.hpp"
#ifdef __cpp_modules
export module GameLift;
#endif
