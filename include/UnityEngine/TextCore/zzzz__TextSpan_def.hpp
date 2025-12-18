#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/TextSpan.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSpan)
// Forward declare root types
namespace UnityEngine::TextCore {
struct TextSpan;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::TextSpan);
// Dependencies System.IntPtr, UnityEngine.Color32, UnityEngine.TextCore.Text.FontStyles, UnityEngine.TextCore.Text.TextFontWeight
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.TextSpan
struct CORDL_TYPE TextSpan {
public:
  // Declarations
  /// @brief Method ToString, addr 0x69f6920, size 0x4a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSpan();

  // Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "fontAsset", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "color", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None }, CppParam { name:
  // "fontWeight", ty: "::UnityEngine::TextCore::Text::TextFontWeight", modifiers: "", def_value: None }, CppParam { name: "linkID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextSpan(int32_t startIndex, int32_t length, ::System::IntPtr fontAsset, int32_t fontSize, ::UnityEngine::Color32 color, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                     ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, int32_t linkID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17154 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field startIndex, offset: 0x0, size: 0x4, def value: None
  int32_t startIndex;

  /// @brief Field length, offset: 0x4, size: 0x4, def value: None
  int32_t length;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr fontAsset;

  /// @brief Field fontSize, offset: 0x10, size: 0x4, def value: None
  int32_t fontSize;

  /// @brief Field color, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field fontStyle, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles fontStyle;

  /// @brief Field fontWeight, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextFontWeight fontWeight;

  /// @brief Field linkID, offset: 0x20, size: 0x4, def value: None
  int32_t linkID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::TextSpan, startIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, length) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, color) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontStyle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontWeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, linkID) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::TextSpan, 0x28>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::TextSpan, "UnityEngine.TextCore", "TextSpan");
