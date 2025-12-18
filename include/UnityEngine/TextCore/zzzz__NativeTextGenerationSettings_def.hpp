#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/NativeTextGenerationSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/zzzz__HorizontalAlignment_def.hpp"
#include "UnityEngine/TextCore/zzzz__LanguageDirection_def.hpp"
#include "UnityEngine/TextCore/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/TextCore/zzzz__VerticalAlignment_def.hpp"
#include "UnityEngine/TextCore/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeTextGenerationSettings)
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::TextCore {
class NativeTextGenerationSettings___c;
}
namespace UnityEngine::TextCore {
struct TextSpan;
}
// Forward declare root types
namespace UnityEngine::TextCore {
class NativeTextGenerationSettings___c;
}
namespace UnityEngine::TextCore {
struct NativeTextGenerationSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::NativeTextGenerationSettings___c);
MARK_VAL_T(::UnityEngine::TextCore::NativeTextGenerationSettings);
// Dependencies System.Object
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.NativeTextGenerationSettings/<>c
class CORDL_TYPE NativeTextGenerationSettings___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::TextCore::NativeTextGenerationSettings___c* __9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0)) ::System::Predicate_1<::UnityEngine::TextCore::TextSpan>* __9__20_0;

  static inline ::UnityEngine::TextCore::NativeTextGenerationSettings___c* New_ctor();

  /// @brief Method .ctor, addr 0x69f6e14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_hasLink>b__20_0, addr 0x69f6e18, size 0x10, virtual false, abstract: false, final false
  inline bool _get_hasLink_b__20_0(::UnityEngine::TextCore::TextSpan span);

  static inline ::UnityEngine::TextCore::NativeTextGenerationSettings___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::TextCore::TextSpan>* getStaticF___9__20_0();

  static inline void setStaticF___9(::UnityEngine::TextCore::NativeTextGenerationSettings___c* value);

  static inline void setStaticF___9__20_0(::System::Predicate_1<::UnityEngine::TextCore::TextSpan>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeTextGenerationSettings___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeTextGenerationSettings___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeTextGenerationSettings___c(NativeTextGenerationSettings___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeTextGenerationSettings___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeTextGenerationSettings___c(NativeTextGenerationSettings___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17152 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::NativeTextGenerationSettings___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore
// Dependencies System.IntPtr, UnityEngine.Color32, UnityEngine.TextCore.HorizontalAlignment, UnityEngine.TextCore.LanguageDirection, UnityEngine.TextCore.Text.FontStyles,
// UnityEngine.TextCore.Text.TextFontWeight, UnityEngine.TextCore.TextOverflow, UnityEngine.TextCore.VerticalAlignment, UnityEngine.TextCore.WhiteSpace
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.NativeTextGenerationSettings
struct CORDL_TYPE NativeTextGenerationSettings {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::NativeTextGenerationSettings___c;

  __declspec(property(get = get_hasLink)) bool hasLink;

  /// @brief Method CreateTextSpan, addr 0x69f5d98, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::TextSpan CreateTextSpan();

  /// @brief Method ToString, addr 0x69f5e08, size 0xb18, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Default, addr 0x69f5dbc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::NativeTextGenerationSettings get_Default();

  /// @brief Method get_hasLink, addr 0x69f5c7c, size 0x11c, virtual false, abstract: false, final false
  inline bool get_hasLink();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeTextGenerationSettings();

  // Ctor Parameters [CppParam { name: "fontAsset", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "globalFontAssetFallbacks", ty:
  // "::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "screenWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wordWrap", ty:
  // "::UnityEngine::TextCore::WhiteSpace", modifiers: "", def_value: None }, CppParam { name: "overflow", ty: "::UnityEngine::TextCore::TextOverflow", modifiers: "", def_value: None }, CppParam {
  // name: "languageDirection", ty: "::UnityEngine::TextCore::LanguageDirection", modifiers: "", def_value: None }, CppParam { name: "vertexPadding", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "horizontalAlignment", ty: "::UnityEngine::TextCore::HorizontalAlignment", modifiers: "", def_value: None }, CppParam { name: "verticalAlignment", ty:
  // "::UnityEngine::TextCore::VerticalAlignment", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty:
  // "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None }, CppParam { name: "fontWeight", ty: "::UnityEngine::TextCore::Text::TextFontWeight", modifiers: "", def_value: None
  // }, CppParam { name: "textSpans", ty: "::ArrayW<::UnityEngine::TextCore::TextSpan,::Array<::UnityEngine::TextCore::TextSpan>*>", modifiers: "", def_value: None }, CppParam { name: "color", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "characterSpacing", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wordSpacing", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "paragraphSpacing", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeTextGenerationSettings(::System::IntPtr fontAsset, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> globalFontAssetFallbacks, ::StringW text, int32_t screenWidth,
                                         int32_t screenHeight, ::UnityEngine::TextCore::WhiteSpace wordWrap, ::UnityEngine::TextCore::TextOverflow overflow,
                                         ::UnityEngine::TextCore::LanguageDirection languageDirection, int32_t vertexPadding, ::UnityEngine::TextCore::HorizontalAlignment horizontalAlignment,
                                         ::UnityEngine::TextCore::VerticalAlignment verticalAlignment, int32_t fontSize, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                         ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ::ArrayW<::UnityEngine::TextCore::TextSpan, ::Array<::UnityEngine::TextCore::TextSpan>*> textSpans,
                                         ::UnityEngine::Color32 color, int32_t characterSpacing, int32_t wordSpacing, int32_t paragraphSpacing) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17153 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field fontAsset, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr fontAsset;

  /// @brief Field globalFontAssetFallbacks, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> globalFontAssetFallbacks;

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW text;

  /// @brief Field screenWidth, offset: 0x18, size: 0x4, def value: None
  int32_t screenWidth;

  /// @brief Field screenHeight, offset: 0x1c, size: 0x4, def value: None
  int32_t screenHeight;

  /// @brief Field wordWrap, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::TextCore::WhiteSpace wordWrap;

  /// @brief Field overflow, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::TextCore::TextOverflow overflow;

  /// @brief Field languageDirection, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TextCore::LanguageDirection languageDirection;

  /// @brief Field vertexPadding, offset: 0x2c, size: 0x4, def value: None
  int32_t vertexPadding;

  /// @brief Field horizontalAlignment, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::TextCore::HorizontalAlignment horizontalAlignment;

  /// @brief Field verticalAlignment, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::TextCore::VerticalAlignment verticalAlignment;

  /// @brief Field fontSize, offset: 0x38, size: 0x4, def value: None
  int32_t fontSize;

  /// @brief Field fontStyle, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles fontStyle;

  /// @brief Field fontWeight, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextFontWeight fontWeight;

  /// @brief Field textSpans, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::TextSpan, ::Array<::UnityEngine::TextCore::TextSpan>*> textSpans;

  /// @brief Field color, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field characterSpacing, offset: 0x54, size: 0x4, def value: None
  int32_t characterSpacing;

  /// @brief Field wordSpacing, offset: 0x58, size: 0x4, def value: None
  int32_t wordSpacing;

  /// @brief Field paragraphSpacing, offset: 0x5c, size: 0x4, def value: None
  int32_t paragraphSpacing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, fontAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, globalFontAssetFallbacks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, screenWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, screenHeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, wordWrap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, overflow) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, languageDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, vertexPadding) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, horizontalAlignment) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, verticalAlignment) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, fontSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, fontStyle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, fontWeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, textSpans) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, color) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, characterSpacing) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, wordSpacing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::NativeTextGenerationSettings, paragraphSpacing) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::NativeTextGenerationSettings, 0x60>, "Size mismatch!");

} // namespace UnityEngine::TextCore
NEED_NO_BOX(::UnityEngine::TextCore::NativeTextGenerationSettings___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::NativeTextGenerationSettings___c*, "UnityEngine.TextCore", "NativeTextGenerationSettings/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::NativeTextGenerationSettings, "UnityEngine.TextCore", "NativeTextGenerationSettings");
