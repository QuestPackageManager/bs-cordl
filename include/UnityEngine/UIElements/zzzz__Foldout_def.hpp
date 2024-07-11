#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Foldout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
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
template <typename T> class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
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
namespace UnityEngine::UIElements {
class __Foldout__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Foldout__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Foldout;
}
namespace UnityEngine::UIElements {
class __Foldout__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Foldout__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Foldout);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Foldout__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Foldout__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Foldout::UxmlFactory*
class CORDL_TYPE __Foldout__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Foldout*, ::UnityEngine::UIElements::__Foldout__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Foldout__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x35ca2bc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Foldout__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Foldout__UxmlFactory(__Foldout__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Foldout__UxmlFactory(__Foldout__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Foldout__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Foldout::UxmlTraits*
class CORDL_TYPE __Foldout__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Field m_Value, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Value;

  /// @brief Method Init, addr 0x35ca304, size 0x130, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Foldout__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Value();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Value() const;

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x35ca434, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Foldout__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Foldout__UxmlTraits(__Foldout__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Foldout__UxmlTraits(__Foldout__UxmlTraits const&) = delete;

  /// @brief Field m_Text, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_Value, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Foldout__UxmlTraits, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Foldout__UxmlTraits, ___m_Text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Foldout__UxmlTraits, ___m_Value) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Foldout
// SizeInfo { instance_size: 984, native_size: -1, calculated_instance_size: 984, calculated_native_size: 977, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Foldout*
class CORDL_TYPE Foldout : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__Foldout__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Foldout__UxmlTraits;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName))::StringW checkmarkUssClassName;

  __declspec(property(get = get_contentContainer))::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field contentUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_contentUssClassName, put = setStaticF_contentUssClassName))::StringW contentUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field m_Container, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container))::UnityEngine::UIElements::VisualElement* m_Container;

  /// @brief Field m_Toggle, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Toggle, put = __cordl_internal_set_m_Toggle))::UnityEngine::UIElements::Toggle* m_Toggle;

  /// @brief Field m_Value, offset 0x3d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) bool m_Value;

  __declspec(property(put = set_text))::StringW text;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName))::StringW textUssClassName;

  /// @brief Field toggleUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_toggleUssClassName, put = setStaticF_toggleUssClassName))::StringW toggleUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field ussFoldoutDepthClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussFoldoutDepthClassName, put = setStaticF_ussFoldoutDepthClassName))::StringW ussFoldoutDepthClassName;

  /// @brief Field ussFoldoutMaxDepth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ussFoldoutMaxDepth, put = setStaticF_ussFoldoutMaxDepth)) int32_t ussFoldoutMaxDepth;

  __declspec(property(get = get_value, put = set_value)) bool value;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<bool>*() noexcept;

  static inline ::UnityEngine::UIElements::Foldout* New_ctor();

  /// @brief Method OnAttachToPanel, addr 0x35c9f04, size 0x1c0, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnViewDataReady, addr 0x35c9ebc, size 0x40, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetValueWithoutNotify, addr 0x35c9d9c, size 0x120, virtual true, abstract: false, final true
  inline void SetValueWithoutNotify(bool newValue);

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Container();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityEngine::UIElements::Toggle*& __cordl_internal_get_m_Toggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Toggle*> const& __cordl_internal_get_m_Toggle() const;

  constexpr bool const& __cordl_internal_get_m_Value() const;

  constexpr bool& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Container(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Toggle(::UnityEngine::UIElements::Toggle* value);

  constexpr void __cordl_internal_set_m_Value(bool value);

  /// @brief Method <.ctor>b__23_0, addr 0x35ca26c, size 0x50, virtual false, abstract: false, final false
  inline void __ctor_b__23_0(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method .ctor, addr 0x35c3334, size 0x330, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline ::StringW getStaticF_contentUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_toggleUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_ussFoldoutDepthClassName();

  static inline int32_t getStaticF_ussFoldoutMaxDepth();

  /// @brief Method get_contentContainer, addr 0x35c9bac, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_value, addr 0x35c9bb4, size 0x8, virtual true, abstract: false, final true
  inline bool get_value();

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<bool>* i___UnityEngine__UIElements__INotifyValueChanged_1_bool_() noexcept;

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline void setStaticF_contentUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline void setStaticF_toggleUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_ussFoldoutDepthClassName(::StringW value);

  static inline void setStaticF_ussFoldoutMaxDepth(int32_t value);

  /// @brief Method set_text, addr 0x35c3664, size 0x124, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_value, addr 0x35c9bbc, size 0x1e0, virtual true, abstract: false, final true
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

  /// @brief Field m_Toggle, offset: 0x3c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Toggle* ___m_Toggle;

  /// @brief Field m_Container, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Container;

  /// @brief Field m_Value, offset: 0x3d0, size: 0x1, def value: None
  bool ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Foldout, 0x3d8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Foldout, ___m_Toggle) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Foldout, ___m_Container) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Foldout, ___m_Value) == 0x3d0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Foldout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Foldout*, "UnityEngine.UIElements", "Foldout");
NEED_NO_BOX(::UnityEngine::UIElements::__Foldout__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Foldout__UxmlFactory*, "UnityEngine.UIElements", "Foldout/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Foldout__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Foldout__UxmlTraits*, "UnityEngine.UIElements", "Foldout/UxmlTraits");
