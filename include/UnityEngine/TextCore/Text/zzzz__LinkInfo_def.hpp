#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkInfo)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct LinkInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::LinkInfo);
// Type: UnityEngine.TextCore.Text::LinkInfo
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13639))
// CS Name: ::UnityEngine.TextCore.Text::LinkInfo
struct CORDL_TYPE LinkInfo {
public:
  // Declarations
  /// @brief Method SetLinkId, addr 0x2d60248, size 0xd4, virtual false, abstract: false, final false
  inline void SetLinkId(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t startIndex, int32_t length);

  // Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "linkTextLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkId", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }]
  constexpr LinkInfo(int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength,
                     ::ArrayW<char16_t, ::Array<char16_t>*> linkId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkInfo();

  /// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
  int32_t hashCode;

  /// @brief Field linkIdFirstCharacterIndex, offset: 0x4, size: 0x4, def value: None
  int32_t linkIdFirstCharacterIndex;

  /// @brief Field linkIdLength, offset: 0x8, size: 0x4, def value: None
  int32_t linkIdLength;

  /// @brief Field linkTextfirstCharacterIndex, offset: 0xc, size: 0x4, def value: None
  int32_t linkTextfirstCharacterIndex;

  /// @brief Field linkTextLength, offset: 0x10, size: 0x4, def value: None
  int32_t linkTextLength;

  /// @brief Field linkId, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> linkId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::LinkInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LinkInfo, hashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LinkInfo, linkIdFirstCharacterIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LinkInfo, linkIdLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LinkInfo, linkTextfirstCharacterIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LinkInfo, linkTextLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LinkInfo, linkId) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::LinkInfo, "UnityEngine.TextCore.Text", "LinkInfo");
