#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTagAttribute)
namespace UnityEngine::TextCore::Text {
struct TagValueType;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct XmlTagAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::XmlTagAttribute);
// Type: UnityEngine.TextCore.Text::XmlTagAttribute
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13595))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13586))
// CS Name: ::UnityEngine.TextCore.Text::XmlTagAttribute
struct CORDL_TYPE XmlTagAttribute {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueType", ty: "::UnityEngine::TextCore::Text::TagValueType", modifiers: "",
  // def_value: None }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlTagAttribute(int32_t nameHashCode, ::UnityEngine::TextCore::Text::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength, int32_t valueHashCode) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTagAttribute();

  /// @brief Field nameHashCode, offset: 0x0, size: 0x4, def value: None
  int32_t nameHashCode;

  /// @brief Field valueType, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TagValueType valueType;

  /// @brief Field valueStartIndex, offset: 0x8, size: 0x4, def value: None
  int32_t valueStartIndex;

  /// @brief Field valueLength, offset: 0xc, size: 0x4, def value: None
  int32_t valueLength;

  /// @brief Field valueHashCode, offset: 0x10, size: 0x4, def value: None
  int32_t valueHashCode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::XmlTagAttribute, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::XmlTagAttribute, nameHashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::XmlTagAttribute, valueType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::XmlTagAttribute, valueStartIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::XmlTagAttribute, valueLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::XmlTagAttribute, valueHashCode) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::XmlTagAttribute, "UnityEngine.TextCore.Text", "XmlTagAttribute");
