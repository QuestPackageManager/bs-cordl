#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UITKTextHandle)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine::TextCore {
struct NativeTextGenerationSettings;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagType;
}
namespace UnityEngine::UIElements {
class ATGTextEventHandler;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class TextEventHandler;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UITKTextHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UITKTextHandle);
// Dependencies UnityEngine.TextCore.Text.TextHandle, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UITKTextHandle
class CORDL_TYPE UITKTextHandle : public ::UnityEngine::TextCore::Text::TextHandle {
public:
  // Declarations
  __declspec(property(get = get_ATGMeasuredSizes, put = set_ATGMeasuredSizes)) ::UnityEngine::Vector2 ATGMeasuredSizes;

  __declspec(property(get = get_ATGRoundedSizes, put = set_ATGRoundedSizes)) ::UnityEngine::Vector2 ATGRoundedSizes;

  __declspec(property(get = get_IsPlaceholder)) bool IsPlaceholder;

  __declspec(property(get = get_Links)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* Links;

  __declspec(property(get = get_MeasuredSizes, put = set_MeasuredSizes)) ::UnityEngine::Vector2 MeasuredSizes;

  __declspec(property(get = get_RoundedSizes, put = set_RoundedSizes)) ::UnityEngine::Vector2 RoundedSizes;

  __declspec(property(get = get_TextLib)) Il2CppObject* TextLib;

  /// @brief Field <ATGMeasuredSizes>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__ATGMeasuredSizes_k__BackingField,
                      put = __cordl_internal_set__ATGMeasuredSizes_k__BackingField)) ::UnityEngine::Vector2 _ATGMeasuredSizes_k__BackingField;

  /// @brief Field <ATGRoundedSizes>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__ATGRoundedSizes_k__BackingField,
                      put = __cordl_internal_set__ATGRoundedSizes_k__BackingField)) ::UnityEngine::Vector2 _ATGRoundedSizes_k__BackingField;

  /// @brief Field <MeasuredSizes>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__MeasuredSizes_k__BackingField, put = __cordl_internal_set__MeasuredSizes_k__BackingField)) ::UnityEngine::Vector2 _MeasuredSizes_k__BackingField;

  /// @brief Field <RoundedSizes>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__RoundedSizes_k__BackingField, put = __cordl_internal_set__RoundedSizes_k__BackingField)) ::UnityEngine::Vector2 _RoundedSizes_k__BackingField;

  /// @brief Field k_MinPadding, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinPadding, put = setStaticF_k_MinPadding)) float_t k_MinPadding;

  /// @brief Field m_ATGTextEventHandler, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ATGTextEventHandler, put = __cordl_internal_set_m_ATGTextEventHandler)) ::UnityEngine::UIElements::ATGTextEventHandler* m_ATGTextEventHandler;

  /// @brief Field m_Links, offset 0xb8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Links,
      put = __cordl_internal_set_m_Links)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* m_Links;

  /// @brief Field m_TextElement, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  /// @brief Field m_TextEventHandler, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextEventHandler, put = __cordl_internal_set_m_TextEventHandler)) ::UnityEngine::UIElements::TextEventHandler* m_TextEventHandler;

  /// @brief Field s_TextLib, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TextLib, put = setStaticF_s_TextLib)) Il2CppObject* s_TextLib;

  /// @brief Field wasAdvancedTextEnabledForElement, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_wasAdvancedTextEnabledForElement, put = __cordl_internal_set_wasAdvancedTextEnabledForElement)) bool wasAdvancedTextEnabledForElement;

  /// @brief Method ATGFindIntersectingLink, addr 0x6ad4268, size 0x178, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW> ATGFindIntersectingLink(::UnityEngine::Vector2 point);

  /// @brief Method AddTextInfoToPermanentCache, addr 0x6ad7bc4, size 0x8c, virtual true, abstract: false, final false
  inline void AddTextInfoToPermanentCache();

  /// @brief Method ComputeNativeTextSize, addr 0x6ad566c, size 0x1ec, virtual false, abstract: false, final false
  inline void ComputeNativeTextSize(::ByRef<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width, float_t height);

  /// @brief Method ComputeSettingsAndUpdate, addr 0x6ad74bc, size 0x38, virtual false, abstract: false, final false
  inline void ComputeSettingsAndUpdate();

  /// @brief Method ComputeTextSize, addr 0x6ad72d8, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ComputeTextSize(::ByRef<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width, float_t height);

  /// @brief Method ConvertUssToNativeTextGenerationSettings, addr 0x6ad5858, size 0xb60, virtual false, abstract: false, final false
  inline bool ConvertUssToNativeTextGenerationSettings();

  /// @brief Method ConvertUssToTextGenerationSettings, addr 0x6ad7cd8, size 0x4c8, virtual true, abstract: false, final false
  inline bool ConvertUssToTextGenerationSettings();

  /// @brief Method GetICUAsset, addr 0x6ad6df4, size 0x214, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> GetICUAsset();

  /// @brief Method GetICUAssetStaticFalback, addr 0x6ad7008, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextAsset> GetICUAssetStaticFalback();

  /// @brief Method GetTextOverflowMode, addr 0x6ad7c50, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextOverflowMode GetTextOverflowMode();

  /// @brief Method GetVertexPadding, addr 0x6ad6b7c, size 0x1dc, virtual false, abstract: false, final false
  inline float_t GetVertexPadding(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method HandleATag, addr 0x6ad75bc, size 0x14, virtual false, abstract: false, final false
  inline void HandleATag();

  /// @brief Method HandleLinkAndATagCallbacks, addr 0x6ad75e4, size 0x14, virtual false, abstract: false, final false
  inline void HandleLinkAndATagCallbacks();

  /// @brief Method HandleLinkTag, addr 0x6ad75d0, size 0x14, virtual false, abstract: false, final false
  inline void HandleLinkTag();

  /// @brief Method IsAdvancedTextEnabledForElement, addr 0x6ad82c8, size 0x134, virtual true, abstract: false, final false
  inline bool IsAdvancedTextEnabledForElement();

  static inline ::UnityEngine::UIElements::UITKTextHandle* New_ctor(::UnityEngine::UIElements::TextElement* te);

  /// @brief Method TextLibraryCanElide, addr 0x6ad697c, size 0x2c, virtual false, abstract: false, final false
  inline bool TextLibraryCanElide();

  /// @brief Method UpdateATGTextEventHandler, addr 0x6ad65ec, size 0x70, virtual false, abstract: false, final false
  inline void UpdateATGTextEventHandler(::UnityEngine::TextCore::NativeTextGenerationSettings setting);

  /// @brief Method UpdateMesh, addr 0x6ad74f4, size 0xc8, virtual false, abstract: false, final false
  inline void UpdateMesh();

  /// @brief Method UpdateNative, addr 0x6ad63b8, size 0x234, virtual false, abstract: false, final false
  inline ::bs_hook::ValueTypeWrapper<8> UpdateNative(::ByRef<bool> success);

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__ATGMeasuredSizes_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__ATGMeasuredSizes_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__ATGRoundedSizes_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__ATGRoundedSizes_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__MeasuredSizes_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__MeasuredSizes_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__RoundedSizes_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__RoundedSizes_k__BackingField();

  constexpr ::UnityEngine::UIElements::ATGTextEventHandler* const& __cordl_internal_get_m_ATGTextEventHandler() const;

  constexpr ::UnityEngine::UIElements::ATGTextEventHandler*& __cordl_internal_get_m_ATGTextEventHandler();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* const& __cordl_internal_get_m_Links() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>*& __cordl_internal_get_m_Links();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr ::UnityEngine::UIElements::TextEventHandler* const& __cordl_internal_get_m_TextEventHandler() const;

  constexpr ::UnityEngine::UIElements::TextEventHandler*& __cordl_internal_get_m_TextEventHandler();

  constexpr bool const& __cordl_internal_get_wasAdvancedTextEnabledForElement() const;

  constexpr bool& __cordl_internal_get_wasAdvancedTextEnabledForElement();

  constexpr void __cordl_internal_set__ATGMeasuredSizes_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__ATGRoundedSizes_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__MeasuredSizes_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__RoundedSizes_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_ATGTextEventHandler(::UnityEngine::UIElements::ATGTextEventHandler* value);

  constexpr void __cordl_internal_set_m_Links(::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  constexpr void __cordl_internal_set_m_TextEventHandler(::UnityEngine::UIElements::TextEventHandler* value);

  constexpr void __cordl_internal_set_wasAdvancedTextEnabledForElement(bool value);

  /// @brief Method .ctor, addr 0x6ad71b4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* te);

  static inline float_t getStaticF_k_MinPadding();

  static inline Il2CppObject* getStaticF_s_TextLib();

  /// @brief Method get_ATGMeasuredSizes, addr 0x6ad72b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_ATGMeasuredSizes();

  /// @brief Method get_ATGRoundedSizes, addr 0x6ad72c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_ATGRoundedSizes();

  /// @brief Method get_IsPlaceholder, addr 0x6ad83fc, size 0x38, virtual true, abstract: false, final false
  inline bool get_IsPlaceholder();

  /// @brief Method get_Links, addr 0x6ad55ec, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* get_Links();

  /// @brief Method get_MeasuredSizes, addr 0x6ad7298, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_MeasuredSizes();

  /// @brief Method get_RoundedSizes, addr 0x6ad72a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_RoundedSizes();

  /// @brief Method get_TextLib, addr 0x6ad70c4, size 0xf0, virtual false, abstract: false, final false
  inline Il2CppObject* get_TextLib();

  /// @brief Method hasLinkAndHyperlink, addr 0x6ad665c, size 0x15c, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<bool, bool> hasLinkAndHyperlink();

  static inline void setStaticF_k_MinPadding(float_t value);

  static inline void setStaticF_s_TextLib(Il2CppObject* value);

  /// @brief Method set_ATGMeasuredSizes, addr 0x6ad72c0, size 0x8, virtual false, abstract: false, final false
  inline void set_ATGMeasuredSizes(::UnityEngine::Vector2 value);

  /// @brief Method set_ATGRoundedSizes, addr 0x6ad72d0, size 0x8, virtual false, abstract: false, final false
  inline void set_ATGRoundedSizes(::UnityEngine::Vector2 value);

  /// @brief Method set_MeasuredSizes, addr 0x6ad72a0, size 0x8, virtual false, abstract: false, final false
  inline void set_MeasuredSizes(::UnityEngine::Vector2 value);

  /// @brief Method set_RoundedSizes, addr 0x6ad72b0, size 0x8, virtual false, abstract: false, final false
  inline void set_RoundedSizes(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UITKTextHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UITKTextHandle(UITKTextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UITKTextHandle(UITKTextHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5089 };

  /// @brief Field m_ATGTextEventHandler, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ATGTextEventHandler* ___m_ATGTextEventHandler;

  /// @brief Field m_Links, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* ___m_Links;

  /// @brief Field <MeasuredSizes>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____MeasuredSizes_k__BackingField;

  /// @brief Field <RoundedSizes>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____RoundedSizes_k__BackingField;

  /// @brief Field <ATGMeasuredSizes>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____ATGMeasuredSizes_k__BackingField;

  /// @brief Field <ATGRoundedSizes>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____ATGRoundedSizes_k__BackingField;

  /// @brief Field m_TextEventHandler, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEventHandler* ___m_TextEventHandler;

  /// @brief Field m_TextElement, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field wasAdvancedTextEnabledForElement, offset: 0xf0, size: 0x1, def value: None
  bool ___wasAdvancedTextEnabledForElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_ATGTextEventHandler) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_Links) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____MeasuredSizes_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____RoundedSizes_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____ATGMeasuredSizes_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____ATGRoundedSizes_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_TextEventHandler) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_TextElement) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___wasAdvancedTextEnabledForElement) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UITKTextHandle, 0xf8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UITKTextHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextHandle*, "UnityEngine.UIElements", "UITKTextHandle");
