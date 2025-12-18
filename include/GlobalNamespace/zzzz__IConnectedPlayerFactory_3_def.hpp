#pragma once
// IWYU pragma private; include "GlobalNamespace/IConnectedPlayerFactory_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IConnectedPlayerFactory_3)
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class ConnectedPlayerManager_3;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class PlayerConnectedPacket;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class IConnectedPlayerFactory_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IConnectedPlayerFactory_3);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: IConnectedPlayerFactory`3<TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
class CORDL_TYPE IConnectedPlayerFactory_3 {
public:
  // Declarations
  /// @brief Method CreateDirectlyConnectedPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TConnectedPlayerImpl CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager,
                                                            uint8_t connectionId, ::GlobalNamespace::IConnection* connection);

  /// @brief Method CreateLocalPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TConnectedPlayerImpl CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, ::StringW userId,
                                                ::StringW userName, bool isConnectionOwner, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random,
                                                ::StringW compatibilityVersion);

  /// @brief Method CreateRemoteConnectedPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TConnectedPlayerImpl CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId,
                                                          ::GlobalNamespace::PlayerConnectedPacket* packet, TConnectedPlayerImpl parent);

  // Ctor Parameters [CppParam { name: "", ty: "IConnectedPlayerFactory_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnectedPlayerFactory_3(IConnectedPlayerFactory_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18135 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IConnectedPlayerFactory_3, "", "IConnectedPlayerFactory`3");
