#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionManager_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerSessionManager_4)
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1_IMultiplayerSessionInitializer;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TConnectedPlayerManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class IMultiplayerSessionManager_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IMultiplayerSessionManager_4);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TConnectedPlayerManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: IMultiplayerSessionManager`4<TConnectedPlayerManager,TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
class CORDL_TYPE IMultiplayerSessionManager_4 {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*() noexcept;

  /// @brief Method StartSession, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartSession(TConnectedPlayerManager connectedPlayerManager,
                           ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>* multiplayerSessionInitializer);

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>* i___GlobalNamespace__IMultiplayerSessionManager_1_TConnectedPlayer_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionManager_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionManager_4(IMultiplayerSessionManager_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IMultiplayerSessionManager_4, "", "IMultiplayerSessionManager`4");
