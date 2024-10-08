#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorSchemeSO*
class CORDL_TYPE ColorSchemeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _colorScheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme)) ::GlobalNamespace::ColorScheme* _colorScheme;

  /// @brief Field _order, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order)) int32_t _order;

  __declspec(property(get = get_colorScheme)) ::GlobalNamespace::ColorScheme* colorScheme;

  __declspec(property(get = get_order)) int32_t order;

  /// @brief Method LogColorScheme, addr 0x2660cf8, size 0x2a4, virtual false, abstract: false, final false
  inline void LogColorScheme();

  static inline ::GlobalNamespace::ColorSchemeSO* New_ctor();

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __cordl_internal_get__colorScheme() const;

  constexpr int32_t const& __cordl_internal_get__order() const;

  constexpr int32_t& __cordl_internal_get__order();

  constexpr void __cordl_internal_set__colorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set__order(int32_t value);

  /// @brief Method .ctor, addr 0x2660f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorScheme, addr 0x2660ce8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* get_colorScheme();

  /// @brief Method get_order, addr 0x2660cf0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeSO(ColorSchemeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeSO(ColorSchemeSO const&) = delete;

  /// @brief Field _colorScheme, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme;

  /// @brief Field _order, offset: 0x20, size: 0x4, def value: None
  int32_t ____order;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18883 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeSO, ____colorScheme) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeSO, ____order) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeSO*, "", "ColorSchemeSO");
