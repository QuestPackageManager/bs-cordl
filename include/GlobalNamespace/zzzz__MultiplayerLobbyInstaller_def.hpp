#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyInstaller)
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyInstaller);
// Type: ::MultiplayerLobbyInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5489))
// CS Name: ::MultiplayerLobbyInstaller*
class CORDL_TYPE MultiplayerLobbyInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _multiplayerLobbyAvatarControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerLobbyAvatarControllerPrefab,
                      put = __set__multiplayerLobbyAvatarControllerPrefab))::GlobalNamespace::MultiplayerLobbyAvatarController* _multiplayerLobbyAvatarControllerPrefab;

  /// @brief Field _multiplayerAvatarPlacePrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerAvatarPlacePrefab, put = __set__multiplayerAvatarPlacePrefab))::GlobalNamespace::MultiplayerLobbyAvatarPlace* _multiplayerAvatarPlacePrefab;

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController*& __get__multiplayerLobbyAvatarControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarController*> const& __get__multiplayerLobbyAvatarControllerPrefab() const;

  constexpr void __set__multiplayerLobbyAvatarControllerPrefab(::GlobalNamespace::MultiplayerLobbyAvatarController* value);

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace*& __get__multiplayerAvatarPlacePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarPlace*> const& __get__multiplayerAvatarPlacePrefab() const;

  constexpr void __set__multiplayerAvatarPlacePrefab(::GlobalNamespace::MultiplayerLobbyAvatarPlace* value);

  /// @brief Method InstallBindings addr 0x212d460 size 0xec virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerLobbyInstaller* New_ctor();

  /// @brief Method .ctor addr 0x212d54c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyInstaller(MultiplayerLobbyInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyInstaller(MultiplayerLobbyInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyInstaller();

public:
  /// @brief Field _multiplayerLobbyAvatarControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarController* ____multiplayerLobbyAvatarControllerPrefab;

  /// @brief Field _multiplayerAvatarPlacePrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarPlace* ____multiplayerAvatarPlacePrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyInstaller, ____multiplayerLobbyAvatarControllerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyInstaller, ____multiplayerAvatarPlacePrefab) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyInstaller*, "", "MultiplayerLobbyInstaller");
