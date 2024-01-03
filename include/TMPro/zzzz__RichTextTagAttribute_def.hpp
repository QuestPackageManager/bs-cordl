#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TagUnitType_def.hpp"
#include "TMPro/zzzz__TagValueType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagAttribute)
namespace TMPro {
struct TagUnitType;
}
namespace TMPro {
struct TagValueType;
}
// Forward declare root types
namespace TMPro {
struct RichTextTagAttribute;
}
// Write type traits
MARK_VAL_T(::TMPro::RichTextTagAttribute);
// Type: TMPro::RichTextTagAttribute
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12409)), TypeDefinitionIndex(TypeDefinitionIndex(12410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12326))
// CS Name: ::TMPro::RichTextTagAttribute
struct CORDL_TYPE RichTextTagAttribute {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "valueType", ty: "::TMPro::TagValueType", modifiers: "", def_value: None }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "valueLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitType", ty: "::TMPro::TagUnitType", modifiers: "", def_value: None }]
  constexpr RichTextTagAttribute(int32_t nameHashCode, int32_t valueHashCode, ::TMPro::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength, ::TMPro::TagUnitType unitType) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagAttribute();

  /// @brief Field nameHashCode, offset: 0x0, size: 0x4, def value: None
  int32_t nameHashCode;

  /// @brief Field valueHashCode, offset: 0x4, size: 0x4, def value: None
  int32_t valueHashCode;

  /// @brief Field valueType, offset: 0x8, size: 0x4, def value: None
  ::TMPro::TagValueType valueType;

  /// @brief Field valueStartIndex, offset: 0xc, size: 0x4, def value: None
  int32_t valueStartIndex;

  /// @brief Field valueLength, offset: 0x10, size: 0x4, def value: None
  int32_t valueLength;

  /// @brief Field unitType, offset: 0x14, size: 0x4, def value: None
  ::TMPro::TagUnitType unitType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::RichTextTagAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::RichTextTagAttribute, nameHashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::RichTextTagAttribute, valueHashCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::RichTextTagAttribute, valueType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::RichTextTagAttribute, valueStartIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::RichTextTagAttribute, valueLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::RichTextTagAttribute, unitType) == 0x14, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::RichTextTagAttribute, "TMPro", "RichTextTagAttribute");
