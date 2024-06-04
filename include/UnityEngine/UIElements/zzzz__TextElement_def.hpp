#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextElement)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class ITextElement;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __TextElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TextElement__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class __TextElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TextElement__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextElement__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextElement__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TextElement::UxmlFactory*
class CORDL_TYPE __TextElement__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextElement*, ::UnityEngine::UIElements::__TextElement__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TextElement__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x353eb28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextElement__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextElement__UxmlFactory(__TextElement__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextElement__UxmlFactory(__TextElement__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextElement__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TextElement::UxmlTraits*
class CORDL_TYPE __TextElement__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_DisplayTooltipWhenElided, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayTooltipWhenElided,
                      put = __cordl_internal_set_m_DisplayTooltipWhenElided))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_DisplayTooltipWhenElided;

  /// @brief Field m_EnableRichText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnableRichText, put = __cordl_internal_set_m_EnableRichText))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_EnableRichText;

  /// @brief Field m_Text, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x353eb70, size 0x18c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TextElement__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_DisplayTooltipWhenElided();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_DisplayTooltipWhenElided() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_EnableRichText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_EnableRichText() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_DisplayTooltipWhenElided(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_EnableRichText(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x353ecfc, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextElement__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextElement__UxmlTraits(__TextElement__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextElement__UxmlTraits(__TextElement__UxmlTraits const&) = delete;

  /// @brief Field m_Text, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_EnableRichText, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_EnableRichText;

  /// @brief Field m_DisplayTooltipWhenElided, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_DisplayTooltipWhenElided;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextElement__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TextElement__UxmlTraits, ___m_Text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TextElement__UxmlTraits, ___m_EnableRichText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TextElement__UxmlTraits, ___m_DisplayTooltipWhenElided) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextElement
// SizeInfo { instance_size: 1144, native_size: -1, calculated_instance_size: 1144, calculated_native_size: 1140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TextElement*
class CORDL_TYPE TextElement : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__TextElement__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__TextElement__UxmlTraits;

  __declspec(property(get = UnityEngine_UIElements_INotifyValueChanged_System_String__get_value,
                      put = UnityEngine_UIElements_INotifyValueChanged_System_String__set_value))::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__value;

  /// @brief Field <isElided>k__BackingField, offset 0x3d2, size 0x1
  __declspec(property(get = __cordl_internal_get__isElided_k__BackingField, put = __cordl_internal_set__isElided_k__BackingField)) bool _isElided_k__BackingField;

  __declspec(property(get = get_displayTooltipWhenElided, put = set_displayTooltipWhenElided)) bool displayTooltipWhenElided;

  __declspec(property(get = get_enableRichText, put = set_enableRichText)) bool enableRichText;

  __declspec(property(get = get_isElided, put = set_isElided)) bool isElided;

  /// @brief Field k_EllipsisText, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_EllipsisText, put = setStaticF_k_EllipsisText))::StringW k_EllipsisText;

  /// @brief Field m_DisplayTooltipWhenElided, offset 0x3d1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisplayTooltipWhenElided, put = __cordl_internal_set_m_DisplayTooltipWhenElided)) bool m_DisplayTooltipWhenElided;

  /// @brief Field m_EnableRichText, offset 0x3d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRichText, put = __cordl_internal_set_m_EnableRichText)) bool m_EnableRichText;

  /// @brief Field m_PreviousTextParamsHashCode, offset 0x470, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousTextParamsHashCode, put = __cordl_internal_set_m_PreviousTextParamsHashCode)) int32_t m_PreviousTextParamsHashCode;

  /// @brief Field m_Text, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::StringW m_Text;

  /// @brief Field m_TextHandle, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextHandle, put = __cordl_internal_set_m_TextHandle))::UnityEngine::UIElements::ITextHandle* m_TextHandle;

  /// @brief Field m_TextParams, offset 0x3d8, size 0x98
  __declspec(property(get = __cordl_internal_get_m_TextParams, put = __cordl_internal_set_m_TextParams))::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams m_TextParams;

  /// @brief Field m_UpdateTextParams, offset 0x3d4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateTextParams, put = __cordl_internal_set_m_UpdateTextParams)) bool m_UpdateTextParams;

  /// @brief Field m_WasElided, offset 0x3d3, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasElided, put = __cordl_internal_set_m_WasElided)) bool m_WasElided;

  /// @brief Field maxTextVertices, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maxTextVertices, put = setStaticF_maxTextVertices)) int32_t maxTextVertices;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_textHandle, put = set_textHandle))::UnityEngine::UIElements::ITextHandle* textHandle;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextElement"
  constexpr operator ::UnityEngine::UIElements::ITextElement*() noexcept;

  /// @brief Method DoMeasure, addr 0x353e67c, size 0x60, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  /// @brief Method ElideText, addr 0x353e1a4, size 0x4cc, virtual false, abstract: false, final false
  inline ::StringW ElideText(::StringW drawText, ::StringW ellipsisText, float_t width, ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition);

  /// @brief Method HandleEvent, addr 0x353da38, size 0x17c, virtual true, abstract: false, final false
  inline void HandleEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method MeasureTextSize, addr 0x353e670, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 MeasureTextSize(::StringW textToMeasure, float_t width, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t height,
                                                ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::TextElement* New_ctor();

  /// @brief Method OnGenerateVisualContent, addr 0x353def0, size 0x120, virtual false, abstract: false, final false
  inline void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method OnGeometryChanged, addr 0x353dbb4, size 0x4, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method ShouldElide, addr 0x353e010, size 0x68, virtual false, abstract: false, final false
  inline bool ShouldElide();

  /// @brief Method TextLibraryCanElide, addr 0x353e078, size 0xc0, virtual false, abstract: false, final false
  inline bool TextLibraryCanElide();

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.SetValueWithoutNotify, addr 0x353e9fc, size 0x6c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__SetValueWithoutNotify(::StringW newValue);

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.get_value, addr 0x353e6dc, size 0x54, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__get_value();

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.set_value, addr 0x353e730, size 0x2cc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__set_value(::StringW value);

  /// @brief Method UpdateTooltip, addr 0x353e138, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateTooltip();

  /// @brief Method UpdateVisibleText, addr 0x353dbb8, size 0x17c, virtual false, abstract: false, final false
  inline void UpdateVisibleText();

  constexpr bool const& __cordl_internal_get__isElided_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isElided_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_DisplayTooltipWhenElided() const;

  constexpr bool& __cordl_internal_get_m_DisplayTooltipWhenElided();

  constexpr bool const& __cordl_internal_get_m_EnableRichText() const;

  constexpr bool& __cordl_internal_get_m_EnableRichText();

  constexpr int32_t const& __cordl_internal_get_m_PreviousTextParamsHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousTextParamsHashCode();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::UIElements::ITextHandle*& __cordl_internal_get_m_TextHandle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextHandle*> const& __cordl_internal_get_m_TextHandle() const;

  constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams const& __cordl_internal_get_m_TextParams() const;

  constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams& __cordl_internal_get_m_TextParams();

  constexpr bool const& __cordl_internal_get_m_UpdateTextParams() const;

  constexpr bool& __cordl_internal_get_m_UpdateTextParams();

  constexpr bool const& __cordl_internal_get_m_WasElided() const;

  constexpr bool& __cordl_internal_get_m_WasElided();

  constexpr void __cordl_internal_set__isElided_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_DisplayTooltipWhenElided(bool value);

  constexpr void __cordl_internal_set_m_EnableRichText(bool value);

  constexpr void __cordl_internal_set_m_PreviousTextParamsHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TextHandle(::UnityEngine::UIElements::ITextHandle* value);

  constexpr void __cordl_internal_set_m_TextParams(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams value);

  constexpr void __cordl_internal_set_m_UpdateTextParams(bool value);

  constexpr void __cordl_internal_set_m_WasElided(bool value);

  /// @brief Method .ctor, addr 0x353d870, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_k_EllipsisText();

  static inline int32_t getStaticF_maxTextVertices();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_displayTooltipWhenElided, addr 0x353de98, size 0x8, virtual false, abstract: false, final false
  inline bool get_displayTooltipWhenElided();

  /// @brief Method get_enableRichText, addr 0x353de70, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRichText();

  /// @brief Method get_isElided, addr 0x353dedc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isElided();

  /// @brief Method get_text, addr 0x353dd34, size 0x94, virtual true, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textHandle, addr 0x353da28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextHandle* get_textHandle();

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>* i___UnityEngine__UIElements__INotifyValueChanged_1___StringW_() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITextElement"
  constexpr ::UnityEngine::UIElements::ITextElement* i___UnityEngine__UIElements__ITextElement() noexcept;

  static inline void setStaticF_k_EllipsisText(::StringW value);

  static inline void setStaticF_maxTextVertices(int32_t value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_displayTooltipWhenElided, addr 0x353dea0, size 0x3c, virtual false, abstract: false, final false
  inline void set_displayTooltipWhenElided(bool value);

  /// @brief Method set_enableRichText, addr 0x353de78, size 0x20, virtual false, abstract: false, final false
  inline void set_enableRichText(bool value);

  /// @brief Method set_isElided, addr 0x353dee4, size 0xc, virtual false, abstract: false, final false
  inline void set_isElided(bool value);

  /// @brief Method set_text, addr 0x353ddc8, size 0xa8, virtual true, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_textHandle, addr 0x353da30, size 0x8, virtual false, abstract: false, final false
  inline void set_textHandle(::UnityEngine::UIElements::ITextHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextElement(TextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextElement(TextElement const&) = delete;

  /// @brief Field m_TextHandle, offset: 0x3c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ITextHandle* ___m_TextHandle;

  /// @brief Field m_Text, offset: 0x3c8, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_EnableRichText, offset: 0x3d0, size: 0x1, def value: None
  bool ___m_EnableRichText;

  /// @brief Field m_DisplayTooltipWhenElided, offset: 0x3d1, size: 0x1, def value: None
  bool ___m_DisplayTooltipWhenElided;

  /// @brief Field <isElided>k__BackingField, offset: 0x3d2, size: 0x1, def value: None
  bool ____isElided_k__BackingField;

  /// @brief Field m_WasElided, offset: 0x3d3, size: 0x1, def value: None
  bool ___m_WasElided;

  /// @brief Field m_UpdateTextParams, offset: 0x3d4, size: 0x1, def value: None
  bool ___m_UpdateTextParams;

  /// @brief Field m_TextParams, offset: 0x3d8, size: 0x98, def value: None
  ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams ___m_TextParams;

  /// @brief Field m_PreviousTextParamsHashCode, offset: 0x470, size: 0x4, def value: None
  int32_t ___m_PreviousTextParamsHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextElement, 0x478>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_TextHandle) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_Text) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_EnableRichText) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_DisplayTooltipWhenElided) == 0x3d1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____isElided_k__BackingField) == 0x3d2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_WasElided) == 0x3d3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_UpdateTextParams) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_TextParams) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_PreviousTextParamsHashCode) == 0x470, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement*, "UnityEngine.UIElements", "TextElement");
NEED_NO_BOX(::UnityEngine::UIElements::__TextElement__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextElement__UxmlFactory*, "UnityEngine.UIElements", "TextElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TextElement__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextElement__UxmlTraits*, "UnityEngine.UIElements", "TextElement/UxmlTraits");
