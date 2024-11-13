#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RadioButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseBoolField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RadioButton)
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
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
class __RadioButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RadioButton__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RadioButton;
}
namespace UnityEngine::UIElements {
class __RadioButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RadioButton__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButton);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RadioButton__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RadioButton__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RadioButton::UxmlFactory*
class CORDL_TYPE __RadioButton__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButton*, ::UnityEngine::UIElements::__RadioButton__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__RadioButton__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x499c138, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RadioButton__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioButton__UxmlFactory(__RadioButton__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioButton__UxmlFactory(__RadioButton__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RadioButton__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RadioButton::UxmlTraits*
class CORDL_TYPE __RadioButton__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<bool, ::UnityEngine::UIElements::UxmlBoolAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x499c180, size 0x11c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__RadioButton__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x499c29c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RadioButton__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioButton__UxmlTraits(__RadioButton__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioButton__UxmlTraits(__RadioButton__UxmlTraits const&) = delete;

  /// @brief Field m_Text, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RadioButton__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__RadioButton__UxmlTraits, ___m_Text) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::RadioButton
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::RadioButton*
class CORDL_TYPE RadioButton : public ::UnityEngine::UIElements::BaseBoolField {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__RadioButton__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__RadioButton__UxmlTraits;

  /// @brief Field checkmarkBackgroundUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_checkmarkBackgroundUssClassName, put = setStaticF_checkmarkBackgroundUssClassName)) ::StringW checkmarkBackgroundUssClassName;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName)) ::StringW checkmarkUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_CheckmarkBackground, offset 0x460, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CheckmarkBackground, put = __cordl_internal_set_m_CheckmarkBackground)) ::UnityEngine::UIElements::VisualElement* m_CheckmarkBackground;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName)) ::StringW textUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) bool value;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBoxOption"
  constexpr operator ::UnityEngine::UIElements::IGroupBoxOption*() noexcept;

  /// @brief Method InitLabel, addr 0x499be34, size 0x7c, virtual true, abstract: false, final false
  inline void InitLabel();

  static inline ::UnityEngine::UIElements::RadioButton* New_ctor();

  static inline ::UnityEngine::UIElements::RadioButton* New_ctor(::StringW label);

  /// @brief Method OnOptionAttachToPanel, addr 0x499bd5c, size 0x6c, virtual false, abstract: false, final false
  inline void OnOptionAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnOptionDetachFromPanel, addr 0x499bdc8, size 0x6c, virtual false, abstract: false, final false
  inline void OnOptionDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x499bf04, size 0x20, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(bool newValue);

  /// @brief Method ToggleValue, addr 0x499beb0, size 0x40, virtual true, abstract: false, final false
  inline void ToggleValue();

  /// @brief Method UnityEngine.UIElements.IGroupBoxOption.SetSelected, addr 0x499bef0, size 0x14, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBoxOption_SetSelected(bool selected);

  /// @brief Method UpdateCheckmark, addr 0x499b9e0, size 0xf4, virtual false, abstract: false, final false
  inline void UpdateCheckmark();

  /// @brief Method UpdateMixedValueContent, addr 0x499bf24, size 0xa4, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CheckmarkBackground();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_CheckmarkBackground() const;

  constexpr void __cordl_internal_set_m_CheckmarkBackground(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x499bad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x499badc, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_checkmarkBackgroundUssClassName();

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_value, addr 0x499b8b4, size 0x48, virtual true, abstract: false, final false
  inline bool get_value();

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBoxOption"
  constexpr ::UnityEngine::UIElements::IGroupBoxOption* i___UnityEngine__UIElements__IGroupBoxOption() noexcept;

  static inline void setStaticF_checkmarkBackgroundUssClassName(::StringW value);

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_value, addr 0x499b8fc, size 0xe4, virtual true, abstract: false, final false
  inline void set_value(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButton(RadioButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButton(RadioButton const&) = delete;

  /// @brief Field m_CheckmarkBackground, offset: 0x460, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CheckmarkBackground;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5647 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButton, 0x468>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButton, ___m_CheckmarkBackground) == 0x460, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RadioButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButton*, "UnityEngine.UIElements", "RadioButton");
NEED_NO_BOX(::UnityEngine::UIElements::__RadioButton__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RadioButton__UxmlFactory*, "UnityEngine.UIElements", "RadioButton/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__RadioButton__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RadioButton__UxmlTraits*, "UnityEngine.UIElements", "RadioButton/UxmlTraits");
