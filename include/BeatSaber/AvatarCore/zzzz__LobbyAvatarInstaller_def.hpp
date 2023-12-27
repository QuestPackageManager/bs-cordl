#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(LobbyAvatarInstaller)
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class LobbyAvatarInstaller;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::LobbyAvatarInstaller);
// Type: BeatSaber.AvatarCore::LobbyAvatarInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15197))
// CS Name: ::BeatSaber.AvatarCore::LobbyAvatarInstaller*
class CORDL_TYPE LobbyAvatarInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x20, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method InstallBindings addr 0xe0f91c size 0x264 virtual true final false
  inline void InstallBindings();

  static inline ::BeatSaber::AvatarCore::LobbyAvatarInstaller* New_ctor();

  /// @brief Method .ctor addr 0xe0fb80 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LobbyAvatarInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyAvatarInstaller(LobbyAvatarInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyAvatarInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyAvatarInstaller(LobbyAvatarInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyAvatarInstaller();

public:
  /// @brief Field _connectedPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::LobbyAvatarInstaller, 0x28>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::LobbyAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::LobbyAvatarInstaller*, "BeatSaber.AvatarCore", "LobbyAvatarInstaller");
