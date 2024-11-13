#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EnumField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__EnumData_def.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumField)
namespace System {
class Enum;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class PointerEventBase_1;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename TBase> class UxmlTypeAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __EnumField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __EnumField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __EnumField____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EnumField;
}
namespace UnityEngine::UIElements {
class __EnumField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __EnumField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __EnumField____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EnumField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__EnumField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__EnumField__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__EnumField____c);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::EnumField::UxmlFactory*
class CORDL_TYPE __EnumField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::EnumField*, ::UnityEngine::UIElements::__EnumField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__EnumField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x492db68, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnumField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumField__UxmlFactory(__EnumField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumField__UxmlFactory(__EnumField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5544 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EnumField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::EnumField::UxmlTraits*
class CORDL_TYPE __EnumField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::System::Enum*> {
public:
  // Declarations
  /// @brief Field m_IncludeObsoleteValues, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IncludeObsoleteValues,
                      put = __cordl_internal_set_m_IncludeObsoleteValues)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IncludeObsoleteValues;

  /// @brief Field m_Type, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* m_Type;

  /// @brief Field m_Value, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Value;

  /// @brief Method Init, addr 0x492dbb0, size 0x210, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__EnumField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IncludeObsoleteValues();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_IncludeObsoleteValues() const;

  constexpr ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*& __cordl_internal_get_m_Type();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*> const& __cordl_internal_get_m_Type() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Value();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Value() const;

  constexpr void __cordl_internal_set_m_IncludeObsoleteValues(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* value);

  constexpr void __cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x492ddc0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnumField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumField__UxmlTraits(__EnumField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumField__UxmlTraits(__EnumField__UxmlTraits const&) = delete;

  /// @brief Field m_Type, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* ___m_Type;

  /// @brief Field m_Value, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Value;

  /// @brief Field m_IncludeObsoleteValues, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IncludeObsoleteValues;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EnumField__UxmlTraits, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EnumField__UxmlTraits, ___m_Type) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EnumField__UxmlTraits, ___m_Value) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EnumField__UxmlTraits, ___m_IncludeObsoleteValues) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::EnumField::<>c*
class CORDL_TYPE __EnumField____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__EnumField____c* __9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* __9__22_0;

  static inline ::UnityEngine::UIElements::__EnumField____c* New_ctor();

  /// @brief Method <.ctor>b__22_0, addr 0x492deb0, size 0x5c, virtual false, abstract: false, final false
  inline void __ctor_b__22_0(::UnityEngine::UIElements::MouseDownEvent* e);

  /// @brief Method .ctor, addr 0x492dea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__EnumField____c* getStaticF___9();

  static inline ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* getStaticF___9__22_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__EnumField____c* value);

  static inline void setStaticF___9__22_0(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumField____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnumField____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumField____c(__EnumField____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumField____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumField____c(__EnumField____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EnumField____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::EnumField
// SizeInfo { instance_size: 1192, native_size: -1, calculated_instance_size: 1192, calculated_native_size: 1192, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::EnumField*
class CORDL_TYPE EnumField : public ::UnityEngine::UIElements::BaseField_1<::System::Enum*> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__EnumField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__EnumField__UxmlTraits;

  using __c = ::UnityEngine::UIElements::__EnumField____c;

  /// @brief Field arrowUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_arrowUssClassName, put = setStaticF_arrowUssClassName)) ::StringW arrowUssClassName;

  /// @brief Field createMenuCallback, offset 0x4a0, size 0x8
  __declspec(property(get = __cordl_internal_get_createMenuCallback, put = __cordl_internal_set_createMenuCallback)) ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* createMenuCallback;

  __declspec(property(get = get_includeObsoleteValues)) bool includeObsoleteValues;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_ArrowElement, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArrowElement, put = __cordl_internal_set_m_ArrowElement)) ::UnityEngine::UIElements::VisualElement* m_ArrowElement;

  /// @brief Field m_EnumData, offset 0x460, size 0x40
  __declspec(property(get = __cordl_internal_get_m_EnumData, put = __cordl_internal_set_m_EnumData)) ::UnityEngine::EnumData m_EnumData;

  /// @brief Field m_EnumType, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumType, put = __cordl_internal_set_m_EnumType)) ::System::Type* m_EnumType;

  /// @brief Field m_IncludeObsoleteValues, offset 0x448, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IncludeObsoleteValues, put = __cordl_internal_set_m_IncludeObsoleteValues)) bool m_IncludeObsoleteValues;

  /// @brief Field m_TextElement, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName)) ::StringW textUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ChangeValueFromMenu, addr 0x492d86c, size 0x8c, virtual false, abstract: false, final false
  inline void ChangeValueFromMenu(::System::Object* menuItem);

  /// @brief Method ContainsPointer, addr 0x492d190, size 0x84, virtual false, abstract: false, final false
  inline bool ContainsPointer(int32_t pointerId);

  /// @brief Method Init, addr 0x492c9dc, size 0x8, virtual false, abstract: false, final false
  inline void Init(::bs_hook::EnumPtr defaultValue);

  /// @brief Method Init, addr 0x492cd38, size 0x104, virtual false, abstract: false, final false
  inline void Init(::bs_hook::EnumPtr defaultValue, bool includeObsoleteValues);

  /// @brief Method Initialize, addr 0x492c858, size 0x184, virtual false, abstract: false, final false
  inline void Initialize(::bs_hook::EnumPtr defaultValue);

  static inline ::UnityEngine::UIElements::EnumField* New_ctor();

  static inline ::UnityEngine::UIElements::EnumField* New_ctor(::StringW label, ::bs_hook::EnumPtr defaultValue);

  /// @brief Method OnNavigationSubmit, addr 0x492d214, size 0x24, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x492d0ac, size 0x58, virtual false, abstract: false, final false
  inline void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMoveEvent, addr 0x492d104, size 0x8c, virtual false, abstract: false, final false
  inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method PopulateDataFromType, addr 0x492ce3c, size 0xa4, virtual false, abstract: false, final false
  inline void PopulateDataFromType(::System::Type* enumType);

  /// @brief Method ProcessPointerDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ProcessPointerDown(::UnityEngine::UIElements::PointerEventBase_1<T>* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x492cfcc, size 0xe0, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::bs_hook::EnumPtr newValue);

  /// @brief Method ShowMenu, addr 0x492d238, size 0x34c, virtual false, abstract: false, final false
  inline void ShowMenu();

  /// @brief Method UpdateMixedValueContent, addr 0x492d8f8, size 0x134, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  /// @brief Method UpdateValueLabel, addr 0x492cee0, size 0xec, virtual false, abstract: false, final false
  inline void UpdateValueLabel(::bs_hook::EnumPtr value);

  /// @brief Method <ShowMenu>b__33_0, addr 0x492db64, size 0x4, virtual false, abstract: false, final false
  inline void _ShowMenu_b__33_0(::System::Object* contentView);

  constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*& __cordl_internal_get_createMenuCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*> const& __cordl_internal_get_createMenuCallback() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ArrowElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_ArrowElement() const;

  constexpr ::UnityEngine::EnumData const& __cordl_internal_get_m_EnumData() const;

  constexpr ::UnityEngine::EnumData& __cordl_internal_get_m_EnumData();

  constexpr ::System::Type*& __cordl_internal_get_m_EnumType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_EnumType() const;

  constexpr bool const& __cordl_internal_get_m_IncludeObsoleteValues() const;

  constexpr bool& __cordl_internal_get_m_IncludeObsoleteValues();

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextElement*> const& __cordl_internal_get_m_TextElement() const;

  constexpr void __cordl_internal_set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value);

  constexpr void __cordl_internal_set_m_ArrowElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_EnumData(::UnityEngine::EnumData value);

  constexpr void __cordl_internal_set_m_EnumType(::System::Type* value);

  constexpr void __cordl_internal_set_m_IncludeObsoleteValues(bool value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x492c9e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x492c9f0, size 0x348, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::bs_hook::EnumPtr defaultValue);

  static inline ::StringW getStaticF_arrowUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_includeObsoleteValues, addr 0x492c850, size 0x8, virtual false, abstract: false, final false
  inline bool get_includeObsoleteValues();

  static inline void setStaticF_arrowUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumField(EnumField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumField(EnumField const&) = delete;

  /// @brief Field m_EnumType, offset: 0x440, size: 0x8, def value: None
  ::System::Type* ___m_EnumType;

  /// @brief Field m_IncludeObsoleteValues, offset: 0x448, size: 0x1, def value: None
  bool ___m_IncludeObsoleteValues;

  /// @brief Field m_TextElement, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_ArrowElement, offset: 0x458, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ArrowElement;

  /// @brief Field m_EnumData, offset: 0x460, size: 0x40, def value: None
  ::UnityEngine::EnumData ___m_EnumData;

  /// @brief Field createMenuCallback, offset: 0x4a0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* ___createMenuCallback;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EnumField, 0x4a8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_EnumType) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_IncludeObsoleteValues) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_TextElement) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_ArrowElement) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_EnumData) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___createMenuCallback) == 0x4a0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EnumField*, "UnityEngine.UIElements", "EnumField");
NEED_NO_BOX(::UnityEngine::UIElements::__EnumField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EnumField__UxmlFactory*, "UnityEngine.UIElements", "EnumField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__EnumField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EnumField__UxmlTraits*, "UnityEngine.UIElements", "EnumField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__EnumField____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EnumField____c*, "UnityEngine.UIElements", "EnumField/<>c");
