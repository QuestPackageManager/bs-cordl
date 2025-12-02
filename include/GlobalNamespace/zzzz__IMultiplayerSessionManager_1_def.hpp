#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionManager_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerSessionManager_1)
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
template <typename TSessionType> class IMultiplayerSessionManager_1_IPlayerStateManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TSessionType> class IMultiplayerSessionManager_1;
}
namespace GlobalNamespace {
template <typename TSessionType> class IMultiplayerSessionManager_1_IPlayerStateManager;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IMultiplayerSessionManager_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TSessionType>
// Is value type: false
// CS Name: IMultiplayerSessionManager`1/IPlayerStateManager<TSessionType>
class CORDL_TYPE IMultiplayerSessionManager_1_IPlayerStateManager {
public:
  // Declarations
  /// @brief Method InitializeState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InitializeState(TSessionType sessionType, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionManager_1_IPlayerStateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionManager_1_IPlayerStateManager(IMultiplayerSessionManager_1_IPlayerStateManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18142 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TSessionType>
// Is value type: false
// CS Name: IMultiplayerSessionManager`1<TSessionType>
class CORDL_TYPE IMultiplayerSessionManager_1 {
public:
  // Declarations
  using IPlayerStateManager = ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept;

  /// @brief Method StartSession, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartSession(TSessionType sessionType, ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager* i___GlobalNamespace__IMultiplayerSessionManager() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionManager_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionManager_1(IMultiplayerSessionManager_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18143 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IMultiplayerSessionManager_1, "", "IMultiplayerSessionManager`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager, "", "IMultiplayerSessionManager`1/IPlayerStateManager");
