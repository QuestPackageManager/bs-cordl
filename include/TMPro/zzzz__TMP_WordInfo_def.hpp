#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_WordInfo)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
struct TMP_WordInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_WordInfo);
// Type: TMPro::TMP_WordInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12320))
// CS Name: ::TMPro::TMP_WordInfo
struct CORDL_TYPE TMP_WordInfo {
public:
  // Declarations
  /// @brief Method GetWord addr 0x2c00fd4 size 0xdc virtual false final false
  inline ::StringW GetWord();

  // Ctor Parameters [CppParam { name: "textComponent", ty: "::TMPro::TMP_Text*", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_WordInfo(::TMPro::TMP_Text* textComponent, int32_t firstCharacterIndex, int32_t lastCharacterIndex, int32_t characterCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_WordInfo();

  /// @brief Field textComponent, offset: 0x0, size: 0x8, def value: None
  ::TMPro::TMP_Text* textComponent;

  /// @brief Field firstCharacterIndex, offset: 0x8, size: 0x4, def value: None
  int32_t firstCharacterIndex;

  /// @brief Field lastCharacterIndex, offset: 0xc, size: 0x4, def value: None
  int32_t lastCharacterIndex;

  /// @brief Field characterCount, offset: 0x10, size: 0x4, def value: None
  int32_t characterCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_WordInfo, 0x18>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_WordInfo, "TMPro", "TMP_WordInfo");
