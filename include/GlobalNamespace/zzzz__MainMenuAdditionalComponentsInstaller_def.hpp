#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(MainMenuAdditionalComponentsInstaller)
// Forward declare root types
namespace GlobalNamespace {
class MainMenuAdditionalComponentsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainMenuAdditionalComponentsInstaller);
// Type: ::MainMenuAdditionalComponentsInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11147))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5395))
// CS Name: ::MainMenuAdditionalComponentsInstaller*
class CORDL_TYPE MainMenuAdditionalComponentsInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x2272014, size 0x5c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MainMenuAdditionalComponentsInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x2272070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuAdditionalComponentsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainMenuAdditionalComponentsInstaller(MainMenuAdditionalComponentsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuAdditionalComponentsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainMenuAdditionalComponentsInstaller(MainMenuAdditionalComponentsInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainMenuAdditionalComponentsInstaller();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuAdditionalComponentsInstaller, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainMenuAdditionalComponentsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuAdditionalComponentsInstaller*, "", "MainMenuAdditionalComponentsInstaller");