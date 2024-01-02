#pragma once
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
// Type: ::ColorManagerInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5389))
// CS Name: ::ColorManagerInstaller*
class CORDL_TYPE ColorManagerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _menuColorScheme, offset 0x20, size 0x8
  __declspec(property(get = __get__menuColorScheme, put = __set__menuColorScheme))::GlobalNamespace::ColorSchemeSO* _menuColorScheme;

  constexpr ::GlobalNamespace::ColorSchemeSO*& __get__menuColorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> const& __get__menuColorScheme() const;

  constexpr void __set__menuColorScheme(::GlobalNamespace::ColorSchemeSO* value);

  /// @brief Method InstallBindings, addr 0x226f59c, size 0xb8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ColorManagerInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x226f654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorManagerInstaller(ColorManagerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorManagerInstaller(ColorManagerInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorManagerInstaller();

public:
  /// @brief Field _menuColorScheme, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeSO* ____menuColorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorManagerInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorManagerInstaller, ____menuColorScheme) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorManagerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorManagerInstaller*, "", "ColorManagerInstaller");
