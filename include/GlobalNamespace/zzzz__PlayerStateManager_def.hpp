#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerStateManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerStateManager)
namespace GlobalNamespace {
template <typename TSessionType> class IMultiplayerSessionManager_1_IPlayerStateManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct MultiplayerSessionType;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerStateManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerStateManager);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerStateManager
class CORDL_TYPE PlayerStateManager : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*() noexcept;

  /// @brief Method InitializeState, addr 0x31b4024, size 0x260, virtual true, abstract: false, final true
  inline void InitializeState(::GlobalNamespace::MultiplayerSessionType multiplayerSessionType, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  static inline ::GlobalNamespace::PlayerStateManager* New_ctor();

  /// @brief Method .ctor, addr 0x31b4284, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*
  i___GlobalNamespace__IMultiplayerSessionManager_1_IPlayerStateManager___GlobalNamespace__MultiplayerSessionType_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStateManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerStateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerStateManager(PlayerStateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerStateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerStateManager(PlayerStateManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStateManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerStateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStateManager*, "", "PlayerStateManager");
