#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Foldout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Foldout)
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class Foldout_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Foldout_UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename T> class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class Toggle;
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
// Forward declare root types
namespace UnityEngine::UIElements {
class Foldout;
}
namespace UnityEngine::UIElements {
class Foldout_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Foldout_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Foldout);
MARK_REF_PTR_T(::UnityEngine::UIElements::Foldout_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Foldout_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Foldout/UxmlFactory
class CORDL_TYPE Foldout_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Foldout*, ::UnityEngine::UIElements::Foldout_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Foldout_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b76c88, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Foldout_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Foldout_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Foldout_UxmlFactory(Foldout_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Foldout_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Foldout_UxmlFactory(Foldout_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4193 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Foldout_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Foldout/UxmlTraits
class CORDL_TYPE Foldout_UxmlTraits : public ::UnityEngine::UIElements::BindableElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Field m_Value, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Value;

  /// @brief Method Init, addr 0x6b76cf0, size 0x154, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Foldout_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Value() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b76e44, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Foldout_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Foldout_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Foldout_UxmlTraits(Foldout_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Foldout_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Foldout_UxmlTraits(Foldout_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4194 };

  /// @brief Field m_Text, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_Value, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Foldout_UxmlTraits, ___m_Text) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Foldout_UxmlTraits, ___m_Value) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Foldout_UxmlTraits, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Foldout
class CORDL_TYPE Foldout : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Foldout_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Foldout_UxmlTraits;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName)) ::StringW checkmarkUssClassName;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field contentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentUssClassName, put = setStaticF_contentUssClassName)) ::StringW contentUssClassName;

  __declspec(property(get = get_focusable, put = set_focusable)) bool focusable;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field m_Container, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityEngine::UIElements::VisualElement* m_Container;

  /// @brief Field m_NavigationManipulator, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NavigationManipulator,
                      put = __cordl_internal_set_m_NavigationManipulator)) ::UnityEngine::UIElements::KeyboardNavigationManipulator* m_NavigationManipulator;

  /// @brief Field m_Toggle, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Toggle, put = __cordl_internal_set_m_Toggle)) ::UnityEngine::UIElements::Toggle* m_Toggle;

  /// @brief Field m_Value, offset 0x4c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) bool m_Value;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_textProperty, put = setStaticF_textProperty)) ::UnityEngine::UIElements::BindingId textProperty;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName)) ::StringW textUssClassName;

  __declspec(property(get = get_toggle)) ::UnityEngine::UIElements::Toggle* toggle;

  /// @brief Field toggleInspectorUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_toggleInspectorUssClassName, put = setStaticF_toggleInspectorUssClassName)) ::StringW toggleInspectorUssClassName;

  __declspec(property(get = get_toggleOnLabelClick, put = set_toggleOnLabelClick)) bool toggleOnLabelClick;

  /// @brief Field toggleOnLabelClickProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_toggleOnLabelClickProperty, put = setStaticF_toggleOnLabelClickProperty)) ::UnityEngine::UIElements::BindingId toggleOnLabelClickProperty;

  /// @brief Field toggleUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_toggleUssClassName, put = setStaticF_toggleUssClassName)) ::StringW toggleUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Field ussFoldoutDepthClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussFoldoutDepthClassName, put = setStaticF_ussFoldoutDepthClassName)) ::StringW ussFoldoutDepthClassName;

  /// @brief Field ussFoldoutMaxDepth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ussFoldoutMaxDepth, put = setStaticF_ussFoldoutMaxDepth)) int32_t ussFoldoutMaxDepth;

  __declspec(property(get = get_value, put = set_value)) bool value;

  /// @brief Field valueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_valueProperty, put = setStaticF_valueProperty)) ::UnityEngine::UIElements::BindingId valueProperty;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<bool>*() noexcept;

  /// @brief Method Apply, addr 0x6b761ac, size 0xc4, virtual false, abstract: false, final false
  inline bool Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op);

  /// @brief Method Apply, addr 0x6b76148, size 0x64, virtual false, abstract: false, final false
  inline void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent);

  static inline ::UnityEngine::UIElements::Foldout* New_ctor();

  /// @brief Method OnAttachToPanel, addr 0x6b76694, size 0x1e0, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnViewDataReady, addr 0x6b76114, size 0x34, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetValueWithoutNotify, addr 0x6b75fd0, size 0x144, virtual true, abstract: false, final true
  inline void SetValueWithoutNotify(bool newValue);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator* const& __cordl_internal_get_m_NavigationManipulator() const;

  constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& __cordl_internal_get_m_NavigationManipulator();

  constexpr ::UnityEngine::UIElements::Toggle* const& __cordl_internal_get_m_Toggle() const;

  constexpr ::UnityEngine::UIElements::Toggle*& __cordl_internal_get_m_Toggle();

  constexpr bool const& __cordl_internal_get_m_Value() const;

  constexpr bool& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Container(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value);

  constexpr void __cordl_internal_set_m_Toggle(::UnityEngine::UIElements::Toggle* value);

  constexpr void __cordl_internal_set_m_Value(bool value);

  /// @brief Method <.ctor>b__39_0, addr 0x6b76c34, size 0x54, virtual false, abstract: false, final false
  inline void __ctor_b__39_0(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method .ctor, addr 0x6b76270, size 0x424, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline ::StringW getStaticF_contentUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_textProperty();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_toggleInspectorUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_toggleOnLabelClickProperty();

  static inline ::StringW getStaticF_toggleUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_ussFoldoutDepthClassName();

  static inline int32_t getStaticF_ussFoldoutMaxDepth();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_valueProperty();

  /// @brief Method get_contentContainer, addr 0x6b75ac4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_focusable, addr 0x6b75acc, size 0x8, virtual true, abstract: false, final false
  inline bool get_focusable();

  /// @brief Method get_text, addr 0x6b75bd8, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_toggle, addr 0x6b75abc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Toggle* get_toggle();

  /// @brief Method get_toggleOnLabelClick, addr 0x6b75b14, size 0x18, virtual false, abstract: false, final false
  inline bool get_toggleOnLabelClick();

  /// @brief Method get_value, addr 0x6b75dcc, size 0x8, virtual true, abstract: false, final true
  inline bool get_value();

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<bool>* i___UnityEngine__UIElements__INotifyValueChanged_1_bool_() noexcept;

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline void setStaticF_contentUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_textProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline void setStaticF_toggleInspectorUssClassName(::StringW value);

  static inline void setStaticF_toggleOnLabelClickProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_toggleUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_ussFoldoutDepthClassName(::StringW value);

  static inline void setStaticF_ussFoldoutMaxDepth(int32_t value);

  static inline void setStaticF_valueProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_focusable, addr 0x6b75ad4, size 0x40, virtual true, abstract: false, final false
  inline void set_focusable(bool value);

  /// @brief Method set_text, addr 0x6b75c04, size 0x1c8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_toggleOnLabelClick, addr 0x6b75b2c, size 0xac, virtual false, abstract: false, final false
  inline void set_toggleOnLabelClick(bool value);

  /// @brief Method set_value, addr 0x6b75dd4, size 0x1fc, virtual true, abstract: false, final true
  inline void set_value(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Foldout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Foldout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Foldout(Foldout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Foldout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Foldout(Foldout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4195 };

  /// @brief Field m_Toggle, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Toggle* ___m_Toggle;

  /// @brief Field m_Container, offset: 0x4c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Container;

  /// @brief Field m_Value, offset: 0x4c8, size: 0x1, def value: None
  bool ___m_Value;

  /// @brief Field m_NavigationManipulator, offset: 0x4d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::KeyboardNavigationManipulator* ___m_NavigationManipulator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Foldout, ___m_Toggle) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Foldout, ___m_Container) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Foldout, ___m_Value) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Foldout, ___m_NavigationManipulator) == 0x4d0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Foldout, 0x4d8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Foldout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Foldout*, "UnityEngine.UIElements", "Foldout");
NEED_NO_BOX(::UnityEngine::UIElements::Foldout_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Foldout_UxmlFactory*, "UnityEngine.UIElements", "Foldout/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Foldout_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Foldout_UxmlTraits*, "UnityEngine.UIElements", "Foldout/UxmlTraits");
