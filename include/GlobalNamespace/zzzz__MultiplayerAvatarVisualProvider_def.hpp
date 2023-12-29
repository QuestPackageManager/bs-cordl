#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerAvatarVisualProvider)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class AvatarVisualController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerAvatarVisualProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerAvatarVisualProvider);
// Type: ::MultiplayerAvatarVisualProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4098))
// CS Name: ::MultiplayerAvatarVisualProvider*
class CORDL_TYPE MultiplayerAvatarVisualProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarVisualController, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarVisualController, put = __set__avatarVisualController))::GlobalNamespace::AvatarVisualController* _avatarVisualController;

  /// @brief Field _connectedPlayer, offset 0x20, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  constexpr ::GlobalNamespace::AvatarVisualController*& __get__avatarVisualController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarVisualController*> const& __get__avatarVisualController() const;

  constexpr void __set__avatarVisualController(::GlobalNamespace::AvatarVisualController* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method Start addr 0x20d64e0 size 0xe4 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::MultiplayerAvatarVisualProvider* New_ctor();

  /// @brief Method .ctor addr 0x20d65c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarVisualProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerAvatarVisualProvider(MultiplayerAvatarVisualProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarVisualProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerAvatarVisualProvider(MultiplayerAvatarVisualProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarVisualProvider();

public:
  /// @brief Field _avatarVisualController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarVisualController* ____avatarVisualController;

  /// @brief Field _connectedPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarVisualProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarVisualProvider, ____avatarVisualController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarVisualProvider, ____connectedPlayer) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerAvatarVisualProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarVisualProvider*, "", "MultiplayerAvatarVisualProvider");
