#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextProcessingElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingElementType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextProcessingElement)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextProcessingElement;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextProcessingElement);
// Dependencies UnityEngine.TextCore.Text.TextProcessingElementType
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextProcessingElement
struct CORDL_TYPE TextProcessingElement {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextProcessingElement();

  // Ctor Parameters [CppParam { name: "elementType", ty: "::UnityEngine::TextCore::Text::TextProcessingElementType", modifiers: "", def_value: None }, CppParam { name: "unicode", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "stringIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextProcessingElement(::UnityEngine::TextCore::Text::TextProcessingElementType elementType, uint32_t unicode, int32_t stringIndex, int32_t length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15276 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field elementType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingElementType elementType;

  /// @brief Field unicode, offset: 0x4, size: 0x4, def value: None
  uint32_t unicode;

  /// @brief Field stringIndex, offset: 0x8, size: 0x4, def value: None
  int32_t stringIndex;

  /// @brief Field length, offset: 0xc, size: 0x4, def value: None
  int32_t length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextProcessingElement, elementType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextProcessingElement, unicode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextProcessingElement, stringIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextProcessingElement, length) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextProcessingElement, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextProcessingElement, "UnityEngine.TextCore.Text", "TextProcessingElement");
