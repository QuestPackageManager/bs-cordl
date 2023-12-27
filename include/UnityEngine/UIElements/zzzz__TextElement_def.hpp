#pragma once
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
struct __VisualElement__MeasureMode;
}
namespace UnityEngine::UIElements {
class __TextElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ITextElement;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class __TextElement__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
template <typename T> class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
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
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6800))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6813))
// CS Name: ::TextElement::UxmlTraits*
class CORDL_TYPE __TextElement__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x78, size 0x8
  __declspec(property(get = __get_m_Text, put = __set_m_Text))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Field m_EnableRichText, offset 0x80, size 0x8
  __declspec(property(get = __get_m_EnableRichText, put = __set_m_EnableRichText))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_EnableRichText;

  /// @brief Field m_DisplayTooltipWhenElided, offset 0x88, size 0x8
  __declspec(property(get = __get_m_DisplayTooltipWhenElided, put = __set_m_DisplayTooltipWhenElided))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_DisplayTooltipWhenElided;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Text() const;

  constexpr void __set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __get_m_EnableRichText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __get_m_EnableRichText() const;

  constexpr void __set_m_EnableRichText(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __get_m_DisplayTooltipWhenElided();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __get_m_DisplayTooltipWhenElided() const;

  constexpr void __set_m_DisplayTooltipWhenElided(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method Init addr 0x2dc07d8 size 0x18c virtual true final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TextElement__UxmlTraits* New_ctor();

  /// @brief Method .ctor addr 0x2dc0964 size 0x120 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextElement__UxmlTraits(__TextElement__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextElement__UxmlTraits(__TextElement__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextElement__UxmlTraits();

public:
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

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextElement
// SizeInfo { instance_size: 1144, native_size: -1, calculated_instance_size: 1144, calculated_native_size: 1140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7335)), TypeDefinitionIndex(TypeDefinitionIndex(6801))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6814))
// CS Name: ::UnityEngine.UIElements::TextElement*
class CORDL_TYPE TextElement : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__TextElement__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__TextElement__UxmlFactory;

  /// @brief Field m_TextHandle, offset 0x3c0, size 0x8
  __declspec(property(get = __get_m_TextHandle, put = __set_m_TextHandle))::UnityEngine::UIElements::ITextHandle* m_TextHandle;

  /// @brief Field m_Text, offset 0x3c8, size 0x8
  __declspec(property(get = __get_m_Text, put = __set_m_Text))::StringW m_Text;

  /// @brief Field m_EnableRichText, offset 0x3d0, size 0x1
  __declspec(property(get = __get_m_EnableRichText, put = __set_m_EnableRichText)) bool m_EnableRichText;

  /// @brief Field m_DisplayTooltipWhenElided, offset 0x3d1, size 0x1
  __declspec(property(get = __get_m_DisplayTooltipWhenElided, put = __set_m_DisplayTooltipWhenElided)) bool m_DisplayTooltipWhenElided;

  /// @brief Field <isElided>k__BackingField, offset 0x3d2, size 0x1
  __declspec(property(get = __get__isElided_k__BackingField, put = __set__isElided_k__BackingField)) bool _isElided_k__BackingField;

  /// @brief Field m_WasElided, offset 0x3d3, size 0x1
  __declspec(property(get = __get_m_WasElided, put = __set_m_WasElided)) bool m_WasElided;

  /// @brief Field m_UpdateTextParams, offset 0x3d4, size 0x1
  __declspec(property(get = __get_m_UpdateTextParams, put = __set_m_UpdateTextParams)) bool m_UpdateTextParams;

  /// @brief Field m_TextParams, offset 0x3d8, size 0x98
  __declspec(property(get = __get_m_TextParams, put = __set_m_TextParams))::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams m_TextParams;

  /// @brief Field m_PreviousTextParamsHashCode, offset 0x470, size 0x4
  __declspec(property(get = __get_m_PreviousTextParamsHashCode, put = __set_m_PreviousTextParamsHashCode)) int32_t m_PreviousTextParamsHashCode;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field maxTextVertices, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maxTextVertices, put = setStaticF_maxTextVertices)) int32_t maxTextVertices;

  /// @brief Field k_EllipsisText, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_EllipsisText, put = setStaticF_k_EllipsisText))::StringW k_EllipsisText;

  __declspec(property(get = get_textHandle, put = set_textHandle))::UnityEngine::UIElements::ITextHandle* textHandle;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_enableRichText, put = set_enableRichText)) bool enableRichText;

  __declspec(property(get = get_displayTooltipWhenElided, put = set_displayTooltipWhenElided)) bool displayTooltipWhenElided;

  __declspec(property(get = get_isElided, put = set_isElided)) bool isElided;

  __declspec(property(get = UnityEngine_UIElements_INotifyValueChanged_System_String__get_value,
                      put = UnityEngine_UIElements_INotifyValueChanged_System_String__set_value))::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__value;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextElement"
  constexpr operator ::UnityEngine::UIElements::ITextElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>*() noexcept;

  constexpr ::UnityEngine::UIElements::ITextHandle*& __get_m_TextHandle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextHandle*> const& __get_m_TextHandle() const;

  constexpr void __set_m_TextHandle(::UnityEngine::UIElements::ITextHandle* value);

  constexpr ::StringW& __get_m_Text();

  constexpr ::StringW const& __get_m_Text() const;

  constexpr void __set_m_Text(::StringW value);

  constexpr bool& __get_m_EnableRichText();

  constexpr bool const& __get_m_EnableRichText() const;

  constexpr void __set_m_EnableRichText(bool value);

  constexpr bool& __get_m_DisplayTooltipWhenElided();

  constexpr bool const& __get_m_DisplayTooltipWhenElided() const;

  constexpr void __set_m_DisplayTooltipWhenElided(bool value);

  constexpr bool& __get__isElided_k__BackingField();

  constexpr bool const& __get__isElided_k__BackingField() const;

  constexpr void __set__isElided_k__BackingField(bool value);

  constexpr bool& __get_m_WasElided();

  constexpr bool const& __get_m_WasElided() const;

  constexpr void __set_m_WasElided(bool value);

  constexpr bool& __get_m_UpdateTextParams();

  constexpr bool const& __get_m_UpdateTextParams() const;

  constexpr void __set_m_UpdateTextParams(bool value);

  constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams& __get_m_TextParams();

  constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams const& __get_m_TextParams() const;

  constexpr void __set_m_TextParams(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams value);

  constexpr int32_t& __get_m_PreviousTextParamsHashCode();

  constexpr int32_t const& __get_m_PreviousTextParamsHashCode() const;

  constexpr void __set_m_PreviousTextParamsHashCode(int32_t value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_maxTextVertices(int32_t value);

  static inline int32_t getStaticF_maxTextVertices();

  static inline void setStaticF_k_EllipsisText(::StringW value);

  static inline ::StringW getStaticF_k_EllipsisText();

  static inline ::UnityEngine::UIElements::TextElement* New_ctor();

  /// @brief Method .ctor addr 0x2dbf4d8 size 0x1b8 virtual false final false
  inline void _ctor();

  /// @brief Method get_textHandle addr 0x2dbf690 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ITextHandle* get_textHandle();

  /// @brief Method set_textHandle addr 0x2dbf698 size 0x8 virtual false final false
  inline void set_textHandle(::UnityEngine::UIElements::ITextHandle* value);

  /// @brief Method HandleEvent addr 0x2dbf6a0 size 0x17c virtual true final false
  inline void HandleEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnGeometryChanged addr 0x2dbf81c size 0x4 virtual false final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method get_text addr 0x2dbf99c size 0x94 virtual true final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x2dbfa30 size 0xa8 virtual true final false
  inline void set_text(::StringW value);

  /// @brief Method get_enableRichText addr 0x2dbfad8 size 0x8 virtual false final false
  inline bool get_enableRichText();

  /// @brief Method set_enableRichText addr 0x2dbfae0 size 0x20 virtual false final false
  inline void set_enableRichText(bool value);

  /// @brief Method get_displayTooltipWhenElided addr 0x2dbfb00 size 0x8 virtual false final false
  inline bool get_displayTooltipWhenElided();

  /// @brief Method set_displayTooltipWhenElided addr 0x2dbfb08 size 0x3c virtual false final false
  inline void set_displayTooltipWhenElided(bool value);

  /// @brief Method get_isElided addr 0x2dbfb44 size 0x8 virtual false final false
  inline bool get_isElided();

  /// @brief Method set_isElided addr 0x2dbfb4c size 0xc virtual false final false
  inline void set_isElided(bool value);

  /// @brief Method OnGenerateVisualContent addr 0x2dbfb58 size 0x120 virtual false final false
  inline void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method ElideText addr 0x2dbfe0c size 0x4cc virtual false final false
  inline ::StringW ElideText(::StringW drawText, ::StringW ellipsisText, float_t width, ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition);

  /// @brief Method UpdateTooltip addr 0x2dbfda0 size 0x6c virtual false final false
  inline void UpdateTooltip();

  /// @brief Method UpdateVisibleText addr 0x2dbf820 size 0x17c virtual false final false
  inline void UpdateVisibleText();

  /// @brief Method ShouldElide addr 0x2dbfc78 size 0x68 virtual false final false
  inline bool ShouldElide();

  /// @brief Method TextLibraryCanElide addr 0x2dbfce0 size 0xc0 virtual false final false
  inline bool TextLibraryCanElide();

  /// @brief Method MeasureTextSize addr 0x2dc02d8 size 0xc virtual false final false
  inline ::UnityEngine::Vector2 MeasureTextSize(::StringW textToMeasure, float_t width, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t height,
                                                ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  /// @brief Method DoMeasure addr 0x2dc02e4 size 0x60 virtual true final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.get_value addr 0x2dc0344 size 0x54 virtual true final true
  inline ::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__get_value();

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.set_value addr 0x2dc0398 size 0x2cc virtual true final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__set_value(::StringW value);

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.SetValueWithoutNotify addr 0x2dc0664 size 0x6c virtual true final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__SetValueWithoutNotify(::StringW newValue);

  // Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextElement(TextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextElement(TextElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElement();

public:
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

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6814)), TypeDefinitionIndex(TypeDefinitionIndex(6997)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5279
// }), TypeDefinitionIndex(TypeDefinitionIndex(6813))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6812)) CS Name: ::TextElement::UxmlFactory*
class CORDL_TYPE __TextElement__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextElement*, ::UnityEngine::UIElements::__TextElement__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TextElement__UxmlFactory* New_ctor();

  /// @brief Method .ctor addr 0x2dc0790 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextElement__UxmlFactory(__TextElement__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextElement__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextElement__UxmlFactory(__TextElement__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextElement__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextElement__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement*, "UnityEngine.UIElements", "TextElement");
NEED_NO_BOX(::UnityEngine::UIElements::__TextElement__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextElement__UxmlFactory*, "UnityEngine.UIElements", "TextElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TextElement__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextElement__UxmlTraits*, "UnityEngine.UIElements", "TextElement/UxmlTraits");
