#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Focusable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CallbackEventHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Focusable)
namespace UnityEngine::UIElements {
class EventBase;
}
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
// Dependencies UnityEngine.UIElements.CallbackEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Focusable
class CORDL_TYPE Focusable : public ::UnityEngine::UIElements::CallbackEventHandler {
public:
  // Declarations
  /// @brief Field <focusable>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__focusable_k__BackingField, put = __cordl_internal_set__focusable_k__BackingField)) bool _focusable_k__BackingField;

  /// @brief Field <tabIndex>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__tabIndex_k__BackingField, put = __cordl_internal_set__tabIndex_k__BackingField)) int32_t _tabIndex_k__BackingField;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  __declspec(property(get = get_delegatesFocus, put = set_delegatesFocus)) bool delegatesFocus;

  __declspec(property(get = get_excludeFromFocusRing, put = set_excludeFromFocusRing)) bool excludeFromFocusRing;

  __declspec(property(get = get_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_focusable, put = set_focusable)) bool focusable;

  /// @brief Field m_DelegatesFocus, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DelegatesFocus, put = __cordl_internal_set_m_DelegatesFocus)) bool m_DelegatesFocus;

  /// @brief Field m_ExcludeFromFocusRing, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExcludeFromFocusRing, put = __cordl_internal_set_m_ExcludeFromFocusRing)) bool m_ExcludeFromFocusRing;

  __declspec(property(get = get_tabIndex, put = set_tabIndex)) int32_t tabIndex;

  /// @brief Method Blur, addr 0x4a3615c, size 0x38, virtual true, abstract: false, final false
  inline void Blur();

  /// @brief Method BlurImmediately, addr 0x4a361ec, size 0x38, virtual false, abstract: false, final false
  inline void BlurImmediately();

  /// @brief Method ExecuteDefaultAction, addr 0x4a36340, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabled, addr 0x4a36384, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method Focus, addr 0x4a35f64, size 0xb0, virtual true, abstract: false, final false
  inline void Focus();

  /// @brief Method GetFirstFocusableChild, addr 0x4a36224, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Focusable* GetFirstFocusableChild(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetFocusDelegate, addr 0x4a36014, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetFocusDelegate();

  static inline ::UnityEngine::UIElements::Focusable* New_ctor();

  /// @brief Method ProcessEvent, addr 0x4a36344, size 0x40, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::UIElements::EventBase* evt);

  constexpr bool const& __cordl_internal_get__focusable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__focusable_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__tabIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__tabIndex_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_DelegatesFocus() const;

  constexpr bool& __cordl_internal_get_m_DelegatesFocus();

  constexpr bool const& __cordl_internal_get_m_ExcludeFromFocusRing() const;

  constexpr bool& __cordl_internal_get_m_ExcludeFromFocusRing();

  constexpr void __cordl_internal_set__focusable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__tabIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_DelegatesFocus(bool value);

  constexpr void __cordl_internal_set_m_ExcludeFromFocusRing(bool value);

  /// @brief Method .ctor, addr 0x4a35e14, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canGrabFocus, addr 0x4a35f5c, size 0x8, virtual true, abstract: false, final false
  inline bool get_canGrabFocus();

  /// @brief Method get_delegatesFocus, addr 0x4a35e60, size 0x8, virtual false, abstract: false, final false
  inline bool get_delegatesFocus();

  /// @brief Method get_excludeFromFocusRing, addr 0x4a35e74, size 0x8, virtual false, abstract: false, final false
  inline bool get_excludeFromFocusRing();

  /// @brief Method get_focusController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_focusable, addr 0x4a35e3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_focusable();

  /// @brief Method get_tabIndex, addr 0x4a35e50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tabIndex();

  /// @brief Method set_delegatesFocus, addr 0x4a35e68, size 0xc, virtual false, abstract: false, final false
  inline void set_delegatesFocus(bool value);

  /// @brief Method set_excludeFromFocusRing, addr 0x4a35e7c, size 0xe0, virtual false, abstract: false, final false
  inline void set_excludeFromFocusRing(bool value);

  /// @brief Method set_focusable, addr 0x4a35e44, size 0xc, virtual false, abstract: false, final false
  inline void set_focusable(bool value);

  /// @brief Method set_tabIndex, addr 0x4a35e58, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5952 };

  /// @brief Field <focusable>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____focusable_k__BackingField;

  /// @brief Field <tabIndex>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____tabIndex_k__BackingField;

  /// @brief Field m_DelegatesFocus, offset: 0x28, size: 0x1, def value: None
  bool ___m_DelegatesFocus;

  /// @brief Field m_ExcludeFromFocusRing, offset: 0x29, size: 0x1, def value: None
  bool ___m_ExcludeFromFocusRing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Focusable, ____focusable_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ____tabIndex_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_DelegatesFocus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_ExcludeFromFocusRing) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Focusable, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Focusable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Focusable*, "UnityEngine.UIElements", "Focusable");
