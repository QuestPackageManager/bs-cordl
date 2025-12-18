#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextHandle)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
namespace UnityEngine::TextCore::Text {
struct OTL_FeatureTag;
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
class TextHandle;
}
namespace UnityEngine::TextCore::Text {
class TextHandle___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextHandle);
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextHandle___c);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandle/<>c
class CORDL_TYPE TextHandle___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::TextCore::Text::TextHandle___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* __9__10_0;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* __9__13_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* __9__4_1;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2)) ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* __9__4_2;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* __9__7_0;

  static inline ::UnityEngine::TextCore::Text::TextHandle___c* New_ctor();

  /// @brief Method <InitThreadArrays>b__4_0, addr 0x6a44db0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerationSettings* _InitThreadArrays_b__4_0();

  /// @brief Method <InitThreadArrays>b__4_1, addr 0x6a44e08, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerator* _InitThreadArrays_b__4_1();

  /// @brief Method <InitThreadArrays>b__4_2, addr 0x6a44e60, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* _InitThreadArrays_b__4_2();

  /// @brief Method .ctor, addr 0x6a44dac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_generators>b__10_0, addr 0x6a450e8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerator* _get_generators_b__10_0();

  /// @brief Method <get_settingsArray>b__7_0, addr 0x6a45090, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextGenerationSettings* _get_settingsArray_b__7_0();

  /// @brief Method <get_textInfosCommon>b__13_0, addr 0x6a45140, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* _get_textInfosCommon_b__13_0();

  static inline ::UnityEngine::TextCore::Text::TextHandle___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* getStaticF___9__10_0();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* getStaticF___9__13_0();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* getStaticF___9__4_0();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* getStaticF___9__4_1();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* getStaticF___9__4_2();

  static inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::TextHandle___c* value);

  static inline void setStaticF___9__10_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* value);

  static inline void setStaticF___9__13_0(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  static inline void setStaticF___9__4_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* value);

  static inline void setStaticF___9__4_1(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* value);

  static inline void setStaticF___9__4_2(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  static inline void setStaticF___9__7_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandle___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextHandle___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextHandle___c(TextHandle___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextHandle___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextHandle___c(TextHandle___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17240 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextHandle___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Dependencies System.IntPtr, System.Object, UnityEngine.Rect, UnityEngine.TextCore.NativeTextGenerationSettings, UnityEngine.Vector2
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandle
class CORDL_TYPE TextHandle : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::Text::TextHandle___c;

  __declspec(property(get = get_IsCachedPermanent, put = set_IsCachedPermanent)) bool IsCachedPermanent;

  __declspec(property(get = get_IsCachedTemporary, put = set_IsCachedTemporary)) bool IsCachedTemporary;

  __declspec(property(get = get_IsPlaceholder)) bool IsPlaceholder;

  __declspec(property(get = get_TextInfoNode, put = set_TextInfoNode)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* TextInfoNode;

  /// @brief Field <IsCachedPermanent>k__BackingField, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__IsCachedPermanent_k__BackingField, put = __cordl_internal_set__IsCachedPermanent_k__BackingField)) bool _IsCachedPermanent_k__BackingField;

  /// @brief Field <IsCachedTemporary>k__BackingField, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__IsCachedTemporary_k__BackingField, put = __cordl_internal_set__IsCachedTemporary_k__BackingField)) bool _IsCachedTemporary_k__BackingField;

  /// @brief Field <TextInfoNode>k__BackingField, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get__TextInfoNode_k__BackingField,
      put = __cordl_internal_set__TextInfoNode_k__BackingField)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* _TextInfoNode_k__BackingField;

  /// @brief Field <preferredSize>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__preferredSize_k__BackingField, put = __cordl_internal_set__preferredSize_k__BackingField)) ::UnityEngine::Vector2 _preferredSize_k__BackingField;

  __declspec(property(get = get_characterCount)) int32_t characterCount;

  /// @brief Field isDirty, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirty, put = __cordl_internal_set_isDirty)) bool isDirty;

  /// @brief Field m_ActiveFontFeatures, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveFontFeatures,
                      put = setStaticF_m_ActiveFontFeatures)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* m_ActiveFontFeatures;

  /// @brief Field m_IsEllided, offset 0x8d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsEllided, put = __cordl_internal_set_m_IsEllided)) bool m_IsEllided;

  /// @brief Field m_IsPlaceholder, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPlaceholder, put = __cordl_internal_set_m_IsPlaceholder)) bool m_IsPlaceholder;

  /// @brief Field m_LineHeightDefault, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineHeightDefault, put = __cordl_internal_set_m_LineHeightDefault)) float_t m_LineHeightDefault;

  /// @brief Field m_PreviousGenerationSettingsHash, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousGenerationSettingsHash, put = __cordl_internal_set_m_PreviousGenerationSettingsHash)) int32_t m_PreviousGenerationSettingsHash;

  /// @brief Field m_ScreenRect, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ScreenRect, put = __cordl_internal_set_m_ScreenRect)) ::UnityEngine::Rect m_ScreenRect;

  /// @brief Field nativeSettings, offset 0x10, size 0x60
  __declspec(property(get = __cordl_internal_get_nativeSettings, put = __cordl_internal_set_nativeSettings)) ::UnityEngine::TextCore::NativeTextGenerationSettings nativeSettings;

  __declspec(property(get = get_preferredSize, put = set_preferredSize)) ::UnityEngine::Vector2 preferredSize;

  /// @brief Field s_Generators, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Generators, put = setStaticF_s_Generators)) ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*, ::Array<::UnityEngine::TextCore::Text::TextGenerator*>*>
      s_Generators;

  /// @brief Field s_PermanentCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PermanentCache, put = setStaticF_s_PermanentCache)) ::UnityEngine::TextCore::Text::TextHandlePermanentCache* s_PermanentCache;

  /// @brief Field s_Settings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Settings,
                      put = setStaticF_s_Settings)) ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*, ::Array<::UnityEngine::TextCore::Text::TextGenerationSettings*>*>
      s_Settings;

  /// @brief Field s_TemporaryCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TemporaryCache, put = setStaticF_s_TemporaryCache)) ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* s_TemporaryCache;

  /// @brief Field s_TextInfosCommon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TextInfosCommon, put = setStaticF_s_TextInfosCommon)) ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*, ::Array<::UnityEngine::TextCore::Text::TextInfo*>*>
      s_TextInfosCommon;

  /// @brief Field textGenerationInfo, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_textGenerationInfo, put = __cordl_internal_set_textGenerationInfo)) ::System::IntPtr textGenerationInfo;

  __declspec(property(get = get_textInfo)) ::UnityEngine::TextCore::Text::TextInfo* textInfo;

  __declspec(property(get = get_useAdvancedText)) bool useAdvancedText;

  /// @brief Method AddTextInfoToPermanentCache, addr 0x6a42d10, size 0xd0, virtual true, abstract: false, final false
  inline void AddTextInfoToPermanentCache();

  /// @brief Method AddTextInfoToTemporaryCache, addr 0x6a42de0, size 0xa4, virtual false, abstract: false, final false
  inline void AddTextInfoToTemporaryCache(int32_t hashCode);

  /// @brief Method ConvertPixelUnitsToTextCoreRelativeUnits, addr 0x6a437a0, size 0x2c, virtual false, abstract: false, final false
  static inline float_t ConvertPixelUnitsToTextCoreRelativeUnits(float_t fontSize, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method Finalize, addr 0x6a420f4, size 0x50, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FindIntersectingLink, addr 0x6a43b70, size 0xfc, virtual false, abstract: false, final false
  inline int32_t FindIntersectingLink(::UnityEngine::Vector3 position, bool inverseYAxis);

  /// @brief Method GetCharacterHeightFromIndex, addr 0x6a43f3c, size 0x80, virtual false, abstract: false, final false
  inline float_t GetCharacterHeightFromIndex(int32_t index);

  /// @brief Method GetCorrespondingStringIndex, addr 0x6a43c6c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetCorrespondingStringIndex(int32_t index);

  /// @brief Method GetCursorIndexFromPosition, addr 0x6a439bc, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetCursorIndexFromPosition(::UnityEngine::Vector2 position, bool inverseYAxis);

  /// @brief Method GetCursorPositionFromStringIndexUsingCharacterHeight, addr 0x6a437cc, size 0x84, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int32_t index, bool inverseYAxis);

  /// @brief Method GetCursorPositionFromStringIndexUsingLineHeight, addr 0x6a43850, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int32_t index, bool useXAdvance, bool inverseYAxis);

  /// @brief Method GetEndOfPreviousWord, addr 0x6a442ac, size 0xd8, virtual false, abstract: false, final false
  inline int32_t GetEndOfPreviousWord(int32_t currentIndex);

  /// @brief Method GetFirstCharacterIndexOnLine, addr 0x6a44384, size 0xd8, virtual false, abstract: false, final false
  inline int32_t GetFirstCharacterIndexOnLine(int32_t currentIndex);

  /// @brief Method GetHighlightRectangles, addr 0x6a438e4, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> GetHighlightRectangles(int32_t cursorIndex, int32_t selectIndex);

  /// @brief Method GetLastCharacterIndexOnLine, addr 0x6a4445c, size 0xd8, virtual false, abstract: false, final false
  inline int32_t GetLastCharacterIndexOnLine(int32_t currentIndex);

  /// @brief Method GetLineHeight, addr 0x6a43e3c, size 0x80, virtual false, abstract: false, final false
  inline float_t GetLineHeight(int32_t lineNumber);

  /// @brief Method GetLineHeightDefault, addr 0x6a43298, size 0xa0, virtual false, abstract: false, final false
  static inline float_t GetLineHeightDefault(::UnityEngine::TextCore::Text::TextGenerationSettings* settings);

  /// @brief Method GetLineHeightFromCharacterIndex, addr 0x6a43ebc, size 0x80, virtual false, abstract: false, final false
  inline float_t GetLineHeightFromCharacterIndex(int32_t index);

  /// @brief Method GetLineInfoFromCharacterIndex, addr 0x6a43cc4, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::LineInfo GetLineInfoFromCharacterIndex(int32_t index);

  /// @brief Method GetLineNumber, addr 0x6a43dbc, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetLineNumber(int32_t index);

  /// @brief Method GetStartOfNextWord, addr 0x6a441d4, size 0xd8, virtual false, abstract: false, final false
  inline int32_t GetStartOfNextWord(int32_t currentIndex);

  /// @brief Method IndexOf, addr 0x6a44534, size 0xcc, virtual false, abstract: false, final false
  inline int32_t IndexOf(char16_t value, int32_t startIndex);

  /// @brief Method InitArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InitArray(::ByRef<::ArrayW<T, ::Array<T>*>> array, ::System::Func_1<T>* createInstance);

  /// @brief Method InitThreadArrays, addr 0x6a42268, size 0x34c, virtual false, abstract: false, final false
  static inline void InitThreadArrays();

  /// @brief Method IsAdvancedTextEnabledForElement, addr 0x6a44bd0, size 0x8, virtual true, abstract: false, final false
  inline bool IsAdvancedTextEnabledForElement();

  /// @brief Method IsDirty, addr 0x6a42f18, size 0x3c, virtual false, abstract: false, final false
  inline bool IsDirty(int32_t hashCode);

  /// @brief Method IsElided, addr 0x6a42f5c, size 0x44, virtual false, abstract: false, final false
  inline bool IsElided();

  /// @brief Method LastIndexOf, addr 0x6a44600, size 0xcc, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(char16_t value, int32_t startIndex);

  /// @brief Method LineDownCharacterPosition, addr 0x6a43a70, size 0x80, virtual false, abstract: false, final false
  inline int32_t LineDownCharacterPosition(int32_t originalLogicalPos);

  /// @brief Method LineUpCharacterPosition, addr 0x6a43af0, size 0x80, virtual false, abstract: false, final false
  inline int32_t LineUpCharacterPosition(int32_t originalLogicalPos);

  static inline ::UnityEngine::TextCore::Text::TextHandle* New_ctor();

  /// @brief Method NextCodePointIndex, addr 0x6a440fc, size 0xd8, virtual false, abstract: false, final false
  inline int32_t NextCodePointIndex(int32_t currentIndex);

  /// @brief Method PrepareFontAsset, addr 0x6a43338, size 0x130, virtual false, abstract: false, final false
  inline bool PrepareFontAsset();

  /// @brief Method PreviousCodePointIndex, addr 0x6a44024, size 0xd8, virtual false, abstract: false, final false
  inline int32_t PreviousCodePointIndex(int32_t currentIndex);

  /// @brief Method RemoveTextInfoFromPermanentCache, addr 0x6a421b8, size 0xb0, virtual false, abstract: false, final false
  inline void RemoveTextInfoFromPermanentCache();

  /// @brief Method RemoveTextInfoFromTemporaryCache, addr 0x6a42144, size 0x74, virtual false, abstract: false, final false
  inline void RemoveTextInfoFromTemporaryCache();

  /// @brief Method SelectCurrentParagraph, addr 0x6a447b8, size 0xd8, virtual false, abstract: false, final false
  inline void SelectCurrentParagraph(::ByRef<int32_t> cursorIndex, ::ByRef<int32_t> selectIndex);

  /// @brief Method SelectCurrentWord, addr 0x6a446cc, size 0xec, virtual false, abstract: false, final false
  inline void SelectCurrentWord(int32_t index, ::ByRef<int32_t> cursorIndex, ::ByRef<int32_t> selectIndex);

  /// @brief Method SelectToEndOfParagraph, addr 0x6a44b00, size 0xd0, virtual false, abstract: false, final false
  inline void SelectToEndOfParagraph(::ByRef<int32_t> cursorIndex);

  /// @brief Method SelectToNextParagraph, addr 0x6a44960, size 0xd0, virtual false, abstract: false, final false
  inline void SelectToNextParagraph(::ByRef<int32_t> cursorIndex);

  /// @brief Method SelectToPreviousParagraph, addr 0x6a44890, size 0xd0, virtual false, abstract: false, final false
  inline void SelectToPreviousParagraph(::ByRef<int32_t> cursorIndex);

  /// @brief Method SelectToStartOfParagraph, addr 0x6a44a30, size 0xd0, virtual false, abstract: false, final false
  inline void SelectToStartOfParagraph(::ByRef<int32_t> cursorIndex);

  /// @brief Method SetDirty, addr 0x6a42f0c, size 0xc, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method Substring, addr 0x6a43fbc, size 0x68, virtual false, abstract: false, final false
  inline ::StringW Substring(int32_t startIndex, int32_t length);

  /// @brief Method Update, addr 0x6a4302c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* Update();

  /// @brief Method UpdateCurrentFrame, addr 0x6a42e84, size 0x88, virtual false, abstract: false, final false
  static inline void UpdateCurrentFrame();

  /// @brief Method UpdatePreferredSize, addr 0x6a43468, size 0x338, virtual false, abstract: false, final false
  inline void UpdatePreferredSize();

  /// @brief Method UpdatePreferredValues, addr 0x6a42fa0, size 0x8c, virtual false, abstract: false, final false
  inline void UpdatePreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);

  /// @brief Method UpdateWithHash, addr 0x6a430a0, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* UpdateWithHash(int32_t hashCode);

  constexpr bool const& __cordl_internal_get__IsCachedPermanent_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsCachedPermanent_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsCachedTemporary_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsCachedTemporary_k__BackingField();

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* const& __cordl_internal_get__TextInfoNode_k__BackingField() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>*& __cordl_internal_get__TextInfoNode_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__preferredSize_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__preferredSize_k__BackingField();

  constexpr bool const& __cordl_internal_get_isDirty() const;

  constexpr bool& __cordl_internal_get_isDirty();

  constexpr bool const& __cordl_internal_get_m_IsEllided() const;

  constexpr bool& __cordl_internal_get_m_IsEllided();

  constexpr bool const& __cordl_internal_get_m_IsPlaceholder() const;

  constexpr bool& __cordl_internal_get_m_IsPlaceholder();

  constexpr float_t const& __cordl_internal_get_m_LineHeightDefault() const;

  constexpr float_t& __cordl_internal_get_m_LineHeightDefault();

  constexpr int32_t const& __cordl_internal_get_m_PreviousGenerationSettingsHash() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousGenerationSettingsHash();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ScreenRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ScreenRect();

  constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings const& __cordl_internal_get_nativeSettings() const;

  constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings& __cordl_internal_get_nativeSettings();

  constexpr ::System::IntPtr const& __cordl_internal_get_textGenerationInfo() const;

  constexpr ::System::IntPtr& __cordl_internal_get_textGenerationInfo();

  constexpr void __cordl_internal_set__IsCachedPermanent_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsCachedTemporary_k__BackingField(bool value);

  constexpr void __cordl_internal_set__TextInfoNode_k__BackingField(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  constexpr void __cordl_internal_set__preferredSize_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_isDirty(bool value);

  constexpr void __cordl_internal_set_m_IsEllided(bool value);

  constexpr void __cordl_internal_set_m_IsPlaceholder(bool value);

  constexpr void __cordl_internal_set_m_LineHeightDefault(float_t value);

  constexpr void __cordl_internal_set_m_PreviousGenerationSettingsHash(int32_t value);

  constexpr void __cordl_internal_set_m_ScreenRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_nativeSettings(::UnityEngine::TextCore::NativeTextGenerationSettings value);

  constexpr void __cordl_internal_set_textGenerationInfo(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6a420a4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* getStaticF_m_ActiveFontFeatures();

  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*, ::Array<::UnityEngine::TextCore::Text::TextGenerator*>*> getStaticF_s_Generators();

  static inline ::UnityEngine::TextCore::Text::TextHandlePermanentCache* getStaticF_s_PermanentCache();

  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*, ::Array<::UnityEngine::TextCore::Text::TextGenerationSettings*>*> getStaticF_s_Settings();

  static inline ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* getStaticF_s_TemporaryCache();

  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*, ::Array<::UnityEngine::TextCore::Text::TextInfo*>*> getStaticF_s_TextInfosCommon();

  /// @brief Method get_IsCachedPermanent, addr 0x6a42c1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCachedPermanent();

  /// @brief Method get_IsCachedTemporary, addr 0x6a42c2c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCachedTemporary();

  /// @brief Method get_IsPlaceholder, addr 0x6a42f54, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPlaceholder();

  /// @brief Method get_TextInfoNode, addr 0x6a42c0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* get_TextInfoNode();

  /// @brief Method get_characterCount, addr 0x6a42c48, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_characterCount();

  /// @brief Method get_generator, addr 0x6a42ac4, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextGenerator* get_generator();

  /// @brief Method get_generators, addr 0x6a42730, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*, ::Array<::UnityEngine::TextCore::Text::TextGenerator*>*> get_generators();

  /// @brief Method get_preferredSize, addr 0x6a42bfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_preferredSize();

  /// @brief Method get_settings, addr 0x6a42b60, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* get_settings();

  /// @brief Method get_settingsArray, addr 0x6a425b4, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*, ::Array<::UnityEngine::TextCore::Text::TextGenerationSettings*>*> get_settingsArray();

  /// @brief Method get_textInfo, addr 0x6a42c90, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfo();

  /// @brief Method get_textInfoCommon, addr 0x6a42a28, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfoCommon();

  /// @brief Method get_textInfosCommon, addr 0x6a428ac, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*, ::Array<::UnityEngine::TextCore::Text::TextInfo*>*> get_textInfosCommon();

  /// @brief Method get_useAdvancedText, addr 0x6a42c3c, size 0xc, virtual false, abstract: false, final false
  inline bool get_useAdvancedText();

  static inline void setStaticF_m_ActiveFontFeatures(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* value);

  static inline void setStaticF_s_Generators(::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*, ::Array<::UnityEngine::TextCore::Text::TextGenerator*>*> value);

  static inline void setStaticF_s_PermanentCache(::UnityEngine::TextCore::Text::TextHandlePermanentCache* value);

  static inline void setStaticF_s_Settings(::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*, ::Array<::UnityEngine::TextCore::Text::TextGenerationSettings*>*> value);

  static inline void setStaticF_s_TemporaryCache(::UnityEngine::TextCore::Text::TextHandleTemporaryCache* value);

  static inline void setStaticF_s_TextInfosCommon(::ArrayW<::UnityEngine::TextCore::Text::TextInfo*, ::Array<::UnityEngine::TextCore::Text::TextInfo*>*> value);

  /// @brief Method set_IsCachedPermanent, addr 0x6a42c24, size 0x8, virtual false, abstract: false, final false
  inline void set_IsCachedPermanent(bool value);

  /// @brief Method set_IsCachedTemporary, addr 0x6a42c34, size 0x8, virtual false, abstract: false, final false
  inline void set_IsCachedTemporary(bool value);

  /// @brief Method set_TextInfoNode, addr 0x6a42c14, size 0x8, virtual false, abstract: false, final false
  inline void set_TextInfoNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  /// @brief Method set_preferredSize, addr 0x6a42c04, size 0x8, virtual false, abstract: false, final false
  inline void set_preferredSize(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextHandle(TextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextHandle(TextHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17241 };

  /// @brief Field nativeSettings, offset: 0x10, size: 0x60, def value: None
  ::UnityEngine::TextCore::NativeTextGenerationSettings ___nativeSettings;

  /// @brief Field <preferredSize>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____preferredSize_k__BackingField;

  /// @brief Field m_ScreenRect, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_ScreenRect;

  /// @brief Field m_LineHeightDefault, offset: 0x88, size: 0x4, def value: None
  float_t ___m_LineHeightDefault;

  /// @brief Field m_IsPlaceholder, offset: 0x8c, size: 0x1, def value: None
  bool ___m_IsPlaceholder;

  /// @brief Field m_IsEllided, offset: 0x8d, size: 0x1, def value: None
  bool ___m_IsEllided;

  /// @brief Field textGenerationInfo, offset: 0x90, size: 0x8, def value: None
  ::System::IntPtr ___textGenerationInfo;

  /// @brief Field <TextInfoNode>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextInfo*>* ____TextInfoNode_k__BackingField;

  /// @brief Field <IsCachedPermanent>k__BackingField, offset: 0xa0, size: 0x1, def value: None
  bool ____IsCachedPermanent_k__BackingField;

  /// @brief Field <IsCachedTemporary>k__BackingField, offset: 0xa1, size: 0x1, def value: None
  bool ____IsCachedTemporary_k__BackingField;

  /// @brief Field m_PreviousGenerationSettingsHash, offset: 0xa4, size: 0x4, def value: None
  int32_t ___m_PreviousGenerationSettingsHash;

  /// @brief Field isDirty, offset: 0xa8, size: 0x1, def value: None
  bool ___isDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___nativeSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____preferredSize_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_ScreenRect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_LineHeightDefault) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_IsPlaceholder) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_IsEllided) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___textGenerationInfo) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____TextInfoNode_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____IsCachedPermanent_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ____IsCachedTemporary_k__BackingField) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_PreviousGenerationSettingsHash) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___isDirty) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextHandle, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextHandle*, "UnityEngine.TextCore.Text", "TextHandle");
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextHandle___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextHandle___c*, "UnityEngine.TextCore.Text", "TextHandle/<>c");
