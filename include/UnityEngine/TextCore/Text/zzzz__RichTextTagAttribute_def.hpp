#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/RichTextTagAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagAttribute)
namespace UnityEngine::TextCore::Text {
struct TagValueType;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct RichTextTagAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::RichTextTagAttribute);
// Type: UnityEngine.TextCore.Text::RichTextTagAttribute
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::RichTextTagAttribute
struct CORDL_TYPE RichTextTagAttribute {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagAttribute();

  // Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "valueType", ty: "::UnityEngine::TextCore::Text::TagValueType", modifiers: "", def_value: None }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RichTextTagAttribute(int32_t nameHashCode, int32_t valueHashCode, ::UnityEngine::TextCore::Text::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength) noexcept;

  /// @brief Field nameHashCode, offset: 0x0, size: 0x4, def value: None
  int32_t nameHashCode;

  /// @brief Field valueHashCode, offset: 0x4, size: 0x4, def value: None
  int32_t valueHashCode;

  /// @brief Field valueType, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TagValueType valueType;

  /// @brief Field valueStartIndex, offset: 0xc, size: 0x4, def value: None
  int32_t valueStartIndex;

  /// @brief Field valueLength, offset: 0x10, size: 0x4, def value: None
  int32_t valueLength;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::RichTextTagAttribute, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RichTextTagAttribute, nameHashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RichTextTagAttribute, valueHashCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RichTextTagAttribute, valueType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RichTextTagAttribute, valueStartIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RichTextTagAttribute, valueLength) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::RichTextTagAttribute, "UnityEngine.TextCore.Text", "RichTextTagAttribute");
