#pragma once
// IWYU pragma private; include "TMPro/TMP_LinkInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_LinkInfo)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
struct TMP_LinkInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_LinkInfo);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_LinkInfo
struct CORDL_TYPE TMP_LinkInfo {
public:
  // Declarations
  /// @brief Method GetLinkID, addr 0x47c0ad0, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetLinkID();

  /// @brief Method GetLinkText, addr 0x47c09c8, size 0x108, virtual false, abstract: false, final false
  inline ::StringW GetLinkText();

  /// @brief Method SetLinkID, addr 0x47c08f4, size 0xd4, virtual false, abstract: false, final false
  inline void SetLinkID(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t startIndex, int32_t length);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_LinkInfo();

  // Ctor Parameters [CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "linkID", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }]
  constexpr TMP_LinkInfo(::UnityW<::TMPro::TMP_Text> textComponent, int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex,
                         int32_t linkTextLength, ::ArrayW<char16_t, ::Array<char16_t>*> linkID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14439 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field textComponent, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> textComponent;

  /// @brief Field hashCode, offset: 0x8, size: 0x4, def value: None
  int32_t hashCode;

  /// @brief Field linkIdFirstCharacterIndex, offset: 0xc, size: 0x4, def value: None
  int32_t linkIdFirstCharacterIndex;

  /// @brief Field linkIdLength, offset: 0x10, size: 0x4, def value: None
  int32_t linkIdLength;

  /// @brief Field linkTextfirstCharacterIndex, offset: 0x14, size: 0x4, def value: None
  int32_t linkTextfirstCharacterIndex;

  /// @brief Field linkTextLength, offset: 0x18, size: 0x4, def value: None
  int32_t linkTextLength;

  /// @brief Field linkID, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> linkID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_LinkInfo, textComponent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LinkInfo, hashCode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LinkInfo, linkIdFirstCharacterIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LinkInfo, linkIdLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LinkInfo, linkTextfirstCharacterIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LinkInfo, linkTextLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LinkInfo, linkID) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_LinkInfo, 0x28>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_LinkInfo, "TMPro", "TMP_LinkInfo");
