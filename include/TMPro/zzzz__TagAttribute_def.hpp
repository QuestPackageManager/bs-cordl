#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagAttribute)
// Forward declare root types
namespace TMPro {
struct TagAttribute;
}
// Write type traits
MARK_VAL_T(::TMPro::TagAttribute);
// Type: TMPro::TagAttribute
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12325))
// CS Name: ::TMPro::TagAttribute
struct CORDL_TYPE TagAttribute {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "hashCode", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TagAttribute(int32_t startIndex, int32_t length, int32_t hashCode) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TagAttribute();

  /// @brief Field startIndex, offset: 0x0, size: 0x4, def value: None
  int32_t startIndex;

  /// @brief Field length, offset: 0x4, size: 0x4, def value: None
  int32_t length;

  /// @brief Field hashCode, offset: 0x8, size: 0x4, def value: None
  int32_t hashCode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TagAttribute, 0xc>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TagAttribute, "TMPro", "TagAttribute");
