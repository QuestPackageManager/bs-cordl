#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/NetworkBootstrapperParams.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__NetworkBootstrapperParams_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationController_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "myPlayerId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "myOculusId", ty: "uint64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ovrCameraRig", ty: "::UnityW<::GlobalNamespace::OVRCameraRig>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedAnchorManager", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "colocationLauncher", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: Some("{}") }, CppParam { name: "colocationController", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "setupColocationReadyEvents", ty: "::System::Action*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams::NetworkBootstrapperParams(uint64_t myPlayerId, uint64_t myOculusId, ::UnityW<::GlobalNamespace::OVRCameraRig> ovrCameraRig,
                                                                                                      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* sharedAnchorManager,
                                                                                                      ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* colocationLauncher,
                                                                                                      ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> colocationController,
                                                                                                      ::System::Action* setupColocationReadyEvents) noexcept {
  this->myPlayerId = myPlayerId;
  this->myOculusId = myOculusId;
  this->ovrCameraRig = ovrCameraRig;
  this->sharedAnchorManager = sharedAnchorManager;
  this->colocationLauncher = colocationLauncher;
  this->colocationController = colocationController;
  this->setupColocationReadyEvents = setupColocationReadyEvents;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams::NetworkBootstrapperParams() {}
