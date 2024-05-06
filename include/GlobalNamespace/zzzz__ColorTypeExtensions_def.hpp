#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorTypeExtensions)
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorTypeExtensions);
// Type: ::ColorTypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorTypeExtensions*
class CORDL_TYPE ColorTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Opposite, addr 0x1037a74, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorType Opposite(::GlobalNamespace::ColorType colorType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTypeExtensions(ColorTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTypeExtensions(ColorTypeExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTypeExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTypeExtensions*, "", "ColorTypeExtensions");
