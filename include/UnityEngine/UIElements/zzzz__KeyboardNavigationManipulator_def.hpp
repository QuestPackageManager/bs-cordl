#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KeyboardNavigationManipulator)
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass5_0;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass6_0;
}
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass5_0;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyboardNavigationManipulator);
MARK_VAL_T(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0);
MARK_VAL_T(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6914))
// CS Name: ::KeyboardNavigationManipulator::<>c__DisplayClass5_0
struct CORDL_TYPE __KeyboardNavigationManipulator____c__DisplayClass5_0 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: None }]
  constexpr __KeyboardNavigationManipulator____c__DisplayClass5_0(::UnityEngine::UIElements::KeyDownEvent* evt) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyboardNavigationManipulator____c__DisplayClass5_0();

  /// @brief Field evt, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::KeyDownEvent* evt;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0, evt) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6915))
// CS Name: ::KeyboardNavigationManipulator::<>c__DisplayClass6_0
struct CORDL_TYPE __KeyboardNavigationManipulator____c__DisplayClass6_0 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: None }]
  constexpr __KeyboardNavigationManipulator____c__DisplayClass6_0(::UnityEngine::UIElements::KeyDownEvent* evt) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyboardNavigationManipulator____c__DisplayClass6_0();

  /// @brief Field evt, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::KeyDownEvent* evt;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0, evt) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::KeyboardNavigationManipulator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6991))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6916))
// CS Name: ::UnityEngine.UIElements::KeyboardNavigationManipulator*
class CORDL_TYPE KeyboardNavigationManipulator : public ::UnityEngine::UIElements::Manipulator {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0;

  using __c__DisplayClass5_0 = ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0;

  /// @brief Field m_Action, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Action, put = __set_m_Action))::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* m_Action;

  constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*& __get_m_Action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*> const& __get_m_Action() const;

  constexpr void __set_m_Action(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* value);

  static inline ::UnityEngine::UIElements::KeyboardNavigationManipulator*
  New_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action);

  /// @brief Method .ctor addr 0x2c5c6c4 size 0x28 virtual false final false
  inline void _ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action);

  /// @brief Method RegisterCallbacksOnTarget addr 0x2c5c6ec size 0x254 virtual true final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget addr 0x2c5c940 size 0x254 virtual true final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method OnKeyDown addr 0x2c5cb94 size 0xe8 virtual false final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnRuntimeKeyDown addr 0x2c5ccc8 size 0x4c virtual false final false
  inline void OnRuntimeKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnEditorKeyDown addr 0x2c5cc7c size 0x4c virtual false final false
  inline void OnEditorKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnNavigationCancel addr 0x2c5cee4 size 0x24 virtual false final false
  inline void OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent* evt);

  /// @brief Method OnNavigationSubmit addr 0x2c5cf08 size 0x24 virtual false final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method OnNavigationMove addr 0x2c5cf2c size 0x68 virtual false final false
  inline void OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* evt);

  /// @brief Method Invoke addr 0x2c5cdd0 size 0x20 virtual false final false
  inline void Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation operation, ::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method <OnRuntimeKeyDown>g__GetOperation|5_0 addr 0x2c5cd14 size 0xbc virtual false final false
  static inline ::UnityEngine::UIElements::KeyboardNavigationOperation
  _OnRuntimeKeyDown_g__GetOperation_5_0(ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <OnEditorKeyDown>g__GetOperation|6_0 addr 0x2c5cdf0 size 0xf4 virtual false final false
  static inline ::UnityEngine::UIElements::KeyboardNavigationOperation
  _OnEditorKeyDown_g__GetOperation_6_0(ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0> _cordl_fixed_empty_name_whitespace);

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardNavigationManipulator(KeyboardNavigationManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardNavigationManipulator(KeyboardNavigationManipulator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardNavigationManipulator();

public:
  /// @brief Field m_Action, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* ___m_Action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyboardNavigationManipulator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardNavigationManipulator, ___m_Action) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyboardNavigationManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardNavigationManipulator*, "UnityEngine.UIElements", "KeyboardNavigationManipulator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0, "UnityEngine.UIElements", "KeyboardNavigationManipulator/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0, "UnityEngine.UIElements", "KeyboardNavigationManipulator/<>c__DisplayClass6_0");
