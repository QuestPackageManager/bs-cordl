#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuAdditionalComponentsInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(MainMenuAdditionalComponentsInstaller)
// Forward declare root types
namespace GlobalNamespace {
class MainMenuAdditionalComponentsInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainMenuAdditionalComponentsInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainMenuAdditionalComponentsInstaller*, "", "MainMenuAdditionalComponentsInstaller");
// Dependencies Zenject.ScriptableObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainMenuAdditionalComponentsInstaller
class CORDL_TYPE MainMenuAdditionalComponentsInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x59f7484, size 0x74, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MainMenuAdditionalComponentsInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x59f74f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainMenuAdditionalComponentsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainMenuAdditionalComponentsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainMenuAdditionalComponentsInstaller(MainMenuAdditionalComponentsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuAdditionalComponentsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainMenuAdditionalComponentsInstaller(MainMenuAdditionalComponentsInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MainMenuAdditionalComponentsInstaller) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
