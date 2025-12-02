#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberMultiplayerSessionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
CORDL_MODULE_EXPORT(BeatSaberMultiplayerSessionManager)
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename TSessionType> class IMultiplayerSessionManager_1_IPlayerStateManager;
}
namespace GlobalNamespace {
template <typename TSessionType> class IMultiplayerSessionManager_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename TMessageType> class IMultiplayerSessionMessageProcessor_1;
}
namespace GlobalNamespace {
struct MultiplayerSessionType;
}
namespace GlobalNamespace {
struct NetworkMessageType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberMultiplayerSessionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberMultiplayerSessionManager);
// Dependencies MultiplayerSessionManager`2<TMessageType, TSessionType>, MultiplayerSessionType, NetworkMessageType
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberMultiplayerSessionManager
class CORDL_TYPE BeatSaberMultiplayerSessionManager : public ::GlobalNamespace::MultiplayerSessionManager_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::MultiplayerSessionType> {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
  constexpr operator ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*() noexcept;

  /// @brief Method Init, addr 0x31a1e74, size 0x50, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>* playerStateManager);

  static inline ::GlobalNamespace::BeatSaberMultiplayerSessionManager* New_ctor();

  /// @brief Method .ctor, addr 0x31a1ec4, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* i___GlobalNamespace__IBeatSaberMultiplayerSessionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager* i___GlobalNamespace__IMultiplayerSessionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*
  i___GlobalNamespace__IMultiplayerSessionManager_1___GlobalNamespace__MultiplayerSessionType_() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>"
  constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*
  i___GlobalNamespace__IMultiplayerSessionMessageProcessor_1___GlobalNamespace__NetworkMessageType_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberMultiplayerSessionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberMultiplayerSessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberMultiplayerSessionManager(BeatSaberMultiplayerSessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberMultiplayerSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberMultiplayerSessionManager(BeatSaberMultiplayerSessionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberMultiplayerSessionManager, 0xc8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberMultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberMultiplayerSessionManager*, "", "BeatSaberMultiplayerSessionManager");
