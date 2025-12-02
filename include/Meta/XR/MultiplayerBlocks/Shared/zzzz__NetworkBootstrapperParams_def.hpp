#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/NetworkBootstrapperParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBootstrapperParams)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AutomaticColocationLauncher;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationController;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
struct NetworkBootstrapperParams;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.NetworkBootstrapperParams
struct CORDL_TYPE NetworkBootstrapperParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkBootstrapperParams();

  // Ctor Parameters [CppParam { name: "myPlayerId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "myOculusId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "ovrCameraRig", ty: "::UnityW<::GlobalNamespace::OVRCameraRig>", modifiers: "", def_value: None }, CppParam { name: "sharedAnchorManager", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "colocationLauncher", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None }, CppParam { name: "colocationController", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>", modifiers: "", def_value: None }, CppParam { name: "setupColocationReadyEvents", ty: "::System::Action*", modifiers: "",
  // def_value: None }]
  constexpr NetworkBootstrapperParams(uint64_t myPlayerId, uint64_t myOculusId, ::UnityW<::GlobalNamespace::OVRCameraRig> ovrCameraRig,
                                      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* sharedAnchorManager,
                                      ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* colocationLauncher,
                                      ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> colocationController, ::System::Action* setupColocationReadyEvents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20314 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field myPlayerId, offset: 0x0, size: 0x8, def value: None
  uint64_t myPlayerId;

  /// @brief Field myOculusId, offset: 0x8, size: 0x8, def value: None
  uint64_t myOculusId;

  /// @brief Field ovrCameraRig, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ovrCameraRig;

  /// @brief Field sharedAnchorManager, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* sharedAnchorManager;

  /// @brief Field colocationLauncher, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* colocationLauncher;

  /// @brief Field colocationController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> colocationController;

  /// @brief Field setupColocationReadyEvents, offset: 0x30, size: 0x8, def value: None
  ::System::Action* setupColocationReadyEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, myPlayerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, myOculusId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, ovrCameraRig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, sharedAnchorManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, colocationLauncher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, colocationController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, setupColocationReadyEvents) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams, "Meta.XR.MultiplayerBlocks.Shared", "NetworkBootstrapperParams");
