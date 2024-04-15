#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGeneratorUtilities)
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
template <typename T> struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGeneratorUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextGeneratorUtilities);
// Type: UnityEngine.TextCore.Text::TextGeneratorUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::TextGeneratorUtilities*
class CORDL_TYPE TextGeneratorUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field largeNegativeVector2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_largeNegativeVector2, put = setStaticF_largeNegativeVector2))::UnityEngine::Vector2 largeNegativeVector2;

  /// @brief Field largePositiveVector2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_largePositiveVector2, put = setStaticF_largePositiveVector2))::UnityEngine::Vector2 largePositiveVector2;

  /// @brief Method AdjustLineOffset, addr 0x3294404, size 0x180, virtual false, abstract: false, final false
  static inline void AdjustLineOffset(int32_t startIndex, int32_t endIndex, float_t offset, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method Approximately, addr 0x3291138, size 0x30, virtual false, abstract: false, final false
  static inline bool Approximately(float_t a, float_t b);

  /// @brief Method ConvertToFloat, addr 0x32919d4, size 0x80, virtual false, abstract: false, final false
  static inline float_t ConvertToFloat(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length);

  /// @brief Method ConvertToFloat, addr 0x3291a54, size 0x164, virtual false, abstract: false, final false
  static inline float_t ConvertToFloat(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length, ByRef<int32_t> lastIndex);

  /// @brief Method FillCharacterVertexBuffers, addr 0x3293394, size 0x880, virtual false, abstract: false, final false
  static inline void FillCharacterVertexBuffers(int32_t i, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method FillSpriteVertexBuffers, addr 0x3293c14, size 0x7f0, virtual false, abstract: false, final false
  static inline void FillSpriteVertexBuffers(int32_t i, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method GetStyle, addr 0x32931f0, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSetting, int32_t hashCode);

  /// @brief Method GetTagHashCode, addr 0x329315c, size 0x94, virtual false, abstract: false, final false
  static inline int32_t GetTagHashCode(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> text, int32_t index, ByRef<int32_t> closeIndex);

  /// @brief Method GetTagHashCode, addr 0x32932dc, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t GetTagHashCode(ByRef<::StringW> text, int32_t index, ByRef<int32_t> closeIndex);

  /// @brief Method GetUtf16, addr 0x329258c, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetUtf16(::StringW text, int32_t i);

  /// @brief Method GetUtf32, addr 0x3292460, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t GetUtf32(::StringW text, int32_t i);

  /// @brief Method HexCharsToColor, addr 0x3291750, size 0x284, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t, ::Array<char16_t>*> hexChars, int32_t startIndex, int32_t length);

  /// @brief Method HexCharsToColor, addr 0x3291168, size 0x5bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t, ::Array<char16_t>*> hexChars, int32_t tagCount);

  /// @brief Method HexToInt, addr 0x3291724, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t HexToInt(char16_t hex);

  /// @brief Method IsTagName, addr 0x3292d5c, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsTagName(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> text, ::StringW tag, int32_t index);

  /// @brief Method IsTagName, addr 0x3292658, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsTagName(ByRef<::StringW> text, ::StringW tag, int32_t index);

  /// @brief Method LegacyAlignmentToNewAlignment, addr 0x3294740, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextAlignment LegacyAlignmentToNewAlignment(::UnityEngine::TextAnchor anchor);

  /// @brief Method LegacyStyleToNewStyle, addr 0x3294730, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::FontStyles LegacyStyleToNewStyle(::UnityEngine::FontStyle fontStyle);

  /// @brief Method PackUV, addr 0x3291bb8, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PackUV(float_t x, float_t y, float_t scale);

  /// @brief Method ReplaceClosingStyleTag, addr 0x3292a34, size 0x328, virtual false, abstract: false, final false
  static inline void ReplaceClosingStyleTag(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> charBuffer, ByRef<int32_t> writeIndex,
                                            ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack,
                                            ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings);

  /// @brief Method ReplaceOpeningStyleTag, addr 0x3292e28, size 0x334, virtual false, abstract: false, final false
  static inline bool ReplaceOpeningStyleTag(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> charBuffer,
                                            ByRef<int32_t> writeIndex, ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack,
                                            ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings);

  /// @brief Method ReplaceOpeningStyleTag, addr 0x3292700, size 0x334, virtual false, abstract: false, final false
  static inline bool ReplaceOpeningStyleTag(ByRef<::StringW> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> charBuffer, ByRef<int32_t> writeIndex,
                                            ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack,
                                            ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*> generationSettings);

  /// @brief Method ResizeInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ResizeInternalArray(ByRef<::ArrayW<T, ::Array<T>*>> array);

  /// @brief Method ResizeLineExtents, addr 0x3294584, size 0x1ac, virtual false, abstract: false, final false
  static inline void ResizeLineExtents(int32_t size, ::UnityEngine::TextCore::Text::TextInfo* textInfo);

  /// @brief Method StringToCharArray, addr 0x3291c18, size 0x848, virtual false, abstract: false, final false
  static inline void StringToCharArray(::StringW sourceText, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> charBuffer, ByRef<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>> styleStack,
                                       ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings);

  static inline ::UnityEngine::Vector2 getStaticF_largeNegativeVector2();

  static inline ::UnityEngine::Vector2 getStaticF_largePositiveVector2();

  static inline void setStaticF_largeNegativeVector2(::UnityEngine::Vector2 value);

  static inline void setStaticF_largePositiveVector2(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGeneratorUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGeneratorUtilities(TextGeneratorUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGeneratorUtilities(TextGeneratorUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextGeneratorUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGeneratorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGeneratorUtilities*, "UnityEngine.TextCore.Text", "TextGeneratorUtilities");
