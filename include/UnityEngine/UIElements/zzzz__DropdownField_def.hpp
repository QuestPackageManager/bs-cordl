#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownField)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __DropdownField__PopupTextElement;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __DropdownField____c__DisplayClass38_0;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownField;
}
namespace UnityEngine::UIElements {
class __DropdownField__PopupTextElement;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __DropdownField____c__DisplayClass38_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__PopupTextElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DropdownField::UxmlFactory*
class CORDL_TYPE __DropdownField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::DropdownField*, ::UnityEngine::UIElements::__DropdownField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__DropdownField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x3375a00, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DropdownField__UxmlFactory(__DropdownField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DropdownField__UxmlFactory(__DropdownField__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DropdownField::UxmlTraits*
class CORDL_TYPE __DropdownField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::StringW> {
public:
  // Declarations
  /// @brief Field m_Choices, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Choices;

  /// @brief Field m_Index, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index))::UnityEngine::UIElements::UxmlIntAttributeDescription* m_Index;

  /// @brief Method Init, addr 0x3375a48, size 0x17c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__DropdownField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Choices();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Choices() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_Index();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_Index() const;

  constexpr void __cordl_internal_set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Index(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  /// @brief Method .ctor, addr 0x3375bc4, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DropdownField__UxmlTraits(__DropdownField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DropdownField__UxmlTraits(__DropdownField__UxmlTraits const&) = delete;

  /// @brief Field m_Index, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_Index;

  /// @brief Field m_Choices, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Choices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownField__UxmlTraits, ___m_Index) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownField__UxmlTraits, ___m_Choices) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::PopupTextElement
// SizeInfo { instance_size: 1144, native_size: -1, calculated_instance_size: 1144, calculated_native_size: 1140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DropdownField::PopupTextElement*
class CORDL_TYPE __DropdownField__PopupTextElement : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  /// @brief Method DoMeasure, addr 0x3375cb0, size 0xa4, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::__DropdownField__PopupTextElement* New_ctor();

  /// @brief Method .ctor, addr 0x3374c18, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownField__PopupTextElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__PopupTextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DropdownField__PopupTextElement(__DropdownField__PopupTextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__PopupTextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DropdownField__PopupTextElement(__DropdownField__PopupTextElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__PopupTextElement, 0x478>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c__DisplayClass38_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DropdownField::<>c__DisplayClass38_0*
class CORDL_TYPE __DropdownField____c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::UIElements::DropdownField* __4__this;

  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item))::StringW item;

  static inline ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0* New_ctor();

  /// @brief Method <AddMenuItems>b__0, addr 0x3375d54, size 0x2c, virtual false, abstract: false, final false
  inline void _AddMenuItems_b__0();

  constexpr ::UnityEngine::UIElements::DropdownField*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownField*> const& __cordl_internal_get___4__this() const;

  constexpr ::StringW const& __cordl_internal_get_item() const;

  constexpr ::StringW& __cordl_internal_get_item();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::DropdownField* value);

  constexpr void __cordl_internal_set_item(::StringW value);

  /// @brief Method .ctor, addr 0x3374f78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownField____c__DisplayClass38_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DropdownField____c__DisplayClass38_0(__DropdownField____c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DropdownField____c__DisplayClass38_0(__DropdownField____c__DisplayClass38_0 const&) = delete;

  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  ::StringW ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownField* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0, ___item) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DropdownField
// SizeInfo { instance_size: 1088, native_size: -1, calculated_instance_size: 1088, calculated_native_size: 1084, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DropdownField*
class CORDL_TYPE DropdownField : public ::UnityEngine::UIElements::BaseField_1<::StringW> {
public:
  // Declarations
  using PopupTextElement = ::UnityEngine::UIElements::__DropdownField__PopupTextElement;

  using UxmlFactory = ::UnityEngine::UIElements::__DropdownField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__DropdownField__UxmlTraits;

  using __c__DisplayClass38_0 = ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0;

  /// @brief Field arrowUssClassNameBasePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_arrowUssClassNameBasePopupField, put = setStaticF_arrowUssClassNameBasePopupField))::StringW arrowUssClassNameBasePopupField;

  __declspec(property(put = set_choices))::System::Collections::Generic::List_1<::StringW>* choices;

  /// @brief Field createMenuCallback, offset 0x430, size 0x8
  __declspec(property(get = __cordl_internal_get_createMenuCallback, put = __cordl_internal_set_createMenuCallback))::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* createMenuCallback;

  __declspec(property(put = set_index)) int32_t index;

  /// @brief Field inputUssClassNameBasePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassNameBasePopupField, put = setStaticF_inputUssClassNameBasePopupField))::StringW inputUssClassNameBasePopupField;

  /// @brief Field inputUssClassNamePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassNamePopupField, put = setStaticF_inputUssClassNamePopupField))::StringW inputUssClassNamePopupField;

  /// @brief Field labelUssClassNameBasePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassNameBasePopupField, put = setStaticF_labelUssClassNameBasePopupField))::StringW labelUssClassNameBasePopupField;

  /// @brief Field labelUssClassNamePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassNamePopupField, put = setStaticF_labelUssClassNamePopupField))::StringW labelUssClassNamePopupField;

  /// @brief Field m_ArrowElement, offset 0x418, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArrowElement, put = __cordl_internal_set_m_ArrowElement))::UnityEngine::UIElements::VisualElement* m_ArrowElement;

  /// @brief Field m_Choices, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices))::System::Collections::Generic::List_1<::StringW>* m_Choices;

  /// @brief Field m_FormatListItemCallback, offset 0x428, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FormatListItemCallback, put = __cordl_internal_set_m_FormatListItemCallback))::System::Func_2<::StringW, ::StringW>* m_FormatListItemCallback;

  /// @brief Field m_FormatSelectedValueCallback, offset 0x420, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FormatSelectedValueCallback,
                      put = __cordl_internal_set_m_FormatSelectedValueCallback))::System::Func_2<::StringW, ::StringW>* m_FormatSelectedValueCallback;

  /// @brief Field m_Index, offset 0x438, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_TextElement, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement))::UnityEngine::UIElements::TextElement* m_TextElement;

  __declspec(property(get = get_textElement))::UnityEngine::UIElements::TextElement* textElement;

  /// @brief Field textUssClassNameBasePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textUssClassNameBasePopupField, put = setStaticF_textUssClassNameBasePopupField))::StringW textUssClassNameBasePopupField;

  /// @brief Field ussClassNameBasePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassNameBasePopupField, put = setStaticF_ussClassNameBasePopupField))::StringW ussClassNameBasePopupField;

  /// @brief Field ussClassNamePopupField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassNamePopupField, put = setStaticF_ussClassNamePopupField))::StringW ussClassNamePopupField;

  __declspec(property(get = get_value, put = set_value))::StringW value;

  /// @brief Method AddMenuItems, addr 0x3374c70, size 0x308, virtual false, abstract: false, final false
  inline void AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu);

  /// @brief Method ChangeValueFromMenu, addr 0x3374f80, size 0x10, virtual false, abstract: false, final false
  inline void ChangeValueFromMenu(::StringW menuItem);

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x33751dc, size 0x180, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method GetListItemToDisplay, addr 0x3374810, size 0xac, virtual false, abstract: false, final false
  inline ::StringW GetListItemToDisplay(::StringW value);

  /// @brief Method GetValueToDisplay, addr 0x3374784, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetValueToDisplay();

  static inline ::UnityEngine::UIElements::DropdownField* New_ctor();

  static inline ::UnityEngine::UIElements::DropdownField* New_ctor(::StringW label);

  /// @brief Method SetValueWithoutNotify, addr 0x33750cc, size 0x110, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::StringW newValue);

  /// @brief Method ShowMenu, addr 0x337535c, size 0x180, virtual false, abstract: false, final false
  inline void ShowMenu();

  /// @brief Method UpdateMixedValueContent, addr 0x33757b0, size 0xc0, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*& __cordl_internal_get_createMenuCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*> const& __cordl_internal_get_createMenuCallback() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ArrowElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_ArrowElement() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Choices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Choices() const;

  constexpr ::System::Func_2<::StringW, ::StringW>*& __cordl_internal_get_m_FormatListItemCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::StringW>*> const& __cordl_internal_get_m_FormatListItemCallback() const;

  constexpr ::System::Func_2<::StringW, ::StringW>*& __cordl_internal_get_m_FormatSelectedValueCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::StringW>*> const& __cordl_internal_get_m_FormatSelectedValueCallback() const;

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextElement*> const& __cordl_internal_get_m_TextElement() const;

  constexpr void __cordl_internal_set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value);

  constexpr void __cordl_internal_set_m_ArrowElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Choices(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_FormatListItemCallback(::System::Func_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_m_FormatSelectedValueCallback(::System::Func_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x3374958, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3374960, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_arrowUssClassNameBasePopupField();

  static inline ::StringW getStaticF_inputUssClassNameBasePopupField();

  static inline ::StringW getStaticF_inputUssClassNamePopupField();

  static inline ::StringW getStaticF_labelUssClassNameBasePopupField();

  static inline ::StringW getStaticF_labelUssClassNamePopupField();

  static inline ::StringW getStaticF_textUssClassNameBasePopupField();

  static inline ::StringW getStaticF_ussClassNameBasePopupField();

  static inline ::StringW getStaticF_ussClassNamePopupField();

  /// @brief Method get_textElement, addr 0x337477c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextElement* get_textElement();

  /// @brief Method get_value, addr 0x3375000, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_value();

  static inline void setStaticF_arrowUssClassNameBasePopupField(::StringW value);

  static inline void setStaticF_inputUssClassNameBasePopupField(::StringW value);

  static inline void setStaticF_inputUssClassNamePopupField(::StringW value);

  static inline void setStaticF_labelUssClassNameBasePopupField(::StringW value);

  static inline void setStaticF_labelUssClassNamePopupField(::StringW value);

  static inline void setStaticF_textUssClassNameBasePopupField(::StringW value);

  static inline void setStaticF_ussClassNameBasePopupField(::StringW value);

  static inline void setStaticF_ussClassNamePopupField(::StringW value);

  /// @brief Method set_choices, addr 0x3374f90, size 0x70, virtual true, abstract: false, final false
  inline void set_choices(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_index, addr 0x33748bc, size 0x9c, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  /// @brief Method set_value, addr 0x3375048, size 0x84, virtual true, abstract: false, final false
  inline void set_value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownField(DropdownField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownField(DropdownField const&) = delete;

  /// @brief Field m_Choices, offset: 0x408, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Choices;

  /// @brief Field m_TextElement, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_ArrowElement, offset: 0x418, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ArrowElement;

  /// @brief Field m_FormatSelectedValueCallback, offset: 0x420, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::StringW>* ___m_FormatSelectedValueCallback;

  /// @brief Field m_FormatListItemCallback, offset: 0x428, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::StringW>* ___m_FormatListItemCallback;

  /// @brief Field createMenuCallback, offset: 0x430, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* ___createMenuCallback;

  /// @brief Field m_Index, offset: 0x438, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownField, 0x440>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownField, ___m_Choices) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownField, ___m_TextElement) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownField, ___m_ArrowElement) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownField, ___m_FormatSelectedValueCallback) == 0x420, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownField, ___m_FormatListItemCallback) == 0x428, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownField, ___createMenuCallback) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownField, ___m_Index) == 0x438, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownField*, "UnityEngine.UIElements", "DropdownField");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__PopupTextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__PopupTextElement*, "UnityEngine.UIElements", "DropdownField/PopupTextElement");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__UxmlFactory*, "UnityEngine.UIElements", "DropdownField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__UxmlTraits*, "UnityEngine.UIElements", "DropdownField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0*, "UnityEngine.UIElements", "DropdownField/<>c__DisplayClass38_0");
