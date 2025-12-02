#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseBoolField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BaseBoolField)
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseBoolField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseBoolField);
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseBoolField
class CORDL_TYPE BaseBoolField : public ::UnityEngine::UIElements::BaseField_1<bool> {
public:
  // Declarations
  /// @brief Field <toggleOnLabelClick>k__BackingField, offset 0x540, size 0x1
  __declspec(property(get = __cordl_internal_get__toggleOnLabelClick_k__BackingField, put = __cordl_internal_set__toggleOnLabelClick_k__BackingField)) bool _toggleOnLabelClick_k__BackingField;

  /// @brief Field <toggleOnTextClick>k__BackingField, offset 0x541, size 0x1
  __declspec(property(get = __cordl_internal_get__toggleOnTextClick_k__BackingField, put = __cordl_internal_set__toggleOnTextClick_k__BackingField)) bool _toggleOnTextClick_k__BackingField;

  __declspec(property(put = set_acceptClicksIfDisabled)) bool acceptClicksIfDisabled;

  /// @brief Field m_CheckMark, offset 0x530, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CheckMark, put = __cordl_internal_set_m_CheckMark)) ::UnityEngine::UIElements::VisualElement* m_CheckMark;

  /// @brief Field m_Clickable, offset 0x538, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clickable, put = __cordl_internal_set_m_Clickable)) ::UnityEngine::UIElements::Clickable* m_Clickable;

  /// @brief Field m_Label, offset 0x528, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label)) ::UnityEngine::UIElements::Label* m_Label;

  /// @brief Field m_OriginalText, offset 0x548, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalText, put = __cordl_internal_set_m_OriginalText)) ::StringW m_OriginalText;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_textProperty, put = setStaticF_textProperty)) ::UnityEngine::UIElements::BindingId textProperty;

  __declspec(property(get = get_toggleOnLabelClick, put = set_toggleOnLabelClick)) bool toggleOnLabelClick;

  /// @brief Field toggleOnLabelClickProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_toggleOnLabelClickProperty, put = setStaticF_toggleOnLabelClickProperty)) ::UnityEngine::UIElements::BindingId toggleOnLabelClickProperty;

  __declspec(property(get = get_toggleOnTextClick, put = set_toggleOnTextClick)) bool toggleOnTextClick;

  /// @brief Method InitLabel, addr 0x6a238e0, size 0xfc, virtual true, abstract: false, final false
  inline void InitLabel();

  static inline ::UnityEngine::UIElements::BaseBoolField* New_ctor(::StringW label);

  /// @brief Method OnClickEvent, addr 0x6a23aa0, size 0x380, virtual false, abstract: false, final false
  inline void OnClickEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnNavigationSubmit, addr 0x6a2388c, size 0x38, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method RegisterEditingCallbacks, addr 0x6a240a8, size 0x118, virtual true, abstract: false, final false
  inline void RegisterEditingCallbacks();

  /// @brief Method SetValueWithoutNotify, addr 0x6a239dc, size 0xc4, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(bool newValue);

  /// @brief Method ShouldIgnoreClick, addr 0x6a23e20, size 0xe4, virtual false, abstract: false, final false
  inline bool ShouldIgnoreClick(::UnityEngine::Vector3 position);

  /// @brief Method ToggleValue, addr 0x6a23f04, size 0x38, virtual true, abstract: false, final false
  inline void ToggleValue();

  /// @brief Method UnregisterEditingCallbacks, addr 0x6a241c0, size 0x118, virtual true, abstract: false, final false
  inline void UnregisterEditingCallbacks();

  /// @brief Method UpdateMixedValueContent, addr 0x6a23f3c, size 0x16c, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr bool const& __cordl_internal_get__toggleOnLabelClick_k__BackingField() const;

  constexpr bool& __cordl_internal_get__toggleOnLabelClick_k__BackingField();

  constexpr bool const& __cordl_internal_get__toggleOnTextClick_k__BackingField() const;

  constexpr bool& __cordl_internal_get__toggleOnTextClick_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CheckMark() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CheckMark();

  constexpr ::UnityEngine::UIElements::Clickable* const& __cordl_internal_get_m_Clickable() const;

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get_m_Clickable();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_Label() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_Label();

  constexpr ::StringW const& __cordl_internal_get_m_OriginalText() const;

  constexpr ::StringW& __cordl_internal_get_m_OriginalText();

  constexpr void __cordl_internal_set__toggleOnLabelClick_k__BackingField(bool value);

  constexpr void __cordl_internal_set__toggleOnTextClick_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CheckMark(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value);

  constexpr void __cordl_internal_set_m_Label(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_OriginalText(::StringW value);

  /// @brief Method .ctor, addr 0x6a234f4, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_textProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_toggleOnLabelClickProperty();

  /// @brief Method get_text, addr 0x6a238c4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_toggleOnLabelClick, addr 0x6a234d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_toggleOnLabelClick();

  /// @brief Method get_toggleOnTextClick, addr 0x6a234e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_toggleOnTextClick();

  static inline void setStaticF_textProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_toggleOnLabelClickProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_acceptClicksIfDisabled, addr 0x6a234bc, size 0x18, virtual false, abstract: false, final false
  inline void set_acceptClicksIfDisabled(bool value);

  /// @brief Method set_text, addr 0x6a23790, size 0xfc, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_toggleOnLabelClick, addr 0x6a234dc, size 0x8, virtual false, abstract: false, final false
  inline void set_toggleOnLabelClick(bool value);

  /// @brief Method set_toggleOnTextClick, addr 0x6a234ec, size 0x8, virtual false, abstract: false, final false
  inline void set_toggleOnTextClick(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseBoolField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseBoolField(BaseBoolField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseBoolField(BaseBoolField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4103 };

  /// @brief Field m_Label, offset: 0x528, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_Label;

  /// @brief Field m_CheckMark, offset: 0x530, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CheckMark;

  /// @brief Field m_Clickable, offset: 0x538, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ___m_Clickable;

  /// @brief Field <toggleOnLabelClick>k__BackingField, offset: 0x540, size: 0x1, def value: None
  bool ____toggleOnLabelClick_k__BackingField;

  /// @brief Field <toggleOnTextClick>k__BackingField, offset: 0x541, size: 0x1, def value: None
  bool ____toggleOnTextClick_k__BackingField;

  /// @brief Field m_OriginalText, offset: 0x548, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_Label) == 0x528, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_CheckMark) == 0x530, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_Clickable) == 0x538, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ____toggleOnLabelClick_k__BackingField) == 0x540, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ____toggleOnTextClick_k__BackingField) == 0x541, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_OriginalText) == 0x548, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseBoolField, 0x550>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseBoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseBoolField*, "UnityEngine.UIElements", "BaseBoolField");
