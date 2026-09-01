#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatSaberConnectedPlayerFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatSaberConnectedPlayerFactory)
namespace GlobalNamespace {
class BeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
struct BeatSaberPlayerIdentityPacketData;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class ConnectedPlayerManager_3;
}
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class IConnectedPlayerFactory_3;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class PlayerConnectedPacket;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberConnectedPlayerFactory;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatSaberConnectedPlayerFactory*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatSaberConnectedPlayerFactory*, "", "BeatSaberConnectedPlayerFactory");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberConnectedPlayerFactory
class CORDL_TYPE BeatSaberConnectedPlayerFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to
  /// "::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
  constexpr operator ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                  ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*() noexcept;

  /// @brief Method CreateDirectlyConnectedPlayer, addr 0x32a70c0, size 0x250, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatSaberConnectedPlayer*
  CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                            ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* manager,
                                uint8_t connectionId, ::GlobalNamespace::IConnection* connection);

  /// @brief Method CreateLocalPlayer, addr 0x32a6ffc, size 0xc4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatSaberConnectedPlayer*
  CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* manager,
                    ::StringW userId, ::StringW userName, bool isConnectionOwner, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random, ::StringW compatibilityVersion);

  /// @brief Method CreateRemoteConnectedPlayer, addr 0x32a7310, size 0xec, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatSaberConnectedPlayer*
  CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                          ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* manager,
                              uint8_t connectionId, ::GlobalNamespace::PlayerConnectedPacket* packet, ::GlobalNamespace::BeatSaberConnectedPlayer* parent);

  static inline ::GlobalNamespace::BeatSaberConnectedPlayerFactory* New_ctor();

  /// @brief Method .ctor, addr 0x32a73fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to
  /// "::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
  constexpr ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                         ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
  i___GlobalNamespace__IConnectedPlayerFactory_3___GlobalNamespace__IBeatSaberConnectedPlayer____GlobalNamespace__BeatSaberConnectedPlayer____GlobalNamespace__BeatSaberPlayerIdentityPacketData_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberConnectedPlayerFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberConnectedPlayerFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberConnectedPlayerFactory(BeatSaberConnectedPlayerFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberConnectedPlayerFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberConnectedPlayerFactory(BeatSaberConnectedPlayerFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatSaberConnectedPlayerFactory) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
