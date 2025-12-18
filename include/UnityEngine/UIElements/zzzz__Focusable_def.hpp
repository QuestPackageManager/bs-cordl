#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Focusable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackEventHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Focusable)
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Focusable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Focusable);
// Dependencies UnityEngine.UIElements.BindingId, UnityEngine.UIElements.CallbackEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Focusable
class CORDL_TYPE Focusable : public ::UnityEngine::UIElements::CallbackEventHandler {
public:
  // Declarations
  /// @brief Field <isEligibleToReceiveFocusFromDisabledChild>k__BackingField, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__isEligibleToReceiveFocusFromDisabledChild_k__BackingField,
                      put = __cordl_internal_set__isEligibleToReceiveFocusFromDisabledChild_k__BackingField)) bool _isEligibleToReceiveFocusFromDisabledChild_k__BackingField;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  /// @brief Field canGrabFocusProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_canGrabFocusProperty, put = setStaticF_canGrabFocusProperty)) ::UnityEngine::UIElements::BindingId canGrabFocusProperty;

  __declspec(property(get = get_delegatesFocus, put = set_delegatesFocus)) bool delegatesFocus;

  /// @brief Field delegatesFocusProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_delegatesFocusProperty, put = setStaticF_delegatesFocusProperty)) ::UnityEngine::UIElements::BindingId delegatesFocusProperty;

  __declspec(property(get = get_excludeFromFocusRing, put = set_excludeFromFocusRing)) bool excludeFromFocusRing;

  __declspec(property(get = get_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_focusable, put = set_focusable)) bool focusable;

  /// @brief Field focusableProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_focusableProperty, put = setStaticF_focusableProperty)) ::UnityEngine::UIElements::BindingId focusableProperty;

  __declspec(property(get = get_isEligibleToReceiveFocusFromDisabledChild, put = set_isEligibleToReceiveFocusFromDisabledChild)) bool isEligibleToReceiveFocusFromDisabledChild;

  /// @brief Field m_DelegatesFocus, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DelegatesFocus, put = __cordl_internal_set_m_DelegatesFocus)) bool m_DelegatesFocus;

  /// @brief Field m_ExcludeFromFocusRing, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExcludeFromFocusRing, put = __cordl_internal_set_m_ExcludeFromFocusRing)) bool m_ExcludeFromFocusRing;

  /// @brief Field m_Focusable, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Focusable, put = __cordl_internal_set_m_Focusable)) bool m_Focusable;

  /// @brief Field m_TabIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TabIndex, put = __cordl_internal_set_m_TabIndex)) int32_t m_TabIndex;

  __declspec(property(get = get_tabIndex, put = set_tabIndex)) int32_t tabIndex;

  /// @brief Field tabIndexProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_tabIndexProperty, put = setStaticF_tabIndexProperty)) ::UnityEngine::UIElements::BindingId tabIndexProperty;

  /// @brief Method Blur, addr 0x6bdc1e8, size 0x38, virtual true, abstract: false, final false
  inline void Blur();

  /// @brief Method BlurImmediately, addr 0x6bdc278, size 0x38, virtual false, abstract: false, final false
  inline void BlurImmediately();

  /// @brief Method Focus, addr 0x6bdbfbc, size 0xac, virtual true, abstract: false, final false
  inline void Focus();

  /// @brief Method GetFirstFocusableChild, addr 0x6bdc2b0, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Focusable* GetFirstFocusableChild(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetFocusDelegate, addr 0x6bdc068, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetFocusDelegate();

  static inline ::UnityEngine::UIElements::Focusable* New_ctor();

  constexpr bool const& __cordl_internal_get__isEligibleToReceiveFocusFromDisabledChild_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isEligibleToReceiveFocusFromDisabledChild_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_DelegatesFocus() const;

  constexpr bool& __cordl_internal_get_m_DelegatesFocus();

  constexpr bool const& __cordl_internal_get_m_ExcludeFromFocusRing() const;

  constexpr bool& __cordl_internal_get_m_ExcludeFromFocusRing();

  constexpr bool const& __cordl_internal_get_m_Focusable() const;

  constexpr bool& __cordl_internal_get_m_Focusable();

  constexpr int32_t const& __cordl_internal_get_m_TabIndex() const;

  constexpr int32_t& __cordl_internal_get_m_TabIndex();

  constexpr void __cordl_internal_set__isEligibleToReceiveFocusFromDisabledChild_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_DelegatesFocus(bool value);

  constexpr void __cordl_internal_set_m_ExcludeFromFocusRing(bool value);

  constexpr void __cordl_internal_set_m_Focusable(bool value);

  constexpr void __cordl_internal_set_m_TabIndex(int32_t value);

  /// @brief Method .ctor, addr 0x6bdbc88, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_canGrabFocusProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_delegatesFocusProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_focusableProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_tabIndexProperty();

  /// @brief Method get_canGrabFocus, addr 0x6bdbfac, size 0x10, virtual true, abstract: false, final false
  inline bool get_canGrabFocus();

  /// @brief Method get_delegatesFocus, addr 0x6bdbe18, size 0x8, virtual false, abstract: false, final false
  inline bool get_delegatesFocus();

  /// @brief Method get_excludeFromFocusRing, addr 0x6bdbeb0, size 0x8, virtual false, abstract: false, final false
  inline bool get_excludeFromFocusRing();

  /// @brief Method get_focusController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_focusable, addr 0x6bdbd7c, size 0x8, virtual true, abstract: false, final false
  inline bool get_focusable();

  /// @brief Method get_isEligibleToReceiveFocusFromDisabledChild, addr 0x6bdbf9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEligibleToReceiveFocusFromDisabledChild();

  /// @brief Method get_tabIndex, addr 0x6bdbe10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tabIndex();

  static inline void setStaticF_canGrabFocusProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_delegatesFocusProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_focusableProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_tabIndexProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_delegatesFocus, addr 0x6bdbe20, size 0x90, virtual false, abstract: false, final false
  inline void set_delegatesFocus(bool value);

  /// @brief Method set_excludeFromFocusRing, addr 0x6bdbeb8, size 0xe4, virtual false, abstract: false, final false
  inline void set_excludeFromFocusRing(bool value);

  /// @brief Method set_focusable, addr 0x6bdbd84, size 0x8c, virtual true, abstract: false, final false
  inline void set_focusable(bool value);

  /// @brief Method set_isEligibleToReceiveFocusFromDisabledChild, addr 0x6bdbfa4, size 0x8, virtual false, abstract: false, final false
  inline void set_isEligibleToReceiveFocusFromDisabledChild(bool value);

  /// @brief Method set_tabIndex, addr 0x6bdbcec, size 0x90, virtual false, abstract: false, final false
  inline void set_tabIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Focusable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Focusable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Focusable(Focusable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Focusable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Focusable(Focusable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4579 };

  /// @brief Field m_Focusable, offset: 0x20, size: 0x1, def value: None
  bool ___m_Focusable;

  /// @brief Field m_TabIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_TabIndex;

  /// @brief Field m_DelegatesFocus, offset: 0x28, size: 0x1, def value: None
  bool ___m_DelegatesFocus;

  /// @brief Field m_ExcludeFromFocusRing, offset: 0x29, size: 0x1, def value: None
  bool ___m_ExcludeFromFocusRing;

  /// @brief Field <isEligibleToReceiveFocusFromDisabledChild>k__BackingField, offset: 0x2a, size: 0x1, def value: None
  bool ____isEligibleToReceiveFocusFromDisabledChild_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_Focusable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_TabIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_DelegatesFocus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_ExcludeFromFocusRing) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ____isEligibleToReceiveFocusFromDisabledChild_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Focusable, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Focusable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Focusable*, "UnityEngine.UIElements", "Focusable");
