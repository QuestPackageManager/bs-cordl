#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WordInfo)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct WordInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::WordInfo);
// Type: UnityEngine.TextCore.Text::WordInfo
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13591))
// CS Name: ::UnityEngine.TextCore.Text::WordInfo
struct CORDL_TYPE WordInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WordInfo(int32_t firstCharacterIndex, int32_t lastCharacterIndex, int32_t characterCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr WordInfo();

  /// @brief Field firstCharacterIndex, offset: 0x0, size: 0x4, def value: None
  int32_t firstCharacterIndex;

  /// @brief Field lastCharacterIndex, offset: 0x4, size: 0x4, def value: None
  int32_t lastCharacterIndex;

  /// @brief Field characterCount, offset: 0x8, size: 0x4, def value: None
  int32_t characterCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::WordInfo, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordInfo, firstCharacterIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordInfo, lastCharacterIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordInfo, characterCount) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::WordInfo, "UnityEngine.TextCore.Text", "WordInfo");
