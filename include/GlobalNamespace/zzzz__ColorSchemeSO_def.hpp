#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeSO)
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeSO);
// Type: ::ColorSchemeSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16045))
// CS Name: ::ColorSchemeSO*
class CORDL_TYPE ColorSchemeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _colorScheme, offset 0x18, size 0x8
  __declspec(property(get = __get__colorScheme, put = __set__colorScheme))::GlobalNamespace::ColorScheme* _colorScheme;

  __declspec(property(get = get_colorScheme))::GlobalNamespace::ColorScheme* colorScheme;

  constexpr ::GlobalNamespace::ColorScheme*& __get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __get__colorScheme() const;

  constexpr void __set__colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method get_colorScheme addr 0x11bd264 size 0x8 virtual false final false
  inline ::GlobalNamespace::ColorScheme* get_colorScheme();

  /// @brief Method LogColorScheme addr 0x11bd26c size 0x2a4 virtual false final false
  inline void LogColorScheme();

  static inline ::GlobalNamespace::ColorSchemeSO* New_ctor();

  /// @brief Method .ctor addr 0x11bd510 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeSO(ColorSchemeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeSO(ColorSchemeSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeSO();

public:
  /// @brief Field _colorScheme, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeSO, ____colorScheme) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeSO*, "", "ColorSchemeSO");
