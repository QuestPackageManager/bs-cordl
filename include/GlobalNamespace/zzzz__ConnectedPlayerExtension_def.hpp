#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerExtension)
namespace GlobalNamespace {
struct BeatSaberPlayerIdentityPacketData;
}
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
struct MultiplayerActiveHand;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectedPlayerExtension;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConnectedPlayerExtension*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectedPlayerExtension*, "", "ConnectedPlayerExtension");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerExtension
class CORDL_TYPE ConnectedPlayerExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyIdentityData, addr 0x352dc58, size 0xe4, virtual false, abstract: false, final false
  inline void ApplyIdentityData(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData, ::GlobalNamespace::IBeatSaberConnectedPlayer* player);

  /// @brief Method BuildIdentityData, addr 0x352db54, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatSaberPlayerIdentityPacketData BuildIdentityData(::GlobalNamespace::MultiplayerAvatarsData avatars, ::GlobalNamespace::MultiplayerActiveHand activeHand);

  static inline ::GlobalNamespace::ConnectedPlayerExtension* New_ctor();

  /// @brief Method .ctor, addr 0x352db28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerExtension", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerExtension(ConnectedPlayerExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerExtension", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerExtension(ConnectedPlayerExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConnectedPlayerExtension) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
