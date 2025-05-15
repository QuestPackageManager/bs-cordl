#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RadioButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseBoolField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
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
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class RadioButton_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RadioButton_UxmlTraits;
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
class RadioButton;
}
namespace UnityEngine::UIElements {
class RadioButton_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RadioButton_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButton);
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButton_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButton_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButton/UxmlFactory
class CORDL_TYPE RadioButton_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButton*, ::UnityEngine::UIElements::RadioButton_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::RadioButton_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a03574, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButton_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButton_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButton_UxmlFactory(RadioButton_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButton_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButton_UxmlFactory(RadioButton_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButton_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButton/UxmlTraits
class CORDL_TYPE RadioButton_UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<bool, ::UnityEngine::UIElements::UxmlBoolAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x4a035bc, size 0x11c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::RadioButton_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a036d8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButton_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButton_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButton_UxmlTraits(RadioButton_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButton_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButton_UxmlTraits(RadioButton_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5676 };

  /// @brief Field m_Text, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButton_UxmlTraits, ___m_Text) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButton_UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseBoolField, UnityEngine.UIElements.IGroupBoxOption
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButton
class CORDL_TYPE RadioButton : public ::UnityEngine::UIElements::BaseBoolField {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::RadioButton_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::RadioButton_UxmlTraits;

  /// @brief Field checkmarkBackgroundUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_checkmarkBackgroundUssClassName, put = setStaticF_checkmarkBackgroundUssClassName)) ::StringW checkmarkBackgroundUssClassName;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName)) ::StringW checkmarkUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_CheckmarkBackground, offset 0x460, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CheckmarkBackground, put = __cordl_internal_set_m_CheckmarkBackground)) ::UnityEngine::UIElements::VisualElement* m_CheckmarkBackground;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName)) ::StringW textUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) bool value;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBoxOption"
  constexpr operator ::UnityEngine::UIElements::IGroupBoxOption*() noexcept;

  /// @brief Method InitLabel, addr 0x4a03270, size 0x7c, virtual true, abstract: false, final false
  inline void InitLabel();

  static inline ::UnityEngine::UIElements::RadioButton* New_ctor();

  static inline ::UnityEngine::UIElements::RadioButton* New_ctor(::StringW label);

  /// @brief Method OnOptionAttachToPanel, addr 0x4a03198, size 0x6c, virtual false, abstract: false, final false
  inline void OnOptionAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnOptionDetachFromPanel, addr 0x4a03204, size 0x6c, virtual false, abstract: false, final false
  inline void OnOptionDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x4a03340, size 0x20, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(bool newValue);

  /// @brief Method ToggleValue, addr 0x4a032ec, size 0x40, virtual true, abstract: false, final false
  inline void ToggleValue();

  /// @brief Method UnityEngine.UIElements.IGroupBoxOption.SetSelected, addr 0x4a0332c, size 0x14, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBoxOption_SetSelected(bool selected);

  /// @brief Method UpdateCheckmark, addr 0x4a02e1c, size 0xf4, virtual false, abstract: false, final false
  inline void UpdateCheckmark();

  /// @brief Method UpdateMixedValueContent, addr 0x4a03360, size 0xa4, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CheckmarkBackground() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CheckmarkBackground();

  constexpr void __cordl_internal_set_m_CheckmarkBackground(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4a02f10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a02f18, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_checkmarkBackgroundUssClassName();

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_value, addr 0x4a02cf0, size 0x48, virtual true, abstract: false, final false
  inline bool get_value();

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBoxOption"
  constexpr ::UnityEngine::UIElements::IGroupBoxOption* i___UnityEngine__UIElements__IGroupBoxOption() noexcept;

  static inline void setStaticF_checkmarkBackgroundUssClassName(::StringW value);

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_value, addr 0x4a02d38, size 0xe4, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5677 };

  /// @brief Field m_CheckmarkBackground, offset: 0x460, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CheckmarkBackground;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButton, ___m_CheckmarkBackground) == 0x460, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButton, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RadioButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButton*, "UnityEngine.UIElements", "RadioButton");
NEED_NO_BOX(::UnityEngine::UIElements::RadioButton_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButton_UxmlFactory*, "UnityEngine.UIElements", "RadioButton/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::RadioButton_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButton_UxmlTraits*, "UnityEngine.UIElements", "RadioButton/UxmlTraits");
