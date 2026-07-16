#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfileInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
CORDL_MODULE_EXPORT(ControllerProfileInstaller)
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllerProfileInstaller;
}
// Write type traits
MARK_REF_T(::BeatSaber::GameSettings::ControllerProfileInstaller*);
DEFINE_IL2CPP_CLASS(::BeatSaber::GameSettings::ControllerProfileInstaller*, "BeatSaber.GameSettings", "ControllerProfileInstaller");
// Dependencies Zenject.Installer`1<TDerived>
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfileInstaller
class CORDL_TYPE ControllerProfileInstaller : public ::Zenject::Installer_1<::BeatSaber::GameSettings::ControllerProfileInstaller*> {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x3290ce0, size 0xbc, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::BeatSaber::GameSettings::ControllerProfileInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x3290d9c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfileInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfileInstaller(ControllerProfileInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfileInstaller(ControllerProfileInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::GameSettings::ControllerProfileInstaller) == 0x18, "Size mismatch!");

} // namespace BeatSaber::GameSettings
