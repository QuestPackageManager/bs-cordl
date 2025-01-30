#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeConverter)
namespace GlobalNamespace {
struct ColorSchemeNetSerializable;
}
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeConverter);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeConverter
class CORDL_TYPE ColorSchemeConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromNetSerializable, addr 0x3b0b1e0, size 0x1ac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorScheme* FromNetSerializable(::GlobalNamespace::ColorSchemeNetSerializable serialized);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeConverter(ColorSchemeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeConverter(ColorSchemeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5016 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeConverter, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeConverter*, "", "ColorSchemeConverter");
