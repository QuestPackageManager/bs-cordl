#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__HighlightState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextBackingContainer_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordWrapState_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerator)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
class Character;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
namespace UnityEngine::TextCore::Text {
struct RichTextTagAttribute;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
namespace UnityEngine::TextCore::Text {
class TextElement;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextProcessingElement;
}
namespace UnityEngine::TextCore::Text {
template <typename T> struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
struct TextWrappingMode;
}
namespace UnityEngine::TextCore::Text {
struct WordWrapState;
}
namespace UnityEngine::TextCore::Text {
class __TextGenerator__MissingCharacterEventCallback;
}
namespace UnityEngine::TextCore::Text {
struct __TextGenerator__SpecialCharacter;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerator;
}
namespace UnityEngine::TextCore::Text {
class __TextGenerator__MissingCharacterEventCallback;
}
namespace UnityEngine::TextCore::Text {
struct __TextGenerator__SpecialCharacter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextGenerator);
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback);
MARK_VAL_T(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter);
// Type: ::MissingCharacterEventCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::TextGenerator::MissingCharacterEventCallback*
class CORDL_TYPE __TextGenerator__MissingCharacterEventCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48cea38, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint32_t unicode, int32_t stringIndex, ::UnityEngine::TextCore::Text::TextInfo* text, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  static inline ::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48ce9ac, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextGenerator__MissingCharacterEventCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextGenerator__MissingCharacterEventCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextGenerator__MissingCharacterEventCallback(__TextGenerator__MissingCharacterEventCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextGenerator__MissingCharacterEventCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextGenerator__MissingCharacterEventCallback(__TextGenerator__MissingCharacterEventCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: ::SpecialCharacter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::TextGenerator::SpecialCharacter
struct CORDL_TYPE __TextGenerator__SpecialCharacter {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48cea4c, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::Text::Character* character, int32_t materialIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextGenerator__SpecialCharacter();

  // Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character*", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty:
  // "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None },
  // CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextGenerator__SpecialCharacter(::UnityEngine::TextCore::Text::Character* character, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset,
                                              ::UnityW<::UnityEngine::Material> material, int32_t materialIndex) noexcept;

  /// @brief Field character, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::Character* character;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialIndex, offset: 0x18, size: 0x4, def value: None
  int32_t materialIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15219 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, character) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, materialIndex) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextGenerator
// SizeInfo { instance_size: 6728, native_size: -1, calculated_instance_size: 6728, calculated_native_size: 6728, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::TextGenerator*
class CORDL_TYPE TextGenerator : public ::System::Object {
public:
  // Declarations
  using MissingCharacterEventCallback = ::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback;

  using SpecialCharacter = ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter;

  /// @brief Field OnMissingCharacter, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF_OnMissingCharacter, put = setStaticF_OnMissingCharacter)) ::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback* OnMissingCharacter;

  /// @brief Field m_ActionStack, offset 0x2c0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ActionStack, put = __cordl_internal_set_m_ActionStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> m_ActionStack;

  /// @brief Field m_AttributeParameterValues, offset 0x19d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttributeParameterValues, put = __cordl_internal_set_m_AttributeParameterValues)) ::ArrayW<float_t, ::Array<float_t>*> m_AttributeParameterValues;

  /// @brief Field m_AutoSizeIterationCount, offset 0x15a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AutoSizeIterationCount, put = __cordl_internal_set_m_AutoSizeIterationCount)) int32_t m_AutoSizeIterationCount;

  /// @brief Field m_AutoSizeMaxIterationCount, offset 0x15a4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AutoSizeMaxIterationCount, put = __cordl_internal_set_m_AutoSizeMaxIterationCount)) int32_t m_AutoSizeMaxIterationCount;

  /// @brief Field m_BaselineOffset, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BaselineOffset, put = __cordl_internal_set_m_BaselineOffset)) float_t m_BaselineOffset;

  /// @brief Field m_BaselineOffsetStack, offset 0x188, size 0x20
  __declspec(property(get = __cordl_internal_get_m_BaselineOffsetStack, put = __cordl_internal_set_m_BaselineOffsetStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>
      m_BaselineOffsetStack;

  /// @brief Field m_CSpacing, offset 0x2ec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CSpacing, put = __cordl_internal_set_m_CSpacing)) float_t m_CSpacing;

  /// @brief Field m_CachedTextElement, offset 0x1588, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedTextElement, put = __cordl_internal_set_m_CachedTextElement)) ::UnityEngine::TextCore::Text::TextElement* m_CachedTextElement;

  /// @brief Field m_CharWidthAdjDelta, offset 0x1594, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CharWidthAdjDelta, put = __cordl_internal_set_m_CharWidthAdjDelta)) float_t m_CharWidthAdjDelta;

  /// @brief Field m_CharacterCount, offset 0x324, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CharacterCount, put = __cordl_internal_set_m_CharacterCount)) int32_t m_CharacterCount;

  /// @brief Field m_ColorGradientPreset, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorGradientPreset, put = __cordl_internal_set_m_ColorGradientPreset)) ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>
      m_ColorGradientPreset;

  /// @brief Field m_ColorGradientPresetIsTinted, offset 0x2b8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ColorGradientPresetIsTinted, put = __cordl_internal_set_m_ColorGradientPresetIsTinted)) bool m_ColorGradientPresetIsTinted;

  /// @brief Field m_ColorGradientStack, offset 0x290, size 0x28
  __declspec(property(get = __cordl_internal_get_m_ColorGradientStack,
                      put = __cordl_internal_set_m_ColorGradientStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>
      m_ColorGradientStack;

  /// @brief Field m_ColorStack, offset 0x1b8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ColorStack, put = __cordl_internal_set_m_ColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> m_ColorStack;

  /// @brief Field m_CurrentFontAsset, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentFontAsset, put = __cordl_internal_set_m_CurrentFontAsset)) ::UnityW<::UnityEngine::TextCore::Text::FontAsset> m_CurrentFontAsset;

  /// @brief Field m_CurrentFontSize, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentFontSize, put = __cordl_internal_set_m_CurrentFontSize)) float_t m_CurrentFontSize;

  /// @brief Field m_CurrentMaterial, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentMaterial, put = __cordl_internal_set_m_CurrentMaterial)) ::UnityW<::UnityEngine::Material> m_CurrentMaterial;

  /// @brief Field m_CurrentMaterialIndex, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentMaterialIndex, put = __cordl_internal_set_m_CurrentMaterialIndex)) int32_t m_CurrentMaterialIndex;

  /// @brief Field m_CurrentSpriteAsset, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSpriteAsset, put = __cordl_internal_set_m_CurrentSpriteAsset)) ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> m_CurrentSpriteAsset;

  /// @brief Field m_DefaultSpriteAsset, offset 0x19f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultSpriteAsset, put = __cordl_internal_set_m_DefaultSpriteAsset)) ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> m_DefaultSpriteAsset;

  /// @brief Field m_Ellipsis, offset 0x1a00, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Ellipsis, put = __cordl_internal_set_m_Ellipsis)) ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter m_Ellipsis;

  /// @brief Field m_EllipsisInsertionCandidateStack, offset 0x15e8, size 0x3b8
  __declspec(property(get = __cordl_internal_get_m_EllipsisInsertionCandidateStack,
                      put = __cordl_internal_set_m_EllipsisInsertionCandidateStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState>
      m_EllipsisInsertionCandidateStack;

  /// @brief Field m_FXRotation, offset 0x19b4, size 0x10
  __declspec(property(get = __cordl_internal_get_m_FXRotation, put = __cordl_internal_set_m_FXRotation)) ::UnityEngine::Quaternion m_FXRotation;

  /// @brief Field m_FXScale, offset 0x19a8, size 0xc
  __declspec(property(get = __cordl_internal_get_m_FXScale, put = __cordl_internal_set_m_FXScale)) ::UnityEngine::Vector3 m_FXScale;

  /// @brief Field m_FirstCharacterOfLine, offset 0x328, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstCharacterOfLine, put = __cordl_internal_set_m_FirstCharacterOfLine)) int32_t m_FirstCharacterOfLine;

  /// @brief Field m_FirstOverflowCharacterIndex, offset 0x34c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstOverflowCharacterIndex, put = __cordl_internal_set_m_FirstOverflowCharacterIndex)) int32_t m_FirstOverflowCharacterIndex;

  /// @brief Field m_FirstVisibleCharacterOfLine, offset 0x330, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstVisibleCharacterOfLine, put = __cordl_internal_set_m_FirstVisibleCharacterOfLine)) int32_t m_FirstVisibleCharacterOfLine;

  /// @brief Field m_FontColor32, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontColor32, put = __cordl_internal_set_m_FontColor32)) ::UnityEngine::Color32 m_FontColor32;

  /// @brief Field m_FontScaleMultiplier, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontScaleMultiplier, put = __cordl_internal_set_m_FontScaleMultiplier)) float_t m_FontScaleMultiplier;

  /// @brief Field m_FontSize, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontSize, put = __cordl_internal_set_m_FontSize)) float_t m_FontSize;

  /// @brief Field m_FontStyleInternal, offset 0x124, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontStyleInternal, put = __cordl_internal_set_m_FontStyleInternal)) ::UnityEngine::TextCore::Text::FontStyles m_FontStyleInternal;

  /// @brief Field m_FontStyleStack, offset 0x128, size 0xa
  __declspec(property(get = __cordl_internal_get_m_FontStyleStack, put = __cordl_internal_set_m_FontStyleStack)) ::UnityEngine::TextCore::Text::FontStyleStack m_FontStyleStack;

  /// @brief Field m_FontWeightInternal, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontWeightInternal, put = __cordl_internal_set_m_FontWeightInternal)) ::UnityEngine::TextCore::Text::TextFontWeight m_FontWeightInternal;

  /// @brief Field m_FontWeightStack, offset 0x138, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FontWeightStack,
                      put = __cordl_internal_set_m_FontWeightStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>
      m_FontWeightStack;

  /// @brief Field m_HighlightColor, offset 0x1590, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HighlightColor, put = __cordl_internal_set_m_HighlightColor)) ::UnityEngine::Color32 m_HighlightColor;

  /// @brief Field m_HighlightColorStack, offset 0x218, size 0x20
  __declspec(property(get = __cordl_internal_get_m_HighlightColorStack, put = __cordl_internal_set_m_HighlightColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>
      m_HighlightColorStack;

  /// @brief Field m_HighlightState, offset 0x38, size 0x14
  __declspec(property(get = __cordl_internal_get_m_HighlightState, put = __cordl_internal_set_m_HighlightState)) ::UnityEngine::TextCore::Text::HighlightState m_HighlightState;

  /// @brief Field m_HighlightStateStack, offset 0x238, size 0x30
  __declspec(property(get = __cordl_internal_get_m_HighlightStateStack,
                      put = __cordl_internal_set_m_HighlightStateStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState>
      m_HighlightStateStack;

  /// @brief Field m_HtmlColor, offset 0x1ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HtmlColor, put = __cordl_internal_set_m_HtmlColor)) ::UnityEngine::Color32 m_HtmlColor;

  /// @brief Field m_HtmlTag, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HtmlTag, put = __cordl_internal_set_m_HtmlTag)) ::ArrayW<char16_t, ::Array<char16_t>*> m_HtmlTag;

  /// @brief Field m_IndentStack, offset 0x300, size 0x20
  __declspec(property(get = __cordl_internal_get_m_IndentStack, put = __cordl_internal_set_m_IndentStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> m_IndentStack;

  /// @brief Field m_InternalTextElementInfo, offset 0x1a40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalTextElementInfo,
                      put = __cordl_internal_set_m_InternalTextElementInfo)) ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>
      m_InternalTextElementInfo;

  /// @brief Field m_InternalTextProcessingArraySize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InternalTextProcessingArraySize, put = __cordl_internal_set_m_InternalTextProcessingArraySize)) int32_t m_InternalTextProcessingArraySize;

  /// @brief Field m_IsAutoSizePointSizeSet, offset 0x15a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsAutoSizePointSizeSet, put = __cordl_internal_set_m_IsAutoSizePointSizeSet)) bool m_IsAutoSizePointSizeSet;

  /// @brief Field m_IsCalculatingPreferredValues, offset 0x19e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsCalculatingPreferredValues, put = __cordl_internal_set_m_IsCalculatingPreferredValues)) bool m_IsCalculatingPreferredValues;

  /// @brief Field m_IsDrivenLineSpacing, offset 0x2e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDrivenLineSpacing, put = __cordl_internal_set_m_IsDrivenLineSpacing)) bool m_IsDrivenLineSpacing;

  /// @brief Field m_IsIgnoringAlignment, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsIgnoringAlignment, put = __cordl_internal_set_m_IsIgnoringAlignment)) bool m_IsIgnoringAlignment;

  /// @brief Field m_IsNewPage, offset 0x37c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsNewPage, put = __cordl_internal_set_m_IsNewPage)) bool m_IsNewPage;

  /// @brief Field m_IsNonBreakingSpace, offset 0x37d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsNonBreakingSpace, put = __cordl_internal_set_m_IsNonBreakingSpace)) bool m_IsNonBreakingSpace;

  /// @brief Field m_IsTextTruncated, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_m_IsTextTruncated, put = setStaticF_m_IsTextTruncated)) bool m_IsTextTruncated;

  /// @brief Field m_ItalicAngle, offset 0x19a4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ItalicAngle, put = __cordl_internal_set_m_ItalicAngle)) int32_t m_ItalicAngle;

  /// @brief Field m_ItalicAngleStack, offset 0x268, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ItalicAngleStack, put = __cordl_internal_set_m_ItalicAngleStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> m_ItalicAngleStack;

  /// @brief Field m_LastBaseGlyphIndex, offset 0x19c4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastBaseGlyphIndex, put = __cordl_internal_set_m_LastBaseGlyphIndex)) int32_t m_LastBaseGlyphIndex;

  /// @brief Field m_LastCharacterOfLine, offset 0x32c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastCharacterOfLine, put = __cordl_internal_set_m_LastCharacterOfLine)) int32_t m_LastCharacterOfLine;

  /// @brief Field m_LastVisibleCharacterOfLine, offset 0x334, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastVisibleCharacterOfLine, put = __cordl_internal_set_m_LastVisibleCharacterOfLine)) int32_t m_LastVisibleCharacterOfLine;

  /// @brief Field m_LineHeight, offset 0x2e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineHeight, put = __cordl_internal_set_m_LineHeight)) float_t m_LineHeight;

  /// @brief Field m_LineJustification, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineJustification, put = __cordl_internal_set_m_LineJustification)) ::UnityEngine::TextCore::Text::TextAlignment m_LineJustification;

  /// @brief Field m_LineJustificationStack, offset 0x160, size 0x20
  __declspec(property(get = __cordl_internal_get_m_LineJustificationStack,
                      put = __cordl_internal_set_m_LineJustificationStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>
      m_LineJustificationStack;

  /// @brief Field m_LineNumber, offset 0x340, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineNumber, put = __cordl_internal_set_m_LineNumber)) int32_t m_LineNumber;

  /// @brief Field m_LineOffset, offset 0x2e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineOffset, put = __cordl_internal_set_m_LineOffset)) float_t m_LineOffset;

  /// @brief Field m_LineSpacingDelta, offset 0x15b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineSpacingDelta, put = __cordl_internal_set_m_LineSpacingDelta)) float_t m_LineSpacingDelta;

  /// @brief Field m_LineVisibleCharacterCount, offset 0x344, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineVisibleCharacterCount, put = __cordl_internal_set_m_LineVisibleCharacterCount)) int32_t m_LineVisibleCharacterCount;

  /// @brief Field m_LineVisibleSpaceCount, offset 0x348, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineVisibleSpaceCount, put = __cordl_internal_set_m_LineVisibleSpaceCount)) int32_t m_LineVisibleSpaceCount;

  /// @brief Field m_MarginHeight, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginHeight, put = __cordl_internal_set_m_MarginHeight)) float_t m_MarginHeight;

  /// @brief Field m_MarginLeft, offset 0x354, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginLeft, put = __cordl_internal_set_m_MarginLeft)) float_t m_MarginLeft;

  /// @brief Field m_MarginRight, offset 0x358, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginRight, put = __cordl_internal_set_m_MarginRight)) float_t m_MarginRight;

  /// @brief Field m_MarginWidth, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginWidth, put = __cordl_internal_set_m_MarginWidth)) float_t m_MarginWidth;

  /// @brief Field m_MaterialReferenceIndexLookup, offset 0x19e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialReferenceIndexLookup,
                      put = __cordl_internal_set_m_MaterialReferenceIndexLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_MaterialReferenceIndexLookup;

  /// @brief Field m_MaterialReferenceStack, offset 0x80, size 0x58
  __declspec(property(get = __cordl_internal_get_m_MaterialReferenceStack,
                      put = __cordl_internal_set_m_MaterialReferenceStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>
      m_MaterialReferenceStack;

  /// @brief Field m_MaterialReferences, offset 0x15b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialReferences,
                      put = __cordl_internal_set_m_MaterialReferences)) ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*>
      m_MaterialReferences;

  /// @brief Field m_MaxAscender, offset 0x374, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxAscender, put = __cordl_internal_set_m_MaxAscender)) float_t m_MaxAscender;

  /// @brief Field m_MaxCapHeight, offset 0x370, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxCapHeight, put = __cordl_internal_set_m_MaxCapHeight)) float_t m_MaxCapHeight;

  /// @brief Field m_MaxDescender, offset 0x378, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxDescender, put = __cordl_internal_set_m_MaxDescender)) float_t m_MaxDescender;

  /// @brief Field m_MaxFontSize, offset 0x1598, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxFontSize, put = __cordl_internal_set_m_MaxFontSize)) float_t m_MaxFontSize;

  /// @brief Field m_MaxLineAscender, offset 0x338, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxLineAscender, put = __cordl_internal_set_m_MaxLineAscender)) float_t m_MaxLineAscender;

  /// @brief Field m_MaxLineDescender, offset 0x33c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxLineDescender, put = __cordl_internal_set_m_MaxLineDescender)) float_t m_MaxLineDescender;

  /// @brief Field m_MeshExtents, offset 0x360, size 0x10
  __declspec(property(get = __cordl_internal_get_m_MeshExtents, put = __cordl_internal_set_m_MeshExtents)) ::UnityEngine::TextCore::Text::Extents m_MeshExtents;

  /// @brief Field m_MinFontSize, offset 0x159c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinFontSize, put = __cordl_internal_set_m_MinFontSize)) float_t m_MinFontSize;

  /// @brief Field m_MonoSpacing, offset 0x2f0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MonoSpacing, put = __cordl_internal_set_m_MonoSpacing)) float_t m_MonoSpacing;

  /// @brief Field m_Padding, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Padding, put = __cordl_internal_set_m_Padding)) float_t m_Padding;

  /// @brief Field m_PageAscender, offset 0x19c8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PageAscender, put = __cordl_internal_set_m_PageAscender)) float_t m_PageAscender;

  /// @brief Field m_PageNumber, offset 0x350, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PageNumber, put = __cordl_internal_set_m_PageNumber)) int32_t m_PageNumber;

  /// @brief Field m_PreferredHeight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreferredHeight, put = __cordl_internal_set_m_PreferredHeight)) float_t m_PreferredHeight;

  /// @brief Field m_PreferredWidth, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreferredWidth, put = __cordl_internal_set_m_PreferredWidth)) float_t m_PreferredWidth;

  /// @brief Field m_RectTransformCorners, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransformCorners, put = __cordl_internal_set_m_RectTransformCorners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      m_RectTransformCorners;

  /// @brief Field m_SavedEllipsisState, offset 0xab0, size 0x398
  __declspec(property(get = __cordl_internal_get_m_SavedEllipsisState, put = __cordl_internal_set_m_SavedEllipsisState)) ::UnityEngine::TextCore::Text::WordWrapState m_SavedEllipsisState;

  /// @brief Field m_SavedLastValidState, offset 0xe48, size 0x398
  __declspec(property(get = __cordl_internal_get_m_SavedLastValidState, put = __cordl_internal_set_m_SavedLastValidState)) ::UnityEngine::TextCore::Text::WordWrapState m_SavedLastValidState;

  /// @brief Field m_SavedLineState, offset 0x718, size 0x398
  __declspec(property(get = __cordl_internal_get_m_SavedLineState, put = __cordl_internal_set_m_SavedLineState)) ::UnityEngine::TextCore::Text::WordWrapState m_SavedLineState;

  /// @brief Field m_SavedSoftLineBreakState, offset 0x11e0, size 0x398
  __declspec(property(get = __cordl_internal_get_m_SavedSoftLineBreakState,
                      put = __cordl_internal_set_m_SavedSoftLineBreakState)) ::UnityEngine::TextCore::Text::WordWrapState m_SavedSoftLineBreakState;

  /// @brief Field m_SavedWordWrapState, offset 0x380, size 0x398
  __declspec(property(get = __cordl_internal_get_m_SavedWordWrapState, put = __cordl_internal_set_m_SavedWordWrapState)) ::UnityEngine::TextCore::Text::WordWrapState m_SavedWordWrapState;

  /// @brief Field m_SizeStack, offset 0xf8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_SizeStack, put = __cordl_internal_set_m_SizeStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> m_SizeStack;

  /// @brief Field m_SpriteAnimationId, offset 0x19a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SpriteAnimationId, put = __cordl_internal_set_m_SpriteAnimationId)) int32_t m_SpriteAnimationId;

  /// @brief Field m_SpriteColor, offset 0x1580, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SpriteColor, put = __cordl_internal_set_m_SpriteColor)) ::UnityEngine::Color32 m_SpriteColor;

  /// @brief Field m_SpriteCount, offset 0x15c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SpriteCount, put = __cordl_internal_set_m_SpriteCount)) int32_t m_SpriteCount;

  /// @brief Field m_SpriteIndex, offset 0x157c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SpriteIndex, put = __cordl_internal_set_m_SpriteIndex)) int32_t m_SpriteIndex;

  /// @brief Field m_StartOfLineAscender, offset 0x15ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartOfLineAscender, put = __cordl_internal_set_m_StartOfLineAscender)) float_t m_StartOfLineAscender;

  /// @brief Field m_StrikethroughColor, offset 0x1b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StrikethroughColor, put = __cordl_internal_set_m_StrikethroughColor)) ::UnityEngine::Color32 m_StrikethroughColor;

  /// @brief Field m_StrikethroughColorStack, offset 0x1f8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_StrikethroughColorStack,
                      put = __cordl_internal_set_m_StrikethroughColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>
      m_StrikethroughColorStack;

  /// @brief Field m_StyleStack, offset 0x15c8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_StyleStack, put = __cordl_internal_set_m_StyleStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> m_StyleStack;

  /// @brief Field m_TagIndent, offset 0x2fc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TagIndent, put = __cordl_internal_set_m_TagIndent)) float_t m_TagIndent;

  /// @brief Field m_TagLineIndent, offset 0x2f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TagLineIndent, put = __cordl_internal_set_m_TagLineIndent)) float_t m_TagLineIndent;

  /// @brief Field m_TagNoParsing, offset 0x320, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TagNoParsing, put = __cordl_internal_set_m_TagNoParsing)) bool m_TagNoParsing;

  /// @brief Field m_TextBackingArray, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TextBackingArray, put = __cordl_internal_set_m_TextBackingArray)) ::UnityEngine::TextCore::Text::TextBackingContainer m_TextBackingArray;

  /// @brief Field m_TextElementType, offset 0x1578, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TextElementType, put = __cordl_internal_set_m_TextElementType)) ::UnityEngine::TextCore::Text::TextElementType m_TextElementType;

  /// @brief Field m_TextProcessingArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextProcessingArray,
                      put = __cordl_internal_set_m_TextProcessingArray)) ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>
      m_TextProcessingArray;

  /// @brief Field m_TextStyleStackDepth, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextStyleStackDepth, put = __cordl_internal_set_m_TextStyleStackDepth)) int32_t m_TextStyleStackDepth;

  /// @brief Field m_TextStyleStacks, offset 0x118, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_TextStyleStacks,
      put = __cordl_internal_set_m_TextStyleStacks)) ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>
      m_TextStyleStacks;

  /// @brief Field m_TintSprite, offset 0x19f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TintSprite, put = __cordl_internal_set_m_TintSprite)) bool m_TintSprite;

  /// @brief Field m_TotalCharacterCount, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TotalCharacterCount, put = __cordl_internal_set_m_TotalCharacterCount)) int32_t m_TotalCharacterCount;

  /// @brief Field m_Underline, offset 0x1a20, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Underline, put = __cordl_internal_set_m_Underline)) ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter m_Underline;

  /// @brief Field m_UnderlineColor, offset 0x1b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UnderlineColor, put = __cordl_internal_set_m_UnderlineColor)) ::UnityEngine::Color32 m_UnderlineColor;

  /// @brief Field m_UnderlineColorStack, offset 0x1d8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_UnderlineColorStack, put = __cordl_internal_set_m_UnderlineColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>
      m_UnderlineColorStack;

  /// @brief Field m_VertexBufferAutoSizeReduction, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VertexBufferAutoSizeReduction, put = __cordl_internal_set_m_VertexBufferAutoSizeReduction)) bool m_VertexBufferAutoSizeReduction;

  /// @brief Field m_Width, offset 0x35c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) float_t m_Width;

  /// @brief Field m_XAdvance, offset 0x2f4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_XAdvance, put = __cordl_internal_set_m_XAdvance)) float_t m_XAdvance;

  /// @brief Field m_XmlAttribute, offset 0x19d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XmlAttribute,
                      put = __cordl_internal_set_m_XmlAttribute)) ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>
      m_XmlAttribute;

  /// @brief Field m_isTextLayoutPhase, offset 0x1579, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isTextLayoutPhase, put = __cordl_internal_set_m_isTextLayoutPhase)) bool m_isTextLayoutPhase;

  /// @brief Field s_TextGenerator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TextGenerator, put = setStaticF_s_TextGenerator)) ::UnityEngine::TextCore::Text::TextGenerator* s_TextGenerator;

  /// @brief Method CalculatePreferredValues, addr 0x48cb9f0, size 0x29bc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 CalculatePreferredValues(ByRef<float_t> fontSize, ::UnityEngine::Vector2 marginSize, bool isTextAutoSizingEnabled,
                                                         ::UnityEngine::TextCore::Text::TextWrappingMode textWrapMode, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                         ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method ClearMarkupTagAttributes, addr 0x48c8f10, size 0x64, virtual false, abstract: false, final false
  inline void ClearMarkupTagAttributes();

  /// @brief Method ClearMesh, addr 0x48cb4ac, size 0x20, virtual false, abstract: false, final false
  static inline void ClearMesh(bool updateMesh, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method ComputeMarginSize, addr 0x48c2064, size 0x68, virtual false, abstract: false, final false
  inline void ComputeMarginSize(::UnityEngine::Rect rect, ::UnityEngine::Vector4 margins);

  /// @brief Method DoMissingGlyphCallback, addr 0x48cb954, size 0x9c, virtual false, abstract: false, final false
  inline void DoMissingGlyphCallback(uint32_t unicode, int32_t stringIndex, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method DrawTextHighlight, addr 0x48caf30, size 0x57c, virtual false, abstract: false, final false
  inline void DrawTextHighlight(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color32 highlightColor,
                                ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method DrawUnderlineMesh, addr 0x48ca304, size 0xba8, virtual false, abstract: false, final false
  inline void DrawUnderlineMesh(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t startScale, float_t endScale, float_t maxScale, float_t sdfScale,
                                ::UnityEngine::Color32 underlineColor, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method GenerateText, addr 0x48c1b20, size 0x174, virtual false, abstract: false, final false
  static inline void GenerateText(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method GenerateTextMesh, addr 0x48b9ddc, size 0x7654, virtual false, abstract: false, final false
  inline void GenerateTextMesh(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method GetEllipsisSpecialCharacter, addr 0x48cb4cc, size 0x19c, virtual false, abstract: false, final false
  inline void GetEllipsisSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings);

  /// @brief Method GetPreferredValues, addr 0x48c1d88, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetPreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method GetPreferredValuesInternal, addr 0x48c1eb8, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPreferredValuesInternal(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method GetSpecialCharacters, addr 0x48c203c, size 0x28, virtual false, abstract: false, final false
  inline void GetSpecialCharacters(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings);

  /// @brief Method GetTextElement, addr 0x48cb668, size 0x2ec, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextElement* GetTextElement(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, uint32_t unicode,
                                                                    ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                    ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isUsingAlternativeTypeface);

  /// @brief Method GetTextGenerator, addr 0x48c1430, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextGenerator* GetTextGenerator();

  /// @brief Method GetUnderlineSpecialCharacter, addr 0x48caeac, size 0x84, virtual false, abstract: false, final false
  inline void GetUnderlineSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings);

  /// @brief Method InsertNewLine, addr 0x48ce4a0, size 0x50c, virtual false, abstract: false, final false
  inline void InsertNewLine(int32_t i, float_t baseScale, float_t currentElementScale, float_t currentEmScale, float_t boldSpacingAdjustment, float_t characterSpacingAdjustment, float_t width,
                            float_t lineGap, ByRef<bool> isMaxVisibleDescenderSet, ByRef<float_t> maxVisibleDescender, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                            ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  static inline ::UnityEngine::TextCore::Text::TextGenerator* New_ctor();

  /// @brief Method PopulateTextBackingArray, addr 0x48c20cc, size 0x18, virtual false, abstract: false, final false
  inline void PopulateTextBackingArray(::StringW sourceText);

  /// @brief Method PopulateTextBackingArray, addr 0x48ce3ac, size 0xf4, virtual false, abstract: false, final false
  inline void PopulateTextBackingArray(::StringW sourceText, int32_t start, int32_t length);

  /// @brief Method PopulateTextProcessingArray, addr 0x48c20e4, size 0xd60, virtual false, abstract: false, final false
  inline void PopulateTextProcessingArray(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings);

  /// @brief Method Prepare, addr 0x48c1c94, size 0xf4, virtual false, abstract: false, final false
  inline void Prepare(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method RestoreWordWrappingState, addr 0x48c44d0, size 0x2c0, virtual false, abstract: false, final false
  inline int32_t RestoreWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method SaveGlyphVertexInfo, addr 0x48c8f74, size 0xb6c, virtual false, abstract: false, final false
  inline void SaveGlyphVertexInfo(float_t padding, float_t stylePadding, ::UnityEngine::Color32 vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                  ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method SaveSpriteVertexInfo, addr 0x48c9ae0, size 0x824, virtual false, abstract: false, final false
  inline void SaveSpriteVertexInfo(::UnityEngine::Color32 vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method SaveWordWrappingState, addr 0x48c423c, size 0x294, virtual false, abstract: false, final false
  inline void SaveWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, int32_t index, int32_t count, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method SetArraySizes, addr 0x48c2e44, size 0x13f8, virtual false, abstract: false, final false
  inline int32_t SetArraySizes(::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> textProcessingArray,
                               ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method ValidateHtmlTag, addr 0x48c4790, size 0x4780, virtual false, abstract: false, final false
  inline bool ValidateHtmlTag(::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> chars, int32_t startIndex,
                              ByRef<int32_t> endIndex, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& __cordl_internal_get_m_ActionStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& __cordl_internal_get_m_ActionStack();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_AttributeParameterValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_AttributeParameterValues();

  constexpr int32_t const& __cordl_internal_get_m_AutoSizeIterationCount() const;

  constexpr int32_t& __cordl_internal_get_m_AutoSizeIterationCount();

  constexpr int32_t const& __cordl_internal_get_m_AutoSizeMaxIterationCount() const;

  constexpr int32_t& __cordl_internal_get_m_AutoSizeMaxIterationCount();

  constexpr float_t const& __cordl_internal_get_m_BaselineOffset() const;

  constexpr float_t& __cordl_internal_get_m_BaselineOffset();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __cordl_internal_get_m_BaselineOffsetStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __cordl_internal_get_m_BaselineOffsetStack();

  constexpr float_t const& __cordl_internal_get_m_CSpacing() const;

  constexpr float_t& __cordl_internal_get_m_CSpacing();

  constexpr ::UnityEngine::TextCore::Text::TextElement*& __cordl_internal_get_m_CachedTextElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextElement*> const& __cordl_internal_get_m_CachedTextElement() const;

  constexpr float_t const& __cordl_internal_get_m_CharWidthAdjDelta() const;

  constexpr float_t& __cordl_internal_get_m_CharWidthAdjDelta();

  constexpr int32_t const& __cordl_internal_get_m_CharacterCount() const;

  constexpr int32_t& __cordl_internal_get_m_CharacterCount();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> const& __cordl_internal_get_m_ColorGradientPreset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>& __cordl_internal_get_m_ColorGradientPreset();

  constexpr bool const& __cordl_internal_get_m_ColorGradientPresetIsTinted() const;

  constexpr bool& __cordl_internal_get_m_ColorGradientPresetIsTinted();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> const& __cordl_internal_get_m_ColorGradientStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>& __cordl_internal_get_m_ColorGradientStack();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __cordl_internal_get_m_ColorStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __cordl_internal_get_m_ColorStack();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset> const& __cordl_internal_get_m_CurrentFontAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset>& __cordl_internal_get_m_CurrentFontAsset();

  constexpr float_t const& __cordl_internal_get_m_CurrentFontSize() const;

  constexpr float_t& __cordl_internal_get_m_CurrentFontSize();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CurrentMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CurrentMaterial();

  constexpr int32_t const& __cordl_internal_get_m_CurrentMaterialIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentMaterialIndex();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& __cordl_internal_get_m_CurrentSpriteAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& __cordl_internal_get_m_CurrentSpriteAsset();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& __cordl_internal_get_m_DefaultSpriteAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& __cordl_internal_get_m_DefaultSpriteAsset();

  constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter const& __cordl_internal_get_m_Ellipsis() const;

  constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter& __cordl_internal_get_m_Ellipsis();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState> const& __cordl_internal_get_m_EllipsisInsertionCandidateStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState>& __cordl_internal_get_m_EllipsisInsertionCandidateStack();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_FXRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_FXRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_FXScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_FXScale();

  constexpr int32_t const& __cordl_internal_get_m_FirstCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_FirstCharacterOfLine();

  constexpr int32_t const& __cordl_internal_get_m_FirstOverflowCharacterIndex() const;

  constexpr int32_t& __cordl_internal_get_m_FirstOverflowCharacterIndex();

  constexpr int32_t const& __cordl_internal_get_m_FirstVisibleCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_FirstVisibleCharacterOfLine();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_FontColor32() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_FontColor32();

  constexpr float_t const& __cordl_internal_get_m_FontScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_m_FontScaleMultiplier();

  constexpr float_t const& __cordl_internal_get_m_FontSize() const;

  constexpr float_t& __cordl_internal_get_m_FontSize();

  constexpr ::UnityEngine::TextCore::Text::FontStyles const& __cordl_internal_get_m_FontStyleInternal() const;

  constexpr ::UnityEngine::TextCore::Text::FontStyles& __cordl_internal_get_m_FontStyleInternal();

  constexpr ::UnityEngine::TextCore::Text::FontStyleStack const& __cordl_internal_get_m_FontStyleStack() const;

  constexpr ::UnityEngine::TextCore::Text::FontStyleStack& __cordl_internal_get_m_FontStyleStack();

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& __cordl_internal_get_m_FontWeightInternal() const;

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight& __cordl_internal_get_m_FontWeightInternal();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> const& __cordl_internal_get_m_FontWeightStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>& __cordl_internal_get_m_FontWeightStack();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_HighlightColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_HighlightColor();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __cordl_internal_get_m_HighlightColorStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __cordl_internal_get_m_HighlightColorStack();

  constexpr ::UnityEngine::TextCore::Text::HighlightState const& __cordl_internal_get_m_HighlightState() const;

  constexpr ::UnityEngine::TextCore::Text::HighlightState& __cordl_internal_get_m_HighlightState();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> const& __cordl_internal_get_m_HighlightStateStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState>& __cordl_internal_get_m_HighlightStateStack();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_HtmlColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_HtmlColor();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_m_HtmlTag() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_m_HtmlTag();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __cordl_internal_get_m_IndentStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __cordl_internal_get_m_IndentStack();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const& __cordl_internal_get_m_InternalTextElementInfo() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>& __cordl_internal_get_m_InternalTextElementInfo();

  constexpr int32_t const& __cordl_internal_get_m_InternalTextProcessingArraySize() const;

  constexpr int32_t& __cordl_internal_get_m_InternalTextProcessingArraySize();

  constexpr bool const& __cordl_internal_get_m_IsAutoSizePointSizeSet() const;

  constexpr bool& __cordl_internal_get_m_IsAutoSizePointSizeSet();

  constexpr bool const& __cordl_internal_get_m_IsCalculatingPreferredValues() const;

  constexpr bool& __cordl_internal_get_m_IsCalculatingPreferredValues();

  constexpr bool const& __cordl_internal_get_m_IsDrivenLineSpacing() const;

  constexpr bool& __cordl_internal_get_m_IsDrivenLineSpacing();

  constexpr bool const& __cordl_internal_get_m_IsIgnoringAlignment() const;

  constexpr bool& __cordl_internal_get_m_IsIgnoringAlignment();

  constexpr bool const& __cordl_internal_get_m_IsNewPage() const;

  constexpr bool& __cordl_internal_get_m_IsNewPage();

  constexpr bool const& __cordl_internal_get_m_IsNonBreakingSpace() const;

  constexpr bool& __cordl_internal_get_m_IsNonBreakingSpace();

  constexpr int32_t const& __cordl_internal_get_m_ItalicAngle() const;

  constexpr int32_t& __cordl_internal_get_m_ItalicAngle();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& __cordl_internal_get_m_ItalicAngleStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& __cordl_internal_get_m_ItalicAngleStack();

  constexpr int32_t const& __cordl_internal_get_m_LastBaseGlyphIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LastBaseGlyphIndex();

  constexpr int32_t const& __cordl_internal_get_m_LastCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_LastCharacterOfLine();

  constexpr int32_t const& __cordl_internal_get_m_LastVisibleCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_LastVisibleCharacterOfLine();

  constexpr float_t const& __cordl_internal_get_m_LineHeight() const;

  constexpr float_t& __cordl_internal_get_m_LineHeight();

  constexpr ::UnityEngine::TextCore::Text::TextAlignment const& __cordl_internal_get_m_LineJustification() const;

  constexpr ::UnityEngine::TextCore::Text::TextAlignment& __cordl_internal_get_m_LineJustification();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> const& __cordl_internal_get_m_LineJustificationStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>& __cordl_internal_get_m_LineJustificationStack();

  constexpr int32_t const& __cordl_internal_get_m_LineNumber() const;

  constexpr int32_t& __cordl_internal_get_m_LineNumber();

  constexpr float_t const& __cordl_internal_get_m_LineOffset() const;

  constexpr float_t& __cordl_internal_get_m_LineOffset();

  constexpr float_t const& __cordl_internal_get_m_LineSpacingDelta() const;

  constexpr float_t& __cordl_internal_get_m_LineSpacingDelta();

  constexpr int32_t const& __cordl_internal_get_m_LineVisibleCharacterCount() const;

  constexpr int32_t& __cordl_internal_get_m_LineVisibleCharacterCount();

  constexpr int32_t const& __cordl_internal_get_m_LineVisibleSpaceCount() const;

  constexpr int32_t& __cordl_internal_get_m_LineVisibleSpaceCount();

  constexpr float_t const& __cordl_internal_get_m_MarginHeight() const;

  constexpr float_t& __cordl_internal_get_m_MarginHeight();

  constexpr float_t const& __cordl_internal_get_m_MarginLeft() const;

  constexpr float_t& __cordl_internal_get_m_MarginLeft();

  constexpr float_t const& __cordl_internal_get_m_MarginRight() const;

  constexpr float_t& __cordl_internal_get_m_MarginRight();

  constexpr float_t const& __cordl_internal_get_m_MarginWidth() const;

  constexpr float_t& __cordl_internal_get_m_MarginWidth();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_MaterialReferenceIndexLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get_m_MaterialReferenceIndexLookup() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> const& __cordl_internal_get_m_MaterialReferenceStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>& __cordl_internal_get_m_MaterialReferenceStack();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*> const& __cordl_internal_get_m_MaterialReferences() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*>& __cordl_internal_get_m_MaterialReferences();

  constexpr float_t const& __cordl_internal_get_m_MaxAscender() const;

  constexpr float_t& __cordl_internal_get_m_MaxAscender();

  constexpr float_t const& __cordl_internal_get_m_MaxCapHeight() const;

  constexpr float_t& __cordl_internal_get_m_MaxCapHeight();

  constexpr float_t const& __cordl_internal_get_m_MaxDescender() const;

  constexpr float_t& __cordl_internal_get_m_MaxDescender();

  constexpr float_t const& __cordl_internal_get_m_MaxFontSize() const;

  constexpr float_t& __cordl_internal_get_m_MaxFontSize();

  constexpr float_t const& __cordl_internal_get_m_MaxLineAscender() const;

  constexpr float_t& __cordl_internal_get_m_MaxLineAscender();

  constexpr float_t const& __cordl_internal_get_m_MaxLineDescender() const;

  constexpr float_t& __cordl_internal_get_m_MaxLineDescender();

  constexpr ::UnityEngine::TextCore::Text::Extents const& __cordl_internal_get_m_MeshExtents() const;

  constexpr ::UnityEngine::TextCore::Text::Extents& __cordl_internal_get_m_MeshExtents();

  constexpr float_t const& __cordl_internal_get_m_MinFontSize() const;

  constexpr float_t& __cordl_internal_get_m_MinFontSize();

  constexpr float_t const& __cordl_internal_get_m_MonoSpacing() const;

  constexpr float_t& __cordl_internal_get_m_MonoSpacing();

  constexpr float_t const& __cordl_internal_get_m_Padding() const;

  constexpr float_t& __cordl_internal_get_m_Padding();

  constexpr float_t const& __cordl_internal_get_m_PageAscender() const;

  constexpr float_t& __cordl_internal_get_m_PageAscender();

  constexpr int32_t const& __cordl_internal_get_m_PageNumber() const;

  constexpr int32_t& __cordl_internal_get_m_PageNumber();

  constexpr float_t const& __cordl_internal_get_m_PreferredHeight() const;

  constexpr float_t& __cordl_internal_get_m_PreferredHeight();

  constexpr float_t const& __cordl_internal_get_m_PreferredWidth() const;

  constexpr float_t& __cordl_internal_get_m_PreferredWidth();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_RectTransformCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_RectTransformCorners();

  constexpr ::UnityEngine::TextCore::Text::WordWrapState const& __cordl_internal_get_m_SavedEllipsisState() const;

  constexpr ::UnityEngine::TextCore::Text::WordWrapState& __cordl_internal_get_m_SavedEllipsisState();

  constexpr ::UnityEngine::TextCore::Text::WordWrapState const& __cordl_internal_get_m_SavedLastValidState() const;

  constexpr ::UnityEngine::TextCore::Text::WordWrapState& __cordl_internal_get_m_SavedLastValidState();

  constexpr ::UnityEngine::TextCore::Text::WordWrapState const& __cordl_internal_get_m_SavedLineState() const;

  constexpr ::UnityEngine::TextCore::Text::WordWrapState& __cordl_internal_get_m_SavedLineState();

  constexpr ::UnityEngine::TextCore::Text::WordWrapState const& __cordl_internal_get_m_SavedSoftLineBreakState() const;

  constexpr ::UnityEngine::TextCore::Text::WordWrapState& __cordl_internal_get_m_SavedSoftLineBreakState();

  constexpr ::UnityEngine::TextCore::Text::WordWrapState const& __cordl_internal_get_m_SavedWordWrapState() const;

  constexpr ::UnityEngine::TextCore::Text::WordWrapState& __cordl_internal_get_m_SavedWordWrapState();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __cordl_internal_get_m_SizeStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __cordl_internal_get_m_SizeStack();

  constexpr int32_t const& __cordl_internal_get_m_SpriteAnimationId() const;

  constexpr int32_t& __cordl_internal_get_m_SpriteAnimationId();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_SpriteColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_SpriteColor();

  constexpr int32_t const& __cordl_internal_get_m_SpriteCount() const;

  constexpr int32_t& __cordl_internal_get_m_SpriteCount();

  constexpr int32_t const& __cordl_internal_get_m_SpriteIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SpriteIndex();

  constexpr float_t const& __cordl_internal_get_m_StartOfLineAscender() const;

  constexpr float_t& __cordl_internal_get_m_StartOfLineAscender();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_StrikethroughColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_StrikethroughColor();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __cordl_internal_get_m_StrikethroughColorStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __cordl_internal_get_m_StrikethroughColorStack();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& __cordl_internal_get_m_StyleStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& __cordl_internal_get_m_StyleStack();

  constexpr float_t const& __cordl_internal_get_m_TagIndent() const;

  constexpr float_t& __cordl_internal_get_m_TagIndent();

  constexpr float_t const& __cordl_internal_get_m_TagLineIndent() const;

  constexpr float_t& __cordl_internal_get_m_TagLineIndent();

  constexpr bool const& __cordl_internal_get_m_TagNoParsing() const;

  constexpr bool& __cordl_internal_get_m_TagNoParsing();

  constexpr ::UnityEngine::TextCore::Text::TextBackingContainer const& __cordl_internal_get_m_TextBackingArray() const;

  constexpr ::UnityEngine::TextCore::Text::TextBackingContainer& __cordl_internal_get_m_TextBackingArray();

  constexpr ::UnityEngine::TextCore::Text::TextElementType const& __cordl_internal_get_m_TextElementType() const;

  constexpr ::UnityEngine::TextCore::Text::TextElementType& __cordl_internal_get_m_TextElementType();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> const& __cordl_internal_get_m_TextProcessingArray() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>& __cordl_internal_get_m_TextProcessingArray();

  constexpr int32_t const& __cordl_internal_get_m_TextStyleStackDepth() const;

  constexpr int32_t& __cordl_internal_get_m_TextStyleStackDepth();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*> const&
  __cordl_internal_get_m_TextStyleStacks() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>& __cordl_internal_get_m_TextStyleStacks();

  constexpr bool const& __cordl_internal_get_m_TintSprite() const;

  constexpr bool& __cordl_internal_get_m_TintSprite();

  constexpr int32_t const& __cordl_internal_get_m_TotalCharacterCount() const;

  constexpr int32_t& __cordl_internal_get_m_TotalCharacterCount();

  constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter const& __cordl_internal_get_m_Underline() const;

  constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter& __cordl_internal_get_m_Underline();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_UnderlineColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_UnderlineColor();

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __cordl_internal_get_m_UnderlineColorStack() const;

  constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __cordl_internal_get_m_UnderlineColorStack();

  constexpr bool const& __cordl_internal_get_m_VertexBufferAutoSizeReduction() const;

  constexpr bool& __cordl_internal_get_m_VertexBufferAutoSizeReduction();

  constexpr float_t const& __cordl_internal_get_m_Width() const;

  constexpr float_t& __cordl_internal_get_m_Width();

  constexpr float_t const& __cordl_internal_get_m_XAdvance() const;

  constexpr float_t& __cordl_internal_get_m_XAdvance();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*> const& __cordl_internal_get_m_XmlAttribute() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>& __cordl_internal_get_m_XmlAttribute();

  constexpr bool const& __cordl_internal_get_m_isTextLayoutPhase() const;

  constexpr bool& __cordl_internal_get_m_isTextLayoutPhase();

  constexpr void __cordl_internal_set_m_ActionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value);

  constexpr void __cordl_internal_set_m_AttributeParameterValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_AutoSizeIterationCount(int32_t value);

  constexpr void __cordl_internal_set_m_AutoSizeMaxIterationCount(int32_t value);

  constexpr void __cordl_internal_set_m_BaselineOffset(float_t value);

  constexpr void __cordl_internal_set_m_BaselineOffsetStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value);

  constexpr void __cordl_internal_set_m_CSpacing(float_t value);

  constexpr void __cordl_internal_set_m_CachedTextElement(::UnityEngine::TextCore::Text::TextElement* value);

  constexpr void __cordl_internal_set_m_CharWidthAdjDelta(float_t value);

  constexpr void __cordl_internal_set_m_CharacterCount(int32_t value);

  constexpr void __cordl_internal_set_m_ColorGradientPreset(::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> value);

  constexpr void __cordl_internal_set_m_ColorGradientPresetIsTinted(bool value);

  constexpr void __cordl_internal_set_m_ColorGradientStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> value);

  constexpr void __cordl_internal_set_m_ColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value);

  constexpr void __cordl_internal_set_m_CurrentFontAsset(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value);

  constexpr void __cordl_internal_set_m_CurrentFontSize(float_t value);

  constexpr void __cordl_internal_set_m_CurrentMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CurrentMaterialIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentSpriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value);

  constexpr void __cordl_internal_set_m_DefaultSpriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value);

  constexpr void __cordl_internal_set_m_Ellipsis(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter value);

  constexpr void __cordl_internal_set_m_EllipsisInsertionCandidateStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState> value);

  constexpr void __cordl_internal_set_m_FXRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_FXScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_FirstCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_FirstOverflowCharacterIndex(int32_t value);

  constexpr void __cordl_internal_set_m_FirstVisibleCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_FontColor32(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_FontScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_m_FontSize(float_t value);

  constexpr void __cordl_internal_set_m_FontStyleInternal(::UnityEngine::TextCore::Text::FontStyles value);

  constexpr void __cordl_internal_set_m_FontStyleStack(::UnityEngine::TextCore::Text::FontStyleStack value);

  constexpr void __cordl_internal_set_m_FontWeightInternal(::UnityEngine::TextCore::Text::TextFontWeight value);

  constexpr void __cordl_internal_set_m_FontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> value);

  constexpr void __cordl_internal_set_m_HighlightColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_HighlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value);

  constexpr void __cordl_internal_set_m_HighlightState(::UnityEngine::TextCore::Text::HighlightState value);

  constexpr void __cordl_internal_set_m_HighlightStateStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> value);

  constexpr void __cordl_internal_set_m_HtmlColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_HtmlTag(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_m_IndentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value);

  constexpr void __cordl_internal_set_m_InternalTextElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> value);

  constexpr void __cordl_internal_set_m_InternalTextProcessingArraySize(int32_t value);

  constexpr void __cordl_internal_set_m_IsAutoSizePointSizeSet(bool value);

  constexpr void __cordl_internal_set_m_IsCalculatingPreferredValues(bool value);

  constexpr void __cordl_internal_set_m_IsDrivenLineSpacing(bool value);

  constexpr void __cordl_internal_set_m_IsIgnoringAlignment(bool value);

  constexpr void __cordl_internal_set_m_IsNewPage(bool value);

  constexpr void __cordl_internal_set_m_IsNonBreakingSpace(bool value);

  constexpr void __cordl_internal_set_m_ItalicAngle(int32_t value);

  constexpr void __cordl_internal_set_m_ItalicAngleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value);

  constexpr void __cordl_internal_set_m_LastBaseGlyphIndex(int32_t value);

  constexpr void __cordl_internal_set_m_LastCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_LastVisibleCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_LineHeight(float_t value);

  constexpr void __cordl_internal_set_m_LineJustification(::UnityEngine::TextCore::Text::TextAlignment value);

  constexpr void __cordl_internal_set_m_LineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> value);

  constexpr void __cordl_internal_set_m_LineNumber(int32_t value);

  constexpr void __cordl_internal_set_m_LineOffset(float_t value);

  constexpr void __cordl_internal_set_m_LineSpacingDelta(float_t value);

  constexpr void __cordl_internal_set_m_LineVisibleCharacterCount(int32_t value);

  constexpr void __cordl_internal_set_m_LineVisibleSpaceCount(int32_t value);

  constexpr void __cordl_internal_set_m_MarginHeight(float_t value);

  constexpr void __cordl_internal_set_m_MarginLeft(float_t value);

  constexpr void __cordl_internal_set_m_MarginRight(float_t value);

  constexpr void __cordl_internal_set_m_MarginWidth(float_t value);

  constexpr void __cordl_internal_set_m_MaterialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_MaterialReferenceStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> value);

  constexpr void __cordl_internal_set_m_MaterialReferences(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*> value);

  constexpr void __cordl_internal_set_m_MaxAscender(float_t value);

  constexpr void __cordl_internal_set_m_MaxCapHeight(float_t value);

  constexpr void __cordl_internal_set_m_MaxDescender(float_t value);

  constexpr void __cordl_internal_set_m_MaxFontSize(float_t value);

  constexpr void __cordl_internal_set_m_MaxLineAscender(float_t value);

  constexpr void __cordl_internal_set_m_MaxLineDescender(float_t value);

  constexpr void __cordl_internal_set_m_MeshExtents(::UnityEngine::TextCore::Text::Extents value);

  constexpr void __cordl_internal_set_m_MinFontSize(float_t value);

  constexpr void __cordl_internal_set_m_MonoSpacing(float_t value);

  constexpr void __cordl_internal_set_m_Padding(float_t value);

  constexpr void __cordl_internal_set_m_PageAscender(float_t value);

  constexpr void __cordl_internal_set_m_PageNumber(int32_t value);

  constexpr void __cordl_internal_set_m_PreferredHeight(float_t value);

  constexpr void __cordl_internal_set_m_PreferredWidth(float_t value);

  constexpr void __cordl_internal_set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_SavedEllipsisState(::UnityEngine::TextCore::Text::WordWrapState value);

  constexpr void __cordl_internal_set_m_SavedLastValidState(::UnityEngine::TextCore::Text::WordWrapState value);

  constexpr void __cordl_internal_set_m_SavedLineState(::UnityEngine::TextCore::Text::WordWrapState value);

  constexpr void __cordl_internal_set_m_SavedSoftLineBreakState(::UnityEngine::TextCore::Text::WordWrapState value);

  constexpr void __cordl_internal_set_m_SavedWordWrapState(::UnityEngine::TextCore::Text::WordWrapState value);

  constexpr void __cordl_internal_set_m_SizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value);

  constexpr void __cordl_internal_set_m_SpriteAnimationId(int32_t value);

  constexpr void __cordl_internal_set_m_SpriteColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_SpriteCount(int32_t value);

  constexpr void __cordl_internal_set_m_SpriteIndex(int32_t value);

  constexpr void __cordl_internal_set_m_StartOfLineAscender(float_t value);

  constexpr void __cordl_internal_set_m_StrikethroughColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_StrikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value);

  constexpr void __cordl_internal_set_m_StyleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value);

  constexpr void __cordl_internal_set_m_TagIndent(float_t value);

  constexpr void __cordl_internal_set_m_TagLineIndent(float_t value);

  constexpr void __cordl_internal_set_m_TagNoParsing(bool value);

  constexpr void __cordl_internal_set_m_TextBackingArray(::UnityEngine::TextCore::Text::TextBackingContainer value);

  constexpr void __cordl_internal_set_m_TextElementType(::UnityEngine::TextCore::Text::TextElementType value);

  constexpr void __cordl_internal_set_m_TextProcessingArray(::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> value);

  constexpr void __cordl_internal_set_m_TextStyleStackDepth(int32_t value);

  constexpr void
  __cordl_internal_set_m_TextStyleStacks(::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*> value);

  constexpr void __cordl_internal_set_m_TintSprite(bool value);

  constexpr void __cordl_internal_set_m_TotalCharacterCount(int32_t value);

  constexpr void __cordl_internal_set_m_Underline(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter value);

  constexpr void __cordl_internal_set_m_UnderlineColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_UnderlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value);

  constexpr void __cordl_internal_set_m_VertexBufferAutoSizeReduction(bool value);

  constexpr void __cordl_internal_set_m_Width(float_t value);

  constexpr void __cordl_internal_set_m_XAdvance(float_t value);

  constexpr void __cordl_internal_set_m_XmlAttribute(::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*> value);

  constexpr void __cordl_internal_set_m_isTextLayoutPhase(bool value);

  /// @brief Method .ctor, addr 0x48c14a0, size 0x680, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback* getStaticF_OnMissingCharacter();

  static inline bool getStaticF_m_IsTextTruncated();

  static inline ::UnityEngine::TextCore::Text::TextGenerator* getStaticF_s_TextGenerator();

  /// @brief Method get_isTextTruncated, addr 0x48c1ff4, size 0x48, virtual false, abstract: false, final false
  static inline bool get_isTextTruncated();

  static inline void setStaticF_OnMissingCharacter(::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback* value);

  static inline void setStaticF_m_IsTextTruncated(bool value);

  static inline void setStaticF_s_TextGenerator(::UnityEngine::TextCore::Text::TextGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGenerator(TextGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGenerator(TextGenerator const&) = delete;

  /// @brief Field m_TextBackingArray, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::TextCore::Text::TextBackingContainer ___m_TextBackingArray;

  /// @brief Field m_TextProcessingArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> ___m_TextProcessingArray;

  /// @brief Field m_InternalTextProcessingArraySize, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_InternalTextProcessingArraySize;

  /// @brief Field m_VertexBufferAutoSizeReduction, offset: 0x2c, size: 0x1, def value: None
  bool ___m_VertexBufferAutoSizeReduction;

  /// @brief Field m_HtmlTag, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___m_HtmlTag;

  /// @brief Field m_HighlightState, offset: 0x38, size: 0x14, def value: None
  ::UnityEngine::TextCore::Text::HighlightState ___m_HighlightState;

  /// @brief Field m_IsIgnoringAlignment, offset: 0x4c, size: 0x1, def value: None
  bool ___m_IsIgnoringAlignment;

  /// @brief Field m_RectTransformCorners, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_RectTransformCorners;

  /// @brief Field m_MarginWidth, offset: 0x58, size: 0x4, def value: None
  float_t ___m_MarginWidth;

  /// @brief Field m_MarginHeight, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_MarginHeight;

  /// @brief Field m_PreferredWidth, offset: 0x60, size: 0x4, def value: None
  float_t ___m_PreferredWidth;

  /// @brief Field m_PreferredHeight, offset: 0x64, size: 0x4, def value: None
  float_t ___m_PreferredHeight;

  /// @brief Field m_CurrentFontAsset, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> ___m_CurrentFontAsset;

  /// @brief Field m_CurrentMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CurrentMaterial;

  /// @brief Field m_CurrentMaterialIndex, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_CurrentMaterialIndex;

  /// @brief Field m_MaterialReferenceStack, offset: 0x80, size: 0x58, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> ___m_MaterialReferenceStack;

  /// @brief Field m_Padding, offset: 0xd8, size: 0x4, def value: None
  float_t ___m_Padding;

  /// @brief Field m_CurrentSpriteAsset, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> ___m_CurrentSpriteAsset;

  /// @brief Field m_TotalCharacterCount, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_TotalCharacterCount;

  /// @brief Field m_FontSize, offset: 0xec, size: 0x4, def value: None
  float_t ___m_FontSize;

  /// @brief Field m_FontScaleMultiplier, offset: 0xf0, size: 0x4, def value: None
  float_t ___m_FontScaleMultiplier;

  /// @brief Field m_CurrentFontSize, offset: 0xf4, size: 0x4, def value: None
  float_t ___m_CurrentFontSize;

  /// @brief Field m_SizeStack, offset: 0xf8, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> ___m_SizeStack;

  /// @brief Field m_TextStyleStacks, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*> ___m_TextStyleStacks;

  /// @brief Field m_TextStyleStackDepth, offset: 0x120, size: 0x4, def value: None
  int32_t ___m_TextStyleStackDepth;

  /// @brief Field m_FontStyleInternal, offset: 0x124, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles ___m_FontStyleInternal;

  /// @brief Field m_FontStyleStack, offset: 0x128, size: 0xa, def value: None
  ::UnityEngine::TextCore::Text::FontStyleStack ___m_FontStyleStack;

  /// @brief Field m_FontWeightInternal, offset: 0x134, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextFontWeight ___m_FontWeightInternal;

  /// @brief Field m_FontWeightStack, offset: 0x138, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> ___m_FontWeightStack;

  /// @brief Field m_LineJustification, offset: 0x158, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextAlignment ___m_LineJustification;

  /// @brief Field m_LineJustificationStack, offset: 0x160, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> ___m_LineJustificationStack;

  /// @brief Field m_BaselineOffset, offset: 0x180, size: 0x4, def value: None
  float_t ___m_BaselineOffset;

  /// @brief Field m_BaselineOffsetStack, offset: 0x188, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> ___m_BaselineOffsetStack;

  /// @brief Field m_FontColor32, offset: 0x1a8, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_FontColor32;

  /// @brief Field m_HtmlColor, offset: 0x1ac, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_HtmlColor;

  /// @brief Field m_UnderlineColor, offset: 0x1b0, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_UnderlineColor;

  /// @brief Field m_StrikethroughColor, offset: 0x1b4, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_StrikethroughColor;

  /// @brief Field m_ColorStack, offset: 0x1b8, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ___m_ColorStack;

  /// @brief Field m_UnderlineColorStack, offset: 0x1d8, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ___m_UnderlineColorStack;

  /// @brief Field m_StrikethroughColorStack, offset: 0x1f8, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ___m_StrikethroughColorStack;

  /// @brief Field m_HighlightColorStack, offset: 0x218, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ___m_HighlightColorStack;

  /// @brief Field m_HighlightStateStack, offset: 0x238, size: 0x30, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> ___m_HighlightStateStack;

  /// @brief Field m_ItalicAngleStack, offset: 0x268, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> ___m_ItalicAngleStack;

  /// @brief Field m_ColorGradientPreset, offset: 0x288, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> ___m_ColorGradientPreset;

  /// @brief Field m_ColorGradientStack, offset: 0x290, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> ___m_ColorGradientStack;

  /// @brief Field m_ColorGradientPresetIsTinted, offset: 0x2b8, size: 0x1, def value: None
  bool ___m_ColorGradientPresetIsTinted;

  /// @brief Field m_ActionStack, offset: 0x2c0, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> ___m_ActionStack;

  /// @brief Field m_LineOffset, offset: 0x2e0, size: 0x4, def value: None
  float_t ___m_LineOffset;

  /// @brief Field m_LineHeight, offset: 0x2e4, size: 0x4, def value: None
  float_t ___m_LineHeight;

  /// @brief Field m_IsDrivenLineSpacing, offset: 0x2e8, size: 0x1, def value: None
  bool ___m_IsDrivenLineSpacing;

  /// @brief Field m_CSpacing, offset: 0x2ec, size: 0x4, def value: None
  float_t ___m_CSpacing;

  /// @brief Field m_MonoSpacing, offset: 0x2f0, size: 0x4, def value: None
  float_t ___m_MonoSpacing;

  /// @brief Field m_XAdvance, offset: 0x2f4, size: 0x4, def value: None
  float_t ___m_XAdvance;

  /// @brief Field m_TagLineIndent, offset: 0x2f8, size: 0x4, def value: None
  float_t ___m_TagLineIndent;

  /// @brief Field m_TagIndent, offset: 0x2fc, size: 0x4, def value: None
  float_t ___m_TagIndent;

  /// @brief Field m_IndentStack, offset: 0x300, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> ___m_IndentStack;

  /// @brief Field m_TagNoParsing, offset: 0x320, size: 0x1, def value: None
  bool ___m_TagNoParsing;

  /// @brief Field m_CharacterCount, offset: 0x324, size: 0x4, def value: None
  int32_t ___m_CharacterCount;

  /// @brief Field m_FirstCharacterOfLine, offset: 0x328, size: 0x4, def value: None
  int32_t ___m_FirstCharacterOfLine;

  /// @brief Field m_LastCharacterOfLine, offset: 0x32c, size: 0x4, def value: None
  int32_t ___m_LastCharacterOfLine;

  /// @brief Field m_FirstVisibleCharacterOfLine, offset: 0x330, size: 0x4, def value: None
  int32_t ___m_FirstVisibleCharacterOfLine;

  /// @brief Field m_LastVisibleCharacterOfLine, offset: 0x334, size: 0x4, def value: None
  int32_t ___m_LastVisibleCharacterOfLine;

  /// @brief Field m_MaxLineAscender, offset: 0x338, size: 0x4, def value: None
  float_t ___m_MaxLineAscender;

  /// @brief Field m_MaxLineDescender, offset: 0x33c, size: 0x4, def value: None
  float_t ___m_MaxLineDescender;

  /// @brief Field m_LineNumber, offset: 0x340, size: 0x4, def value: None
  int32_t ___m_LineNumber;

  /// @brief Field m_LineVisibleCharacterCount, offset: 0x344, size: 0x4, def value: None
  int32_t ___m_LineVisibleCharacterCount;

  /// @brief Field m_LineVisibleSpaceCount, offset: 0x348, size: 0x4, def value: None
  int32_t ___m_LineVisibleSpaceCount;

  /// @brief Field m_FirstOverflowCharacterIndex, offset: 0x34c, size: 0x4, def value: None
  int32_t ___m_FirstOverflowCharacterIndex;

  /// @brief Field m_PageNumber, offset: 0x350, size: 0x4, def value: None
  int32_t ___m_PageNumber;

  /// @brief Field m_MarginLeft, offset: 0x354, size: 0x4, def value: None
  float_t ___m_MarginLeft;

  /// @brief Field m_MarginRight, offset: 0x358, size: 0x4, def value: None
  float_t ___m_MarginRight;

  /// @brief Field m_Width, offset: 0x35c, size: 0x4, def value: None
  float_t ___m_Width;

  /// @brief Field m_MeshExtents, offset: 0x360, size: 0x10, def value: None
  ::UnityEngine::TextCore::Text::Extents ___m_MeshExtents;

  /// @brief Field m_MaxCapHeight, offset: 0x370, size: 0x4, def value: None
  float_t ___m_MaxCapHeight;

  /// @brief Field m_MaxAscender, offset: 0x374, size: 0x4, def value: None
  float_t ___m_MaxAscender;

  /// @brief Field m_MaxDescender, offset: 0x378, size: 0x4, def value: None
  float_t ___m_MaxDescender;

  /// @brief Field m_IsNewPage, offset: 0x37c, size: 0x1, def value: None
  bool ___m_IsNewPage;

  /// @brief Field m_IsNonBreakingSpace, offset: 0x37d, size: 0x1, def value: None
  bool ___m_IsNonBreakingSpace;

  /// @brief Field m_SavedWordWrapState, offset: 0x380, size: 0x398, def value: None
  ::UnityEngine::TextCore::Text::WordWrapState ___m_SavedWordWrapState;

  /// @brief Field m_SavedLineState, offset: 0x718, size: 0x398, def value: None
  ::UnityEngine::TextCore::Text::WordWrapState ___m_SavedLineState;

  /// @brief Field m_SavedEllipsisState, offset: 0xab0, size: 0x398, def value: None
  ::UnityEngine::TextCore::Text::WordWrapState ___m_SavedEllipsisState;

  /// @brief Field m_SavedLastValidState, offset: 0xe48, size: 0x398, def value: None
  ::UnityEngine::TextCore::Text::WordWrapState ___m_SavedLastValidState;

  /// @brief Field m_SavedSoftLineBreakState, offset: 0x11e0, size: 0x398, def value: None
  ::UnityEngine::TextCore::Text::WordWrapState ___m_SavedSoftLineBreakState;

  /// @brief Field m_TextElementType, offset: 0x1578, size: 0x1, def value: None
  ::UnityEngine::TextCore::Text::TextElementType ___m_TextElementType;

  /// @brief Field m_isTextLayoutPhase, offset: 0x1579, size: 0x1, def value: None
  bool ___m_isTextLayoutPhase;

  /// @brief Field m_SpriteIndex, offset: 0x157c, size: 0x4, def value: None
  int32_t ___m_SpriteIndex;

  /// @brief Field m_SpriteColor, offset: 0x1580, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_SpriteColor;

  /// @brief Field m_CachedTextElement, offset: 0x1588, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextElement* ___m_CachedTextElement;

  /// @brief Field m_HighlightColor, offset: 0x1590, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_HighlightColor;

  /// @brief Field m_CharWidthAdjDelta, offset: 0x1594, size: 0x4, def value: None
  float_t ___m_CharWidthAdjDelta;

  /// @brief Field m_MaxFontSize, offset: 0x1598, size: 0x4, def value: None
  float_t ___m_MaxFontSize;

  /// @brief Field m_MinFontSize, offset: 0x159c, size: 0x4, def value: None
  float_t ___m_MinFontSize;

  /// @brief Field m_AutoSizeIterationCount, offset: 0x15a0, size: 0x4, def value: None
  int32_t ___m_AutoSizeIterationCount;

  /// @brief Field m_AutoSizeMaxIterationCount, offset: 0x15a4, size: 0x4, def value: None
  int32_t ___m_AutoSizeMaxIterationCount;

  /// @brief Field m_IsAutoSizePointSizeSet, offset: 0x15a8, size: 0x1, def value: None
  bool ___m_IsAutoSizePointSizeSet;

  /// @brief Field m_StartOfLineAscender, offset: 0x15ac, size: 0x4, def value: None
  float_t ___m_StartOfLineAscender;

  /// @brief Field m_LineSpacingDelta, offset: 0x15b0, size: 0x4, def value: None
  float_t ___m_LineSpacingDelta;

  /// @brief Field m_MaterialReferences, offset: 0x15b8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*> ___m_MaterialReferences;

  /// @brief Field m_SpriteCount, offset: 0x15c0, size: 0x4, def value: None
  int32_t ___m_SpriteCount;

  /// @brief Field m_StyleStack, offset: 0x15c8, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> ___m_StyleStack;

  /// @brief Field m_EllipsisInsertionCandidateStack, offset: 0x15e8, size: 0x3b8, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState> ___m_EllipsisInsertionCandidateStack;

  /// @brief Field m_SpriteAnimationId, offset: 0x19a0, size: 0x4, def value: None
  int32_t ___m_SpriteAnimationId;

  /// @brief Field m_ItalicAngle, offset: 0x19a4, size: 0x4, def value: None
  int32_t ___m_ItalicAngle;

  /// @brief Field m_FXScale, offset: 0x19a8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_FXScale;

  /// @brief Field m_FXRotation, offset: 0x19b4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_FXRotation;

  /// @brief Field m_LastBaseGlyphIndex, offset: 0x19c4, size: 0x4, def value: None
  int32_t ___m_LastBaseGlyphIndex;

  /// @brief Field m_PageAscender, offset: 0x19c8, size: 0x4, def value: None
  float_t ___m_PageAscender;

  /// @brief Field m_XmlAttribute, offset: 0x19d0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*> ___m_XmlAttribute;

  /// @brief Field m_AttributeParameterValues, offset: 0x19d8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_AttributeParameterValues;

  /// @brief Field m_MaterialReferenceIndexLookup, offset: 0x19e0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_MaterialReferenceIndexLookup;

  /// @brief Field m_IsCalculatingPreferredValues, offset: 0x19e8, size: 0x1, def value: None
  bool ___m_IsCalculatingPreferredValues;

  /// @brief Field m_DefaultSpriteAsset, offset: 0x19f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> ___m_DefaultSpriteAsset;

  /// @brief Field m_TintSprite, offset: 0x19f8, size: 0x1, def value: None
  bool ___m_TintSprite;

  /// @brief Field m_Ellipsis, offset: 0x1a00, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter ___m_Ellipsis;

  /// @brief Field m_Underline, offset: 0x1a20, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter ___m_Underline;

  /// @brief Field m_InternalTextElementInfo, offset: 0x1a40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> ___m_InternalTextElementInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextGenerator, 0x1a48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TextBackingArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TextProcessingArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_InternalTextProcessingArraySize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_VertexBufferAutoSizeReduction) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_HtmlTag) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_HighlightState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_IsIgnoringAlignment) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_RectTransformCorners) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MarginWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MarginHeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_PreferredWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_PreferredHeight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CurrentFontAsset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CurrentMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CurrentMaterialIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaterialReferenceStack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_Padding) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CurrentSpriteAsset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TotalCharacterCount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FontSize) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FontScaleMultiplier) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CurrentFontSize) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SizeStack) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TextStyleStacks) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TextStyleStackDepth) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FontStyleInternal) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FontStyleStack) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FontWeightInternal) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FontWeightStack) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineJustification) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineJustificationStack) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_BaselineOffset) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_BaselineOffsetStack) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FontColor32) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_HtmlColor) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_UnderlineColor) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_StrikethroughColor) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_ColorStack) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_UnderlineColorStack) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_StrikethroughColorStack) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_HighlightColorStack) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_HighlightStateStack) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_ItalicAngleStack) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_ColorGradientPreset) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_ColorGradientStack) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_ColorGradientPresetIsTinted) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_ActionStack) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineOffset) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineHeight) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_IsDrivenLineSpacing) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CSpacing) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MonoSpacing) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_XAdvance) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TagLineIndent) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TagIndent) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_IndentStack) == 0x300, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TagNoParsing) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CharacterCount) == 0x324, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FirstCharacterOfLine) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LastCharacterOfLine) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FirstVisibleCharacterOfLine) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LastVisibleCharacterOfLine) == 0x334, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaxLineAscender) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaxLineDescender) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineNumber) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineVisibleCharacterCount) == 0x344, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineVisibleSpaceCount) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FirstOverflowCharacterIndex) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_PageNumber) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MarginLeft) == 0x354, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MarginRight) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_Width) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MeshExtents) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaxCapHeight) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaxAscender) == 0x374, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaxDescender) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_IsNewPage) == 0x37c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_IsNonBreakingSpace) == 0x37d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SavedWordWrapState) == 0x380, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SavedLineState) == 0x718, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SavedEllipsisState) == 0xab0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SavedLastValidState) == 0xe48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SavedSoftLineBreakState) == 0x11e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TextElementType) == 0x1578, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_isTextLayoutPhase) == 0x1579, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SpriteIndex) == 0x157c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SpriteColor) == 0x1580, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CachedTextElement) == 0x1588, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_HighlightColor) == 0x1590, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_CharWidthAdjDelta) == 0x1594, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaxFontSize) == 0x1598, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MinFontSize) == 0x159c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_AutoSizeIterationCount) == 0x15a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_AutoSizeMaxIterationCount) == 0x15a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_IsAutoSizePointSizeSet) == 0x15a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_StartOfLineAscender) == 0x15ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LineSpacingDelta) == 0x15b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaterialReferences) == 0x15b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SpriteCount) == 0x15c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_StyleStack) == 0x15c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_EllipsisInsertionCandidateStack) == 0x15e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_SpriteAnimationId) == 0x19a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_ItalicAngle) == 0x19a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FXScale) == 0x19a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_FXRotation) == 0x19b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_LastBaseGlyphIndex) == 0x19c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_PageAscender) == 0x19c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_XmlAttribute) == 0x19d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_AttributeParameterValues) == 0x19d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_MaterialReferenceIndexLookup) == 0x19e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_IsCalculatingPreferredValues) == 0x19e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_DefaultSpriteAsset) == 0x19f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_TintSprite) == 0x19f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_Ellipsis) == 0x1a00, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_Underline) == 0x1a20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerator, ___m_InternalTextElementInfo) == 0x1a40, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGenerator*, "UnityEngine.TextCore.Text", "TextGenerator");
NEED_NO_BOX(::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__TextGenerator__MissingCharacterEventCallback*, "UnityEngine.TextCore.Text", "TextGenerator/MissingCharacterEventCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, "UnityEngine.TextCore.Text", "TextGenerator/SpecialCharacter");
