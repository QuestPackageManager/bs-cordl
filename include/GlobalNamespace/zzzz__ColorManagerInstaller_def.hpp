#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorManagerInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(ColorManagerInstaller)
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorManagerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorManagerInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorManagerInstaller
class CORDL_TYPE ColorManagerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _menuColorScheme, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__menuColorScheme, put = __cordl_internal_set__menuColorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> _menuColorScheme;

  /// @brief Method InstallBindings, addr 0x3c0127c, size 0xb8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ColorManagerInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__menuColorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__menuColorScheme();

  constexpr void __cordl_internal_set__menuColorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  /// @brief Method .ctor, addr 0x3c01334, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorManagerInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorManagerInstaller(ColorManagerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorManagerInstaller(ColorManagerInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4719 };

  /// @brief Field _menuColorScheme, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____menuColorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorManagerInstaller, ____menuColorScheme) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorManagerInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorManagerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorManagerInstaller*, "", "ColorManagerInstaller");
