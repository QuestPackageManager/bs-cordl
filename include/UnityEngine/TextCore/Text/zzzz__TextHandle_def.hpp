#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextHandle)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextCacheEntry;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextGenerator;
}
namespace UnityEngine::TextCore::Text {
class TextHandlePermanentCache;
}
namespace UnityEngine::TextCore::Text {
class TextHandleTemporaryCache;
}
namespace UnityEngine::TextCore::Text {
struct TextHandle_TextHandleFlags;
}
namespace UnityEngine::TextCore::Text {
class TextHandle___c;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
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
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextHandle_TextHandleFlags;
}
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine::TextCore::Text {
class TextHandle___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags);
MARK_REF_T(::UnityEngine::TextCore::Text::TextHandle*);
MARK_REF_T(::UnityEngine::TextCore::Text::TextHandle___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags, "UnityEngine.TextCore.Text", "TextHandle/TextHandleFlags");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextHandle*, "UnityEngine.TextCore.Text", "TextHandle");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextHandle___c*, "UnityEngine.TextCore.Text", "TextHandle/<>c");
// [Flags]
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextHandle/TextHandleFlags
struct CORDL_TYPE TextHandle_TextHandleFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextHandle_TextHandleFlags_Unwrapped
  enum struct __TextHandle_TextHandleFlags_Unwrapped : int32_t {
    __E_IsCachedPermanentTextCore = static_cast<int32_t>(0x2),
    __E_IsCachedPermanentATG = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextHandle_TextHandleFlags_Unwrapped() const noexcept {
    return static_cast<__TextHandle_TextHandleFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandle_TextHandleFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr TextHandle_TextHandleFlags(int32_t value__) noexcept;

  /// @brief Field IsCachedPermanentATG value: I32(4)
  static ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags const IsCachedPermanentATG;

  /// @brief Field IsCachedPermanentTextCore value: I32(2)
  static ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags const IsCachedPermanentTextCore;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17865 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags) == 0x4, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandle/<>c
class CORDL_TYPE TextHandle___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::TextCore::Text::TextHandle___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* __9__12_0;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* __9__3_0;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* __9__3_1;

  /// @brief Field <>9__3_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_2, put = setStaticF___9__3_2)) ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* __9__3_2;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* __9__6_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* __9__9_0;

  static inline ::UnityEngine::TextCore::Text::TextHandle___c* New_ctor();

  /// @brief Method <InitThreadArrays>b__3_0, addr 0x7063818, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerationSettings* _InitThreadArrays_b__3_0();

  /// @brief Method <InitThreadArrays>b__3_1, addr 0x70638ac, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerator* _InitThreadArrays_b__3_1();

  /// @brief Method <InitThreadArrays>b__3_2, addr 0x7063904, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* _InitThreadArrays_b__3_2();

  /// @brief Method .ctor, addr 0x7063814, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_generators>b__9_0, addr 0x7063b88, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerator* _get_generators_b__9_0();

  /// @brief Method <get_settingsArray>b__6_0, addr 0x7063af4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerationSettings* _get_settingsArray_b__6_0();

  /// @brief Method <get_textInfosCommon>b__12_0, addr 0x7063be0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* _get_textInfosCommon_b__12_0();

  static inline ::UnityEngine::TextCore::Text::TextHandle___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* getStaticF___9__12_0();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* getStaticF___9__3_0();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* getStaticF___9__3_1();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* getStaticF___9__3_2();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* getStaticF___9__6_0();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::TextHandle___c* value);

  static inline void setStaticF___9__12_0(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  static inline void setStaticF___9__3_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* value);

  static inline void setStaticF___9__3_1(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* value);

  static inline void setStaticF___9__3_2(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  static inline void setStaticF___9__6_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* value);

  static inline void setStaticF___9__9_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandle___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextHandle___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextHandle___c(TextHandle___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextHandle___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextHandle___c(TextHandle___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::TextHandle___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// [DebuggerDisplay("{settings.text}")]
// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule", "UnityEditor.QuickSearchModule" })]
// Dependencies System.IntPtr, System.Object, UnityEngine.Rect, UnityEngine.TextCore.NativeTextGenerationSettings, UnityEngine.TextCore.Text.TextGenerationSettings,
// UnityEngine.TextCore.Text.TextGenerator, UnityEngine.TextCore.Text.TextHandle::TextHandleFlags, UnityEngine.TextCore.Text.TextInfo, UnityEngine.Vector2
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandle
class CORDL_TYPE TextHandle : public ::System::Object {
public:
  // Declarations
  using TextHandleFlags = ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags;

  using __c = ::UnityEngine::TextCore::Text::TextHandle___c;

  /// @brief [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  __declspec(property(get = get_IsCachedPermanent)) bool IsCachedPermanent;

  /// @brief [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  __declspec(property(get = get_IsCachedPermanentATG, put = set_IsCachedPermanentATG)) bool IsCachedPermanentATG;

  /// @brief [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  __declspec(property(get = get_IsCachedPermanentTextCore, put = set_IsCachedPermanentTextCore)) bool IsCachedPermanentTextCore;

  /// @brief [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  __declspec(property(get = get_IsCachedTemporary, put = set_IsCachedTemporary)) bool IsCachedTemporary;

  __declspec(property(get = get_IsPlaceholder)) bool IsPlaceholder;

  __declspec(property(get = get_TextInfoNode, put = set_TextInfoNode)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* TextInfoNode;

  /// @brief Field <IsCachedTemporary>k__BackingField, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__IsCachedTemporary_k__BackingField, put = __cordl_internal_set__IsCachedTemporary_k__BackingField)) bool _IsCachedTemporary_k__BackingField;

  /// @brief Field <TextInfoNode>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__TextInfoNode_k__BackingField,
      put = __cordl_internal_set__TextInfoNode_k__BackingField)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* _TextInfoNode_k__BackingField;

  __declspec(property(get = get_characterCount)) int32_t characterCount;

  /// @brief Field isDirty, offset 0xc4, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirty, put = __cordl_internal_set_isDirty)) bool isDirty;

  /// @brief Field m_CreateGenerationIteration, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CreateGenerationIteration, put = __cordl_internal_set_m_CreateGenerationIteration)) int32_t m_CreateGenerationIteration;

  /// @brief Field m_IsElided, offset 0x9d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsElided, put = __cordl_internal_set_m_IsElided)) bool m_IsElided;

  /// @brief Field m_IsPlaceholder, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPlaceholder, put = __cordl_internal_set_m_IsPlaceholder)) bool m_IsPlaceholder;

  /// @brief Field m_LineHeightDefault, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineHeightDefault, put = __cordl_internal_set_m_LineHeightDefault)) float_t m_LineHeightDefault;

  /// @brief Field m_PreviousGenerationSettingsHash, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousGenerationSettingsHash, put = __cordl_internal_set_m_PreviousGenerationSettingsHash)) int32_t m_PreviousGenerationSettingsHash;

  /// @brief Field m_ScreenRect, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ScreenRect, put = __cordl_internal_set_m_ScreenRect)) ::UnityEngine::Rect m_ScreenRect;

  /// @brief Field m_TextGenerationInfo, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextGenerationInfo, put = __cordl_internal_set_m_TextGenerationInfo)) ::System::IntPtr m_TextGenerationInfo;

  /// @brief Field m_TextHandleFlags, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextHandleFlags, put = __cordl_internal_set_m_TextHandleFlags)) ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags m_TextHandleFlags;

  /// @brief Field nativeSettings, offset 0x10, size 0x70
  __declspec(property(get = __cordl_internal_get_nativeSettings, put = __cordl_internal_set_nativeSettings)) ::UnityEngine::TextCore::NativeTextGenerationSettings nativeSettings;

  /// @brief Field pixelPreferedSize, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_pixelPreferedSize, put = __cordl_internal_set_pixelPreferedSize)) ::UnityEngine::Vector2 pixelPreferedSize;

  __declspec(property(get = get_preferredSize)) ::UnityEngine::Vector2 preferredSize;

  /// @brief Field s_Generators, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Generators, put = setStaticF_s_Generators)) ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> s_Generators;

  /// @brief Field s_PermanentCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PermanentCache, put = setStaticF_s_PermanentCache)) ::UnityEngine::TextCore::Text::TextHandlePermanentCache* s_PermanentCache;

  /// @brief Field s_Settings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Settings, put = setStaticF_s_Settings)) ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> s_Settings;

  /// @brief Field s_TemporaryCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TemporaryCache, put = setStaticF_s_TemporaryCache)) ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* s_TemporaryCache;

  /// @brief Field s_TextInfosCommon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TextInfosCommon, put = setStaticF_s_TextInfosCommon)) ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> s_TextInfosCommon;

  /// @brief [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  __declspec(property(get = get_textGenerationInfo, put = set_textGenerationInfo)) ::System::IntPtr textGenerationInfo;

  __declspec(property(get = get_textInfo)) ::UnityEngine::TextCore::Text::TextInfo* textInfo;

  __declspec(property(get = get_useAdvancedText)) bool useAdvancedText;

  /// @brief Method AddTextInfoToTemporaryCache, addr 0x706163c, size 0xa4, virtual false, abstract: false, final false
  inline void AddTextInfoToTemporaryCache(int32_t hashCode);

  /// @brief Method AddToPermanentCacheAndGenerateMesh, addr 0x7061570, size 0xcc, virtual true, abstract: false, final false
  inline void AddToPermanentCacheAndGenerateMesh();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method ConvertPixelUnitsToTextCoreRelativeUnits, addr 0x7061ff8, size 0x2c, virtual false, abstract: false, final false
  static inline float_t ConvertPixelUnitsToTextCoreRelativeUnits(float_t fontSize, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method Finalize, addr 0x7060448, size 0x60, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FindIntersectingLink, addr 0x7062520, size 0x10c, virtual false, abstract: false, final false
  inline int32_t FindIntersectingLink(::UnityEngine::Vector3 position, bool inverseYAxis);

  /// @brief Method GetCharacterHeightFromIndex, addr 0x7062964, size 0xb0, virtual false, abstract: false, final false
  inline float_t GetCharacterHeightFromIndex(int32_t index);

  /// @brief Method GetCorrespondingStringIndex, addr 0x706262c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetCorrespondingStringIndex(int32_t index);

  /// @brief Method GetCursorIndexFromPosition, addr 0x7062348, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetCursorIndexFromPosition(::UnityEngine::Vector2 position, bool inverseYAxis);

  /// @brief Method GetCursorPositionFromStringIndexUsingCharacterHeight, addr 0x7062024, size 0xb4, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int32_t index, bool inverseYAxis);

  /// @brief Method GetCursorPositionFromStringIndexUsingLineHeight, addr 0x70620d8, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int32_t index, bool useXAdvance, bool inverseYAxis);

  /// @brief Method GetEndOfPreviousWord, addr 0x7062d20, size 0xe0, virtual false, abstract: false, final false
  inline int32_t GetEndOfPreviousWord(int32_t currentIndex);

  /// @brief Method GetFirstCharacterIndexOnLine, addr 0x7062e00, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetFirstCharacterIndexOnLine(int32_t currentIndex);

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method GetHighlightRectangles, addr 0x7062198, size 0x1b0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rect> GetHighlightRectangles(int32_t cursorIndex, int32_t selectIndex);

  /// @brief Method GetLastCharacterIndexOnLine, addr 0x7062e90, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetLastCharacterIndexOnLine(int32_t currentIndex);

  /// @brief Method GetLineHeight, addr 0x7062804, size 0xb0, virtual false, abstract: false, final false
  inline float_t GetLineHeight(int32_t lineNumber);

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule" })]
  /// @brief Method GetLineHeightDefault, addr 0x7061bc8, size 0xcc, virtual false, abstract: false, final false
  static inline float_t GetLineHeightDefault(::UnityEngine::TextCore::Text::TextGenerationSettings* settings);

  /// @brief Method GetLineHeightFromCharacterIndex, addr 0x70628b4, size 0xb0, virtual false, abstract: false, final false
  inline float_t GetLineHeightFromCharacterIndex(int32_t index);

  /// @brief Method GetLineInfoFromCharacterIndex, addr 0x7062684, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::LineInfo GetLineInfoFromCharacterIndex(int32_t index);

  /// @brief Method GetLineNumber, addr 0x706277c, size 0x88, virtual false, abstract: false, final false
  inline int32_t GetLineNumber(int32_t index);

  /// @brief Method GetPixelsPerPoint, addr 0x7060f8c, size 0x8, virtual true, abstract: false, final false
  inline float_t GetPixelsPerPoint();

  /// @brief Method GetStartOfNextWord, addr 0x7062c40, size 0xe0, virtual false, abstract: false, final false
  inline int32_t GetStartOfNextWord(int32_t currentIndex);

  /// @brief Method IndexOf, addr 0x7062f1c, size 0xcc, virtual false, abstract: false, final false
  inline int32_t IndexOf(char16_t value, int32_t startIndex);

  /// @brief Method InitArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InitArray(::by_ref<::ArrayW<T>> array, ::System::Func_1<T>* createInstance);

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method InitThreadArrays, addr 0x7060538, size 0x34c, virtual false, abstract: false, final false
  static inline void InitThreadArrays();

  /// @brief Method IsAdvancedTextEnabledForElement, addr 0x70635e8, size 0x8, virtual true, abstract: false, final false
  inline bool IsAdvancedTextEnabledForElement();

  /// @brief Method IsDirty, addr 0x7061850, size 0x3c, virtual false, abstract: false, final false
  inline bool IsDirty(int32_t hashCode);

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule" })]
  /// @brief Method IsMainDirectionRTL, addr 0x70635f0, size 0xcc, virtual false, abstract: false, final false
  inline bool IsMainDirectionRTL();

  /// @brief Method LastIndexOf, addr 0x7062fe8, size 0xcc, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(char16_t value, int32_t startIndex);

  /// @brief Method LineDownCharacterPosition, addr 0x7062410, size 0x88, virtual false, abstract: false, final false
  inline int32_t LineDownCharacterPosition(int32_t originalLogicalPos);

  /// @brief Method LineUpCharacterPosition, addr 0x7062498, size 0x88, virtual false, abstract: false, final false
  inline int32_t LineUpCharacterPosition(int32_t originalLogicalPos);

  static inline ::UnityEngine::TextCore::Text::TextHandle* New_ctor();

  /// @brief Method NextCodePointIndex, addr 0x7062b60, size 0xe0, virtual false, abstract: false, final false
  inline int32_t NextCodePointIndex(int32_t currentIndex);

  /// @brief Method PixelsToPoints, addr 0x7060efc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 PixelsToPoints(::UnityEngine::Vector2 pixel);

  /// @brief Method PixelsToPoints, addr 0x7060f30, size 0x28, virtual false, abstract: false, final false
  inline float_t PixelsToPoints(float_t pixel);

  /// @brief Method PointsToPixels, addr 0x7060f58, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 PointsToPixels(::UnityEngine::Vector2 point);

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method PrepareFontAsset, addr 0x7061c94, size 0x134, virtual false, abstract: false, final false
  inline bool PrepareFontAsset();

  /// @brief Method PreviousCodePointIndex, addr 0x7062a80, size 0xe0, virtual false, abstract: false, final false
  inline int32_t PreviousCodePointIndex(int32_t currentIndex);

  /// @brief Method RemoveFromPermanentCache, addr 0x7060518, size 0x20, virtual false, abstract: false, final false
  inline void RemoveFromPermanentCache();

  /// @brief Method RemoveFromPermanentCacheATG, addr 0x7061750, size 0x6c, virtual true, abstract: false, final false
  inline void RemoveFromPermanentCacheATG();

  /// @brief Method RemoveFromPermanentCacheTextCore, addr 0x70616e0, size 0x70, virtual false, abstract: false, final false
  inline void RemoveFromPermanentCacheTextCore();

  /// @brief Method RemoveFromTemporaryCache, addr 0x70604a8, size 0x70, virtual false, abstract: false, final false
  inline void RemoveFromTemporaryCache();

  /// @brief Method SelectCurrentParagraph, addr 0x70631a8, size 0xe0, virtual false, abstract: false, final false
  inline void SelectCurrentParagraph(::by_ref<int32_t> cursorIndex, ::by_ref<int32_t> selectIndex);

  /// @brief Method SelectCurrentWord, addr 0x70630b4, size 0xf4, virtual false, abstract: false, final false
  inline void SelectCurrentWord(int32_t index, ::by_ref<int32_t> cursorIndex, ::by_ref<int32_t> selectIndex);

  /// @brief Method SelectToEndOfParagraph, addr 0x7063510, size 0xd8, virtual false, abstract: false, final false
  inline void SelectToEndOfParagraph(::by_ref<int32_t> cursorIndex);

  /// @brief Method SelectToNextParagraph, addr 0x7063360, size 0xd8, virtual false, abstract: false, final false
  inline void SelectToNextParagraph(::by_ref<int32_t> cursorIndex);

  /// @brief Method SelectToPreviousParagraph, addr 0x7063288, size 0xd8, virtual false, abstract: false, final false
  inline void SelectToPreviousParagraph(::by_ref<int32_t> cursorIndex);

  /// @brief Method SelectToStartOfParagraph, addr 0x7063438, size 0xd8, virtual false, abstract: false, final false
  inline void SelectToStartOfParagraph(::by_ref<int32_t> cursorIndex);

  /// @brief Method SetDirty, addr 0x7061844, size 0xc, virtual true, abstract: false, final false
  inline void SetDirty();

  /// @brief Method Substring, addr 0x7062a14, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW Substring(int32_t startIndex, int32_t length);

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method Update, addr 0x7061920, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* Update();

  /// @brief Method UpdateCurrentFrame, addr 0x70617bc, size 0x88, virtual false, abstract: false, final false
  static inline void UpdateCurrentFrame();

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule" })]
  /// @brief Method UpdatePreferredSize, addr 0x7061dc8, size 0x230, virtual false, abstract: false, final false
  inline void UpdatePreferredSize();

  /// @brief Method UpdatePreferredValues, addr 0x7061894, size 0x8c, virtual false, abstract: false, final false
  inline void UpdatePreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method UpdateWithHash, addr 0x7061a04, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* UpdateWithHash(int32_t hashCode);

  constexpr bool const& __cordl_internal_get__IsCachedTemporary_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsCachedTemporary_k__BackingField();

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* const& __cordl_internal_get__TextInfoNode_k__BackingField() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*& __cordl_internal_get__TextInfoNode_k__BackingField();

  constexpr bool const& __cordl_internal_get_isDirty() const;

  constexpr bool& __cordl_internal_get_isDirty();

  constexpr int32_t const& __cordl_internal_get_m_CreateGenerationIteration() const;

  constexpr int32_t& __cordl_internal_get_m_CreateGenerationIteration();

  constexpr bool const& __cordl_internal_get_m_IsElided() const;

  constexpr bool& __cordl_internal_get_m_IsElided();

  constexpr bool const& __cordl_internal_get_m_IsPlaceholder() const;

  constexpr bool& __cordl_internal_get_m_IsPlaceholder();

  constexpr float_t const& __cordl_internal_get_m_LineHeightDefault() const;

  constexpr float_t& __cordl_internal_get_m_LineHeightDefault();

  constexpr int32_t const& __cordl_internal_get_m_PreviousGenerationSettingsHash() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousGenerationSettingsHash();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ScreenRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ScreenRect();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_TextGenerationInfo() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_TextGenerationInfo();

  constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags const& __cordl_internal_get_m_TextHandleFlags() const;

  constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags& __cordl_internal_get_m_TextHandleFlags();

  constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings const& __cordl_internal_get_nativeSettings() const;

  constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings& __cordl_internal_get_nativeSettings();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pixelPreferedSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_pixelPreferedSize();

  constexpr void __cordl_internal_set__IsCachedTemporary_k__BackingField(bool value);

  constexpr void __cordl_internal_set__TextInfoNode_k__BackingField(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* value);

  constexpr void __cordl_internal_set_isDirty(bool value);

  constexpr void __cordl_internal_set_m_CreateGenerationIteration(int32_t value);

  constexpr void __cordl_internal_set_m_IsElided(bool value);

  constexpr void __cordl_internal_set_m_IsPlaceholder(bool value);

  constexpr void __cordl_internal_set_m_LineHeightDefault(float_t value);

  constexpr void __cordl_internal_set_m_PreviousGenerationSettingsHash(int32_t value);

  constexpr void __cordl_internal_set_m_ScreenRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_TextGenerationInfo(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_TextHandleFlags(::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags value);

  constexpr void __cordl_internal_set_nativeSettings(::UnityEngine::TextCore::NativeTextGenerationSettings value);

  constexpr void __cordl_internal_set_pixelPreferedSize(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x70636bc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> getStaticF_s_Generators();

  static inline ::UnityEngine::TextCore::Text::TextHandlePermanentCache* getStaticF_s_PermanentCache();

  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> getStaticF_s_Settings();

  static inline ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* getStaticF_s_TemporaryCache();

  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> getStaticF_s_TextInfosCommon();

  /// @brief Method get_IsCachedPermanent, addr 0x7061204, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCachedPermanent();

  /// @brief Method get_IsCachedPermanentATG, addr 0x7061084, size 0x90, virtual false, abstract: false, final false
  inline bool get_IsCachedPermanentATG();

  /// @brief Method get_IsCachedPermanentTextCore, addr 0x7061230, size 0x1b0, virtual false, abstract: false, final false
  inline bool get_IsCachedPermanentTextCore();

  /// [CompilerGenerated]
  /// @brief Method get_IsCachedTemporary, addr 0x70613fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCachedTemporary();

  /// @brief Method get_IsPlaceholder, addr 0x706188c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPlaceholder();

  /// [CompilerGenerated]
  /// @brief Method get_TextInfoNode, addr 0x70611f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* get_TextInfoNode();

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method get_characterCount, addr 0x7061418, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_characterCount();

  /// @brief Method get_generator, addr 0x7060d94, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextGenerator* get_generator();

  /// @brief Method get_generators, addr 0x7060a00, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> get_generators();

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method get_preferredSize, addr 0x7060ecc, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_preferredSize();

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method get_settings, addr 0x7060e30, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* get_settings();

  /// @brief Method get_settingsArray, addr 0x7060884, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> get_settingsArray();

  /// @brief Method get_textGenerationInfo, addr 0x7060f94, size 0xf0, virtual false, abstract: false, final false
  inline ::System::IntPtr get_textGenerationInfo();

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method get_textInfo, addr 0x7061490, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfo();

  /// @brief Method get_textInfoCommon, addr 0x7060cf8, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfoCommon();

  /// @brief Method get_textInfosCommon, addr 0x7060b7c, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> get_textInfosCommon();

  /// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
  /// @brief Method get_useAdvancedText, addr 0x706140c, size 0xc, virtual false, abstract: false, final false
  inline bool get_useAdvancedText();

  static inline void setStaticF_s_Generators(::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> value);

  static inline void setStaticF_s_PermanentCache(::UnityEngine::TextCore::Text::TextHandlePermanentCache* value);

  static inline void setStaticF_s_Settings(::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> value);

  static inline void setStaticF_s_TemporaryCache(::UnityEngine::TextCore::Text::TextHandleTemporaryCache* value);

  static inline void setStaticF_s_TextInfosCommon(::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> value);

  /// @brief Method set_IsCachedPermanentATG, addr 0x7061214, size 0x1c, virtual false, abstract: false, final false
  inline void set_IsCachedPermanentATG(bool value);

  /// @brief Method set_IsCachedPermanentTextCore, addr 0x70613e0, size 0x1c, virtual false, abstract: false, final false
  inline void set_IsCachedPermanentTextCore(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_IsCachedTemporary, addr 0x7061404, size 0x8, virtual false, abstract: false, final false
  inline void set_IsCachedTemporary(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_TextInfoNode, addr 0x70611fc, size 0x8, virtual false, abstract: false, final false
  inline void set_TextInfoNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* value);

  /// @brief Method set_textGenerationInfo, addr 0x7061114, size 0xe0, virtual false, abstract: false, final false
  inline void set_textGenerationInfo(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextHandle(TextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextHandle(TextHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17867 };

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Field nativeSettings, offset: 0x10, size: 0x70, def value: None
  ::UnityEngine::TextCore::NativeTextGenerationSettings ___nativeSettings;

  /// @brief Field pixelPreferedSize, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___pixelPreferedSize;

  /// @brief Field m_ScreenRect, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_ScreenRect;

  /// @brief Field m_LineHeightDefault, offset: 0x98, size: 0x4, def value: None
  float_t ___m_LineHeightDefault;

  /// @brief Field m_IsPlaceholder, offset: 0x9c, size: 0x1, def value: None
  bool ___m_IsPlaceholder;

  /// @brief Field m_IsElided, offset: 0x9d, size: 0x1, def value: None
  bool ___m_IsElided;

  /// @brief Field m_CreateGenerationIteration, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_CreateGenerationIteration;

  /// @brief Field m_TextGenerationInfo, offset: 0xa8, size: 0x8, def value: None
  ::System::IntPtr ___m_TextGenerationInfo;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <TextInfoNode>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* ____TextInfoNode_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <IsCachedTemporary>k__BackingField, offset: 0xb8, size: 0x1, def value: None
  bool ____IsCachedTemporary_k__BackingField;

  /// @brief Field m_TextHandleFlags, offset: 0xbc, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags ___m_TextHandleFlags;

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Field m_PreviousGenerationSettingsHash, offset: 0xc0, size: 0x4, def value: None
  int32_t ___m_PreviousGenerationSettingsHash;

  /// @brief Field isDirty, offset: 0xc4, size: 0x1, def value: None
  bool ___isDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___nativeSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___pixelPreferedSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_ScreenRect) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_LineHeightDefault) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_IsPlaceholder) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_IsElided) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_CreateGenerationIteration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_TextGenerationInfo) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____TextInfoNode_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____IsCachedTemporary_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_TextHandleFlags) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_PreviousGenerationSettingsHash) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___isDirty) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::TextHandle) == 0xc8, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
