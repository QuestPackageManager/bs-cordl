#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Meta/XR/MultiplayerBlocks/Shared/AvatarStreamLOD.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/BBPlatformInitStatus.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/ColocationController.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/ColocationDebuggingOptions.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmakingUtils.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/IAvatarBehaviour.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/IAvatarStreamConfig.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/INameTagSpawner.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/ITransferOwnership.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/MatchInfo.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/NetworkBootstrapperParams.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/NetworkBootstrapperUtils.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/PlatformInfo.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/PlatformInit.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/PlatformInit_.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/PlayerNameTagSpawner.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/SerializationUtils.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/TransferOwnershipOnSelect.hpp"
#ifdef __cpp_modules
export module Shared;
#endif
