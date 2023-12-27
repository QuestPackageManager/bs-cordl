#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerAvatarVisualDataProvider)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerAvatarVisualDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider);
// Type: BeatSaber.AvatarCore::ConnectedPlayerAvatarVisualDataProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15188))
// CS Name: ::BeatSaber.AvatarCore::ConnectedPlayerAvatarVisualDataProvider*
class CORDL_TYPE ConnectedPlayerAvatarVisualDataProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x10, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  __declspec(property(get = get_avatarsData))::GlobalNamespace::MultiplayerAvatarsData avatarsData;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method get_avatarsData addr 0xe0f47c size 0xc8 virtual true final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_avatarsData();

  static inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider* New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method .ctor addr 0xe0f544 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarVisualDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerAvatarVisualDataProvider(ConnectedPlayerAvatarVisualDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarVisualDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerAvatarVisualDataProvider(ConnectedPlayerAvatarVisualDataProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerAvatarVisualDataProvider();

public:
  /// @brief Field _connectedPlayer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider, 0x18>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*, "BeatSaber.AvatarCore", "ConnectedPlayerAvatarVisualDataProvider");
