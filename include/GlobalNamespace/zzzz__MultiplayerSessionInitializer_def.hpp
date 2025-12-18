#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSessionType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MultiplayerSessionInitializer)
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1_IMultiplayerSessionInitializer;
}
namespace GlobalNamespace {
struct MultiplayerSessionType;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerSessionInitializer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerSessionInitializer);
// Dependencies MultiplayerSessionType
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerSessionInitializer
struct CORDL_TYPE MultiplayerSessionInitializer {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*();

  /// @brief Method InitializeLocalPlayerSessionState, addr 0x31e2f6c, size 0x284, virtual true, abstract: false, final true
  inline void InitializeLocalPlayerSessionState();

  /// @brief Method .ctor, addr 0x31e2f60, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::MultiplayerSessionType multiplayerSessionType);

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*
  i___GlobalNamespace__IMultiplayerSessionManager_1_IMultiplayerSessionInitializer___GlobalNamespace__IBeatSaberConnectedPlayer__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionInitializer();

  // Ctor Parameters [CppParam { name: "_multiplayerSessionManager", ty: "::GlobalNamespace::IBeatSaberMultiplayerSessionManager*", modifiers: "", def_value: None }, CppParam { name:
  // "_multiplayerSessionType", ty: "::GlobalNamespace::MultiplayerSessionType", modifiers: "", def_value: None }]
  constexpr MultiplayerSessionInitializer(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager,
                                          ::GlobalNamespace::MultiplayerSessionType _multiplayerSessionType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18920 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _multiplayerSessionManager, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _multiplayerSessionType, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerSessionType _multiplayerSessionType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSessionInitializer, _multiplayerSessionManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionInitializer, _multiplayerSessionType) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionInitializer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionInitializer, "", "MultiplayerSessionInitializer");
