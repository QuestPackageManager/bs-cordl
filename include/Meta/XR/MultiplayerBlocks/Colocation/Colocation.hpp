#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Meta/XR/MultiplayerBlocks/Colocation/AlignCameraToAnchor.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Anchor.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AnchorDebugVisual.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/ColocationFailedReason.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/INetworkData.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/INetworkMessenger.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/LogLevel.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Logger.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/NetworkAdapter.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/NetworkDataUtils.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Player.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/ShareAndLocalizeParams.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager.hpp"
#ifdef __cpp_modules
export module Colocation;
#endif
