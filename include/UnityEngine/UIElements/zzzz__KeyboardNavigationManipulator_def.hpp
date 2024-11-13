#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardNavigationManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KeyboardNavigationManipulator)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass4_0;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyboardNavigationManipulator);
MARK_VAL_T(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::KeyboardNavigationManipulator::<>c__DisplayClass4_0
struct CORDL_TYPE __KeyboardNavigationManipulator____c__DisplayClass4_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyboardNavigationManipulator____c__DisplayClass4_0();

  // Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: None }]
  constexpr __KeyboardNavigationManipulator____c__DisplayClass4_0(::UnityEngine::UIElements::KeyDownEvent* evt) noexcept;

  /// @brief Field evt, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::KeyDownEvent* evt;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5956 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass4_0, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass4_0, evt) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::KeyboardNavigationManipulator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::KeyboardNavigationManipulator*
class CORDL_TYPE KeyboardNavigationManipulator : public ::UnityEngine::UIElements::Manipulator {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass4_0;

  /// @brief Field m_Action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Action,
                      put = __cordl_internal_set_m_Action)) ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* m_Action;

  /// @brief Method Invoke, addr 0x49da21c, size 0x1c, virtual false, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation operation, ::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::KeyboardNavigationManipulator*
  New_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action);

  /// @brief Method OnKeyDown, addr 0x49da108, size 0x4c, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnNavigationCancel, addr 0x49da238, size 0x24, virtual false, abstract: false, final false
  inline void OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent* evt);

  /// @brief Method OnNavigationMove, addr 0x49da280, size 0xb4, virtual false, abstract: false, final false
  inline void OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* evt);

  /// @brief Method OnNavigationSubmit, addr 0x49da25c, size 0x24, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x49d9cf8, size 0x204, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x49d9f04, size 0x204, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method <OnKeyDown>g__GetOperation|4_0, addr 0x49da154, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::KeyboardNavigationOperation
  _OnKeyDown_g__GetOperation_4_0(ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass4_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*& __cordl_internal_get_m_Action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*> const&
  __cordl_internal_get_m_Action() const;

  constexpr void __cordl_internal_set_m_Action(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* value);

  /// @brief Method .ctor, addr 0x49d9cc8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardNavigationManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardNavigationManipulator(KeyboardNavigationManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardNavigationManipulator(KeyboardNavigationManipulator const&) = delete;

  /// @brief Field m_Action, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* ___m_Action;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5957 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyboardNavigationManipulator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardNavigationManipulator, ___m_Action) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyboardNavigationManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardNavigationManipulator*, "UnityEngine.UIElements", "KeyboardNavigationManipulator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass4_0, "UnityEngine.UIElements", "KeyboardNavigationManipulator/<>c__DisplayClass4_0");
