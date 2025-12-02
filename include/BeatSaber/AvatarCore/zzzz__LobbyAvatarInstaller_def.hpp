#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/LobbyAvatarInstaller.hpp"
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
// Dependencies Zenject.MonoInstaller
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.LobbyAvatarInstaller
class CORDL_TYPE LobbyAvatarInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Method InstallBindings, addr 0x31700b8, size 0x300, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::BeatSaber::AvatarCore::LobbyAvatarInstaller* New_ctor();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method .ctor, addr 0x31703b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyAvatarInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyAvatarInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyAvatarInstaller(LobbyAvatarInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyAvatarInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyAvatarInstaller(LobbyAvatarInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21409 };

  /// @brief Field _connectedPlayer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::LobbyAvatarInstaller, ____connectedPlayer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::LobbyAvatarInstaller, 0x30>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::LobbyAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::LobbyAvatarInstaller*, "BeatSaber.AvatarCore", "LobbyAvatarInstaller");
