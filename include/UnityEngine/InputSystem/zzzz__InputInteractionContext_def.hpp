#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputInteractionContext)
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__TriggerState;
}
namespace UnityEngine::InputSystem {
struct __InputInteractionContext__Flags;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputInteractionContext__Flags;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputInteractionContext__Flags);
MARK_VAL_T(::UnityEngine::InputSystem::InputInteractionContext);
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6205))
// CS Name: ::InputInteractionContext::Flags
struct CORDL_TYPE __InputInteractionContext__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputInteractionContext__Flags_Unwrapped
  enum struct ____InputInteractionContext__Flags_Unwrapped : int32_t {
    __E_TimerHasExpired = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputInteractionContext__Flags_Unwrapped() const noexcept {
    return static_cast<____InputInteractionContext__Flags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputInteractionContext__Flags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputInteractionContext__Flags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TimerHasExpired value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputInteractionContext__Flags const TimerHasExpired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputInteractionContext__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputInteractionContext__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputInteractionContext
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6176)), TypeDefinitionIndex(TypeDefinitionIndex(6205))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6206))
// CS Name: ::UnityEngine.InputSystem::InputInteractionContext
struct CORDL_TYPE InputInteractionContext {
public:
  // Declarations
  using Flags = ::UnityEngine::InputSystem::__InputInteractionContext__Flags;

  __declspec(property(get = get_action))::UnityEngine::InputSystem::InputAction* action;

  __declspec(property(get = get_control))::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_phase))::UnityEngine::InputSystem::InputActionPhase phase;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_startTime)) double_t startTime;

  __declspec(property(get = get_timerHasExpired, put = set_timerHasExpired)) bool timerHasExpired;

  __declspec(property(get = get_isWaiting)) bool isWaiting;

  __declspec(property(get = get_isStarted)) bool isStarted;

  __declspec(property(get = get_mapIndex)) int32_t mapIndex;

  __declspec(property(get = get_controlIndex)) int32_t controlIndex;

  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_interactionIndex)) int32_t interactionIndex;

  /// @brief Method get_action, addr 0x2a5db18, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_control, addr 0x2a5db3c, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_phase, addr 0x2a5db60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_time, addr 0x2a5db68, size 0x8, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_startTime, addr 0x2a5db70, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_timerHasExpired, addr 0x2a5db78, size 0xc, virtual false, abstract: false, final false
  inline bool get_timerHasExpired();

  /// @brief Method set_timerHasExpired, addr 0x2a5db84, size 0x1c, virtual false, abstract: false, final false
  inline void set_timerHasExpired(bool value);

  /// @brief Method get_isWaiting, addr 0x2a5dba0, size 0x10, virtual false, abstract: false, final false
  inline bool get_isWaiting();

  /// @brief Method get_isStarted, addr 0x2a5dbb0, size 0x10, virtual false, abstract: false, final false
  inline bool get_isStarted();

  /// @brief Method ComputeMagnitude, addr 0x2a5dbc0, size 0x8, virtual false, abstract: false, final false
  inline float_t ComputeMagnitude();

  /// @brief Method ControlIsActuated, addr 0x2a5dbc8, size 0xc, virtual false, abstract: false, final false
  inline bool ControlIsActuated(float_t threshold);

  /// @brief Method Started, addr 0x2a5dbd4, size 0x38, virtual false, abstract: false, final false
  inline void Started();

  /// @brief Method Performed, addr 0x2a5dc0c, size 0x40, virtual false, abstract: false, final false
  inline void Performed();

  /// @brief Method PerformedAndStayStarted, addr 0x2a5dc4c, size 0x40, virtual false, abstract: false, final false
  inline void PerformedAndStayStarted();

  /// @brief Method PerformedAndStayPerformed, addr 0x2a5dc8c, size 0x40, virtual false, abstract: false, final false
  inline void PerformedAndStayPerformed();

  /// @brief Method Canceled, addr 0x2a5dccc, size 0x40, virtual false, abstract: false, final false
  inline void Canceled();

  /// @brief Method Waiting, addr 0x2a5dd0c, size 0x40, virtual false, abstract: false, final false
  inline void Waiting();

  /// @brief Method SetTimeout, addr 0x2a5dd4c, size 0x24, virtual false, abstract: false, final false
  inline void SetTimeout(float_t seconds);

  /// @brief Method SetTotalTimeoutCompletionTime, addr 0x2a5dd70, size 0x94, virtual false, abstract: false, final false
  inline void SetTotalTimeoutCompletionTime(float_t seconds);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue();

  /// @brief Method get_mapIndex, addr 0x2a5de04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mapIndex();

  /// @brief Method get_controlIndex, addr 0x2a5de0c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_controlIndex();

  /// @brief Method get_bindingIndex, addr 0x2a5de18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method get_interactionIndex, addr 0x2a5de20, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_interactionIndex();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty:
  // "::UnityEngine::InputSystem::__InputInteractionContext__Flags", modifiers: "", def_value: None }, CppParam { name: "m_TriggerState", ty:
  // "::UnityEngine::InputSystem::__InputActionState__TriggerState", modifiers: "", def_value: None }]
  constexpr InputInteractionContext(::UnityEngine::InputSystem::InputActionState* m_State, ::UnityEngine::InputSystem::__InputInteractionContext__Flags m_Flags,
                                    ::UnityEngine::InputSystem::__InputActionState__TriggerState m_TriggerState) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputInteractionContext();

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_Flags, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputInteractionContext__Flags m_Flags;

  /// @brief Field m_TriggerState, offset: 0x10, size: 0x30, def value: None
  ::UnityEngine::InputSystem::__InputActionState__TriggerState m_TriggerState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputInteractionContext, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputInteractionContext, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputInteractionContext, m_Flags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputInteractionContext, m_TriggerState) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputInteractionContext__Flags, "UnityEngine.InputSystem", "InputInteractionContext/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputInteractionContext, "UnityEngine.InputSystem", "InputInteractionContext");
