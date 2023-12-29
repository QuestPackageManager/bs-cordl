#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(LobbyDataModelInstaller)
// Forward declare root types
namespace GlobalNamespace {
class LobbyDataModelInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyDataModelInstaller);
// Type: ::LobbyDataModelInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5485))
// CS Name: ::LobbyDataModelInstaller*
class CORDL_TYPE LobbyDataModelInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings addr 0x212c46c size 0x474 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::LobbyDataModelInstaller* New_ctor();

  /// @brief Method .ctor addr 0x212c8e0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyDataModelInstaller(LobbyDataModelInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyDataModelInstaller(LobbyDataModelInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyDataModelInstaller();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyDataModelInstaller, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyDataModelInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyDataModelInstaller*, "", "LobbyDataModelInstaller");
