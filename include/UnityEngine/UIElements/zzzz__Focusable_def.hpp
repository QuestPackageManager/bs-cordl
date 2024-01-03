#pragma once
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
// Type: UnityEngine.UIElements::Focusable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 35, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7211))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6880))
// CS Name: ::UnityEngine.UIElements::Focusable*
class CORDL_TYPE Focusable : public ::UnityEngine::UIElements::CallbackEventHandler {
public:
  // Declarations
  /// @brief Field <focusable>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__focusable_k__BackingField, put = __set__focusable_k__BackingField)) bool _focusable_k__BackingField;

  /// @brief Field <tabIndex>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__tabIndex_k__BackingField, put = __set__tabIndex_k__BackingField)) int32_t _tabIndex_k__BackingField;

  /// @brief Field m_DelegatesFocus, offset 0x20, size 0x1
  __declspec(property(get = __get_m_DelegatesFocus, put = __set_m_DelegatesFocus)) bool m_DelegatesFocus;

  /// @brief Field m_ExcludeFromFocusRing, offset 0x21, size 0x1
  __declspec(property(get = __get_m_ExcludeFromFocusRing, put = __set_m_ExcludeFromFocusRing)) bool m_ExcludeFromFocusRing;

  /// @brief Field isIMGUIContainer, offset 0x22, size 0x1
  __declspec(property(get = __get_isIMGUIContainer, put = __set_isIMGUIContainer)) bool isIMGUIContainer;

  __declspec(property(get = get_focusController))::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_focusable, put = set_focusable)) bool focusable;

  __declspec(property(get = get_tabIndex, put = set_tabIndex)) int32_t tabIndex;

  __declspec(property(get = get_delegatesFocus, put = set_delegatesFocus)) bool delegatesFocus;

  __declspec(property(get = get_excludeFromFocusRing, put = set_excludeFromFocusRing)) bool excludeFromFocusRing;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  constexpr bool& __get__focusable_k__BackingField();

  constexpr bool const& __get__focusable_k__BackingField() const;

  constexpr void __set__focusable_k__BackingField(bool value);

  constexpr int32_t& __get__tabIndex_k__BackingField();

  constexpr int32_t const& __get__tabIndex_k__BackingField() const;

  constexpr void __set__tabIndex_k__BackingField(int32_t value);

  constexpr bool& __get_m_DelegatesFocus();

  constexpr bool const& __get_m_DelegatesFocus() const;

  constexpr void __set_m_DelegatesFocus(bool value);

  constexpr bool& __get_m_ExcludeFromFocusRing();

  constexpr bool const& __get_m_ExcludeFromFocusRing() const;

  constexpr void __set_m_ExcludeFromFocusRing(bool value);

  constexpr bool& __get_isIMGUIContainer();

  constexpr bool const& __get_isIMGUIContainer() const;

  constexpr void __set_isIMGUIContainer(bool value);

  static inline ::UnityEngine::UIElements::Focusable* New_ctor();

  /// @brief Method .ctor, addr 0x2df9a5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_focusController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_focusable, addr 0x2df9a84, size 0x8, virtual false, abstract: false, final false
  inline bool get_focusable();

  /// @brief Method set_focusable, addr 0x2df9a8c, size 0xc, virtual false, abstract: false, final false
  inline void set_focusable(bool value);

  /// @brief Method get_tabIndex, addr 0x2df9a98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tabIndex();

  /// @brief Method set_tabIndex, addr 0x2df9aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_tabIndex(int32_t value);

  /// @brief Method get_delegatesFocus, addr 0x2df9aa8, size 0x8, virtual false, abstract: false, final false
  inline bool get_delegatesFocus();

  /// @brief Method set_delegatesFocus, addr 0x2df9ab0, size 0xe4, virtual false, abstract: false, final false
  inline void set_delegatesFocus(bool value);

  /// @brief Method get_excludeFromFocusRing, addr 0x2df9b94, size 0x8, virtual false, abstract: false, final false
  inline bool get_excludeFromFocusRing();

  /// @brief Method set_excludeFromFocusRing, addr 0x2df9b9c, size 0xe4, virtual false, abstract: false, final false
  inline void set_excludeFromFocusRing(bool value);

  /// @brief Method get_canGrabFocus, addr 0x2df9c80, size 0x8, virtual true, abstract: false, final false
  inline bool get_canGrabFocus();

  /// @brief Method Focus, addr 0x2df9c88, size 0xb0, virtual true, abstract: false, final false
  inline void Focus();

  /// @brief Method Blur, addr 0x2df9e80, size 0x38, virtual true, abstract: false, final false
  inline void Blur();

  /// @brief Method BlurImmediately, addr 0x2df9f10, size 0x38, virtual false, abstract: false, final false
  inline void BlurImmediately();

  /// @brief Method GetFocusDelegate, addr 0x2df9d38, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetFocusDelegate();

  /// @brief Method GetFirstFocusableChild, addr 0x2df9f48, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Focusable* GetFirstFocusableChild(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method ExecuteDefaultAction, addr 0x2dfa068, size 0x2c, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabled, addr 0x2dfa0f4, size 0x2c, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ProcessEvent, addr 0x2dfa094, size 0x60, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::UIElements::EventBase* evt);

  // Ctor Parameters [CppParam { name: "", ty: "Focusable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Focusable(Focusable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Focusable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Focusable(Focusable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Focusable();

public:
  /// @brief Field <focusable>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____focusable_k__BackingField;

  /// @brief Field <tabIndex>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____tabIndex_k__BackingField;

  /// @brief Field m_DelegatesFocus, offset: 0x20, size: 0x1, def value: None
  bool ___m_DelegatesFocus;

  /// @brief Field m_ExcludeFromFocusRing, offset: 0x21, size: 0x1, def value: None
  bool ___m_ExcludeFromFocusRing;

  /// @brief Field isIMGUIContainer, offset: 0x22, size: 0x1, def value: None
  bool ___isIMGUIContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Focusable, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ____focusable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ____tabIndex_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_DelegatesFocus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___m_ExcludeFromFocusRing) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Focusable, ___isIMGUIContainer) == 0x22, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Focusable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Focusable*, "UnityEngine.UIElements", "Focusable");
