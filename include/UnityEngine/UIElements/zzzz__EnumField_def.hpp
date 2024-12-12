#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EnumField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__EnumData_def.hpp"
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
class EnumField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class EnumField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class EnumField___c;
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
// Forward declare root types
namespace UnityEngine::UIElements {
class EnumField;
}
namespace UnityEngine::UIElements {
class EnumField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class EnumField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class EnumField___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EnumField);
MARK_REF_PTR_T(::UnityEngine::UIElements::EnumField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::EnumField_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::EnumField___c);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EnumField/UxmlFactory
class CORDL_TYPE EnumField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::EnumField*, ::UnityEngine::UIElements::EnumField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::EnumField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4992318, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumField_UxmlFactory(EnumField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumField_UxmlFactory(EnumField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EnumField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EnumField/UxmlTraits
class CORDL_TYPE EnumField_UxmlTraits : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<::System::Enum*> {
public:
  // Declarations
  /// @brief Field m_IncludeObsoleteValues, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IncludeObsoleteValues,
                      put = __cordl_internal_set_m_IncludeObsoleteValues)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IncludeObsoleteValues;

  /// @brief Field m_Type, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* m_Type;

  /// @brief Field m_Value, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Value;

  /// @brief Method Init, addr 0x4992360, size 0x210, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::EnumField_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_IncludeObsoleteValues() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IncludeObsoleteValues();

  constexpr ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* const& __cordl_internal_get_m_Type() const;

  constexpr ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*& __cordl_internal_get_m_Type();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Value() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_IncludeObsoleteValues(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* value);

  constexpr void __cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4992570, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumField_UxmlTraits(EnumField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumField_UxmlTraits(EnumField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5569 };

  /// @brief Field m_Type, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* ___m_Type;

  /// @brief Field m_Value, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Value;

  /// @brief Field m_IncludeObsoleteValues, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IncludeObsoleteValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EnumField_UxmlTraits, ___m_Type) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField_UxmlTraits, ___m_Value) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField_UxmlTraits, ___m_IncludeObsoleteValues) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EnumField_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EnumField/<>c
class CORDL_TYPE EnumField___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::EnumField___c* __9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* __9__22_0;

  static inline ::UnityEngine::UIElements::EnumField___c* New_ctor();

  /// @brief Method <.ctor>b__22_0, addr 0x4992660, size 0x5c, virtual false, abstract: false, final false
  inline void __ctor_b__22_0(::UnityEngine::UIElements::MouseDownEvent* e);

  /// @brief Method .ctor, addr 0x4992658, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::EnumField___c* getStaticF___9();

  static inline ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* getStaticF___9__22_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::EnumField___c* value);

  static inline void setStaticF___9__22_0(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumField___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumField___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumField___c(EnumField___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumField___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumField___c(EnumField___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EnumField___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.EnumData, UnityEngine.UIElements.BaseField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EnumField
class CORDL_TYPE EnumField : public ::UnityEngine::UIElements::BaseField_1<::System::Enum*> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::EnumField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::EnumField_UxmlTraits;

  using __c = ::UnityEngine::UIElements::EnumField___c;

  /// @brief Field arrowUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arrowUssClassName, put = setStaticF_arrowUssClassName)) ::StringW arrowUssClassName;

  /// @brief Field createMenuCallback, offset 0x4a0, size 0x8
  __declspec(property(get = __cordl_internal_get_createMenuCallback, put = __cordl_internal_set_createMenuCallback)) ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* createMenuCallback;

  __declspec(property(get = get_includeObsoleteValues)) bool includeObsoleteValues;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

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
  __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName)) ::StringW textUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ChangeValueFromMenu, addr 0x499201c, size 0x8c, virtual false, abstract: false, final false
  inline void ChangeValueFromMenu(::System::Object* menuItem);

  /// @brief Method ContainsPointer, addr 0x4991940, size 0x84, virtual false, abstract: false, final false
  inline bool ContainsPointer(int32_t pointerId);

  /// @brief Method Init, addr 0x499118c, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::Enum* defaultValue);

  /// @brief Method Init, addr 0x49914e8, size 0x104, virtual false, abstract: false, final false
  inline void Init(::System::Enum* defaultValue, bool includeObsoleteValues);

  /// @brief Method Initialize, addr 0x4991008, size 0x184, virtual false, abstract: false, final false
  inline void Initialize(::System::Enum* defaultValue);

  static inline ::UnityEngine::UIElements::EnumField* New_ctor();

  static inline ::UnityEngine::UIElements::EnumField* New_ctor(::StringW label, ::System::Enum* defaultValue);

  /// @brief Method OnNavigationSubmit, addr 0x49919c4, size 0x24, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x499185c, size 0x58, virtual false, abstract: false, final false
  inline void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMoveEvent, addr 0x49918b4, size 0x8c, virtual false, abstract: false, final false
  inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method PopulateDataFromType, addr 0x49915ec, size 0xa4, virtual false, abstract: false, final false
  inline void PopulateDataFromType(::System::Type* enumType);

  /// @brief Method ProcessPointerDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ProcessPointerDown(::UnityEngine::UIElements::PointerEventBase_1<T>* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x499177c, size 0xe0, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::System::Enum* newValue);

  /// @brief Method ShowMenu, addr 0x49919e8, size 0x34c, virtual false, abstract: false, final false
  inline void ShowMenu();

  /// @brief Method UpdateMixedValueContent, addr 0x49920a8, size 0x134, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  /// @brief Method UpdateValueLabel, addr 0x4991690, size 0xec, virtual false, abstract: false, final false
  inline void UpdateValueLabel(::System::Enum* value);

  /// @brief Method <ShowMenu>b__33_0, addr 0x4992314, size 0x4, virtual false, abstract: false, final false
  inline void _ShowMenu_b__33_0(::System::Object* contentView);

  constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* const& __cordl_internal_get_createMenuCallback() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*& __cordl_internal_get_createMenuCallback();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ArrowElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ArrowElement();

  constexpr ::UnityEngine::EnumData const& __cordl_internal_get_m_EnumData() const;

  constexpr ::UnityEngine::EnumData& __cordl_internal_get_m_EnumData();

  constexpr ::System::Type* const& __cordl_internal_get_m_EnumType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_EnumType();

  constexpr bool const& __cordl_internal_get_m_IncludeObsoleteValues() const;

  constexpr bool& __cordl_internal_get_m_IncludeObsoleteValues();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr void __cordl_internal_set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value);

  constexpr void __cordl_internal_set_m_ArrowElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_EnumData(::UnityEngine::EnumData value);

  constexpr void __cordl_internal_set_m_EnumType(::System::Type* value);

  constexpr void __cordl_internal_set_m_IncludeObsoleteValues(bool value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x4991194, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49911a0, size 0x348, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::System::Enum* defaultValue);

  static inline ::StringW getStaticF_arrowUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_includeObsoleteValues, addr 0x4991000, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5571 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_EnumType) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_IncludeObsoleteValues) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_TextElement) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_ArrowElement) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___m_EnumData) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EnumField, ___createMenuCallback) == 0x4a0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EnumField, 0x4a8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EnumField*, "UnityEngine.UIElements", "EnumField");
NEED_NO_BOX(::UnityEngine::UIElements::EnumField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EnumField_UxmlFactory*, "UnityEngine.UIElements", "EnumField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::EnumField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EnumField_UxmlTraits*, "UnityEngine.UIElements", "EnumField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::EnumField___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EnumField___c*, "UnityEngine.UIElements", "EnumField/<>c");
