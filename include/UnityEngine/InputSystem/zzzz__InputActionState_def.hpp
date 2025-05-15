#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TDelegate> struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class SavedStructState_1_TypedRestore;
}
namespace UnityEngine::InputSystem {
struct BindingState_InputActionState_Flags;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
struct InputActionState_ActionMapIndices;
}
namespace UnityEngine::InputSystem {
struct InputActionState_BindingState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_GlobalState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_InteractionState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_TriggerState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_UnmanagedMemory;
}
namespace UnityEngine::InputSystem {
class InputActionState___c;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem {
struct InputBindingResolver;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
template <typename TValue> class InputControl_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputProcessor;
}
namespace UnityEngine::InputSystem {
struct InteractionState_InputActionState_Flags;
}
namespace UnityEngine::InputSystem {
struct TriggerState_InputActionState_Flags;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct BindingState_InputActionState_Flags;
}
namespace UnityEngine::InputSystem {
struct InteractionState_InputActionState_Flags;
}
namespace UnityEngine::InputSystem {
struct TriggerState_InputActionState_Flags;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputActionState___c;
}
namespace UnityEngine::InputSystem {
struct InputActionState_ActionMapIndices;
}
namespace UnityEngine::InputSystem {
struct InputActionState_BindingState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_GlobalState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_InteractionState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_TriggerState;
}
namespace UnityEngine::InputSystem {
struct InputActionState_UnmanagedMemory;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::BindingState_InputActionState_Flags);
MARK_VAL_T(::UnityEngine::InputSystem::InteractionState_InputActionState_Flags);
MARK_VAL_T(::UnityEngine::InputSystem::TriggerState_InputActionState_Flags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionState);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionState___c);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionState_ActionMapIndices);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionState_BindingState);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionState_GlobalState);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionState_InteractionState);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionState_TriggerState);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/InteractionState/Flags
struct CORDL_TYPE InteractionState_InputActionState_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InteractionState_InputActionState_Flags_Unwrapped
  enum struct __InteractionState_InputActionState_Flags_Unwrapped : int32_t {
    __E_TimerRunning = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InteractionState_InputActionState_Flags_Unwrapped() const noexcept {
    return static_cast<__InteractionState_InputActionState_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionState_InputActionState_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InteractionState_InputActionState_Flags(int32_t value__) noexcept;

  /// @brief Field TimerRunning value: I32(1)
  static ::UnityEngine::InputSystem::InteractionState_InputActionState_Flags const TimerRunning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InteractionState_InputActionState_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InteractionState_InputActionState_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/InteractionState
#pragma pack(push, 0)
struct CORDL_TYPE InputActionState_InteractionState {
public:
  // Declarations
  using Flags = ::UnityEngine::InputSystem::InteractionState_InputActionState_Flags;

  __declspec(property(get = get_isTimerRunning, put = set_isTimerRunning)) bool isTimerRunning;

  /// @brief Field m_Flags, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) uint8_t m_Flags;

  /// @brief Field m_PerformedTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PerformedTime, put = __cordl_internal_set_m_PerformedTime)) double_t m_PerformedTime;

  /// @brief Field m_Phase, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Phase, put = __cordl_internal_set_m_Phase)) uint8_t m_Phase;

  /// @brief Field m_StartTime, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartTime, put = __cordl_internal_set_m_StartTime)) double_t m_StartTime;

  /// @brief Field m_TimerDuration, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimerDuration, put = __cordl_internal_set_m_TimerDuration)) float_t m_TimerDuration;

  /// @brief Field m_TimerMonitorIndex, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimerMonitorIndex, put = __cordl_internal_set_m_TimerMonitorIndex)) int64_t m_TimerMonitorIndex;

  /// @brief Field m_TimerStartTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimerStartTime, put = __cordl_internal_set_m_TimerStartTime)) double_t m_TimerStartTime;

  /// @brief Field m_TotalTimeoutCompletionTimeDone, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TotalTimeoutCompletionTimeDone, put = __cordl_internal_set_m_TotalTimeoutCompletionTimeDone)) float_t m_TotalTimeoutCompletionTimeDone;

  /// @brief Field m_TotalTimeoutCompletionTimeRemaining, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining,
                      put = __cordl_internal_set_m_TotalTimeoutCompletionTimeRemaining)) float_t m_TotalTimeoutCompletionTimeRemaining;

  /// @brief Field m_TriggerControlIndex, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_m_TriggerControlIndex, put = __cordl_internal_set_m_TriggerControlIndex)) uint16_t m_TriggerControlIndex;

  __declspec(property(get = get_performedTime, put = set_performedTime)) double_t performedTime;

  __declspec(property(get = get_phase, put = set_phase)) ::UnityEngine::InputSystem::InputActionPhase phase;

  __declspec(property(get = get_startTime, put = set_startTime)) double_t startTime;

  __declspec(property(get = get_timerDuration, put = set_timerDuration)) float_t timerDuration;

  __declspec(property(get = get_timerMonitorIndex, put = set_timerMonitorIndex)) int64_t timerMonitorIndex;

  __declspec(property(get = get_timerStartTime, put = set_timerStartTime)) double_t timerStartTime;

  __declspec(property(get = get_totalTimeoutCompletionDone, put = set_totalTimeoutCompletionDone)) float_t totalTimeoutCompletionDone;

  __declspec(property(get = get_totalTimeoutCompletionTimeRemaining, put = set_totalTimeoutCompletionTimeRemaining)) float_t totalTimeoutCompletionTimeRemaining;

  __declspec(property(get = get_triggerControlIndex, put = set_triggerControlIndex)) int32_t triggerControlIndex;

  constexpr uint8_t const& __cordl_internal_get_m_Flags() const;

  constexpr uint8_t& __cordl_internal_get_m_Flags();

  constexpr double_t const& __cordl_internal_get_m_PerformedTime() const;

  constexpr double_t& __cordl_internal_get_m_PerformedTime();

  constexpr uint8_t const& __cordl_internal_get_m_Phase() const;

  constexpr uint8_t& __cordl_internal_get_m_Phase();

  constexpr double_t const& __cordl_internal_get_m_StartTime() const;

  constexpr double_t& __cordl_internal_get_m_StartTime();

  constexpr float_t const& __cordl_internal_get_m_TimerDuration() const;

  constexpr float_t& __cordl_internal_get_m_TimerDuration();

  constexpr int64_t const& __cordl_internal_get_m_TimerMonitorIndex() const;

  constexpr int64_t& __cordl_internal_get_m_TimerMonitorIndex();

  constexpr double_t const& __cordl_internal_get_m_TimerStartTime() const;

  constexpr double_t& __cordl_internal_get_m_TimerStartTime();

  constexpr float_t const& __cordl_internal_get_m_TotalTimeoutCompletionTimeDone() const;

  constexpr float_t& __cordl_internal_get_m_TotalTimeoutCompletionTimeDone();

  constexpr float_t const& __cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining() const;

  constexpr float_t& __cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining();

  constexpr uint16_t const& __cordl_internal_get_m_TriggerControlIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_TriggerControlIndex();

  constexpr void __cordl_internal_set_m_Flags(uint8_t value);

  constexpr void __cordl_internal_set_m_PerformedTime(double_t value);

  constexpr void __cordl_internal_set_m_Phase(uint8_t value);

  constexpr void __cordl_internal_set_m_StartTime(double_t value);

  constexpr void __cordl_internal_set_m_TimerDuration(float_t value);

  constexpr void __cordl_internal_set_m_TimerMonitorIndex(int64_t value);

  constexpr void __cordl_internal_set_m_TimerStartTime(double_t value);

  constexpr void __cordl_internal_set_m_TotalTimeoutCompletionTimeDone(float_t value);

  constexpr void __cordl_internal_set_m_TotalTimeoutCompletionTimeRemaining(float_t value);

  constexpr void __cordl_internal_set_m_TriggerControlIndex(uint16_t value);

  /// @brief Method get_isTimerRunning, addr 0x455607c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isTimerRunning();

  /// @brief Method get_performedTime, addr 0x455ab98, size 0x8, virtual false, abstract: false, final false
  inline double_t get_performedTime();

  /// @brief Method get_phase, addr 0x455abf8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_startTime, addr 0x455ab88, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_timerDuration, addr 0x455abb8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timerDuration();

  /// @brief Method get_timerMonitorIndex, addr 0x455abe8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_timerMonitorIndex();

  /// @brief Method get_timerStartTime, addr 0x455aba8, size 0x8, virtual false, abstract: false, final false
  inline double_t get_timerStartTime();

  /// @brief Method get_totalTimeoutCompletionDone, addr 0x455abc8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_totalTimeoutCompletionDone();

  /// @brief Method get_totalTimeoutCompletionTimeRemaining, addr 0x455abd8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_totalTimeoutCompletionTimeRemaining();

  /// @brief Method get_triggerControlIndex, addr 0x45551ec, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_triggerControlIndex();

  /// @brief Method set_isTimerRunning, addr 0x45586b4, size 0x10, virtual false, abstract: false, final false
  inline void set_isTimerRunning(bool value);

  /// @brief Method set_performedTime, addr 0x455aba0, size 0x8, virtual false, abstract: false, final false
  inline void set_performedTime(double_t value);

  /// @brief Method set_phase, addr 0x4556004, size 0x8, virtual false, abstract: false, final false
  inline void set_phase(::UnityEngine::InputSystem::InputActionPhase value);

  /// @brief Method set_startTime, addr 0x455ab90, size 0x8, virtual false, abstract: false, final false
  inline void set_startTime(double_t value);

  /// @brief Method set_timerDuration, addr 0x455abc0, size 0x8, virtual false, abstract: false, final false
  inline void set_timerDuration(float_t value);

  /// @brief Method set_timerMonitorIndex, addr 0x455abf0, size 0x8, virtual false, abstract: false, final false
  inline void set_timerMonitorIndex(int64_t value);

  /// @brief Method set_timerStartTime, addr 0x455abb0, size 0x8, virtual false, abstract: false, final false
  inline void set_timerStartTime(double_t value);

  /// @brief Method set_totalTimeoutCompletionDone, addr 0x455abd0, size 0x8, virtual false, abstract: false, final false
  inline void set_totalTimeoutCompletionDone(float_t value);

  /// @brief Method set_totalTimeoutCompletionTimeRemaining, addr 0x455abe0, size 0x8, virtual false, abstract: false, final false
  inline void set_totalTimeoutCompletionTimeRemaining(float_t value);

  /// @brief Method set_triggerControlIndex, addr 0x455600c, size 0x70, virtual false, abstract: false, final false
  inline void set_triggerControlIndex(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState_InteractionState();

  // Ctor Parameters [CppParam { name: "m_TriggerControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerStartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_PerformedTime", ty: "double_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_TotalTimeoutCompletionTimeDone", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TotalTimeoutCompletionTimeRemaining", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerMonitorIndex", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr InputActionState_InteractionState(uint16_t m_TriggerControlIndex, uint8_t m_Phase, uint8_t m_Flags, float_t m_TimerDuration, double_t m_StartTime, double_t m_TimerStartTime,
                                              double_t m_PerformedTime, float_t m_TotalTimeoutCompletionTimeDone, float_t m_TotalTimeoutCompletionTimeRemaining, int64_t m_TimerMonitorIndex) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_TriggerControlIndex_padding[0x0];
      /// @brief Field m_TriggerControlIndex, offset: 0x0, size: 0x2, def value: None
      uint16_t ___m_TriggerControlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_TriggerControlIndex_padding_forAlignment[0x0];
      /// @brief Field m_TriggerControlIndex, offset: 0x0, size: 0x2, def value: None
      uint16_t ___m_TriggerControlIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___m_Phase_padding[0x2];
      /// @brief Field m_Phase, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_Phase;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___m_Phase_padding_forAlignment[0x2];
      /// @brief Field m_Phase, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_Phase_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___m_Flags_padding[0x3];
      /// @brief Field m_Flags, offset: 0x3, size: 0x1, def value: None
      uint8_t ___m_Flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___m_Flags_padding_forAlignment[0x3];
      /// @brief Field m_Flags, offset: 0x3, size: 0x1, def value: None
      uint8_t ___m_Flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_TimerDuration_padding[0x4];
      /// @brief Field m_TimerDuration, offset: 0x4, size: 0x4, def value: None
      float_t ___m_TimerDuration;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_TimerDuration_padding_forAlignment[0x4];
      /// @brief Field m_TimerDuration, offset: 0x4, size: 0x4, def value: None
      float_t ___m_TimerDuration_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_StartTime_padding[0x8];
      /// @brief Field m_StartTime, offset: 0x8, size: 0x8, def value: None
      double_t ___m_StartTime;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_StartTime_padding_forAlignment[0x8];
      /// @brief Field m_StartTime, offset: 0x8, size: 0x8, def value: None
      double_t ___m_StartTime_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___m_TimerStartTime_padding[0x10];
      /// @brief Field m_TimerStartTime, offset: 0x10, size: 0x8, def value: None
      double_t ___m_TimerStartTime;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___m_TimerStartTime_padding_forAlignment[0x10];
      /// @brief Field m_TimerStartTime, offset: 0x10, size: 0x8, def value: None
      double_t ___m_TimerStartTime_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___m_PerformedTime_padding[0x18];
      /// @brief Field m_PerformedTime, offset: 0x18, size: 0x8, def value: None
      double_t ___m_PerformedTime;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___m_PerformedTime_padding_forAlignment[0x18];
      /// @brief Field m_PerformedTime, offset: 0x18, size: 0x8, def value: None
      double_t ___m_PerformedTime_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x20
      uint8_t ___m_TotalTimeoutCompletionTimeDone_padding[0x20];
      /// @brief Field m_TotalTimeoutCompletionTimeDone, offset: 0x20, size: 0x4, def value: None
      float_t ___m_TotalTimeoutCompletionTimeDone;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x20 for alignment
      uint8_t ___m_TotalTimeoutCompletionTimeDone_padding_forAlignment[0x20];
      /// @brief Field m_TotalTimeoutCompletionTimeDone, offset: 0x20, size: 0x4, def value: None
      float_t ___m_TotalTimeoutCompletionTimeDone_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___m_TotalTimeoutCompletionTimeRemaining_padding[0x24];
      /// @brief Field m_TotalTimeoutCompletionTimeRemaining, offset: 0x24, size: 0x4, def value: None
      float_t ___m_TotalTimeoutCompletionTimeRemaining;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___m_TotalTimeoutCompletionTimeRemaining_padding_forAlignment[0x24];
      /// @brief Field m_TotalTimeoutCompletionTimeRemaining, offset: 0x24, size: 0x4, def value: None
      float_t ___m_TotalTimeoutCompletionTimeRemaining_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x28
      uint8_t ___m_TimerMonitorIndex_padding[0x28];
      /// @brief Field m_TimerMonitorIndex, offset: 0x28, size: 0x8, def value: None
      int64_t ___m_TimerMonitorIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x28 for alignment
      uint8_t ___m_TimerMonitorIndex_padding_forAlignment[0x28];
      /// @brief Field m_TimerMonitorIndex, offset: 0x28, size: 0x8, def value: None
      int64_t ___m_TimerMonitorIndex_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState_InteractionState, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/BindingState/Flags
struct CORDL_TYPE BindingState_InputActionState_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BindingState_InputActionState_Flags_Unwrapped
  enum struct __BindingState_InputActionState_Flags_Unwrapped : int32_t {
    __E_ChainsWithNext = static_cast<int32_t>(0x1),
    __E_EndOfChain = static_cast<int32_t>(0x2),
    __E_Composite = static_cast<int32_t>(0x4),
    __E_PartOfComposite = static_cast<int32_t>(0x8),
    __E_InitialStateCheckPending = static_cast<int32_t>(0x10),
    __E_WantsInitialStateCheck = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BindingState_InputActionState_Flags_Unwrapped() const noexcept {
    return static_cast<__BindingState_InputActionState_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingState_InputActionState_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BindingState_InputActionState_Flags(int32_t value__) noexcept;

  /// @brief Field ChainsWithNext value: I32(1)
  static ::UnityEngine::InputSystem::BindingState_InputActionState_Flags const ChainsWithNext;

  /// @brief Field Composite value: I32(4)
  static ::UnityEngine::InputSystem::BindingState_InputActionState_Flags const Composite;

  /// @brief Field EndOfChain value: I32(2)
  static ::UnityEngine::InputSystem::BindingState_InputActionState_Flags const EndOfChain;

  /// @brief Field InitialStateCheckPending value: I32(16)
  static ::UnityEngine::InputSystem::BindingState_InputActionState_Flags const InitialStateCheckPending;

  /// @brief Field PartOfComposite value: I32(8)
  static ::UnityEngine::InputSystem::BindingState_InputActionState_Flags const PartOfComposite;

  /// @brief Field WantsInitialStateCheck value: I32(32)
  static ::UnityEngine::InputSystem::BindingState_InputActionState_Flags const WantsInitialStateCheck;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::BindingState_InputActionState_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::BindingState_InputActionState_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/BindingState
#pragma pack(push, 0)
struct CORDL_TYPE InputActionState_BindingState {
public:
  // Declarations
  using Flags = ::UnityEngine::InputSystem::BindingState_InputActionState_Flags;

  /// @brief Field __padding, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get___padding, put = __cordl_internal_set___padding)) int32_t __padding;

  __declspec(property(get = get_actionIndex, put = set_actionIndex)) int32_t actionIndex;

  __declspec(property(get = get_chainsWithNext, put = set_chainsWithNext)) bool chainsWithNext;

  __declspec(property(get = get_compositeOrCompositeBindingIndex, put = set_compositeOrCompositeBindingIndex)) int32_t compositeOrCompositeBindingIndex;

  __declspec(property(get = get_controlCount, put = set_controlCount)) int32_t controlCount;

  __declspec(property(get = get_controlStartIndex, put = set_controlStartIndex)) int32_t controlStartIndex;

  __declspec(property(get = get_flags, put = set_flags)) ::UnityEngine::InputSystem::BindingState_InputActionState_Flags flags;

  __declspec(property(get = get_initialStateCheckPending, put = set_initialStateCheckPending)) bool initialStateCheckPending;

  __declspec(property(get = get_interactionCount, put = set_interactionCount)) int32_t interactionCount;

  __declspec(property(get = get_interactionStartIndex, put = set_interactionStartIndex)) int32_t interactionStartIndex;

  __declspec(property(get = get_isComposite, put = set_isComposite)) bool isComposite;

  __declspec(property(get = get_isEndOfChain, put = set_isEndOfChain)) bool isEndOfChain;

  __declspec(property(get = get_isPartOfChain)) bool isPartOfChain;

  __declspec(property(get = get_isPartOfComposite, put = set_isPartOfComposite)) bool isPartOfComposite;

  /// @brief Field m_ActionIndex, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_m_ActionIndex, put = __cordl_internal_set_m_ActionIndex)) uint16_t m_ActionIndex;

  /// @brief Field m_CompositeOrCompositeBindingIndex, offset 0x8, size 0x2
  __declspec(property(get = __cordl_internal_get_m_CompositeOrCompositeBindingIndex, put = __cordl_internal_set_m_CompositeOrCompositeBindingIndex)) uint16_t m_CompositeOrCompositeBindingIndex;

  /// @brief Field m_ControlCount, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ControlCount, put = __cordl_internal_set_m_ControlCount)) uint8_t m_ControlCount;

  /// @brief Field m_ControlStartIndex, offset 0xe, size 0x2
  __declspec(property(get = __cordl_internal_get_m_ControlStartIndex, put = __cordl_internal_set_m_ControlStartIndex)) uint16_t m_ControlStartIndex;

  /// @brief Field m_Flags, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) uint8_t m_Flags;

  /// @brief Field m_InteractionCount, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InteractionCount, put = __cordl_internal_set_m_InteractionCount)) uint8_t m_InteractionCount;

  /// @brief Field m_InteractionStartIndex, offset 0xc, size 0x2
  __declspec(property(get = __cordl_internal_get_m_InteractionStartIndex, put = __cordl_internal_set_m_InteractionStartIndex)) uint16_t m_InteractionStartIndex;

  /// @brief Field m_MapIndex, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MapIndex, put = __cordl_internal_set_m_MapIndex)) uint8_t m_MapIndex;

  /// @brief Field m_PartIndex, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PartIndex, put = __cordl_internal_set_m_PartIndex)) uint8_t m_PartIndex;

  /// @brief Field m_PressTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PressTime, put = __cordl_internal_set_m_PressTime)) double_t m_PressTime;

  /// @brief Field m_ProcessorCount, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProcessorCount, put = __cordl_internal_set_m_ProcessorCount)) uint8_t m_ProcessorCount;

  /// @brief Field m_ProcessorStartIndex, offset 0xa, size 0x2
  __declspec(property(get = __cordl_internal_get_m_ProcessorStartIndex, put = __cordl_internal_set_m_ProcessorStartIndex)) uint16_t m_ProcessorStartIndex;

  /// @brief Field m_TriggerEventIdForComposite, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TriggerEventIdForComposite, put = __cordl_internal_set_m_TriggerEventIdForComposite)) int32_t m_TriggerEventIdForComposite;

  __declspec(property(get = get_mapIndex, put = set_mapIndex)) int32_t mapIndex;

  __declspec(property(get = get_partIndex, put = set_partIndex)) int32_t partIndex;

  __declspec(property(get = get_pressTime, put = set_pressTime)) double_t pressTime;

  __declspec(property(get = get_processorCount, put = set_processorCount)) int32_t processorCount;

  __declspec(property(get = get_processorStartIndex, put = set_processorStartIndex)) int32_t processorStartIndex;

  __declspec(property(get = get_triggerEventIdForComposite, put = set_triggerEventIdForComposite)) int32_t triggerEventIdForComposite;

  __declspec(property(get = get_wantsInitialStateCheck, put = set_wantsInitialStateCheck)) bool wantsInitialStateCheck;

  constexpr int32_t const& __cordl_internal_get___padding() const;

  constexpr int32_t& __cordl_internal_get___padding();

  constexpr uint16_t const& __cordl_internal_get_m_ActionIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_ActionIndex();

  constexpr uint16_t const& __cordl_internal_get_m_CompositeOrCompositeBindingIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_CompositeOrCompositeBindingIndex();

  constexpr uint8_t const& __cordl_internal_get_m_ControlCount() const;

  constexpr uint8_t& __cordl_internal_get_m_ControlCount();

  constexpr uint16_t const& __cordl_internal_get_m_ControlStartIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_ControlStartIndex();

  constexpr uint8_t const& __cordl_internal_get_m_Flags() const;

  constexpr uint8_t& __cordl_internal_get_m_Flags();

  constexpr uint8_t const& __cordl_internal_get_m_InteractionCount() const;

  constexpr uint8_t& __cordl_internal_get_m_InteractionCount();

  constexpr uint16_t const& __cordl_internal_get_m_InteractionStartIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_InteractionStartIndex();

  constexpr uint8_t const& __cordl_internal_get_m_MapIndex() const;

  constexpr uint8_t& __cordl_internal_get_m_MapIndex();

  constexpr uint8_t const& __cordl_internal_get_m_PartIndex() const;

  constexpr uint8_t& __cordl_internal_get_m_PartIndex();

  constexpr double_t const& __cordl_internal_get_m_PressTime() const;

  constexpr double_t& __cordl_internal_get_m_PressTime();

  constexpr uint8_t const& __cordl_internal_get_m_ProcessorCount() const;

  constexpr uint8_t& __cordl_internal_get_m_ProcessorCount();

  constexpr uint16_t const& __cordl_internal_get_m_ProcessorStartIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_ProcessorStartIndex();

  constexpr int32_t const& __cordl_internal_get_m_TriggerEventIdForComposite() const;

  constexpr int32_t& __cordl_internal_get_m_TriggerEventIdForComposite();

  constexpr void __cordl_internal_set___padding(int32_t value);

  constexpr void __cordl_internal_set_m_ActionIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_CompositeOrCompositeBindingIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_ControlCount(uint8_t value);

  constexpr void __cordl_internal_set_m_ControlStartIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_Flags(uint8_t value);

  constexpr void __cordl_internal_set_m_InteractionCount(uint8_t value);

  constexpr void __cordl_internal_set_m_InteractionStartIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_MapIndex(uint8_t value);

  constexpr void __cordl_internal_set_m_PartIndex(uint8_t value);

  constexpr void __cordl_internal_set_m_PressTime(double_t value);

  constexpr void __cordl_internal_set_m_ProcessorCount(uint8_t value);

  constexpr void __cordl_internal_set_m_ProcessorStartIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_TriggerEventIdForComposite(int32_t value);

  /// @brief Method get_actionIndex, addr 0x4555cc4, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_actionIndex();

  /// @brief Method get_chainsWithNext, addr 0x455b184, size 0xc, virtual false, abstract: false, final false
  inline bool get_chainsWithNext();

  /// @brief Method get_compositeOrCompositeBindingIndex, addr 0x4553f90, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_compositeOrCompositeBindingIndex();

  /// @brief Method get_controlCount, addr 0x455ac94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_controlCount();

  /// @brief Method get_controlStartIndex, addr 0x455ac00, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_controlStartIndex();

  /// @brief Method get_flags, addr 0x455b174, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::BindingState_InputActionState_Flags get_flags();

  /// @brief Method get_initialStateCheckPending, addr 0x4557260, size 0xc, virtual false, abstract: false, final false
  inline bool get_initialStateCheckPending();

  /// @brief Method get_interactionCount, addr 0x455adc4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_interactionCount();

  /// @brief Method get_interactionStartIndex, addr 0x45551d8, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_interactionStartIndex();

  /// @brief Method get_isComposite, addr 0x4554bb0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isComposite();

  /// @brief Method get_isEndOfChain, addr 0x455b1a0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEndOfChain();

  /// @brief Method get_isPartOfChain, addr 0x455b1cc, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPartOfChain();

  /// @brief Method get_isPartOfComposite, addr 0x4553f84, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPartOfComposite();

  /// @brief Method get_mapIndex, addr 0x455b024, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mapIndex();

  /// @brief Method get_partIndex, addr 0x455b23c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_partIndex();

  /// @brief Method get_pressTime, addr 0x455b164, size 0x8, virtual false, abstract: false, final false
  inline double_t get_pressTime();

  /// @brief Method get_processorCount, addr 0x455aef4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_processorCount();

  /// @brief Method get_processorStartIndex, addr 0x45595ec, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_processorStartIndex();

  /// @brief Method get_triggerEventIdForComposite, addr 0x455b154, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_triggerEventIdForComposite();

  /// @brief Method get_wantsInitialStateCheck, addr 0x4555ce8, size 0xc, virtual false, abstract: false, final false
  inline bool get_wantsInitialStateCheck();

  /// @brief Method set_actionIndex, addr 0x455af88, size 0x9c, virtual false, abstract: false, final false
  inline void set_actionIndex(int32_t value);

  /// @brief Method set_chainsWithNext, addr 0x455b190, size 0x10, virtual false, abstract: false, final false
  inline void set_chainsWithNext(bool value);

  /// @brief Method set_compositeOrCompositeBindingIndex, addr 0x455b0b8, size 0x9c, virtual false, abstract: false, final false
  inline void set_compositeOrCompositeBindingIndex(int32_t value);

  /// @brief Method set_controlCount, addr 0x455ac9c, size 0x8c, virtual false, abstract: false, final false
  inline void set_controlCount(int32_t value);

  /// @brief Method set_controlStartIndex, addr 0x455ac08, size 0x8c, virtual false, abstract: false, final false
  inline void set_controlStartIndex(int32_t value);

  /// @brief Method set_flags, addr 0x455b17c, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::InputSystem::BindingState_InputActionState_Flags value);

  /// @brief Method set_initialStateCheckPending, addr 0x4555cf4, size 0x20, virtual false, abstract: false, final false
  inline void set_initialStateCheckPending(bool value);

  /// @brief Method set_interactionCount, addr 0x455adcc, size 0x8c, virtual false, abstract: false, final false
  inline void set_interactionCount(int32_t value);

  /// @brief Method set_interactionStartIndex, addr 0x455ad28, size 0x9c, virtual false, abstract: false, final false
  inline void set_interactionStartIndex(int32_t value);

  /// @brief Method set_isComposite, addr 0x455b1dc, size 0x20, virtual false, abstract: false, final false
  inline void set_isComposite(bool value);

  /// @brief Method set_isEndOfChain, addr 0x455b1ac, size 0x20, virtual false, abstract: false, final false
  inline void set_isEndOfChain(bool value);

  /// @brief Method set_isPartOfComposite, addr 0x455b1fc, size 0x20, virtual false, abstract: false, final false
  inline void set_isPartOfComposite(bool value);

  /// @brief Method set_mapIndex, addr 0x455b02c, size 0x8c, virtual false, abstract: false, final false
  inline void set_mapIndex(int32_t value);

  /// @brief Method set_partIndex, addr 0x455b244, size 0x8, virtual false, abstract: false, final false
  inline void set_partIndex(int32_t value);

  /// @brief Method set_pressTime, addr 0x455b16c, size 0x8, virtual false, abstract: false, final false
  inline void set_pressTime(double_t value);

  /// @brief Method set_processorCount, addr 0x455aefc, size 0x8c, virtual false, abstract: false, final false
  inline void set_processorCount(int32_t value);

  /// @brief Method set_processorStartIndex, addr 0x455ae58, size 0x9c, virtual false, abstract: false, final false
  inline void set_processorStartIndex(int32_t value);

  /// @brief Method set_triggerEventIdForComposite, addr 0x455b15c, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerEventIdForComposite(int32_t value);

  /// @brief Method set_wantsInitialStateCheck, addr 0x455b21c, size 0x20, virtual false, abstract: false, final false
  inline void set_wantsInitialStateCheck(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState_BindingState();

  // Ctor Parameters [CppParam { name: "m_ControlCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionCount", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "m_ProcessorCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_PartIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ActionIndex", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CompositeOrCompositeBindingIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorStartIndex", ty: "uint16_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_InteractionStartIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlStartIndex", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_PressTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_TriggerEventIdForComposite", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "__padding", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionState_BindingState(uint8_t m_ControlCount, uint8_t m_InteractionCount, uint8_t m_ProcessorCount, uint8_t m_MapIndex, uint8_t m_Flags, uint8_t m_PartIndex,
                                          uint16_t m_ActionIndex, uint16_t m_CompositeOrCompositeBindingIndex, uint16_t m_ProcessorStartIndex, uint16_t m_InteractionStartIndex,
                                          uint16_t m_ControlStartIndex, double_t m_PressTime, int32_t m_TriggerEventIdForComposite, int32_t __padding) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_ControlCount_padding[0x0];
      /// @brief Field m_ControlCount, offset: 0x0, size: 0x1, def value: None
      uint8_t ___m_ControlCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_ControlCount_padding_forAlignment[0x0];
      /// @brief Field m_ControlCount, offset: 0x0, size: 0x1, def value: None
      uint8_t ___m_ControlCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___m_InteractionCount_padding[0x1];
      /// @brief Field m_InteractionCount, offset: 0x1, size: 0x1, def value: None
      uint8_t ___m_InteractionCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___m_InteractionCount_padding_forAlignment[0x1];
      /// @brief Field m_InteractionCount, offset: 0x1, size: 0x1, def value: None
      uint8_t ___m_InteractionCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___m_ProcessorCount_padding[0x2];
      /// @brief Field m_ProcessorCount, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_ProcessorCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___m_ProcessorCount_padding_forAlignment[0x2];
      /// @brief Field m_ProcessorCount, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_ProcessorCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___m_MapIndex_padding[0x3];
      /// @brief Field m_MapIndex, offset: 0x3, size: 0x1, def value: None
      uint8_t ___m_MapIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___m_MapIndex_padding_forAlignment[0x3];
      /// @brief Field m_MapIndex, offset: 0x3, size: 0x1, def value: None
      uint8_t ___m_MapIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_Flags_padding[0x4];
      /// @brief Field m_Flags, offset: 0x4, size: 0x1, def value: None
      uint8_t ___m_Flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_Flags_padding_forAlignment[0x4];
      /// @brief Field m_Flags, offset: 0x4, size: 0x1, def value: None
      uint8_t ___m_Flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___m_PartIndex_padding[0x5];
      /// @brief Field m_PartIndex, offset: 0x5, size: 0x1, def value: None
      uint8_t ___m_PartIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___m_PartIndex_padding_forAlignment[0x5];
      /// @brief Field m_PartIndex, offset: 0x5, size: 0x1, def value: None
      uint8_t ___m_PartIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___m_ActionIndex_padding[0x6];
      /// @brief Field m_ActionIndex, offset: 0x6, size: 0x2, def value: None
      uint16_t ___m_ActionIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___m_ActionIndex_padding_forAlignment[0x6];
      /// @brief Field m_ActionIndex, offset: 0x6, size: 0x2, def value: None
      uint16_t ___m_ActionIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_CompositeOrCompositeBindingIndex_padding[0x8];
      /// @brief Field m_CompositeOrCompositeBindingIndex, offset: 0x8, size: 0x2, def value: None
      uint16_t ___m_CompositeOrCompositeBindingIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_CompositeOrCompositeBindingIndex_padding_forAlignment[0x8];
      /// @brief Field m_CompositeOrCompositeBindingIndex, offset: 0x8, size: 0x2, def value: None
      uint16_t ___m_CompositeOrCompositeBindingIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___m_ProcessorStartIndex_padding[0xa];
      /// @brief Field m_ProcessorStartIndex, offset: 0xa, size: 0x2, def value: None
      uint16_t ___m_ProcessorStartIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___m_ProcessorStartIndex_padding_forAlignment[0xa];
      /// @brief Field m_ProcessorStartIndex, offset: 0xa, size: 0x2, def value: None
      uint16_t ___m_ProcessorStartIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___m_InteractionStartIndex_padding[0xc];
      /// @brief Field m_InteractionStartIndex, offset: 0xc, size: 0x2, def value: None
      uint16_t ___m_InteractionStartIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___m_InteractionStartIndex_padding_forAlignment[0xc];
      /// @brief Field m_InteractionStartIndex, offset: 0xc, size: 0x2, def value: None
      uint16_t ___m_InteractionStartIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___m_ControlStartIndex_padding[0xe];
      /// @brief Field m_ControlStartIndex, offset: 0xe, size: 0x2, def value: None
      uint16_t ___m_ControlStartIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___m_ControlStartIndex_padding_forAlignment[0xe];
      /// @brief Field m_ControlStartIndex, offset: 0xe, size: 0x2, def value: None
      uint16_t ___m_ControlStartIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___m_PressTime_padding[0x10];
      /// @brief Field m_PressTime, offset: 0x10, size: 0x8, def value: None
      double_t ___m_PressTime;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___m_PressTime_padding_forAlignment[0x10];
      /// @brief Field m_PressTime, offset: 0x10, size: 0x8, def value: None
      double_t ___m_PressTime_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___m_TriggerEventIdForComposite_padding[0x18];
      /// @brief Field m_TriggerEventIdForComposite, offset: 0x18, size: 0x4, def value: None
      int32_t ___m_TriggerEventIdForComposite;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___m_TriggerEventIdForComposite_padding_forAlignment[0x18];
      /// @brief Field m_TriggerEventIdForComposite, offset: 0x18, size: 0x4, def value: None
      int32_t ___m_TriggerEventIdForComposite_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t _____padding_padding[0x1c];
      /// @brief Field __padding, offset: 0x1c, size: 0x4, def value: None
      int32_t _____padding;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t _____padding_padding_forAlignment[0x1c];
      /// @brief Field __padding, offset: 0x1c, size: 0x4, def value: None
      int32_t _____padding_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState_BindingState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/TriggerState/Flags
struct CORDL_TYPE TriggerState_InputActionState_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TriggerState_InputActionState_Flags_Unwrapped
  enum struct __TriggerState_InputActionState_Flags_Unwrapped : int32_t {
    __E_HaveMagnitude = static_cast<int32_t>(0x1),
    __E_PassThrough = static_cast<int32_t>(0x2),
    __E_MayNeedConflictResolution = static_cast<int32_t>(0x4),
    __E_HasMultipleConcurrentActuations = static_cast<int32_t>(0x8),
    __E_InProcessing = static_cast<int32_t>(0x10),
    __E_Button = static_cast<int32_t>(0x20),
    __E_Pressed = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TriggerState_InputActionState_Flags_Unwrapped() const noexcept {
    return static_cast<__TriggerState_InputActionState_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerState_InputActionState_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TriggerState_InputActionState_Flags(int32_t value__) noexcept;

  /// @brief Field Button value: I32(32)
  static ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags const Button;

  /// @brief Field HasMultipleConcurrentActuations value: I32(8)
  static ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags const HasMultipleConcurrentActuations;

  /// @brief Field HaveMagnitude value: I32(1)
  static ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags const HaveMagnitude;

  /// @brief Field InProcessing value: I32(16)
  static ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags const InProcessing;

  /// @brief Field MayNeedConflictResolution value: I32(4)
  static ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags const MayNeedConflictResolution;

  /// @brief Field PassThrough value: I32(2)
  static ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags const PassThrough;

  /// @brief Field Pressed value: I32(64)
  static ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags const Pressed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::TriggerState_InputActionState_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::TriggerState_InputActionState_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/TriggerState
#pragma pack(push, 0)
struct CORDL_TYPE InputActionState_TriggerState {
public:
  // Declarations
  using Flags = ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags;

  __declspec(property(get = get_bindingIndex, put = set_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_controlIndex, put = set_controlIndex)) int32_t controlIndex;

  __declspec(property(get = get_flags, put = set_flags)) ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags flags;

  __declspec(property(get = get_hasMultipleConcurrentActuations, put = set_hasMultipleConcurrentActuations)) bool hasMultipleConcurrentActuations;

  __declspec(property(get = get_haveMagnitude)) bool haveMagnitude;

  __declspec(property(get = get_inProcessing, put = set_inProcessing)) bool inProcessing;

  __declspec(property(get = get_interactionIndex, put = set_interactionIndex)) int32_t interactionIndex;

  __declspec(property(get = get_isButton, put = set_isButton)) bool isButton;

  __declspec(property(get = get_isCanceled)) bool isCanceled;

  __declspec(property(get = get_isDisabled)) bool isDisabled;

  __declspec(property(get = get_isPassThrough, put = set_isPassThrough)) bool isPassThrough;

  __declspec(property(get = get_isPerformed)) bool isPerformed;

  __declspec(property(get = get_isPressed, put = set_isPressed)) bool isPressed;

  __declspec(property(get = get_isStarted)) bool isStarted;

  __declspec(property(get = get_isWaiting)) bool isWaiting;

  __declspec(property(get = get_lastCanceledInUpdate, put = set_lastCanceledInUpdate)) uint32_t lastCanceledInUpdate;

  __declspec(property(get = get_lastPerformedInUpdate, put = set_lastPerformedInUpdate)) uint32_t lastPerformedInUpdate;

  /// @brief Field m_BindingIndex, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get_m_BindingIndex, put = __cordl_internal_set_m_BindingIndex)) uint16_t m_BindingIndex;

  /// @brief Field m_ControlIndex, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_ControlIndex, put = __cordl_internal_set_m_ControlIndex)) uint16_t m_ControlIndex;

  /// @brief Field m_Flags, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) uint8_t m_Flags;

  /// @brief Field m_InteractionIndex, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get_m_InteractionIndex, put = __cordl_internal_set_m_InteractionIndex)) uint16_t m_InteractionIndex;

  /// @brief Field m_LastCanceledInUpdate, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastCanceledInUpdate, put = __cordl_internal_set_m_LastCanceledInUpdate)) uint32_t m_LastCanceledInUpdate;

  /// @brief Field m_LastPerformedInUpdate, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastPerformedInUpdate, put = __cordl_internal_set_m_LastPerformedInUpdate)) uint32_t m_LastPerformedInUpdate;

  /// @brief Field m_Magnitude, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Magnitude, put = __cordl_internal_set_m_Magnitude)) float_t m_Magnitude;

  /// @brief Field m_MapIndex, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MapIndex, put = __cordl_internal_set_m_MapIndex)) uint8_t m_MapIndex;

  /// @brief Field m_Phase, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Phase, put = __cordl_internal_set_m_Phase)) uint8_t m_Phase;

  /// @brief Field m_PressedInUpdate, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PressedInUpdate, put = __cordl_internal_set_m_PressedInUpdate)) uint32_t m_PressedInUpdate;

  /// @brief Field m_ReleasedInUpdate, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReleasedInUpdate, put = __cordl_internal_set_m_ReleasedInUpdate)) uint32_t m_ReleasedInUpdate;

  /// @brief Field m_StartTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartTime, put = __cordl_internal_set_m_StartTime)) double_t m_StartTime;

  /// @brief Field m_Time, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Time, put = __cordl_internal_set_m_Time)) double_t m_Time;

  __declspec(property(get = get_magnitude, put = set_magnitude)) float_t magnitude;

  __declspec(property(get = get_mapIndex, put = set_mapIndex)) int32_t mapIndex;

  __declspec(property(get = get_mayNeedConflictResolution, put = set_mayNeedConflictResolution)) bool mayNeedConflictResolution;

  __declspec(property(get = get_phase, put = set_phase)) ::UnityEngine::InputSystem::InputActionPhase phase;

  __declspec(property(get = get_pressedInUpdate, put = set_pressedInUpdate)) uint32_t pressedInUpdate;

  __declspec(property(get = get_releasedInUpdate, put = set_releasedInUpdate)) uint32_t releasedInUpdate;

  __declspec(property(get = get_startTime, put = set_startTime)) double_t startTime;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  constexpr uint16_t const& __cordl_internal_get_m_BindingIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_BindingIndex();

  constexpr uint16_t const& __cordl_internal_get_m_ControlIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_ControlIndex();

  constexpr uint8_t const& __cordl_internal_get_m_Flags() const;

  constexpr uint8_t& __cordl_internal_get_m_Flags();

  constexpr uint16_t const& __cordl_internal_get_m_InteractionIndex() const;

  constexpr uint16_t& __cordl_internal_get_m_InteractionIndex();

  constexpr uint32_t const& __cordl_internal_get_m_LastCanceledInUpdate() const;

  constexpr uint32_t& __cordl_internal_get_m_LastCanceledInUpdate();

  constexpr uint32_t const& __cordl_internal_get_m_LastPerformedInUpdate() const;

  constexpr uint32_t& __cordl_internal_get_m_LastPerformedInUpdate();

  constexpr float_t const& __cordl_internal_get_m_Magnitude() const;

  constexpr float_t& __cordl_internal_get_m_Magnitude();

  constexpr uint8_t const& __cordl_internal_get_m_MapIndex() const;

  constexpr uint8_t& __cordl_internal_get_m_MapIndex();

  constexpr uint8_t const& __cordl_internal_get_m_Phase() const;

  constexpr uint8_t& __cordl_internal_get_m_Phase();

  constexpr uint32_t const& __cordl_internal_get_m_PressedInUpdate() const;

  constexpr uint32_t& __cordl_internal_get_m_PressedInUpdate();

  constexpr uint32_t const& __cordl_internal_get_m_ReleasedInUpdate() const;

  constexpr uint32_t& __cordl_internal_get_m_ReleasedInUpdate();

  constexpr double_t const& __cordl_internal_get_m_StartTime() const;

  constexpr double_t& __cordl_internal_get_m_StartTime();

  constexpr double_t const& __cordl_internal_get_m_Time() const;

  constexpr double_t& __cordl_internal_get_m_Time();

  constexpr void __cordl_internal_set_m_BindingIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_ControlIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_Flags(uint8_t value);

  constexpr void __cordl_internal_set_m_InteractionIndex(uint16_t value);

  constexpr void __cordl_internal_set_m_LastCanceledInUpdate(uint32_t value);

  constexpr void __cordl_internal_set_m_LastPerformedInUpdate(uint32_t value);

  constexpr void __cordl_internal_set_m_Magnitude(float_t value);

  constexpr void __cordl_internal_set_m_MapIndex(uint8_t value);

  constexpr void __cordl_internal_set_m_Phase(uint8_t value);

  constexpr void __cordl_internal_set_m_PressedInUpdate(uint32_t value);

  constexpr void __cordl_internal_set_m_ReleasedInUpdate(uint32_t value);

  constexpr void __cordl_internal_set_m_StartTime(double_t value);

  constexpr void __cordl_internal_set_m_Time(double_t value);

  /// @brief Method get_bindingIndex, addr 0x455b2d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method get_controlIndex, addr 0x45551c4, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_controlIndex();

  /// @brief Method get_flags, addr 0x455b338, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags get_flags();

  /// @brief Method get_hasMultipleConcurrentActuations, addr 0x4558600, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasMultipleConcurrentActuations();

  /// @brief Method get_haveMagnitude, addr 0x455b2bc, size 0xc, virtual false, abstract: false, final false
  inline bool get_haveMagnitude();

  /// @brief Method get_inProcessing, addr 0x4558e34, size 0xc, virtual false, abstract: false, final false
  inline bool get_inProcessing();

  /// @brief Method get_interactionIndex, addr 0x4555f80, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_interactionIndex();

  /// @brief Method get_isButton, addr 0x4557a60, size 0xc, virtual false, abstract: false, final false
  inline bool get_isButton();

  /// @brief Method get_isCanceled, addr 0x455b284, size 0x10, virtual false, abstract: false, final false
  inline bool get_isCanceled();

  /// @brief Method get_isDisabled, addr 0x4555cd8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDisabled();

  /// @brief Method get_isPassThrough, addr 0x4556758, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPassThrough();

  /// @brief Method get_isPerformed, addr 0x455b274, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPerformed();

  /// @brief Method get_isPressed, addr 0x45585e8, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPressed();

  /// @brief Method get_isStarted, addr 0x455b264, size 0x10, virtual false, abstract: false, final false
  inline bool get_isStarted();

  /// @brief Method get_isWaiting, addr 0x455b254, size 0x10, virtual false, abstract: false, final false
  inline bool get_isWaiting();

  /// @brief Method get_lastCanceledInUpdate, addr 0x455b2e8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_lastCanceledInUpdate();

  /// @brief Method get_lastPerformedInUpdate, addr 0x455b2d8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_lastPerformedInUpdate();

  /// @brief Method get_magnitude, addr 0x455b2b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_mapIndex, addr 0x455b2c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mapIndex();

  /// @brief Method get_mayNeedConflictResolution, addr 0x45585f4, size 0xc, virtual false, abstract: false, final false
  inline bool get_mayNeedConflictResolution();

  /// @brief Method get_phase, addr 0x455b24c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_pressedInUpdate, addr 0x455b2f8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_pressedInUpdate();

  /// @brief Method get_releasedInUpdate, addr 0x455b308, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_releasedInUpdate();

  /// @brief Method get_startTime, addr 0x455b2a4, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_time, addr 0x455b294, size 0x8, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method set_bindingIndex, addr 0x45560e8, size 0x60, virtual false, abstract: false, final false
  inline void set_bindingIndex(int32_t value);

  /// @brief Method set_controlIndex, addr 0x4555efc, size 0x70, virtual false, abstract: false, final false
  inline void set_controlIndex(int32_t value);

  /// @brief Method set_flags, addr 0x4558e40, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::InputSystem::TriggerState_InputActionState_Flags value);

  /// @brief Method set_hasMultipleConcurrentActuations, addr 0x4556ad0, size 0x20, virtual false, abstract: false, final false
  inline void set_hasMultipleConcurrentActuations(bool value);

  /// @brief Method set_inProcessing, addr 0x4556af0, size 0x20, virtual false, abstract: false, final false
  inline void set_inProcessing(bool value);

  /// @brief Method set_interactionIndex, addr 0x4555f94, size 0x70, virtual false, abstract: false, final false
  inline void set_interactionIndex(int32_t value);

  /// @brief Method set_isButton, addr 0x4557a6c, size 0x20, virtual false, abstract: false, final false
  inline void set_isButton(bool value);

  /// @brief Method set_isPassThrough, addr 0x4557a40, size 0x20, virtual false, abstract: false, final false
  inline void set_isPassThrough(bool value);

  /// @brief Method set_isPressed, addr 0x4556b10, size 0x20, virtual false, abstract: false, final false
  inline void set_isPressed(bool value);

  /// @brief Method set_lastCanceledInUpdate, addr 0x455b2f0, size 0x8, virtual false, abstract: false, final false
  inline void set_lastCanceledInUpdate(uint32_t value);

  /// @brief Method set_lastPerformedInUpdate, addr 0x455b2e0, size 0x8, virtual false, abstract: false, final false
  inline void set_lastPerformedInUpdate(uint32_t value);

  /// @brief Method set_magnitude, addr 0x4555f6c, size 0x14, virtual false, abstract: false, final false
  inline void set_magnitude(float_t value);

  /// @brief Method set_mapIndex, addr 0x4556088, size 0x60, virtual false, abstract: false, final false
  inline void set_mapIndex(int32_t value);

  /// @brief Method set_mayNeedConflictResolution, addr 0x455b318, size 0x20, virtual false, abstract: false, final false
  inline void set_mayNeedConflictResolution(bool value);

  /// @brief Method set_phase, addr 0x4555cbc, size 0x8, virtual false, abstract: false, final false
  inline void set_phase(::UnityEngine::InputSystem::InputActionPhase value);

  /// @brief Method set_pressedInUpdate, addr 0x455b300, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedInUpdate(uint32_t value);

  /// @brief Method set_releasedInUpdate, addr 0x455b310, size 0x8, virtual false, abstract: false, final false
  inline void set_releasedInUpdate(uint32_t value);

  /// @brief Method set_startTime, addr 0x455b2ac, size 0x8, virtual false, abstract: false, final false
  inline void set_startTime(double_t value);

  /// @brief Method set_time, addr 0x455b29c, size 0x8, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState_TriggerState();

  // Ctor Parameters [CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Time", ty: "double_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Magnitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_LastPerformedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_LastCanceledInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_PressedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ReleasedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputActionState_TriggerState(uint8_t m_Phase, uint8_t m_Flags, uint8_t m_MapIndex, uint16_t m_ControlIndex, double_t m_Time, double_t m_StartTime, uint16_t m_BindingIndex,
                                          uint16_t m_InteractionIndex, float_t m_Magnitude, uint32_t m_LastPerformedInUpdate, uint32_t m_LastCanceledInUpdate, uint32_t m_PressedInUpdate,
                                          uint32_t m_ReleasedInUpdate) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Phase_padding[0x0];
      /// @brief Field m_Phase, offset: 0x0, size: 0x1, def value: None
      uint8_t ___m_Phase;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Phase_padding_forAlignment[0x0];
      /// @brief Field m_Phase, offset: 0x0, size: 0x1, def value: None
      uint8_t ___m_Phase_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___m_Flags_padding[0x1];
      /// @brief Field m_Flags, offset: 0x1, size: 0x1, def value: None
      uint8_t ___m_Flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___m_Flags_padding_forAlignment[0x1];
      /// @brief Field m_Flags, offset: 0x1, size: 0x1, def value: None
      uint8_t ___m_Flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___m_MapIndex_padding[0x2];
      /// @brief Field m_MapIndex, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_MapIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___m_MapIndex_padding_forAlignment[0x2];
      /// @brief Field m_MapIndex, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_MapIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_ControlIndex_padding[0x4];
      /// @brief Field m_ControlIndex, offset: 0x4, size: 0x2, def value: None
      uint16_t ___m_ControlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_ControlIndex_padding_forAlignment[0x4];
      /// @brief Field m_ControlIndex, offset: 0x4, size: 0x2, def value: None
      uint16_t ___m_ControlIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_Time_padding[0x8];
      /// @brief Field m_Time, offset: 0x8, size: 0x8, def value: None
      double_t ___m_Time;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_Time_padding_forAlignment[0x8];
      /// @brief Field m_Time, offset: 0x8, size: 0x8, def value: None
      double_t ___m_Time_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___m_StartTime_padding[0x10];
      /// @brief Field m_StartTime, offset: 0x10, size: 0x8, def value: None
      double_t ___m_StartTime;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___m_StartTime_padding_forAlignment[0x10];
      /// @brief Field m_StartTime, offset: 0x10, size: 0x8, def value: None
      double_t ___m_StartTime_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___m_BindingIndex_padding[0x18];
      /// @brief Field m_BindingIndex, offset: 0x18, size: 0x2, def value: None
      uint16_t ___m_BindingIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___m_BindingIndex_padding_forAlignment[0x18];
      /// @brief Field m_BindingIndex, offset: 0x18, size: 0x2, def value: None
      uint16_t ___m_BindingIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1a
      uint8_t ___m_InteractionIndex_padding[0x1a];
      /// @brief Field m_InteractionIndex, offset: 0x1a, size: 0x2, def value: None
      uint16_t ___m_InteractionIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1a for alignment
      uint8_t ___m_InteractionIndex_padding_forAlignment[0x1a];
      /// @brief Field m_InteractionIndex, offset: 0x1a, size: 0x2, def value: None
      uint16_t ___m_InteractionIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___m_Magnitude_padding[0x1c];
      /// @brief Field m_Magnitude, offset: 0x1c, size: 0x4, def value: None
      float_t ___m_Magnitude;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___m_Magnitude_padding_forAlignment[0x1c];
      /// @brief Field m_Magnitude, offset: 0x1c, size: 0x4, def value: None
      float_t ___m_Magnitude_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x20
      uint8_t ___m_LastPerformedInUpdate_padding[0x20];
      /// @brief Field m_LastPerformedInUpdate, offset: 0x20, size: 0x4, def value: None
      uint32_t ___m_LastPerformedInUpdate;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x20 for alignment
      uint8_t ___m_LastPerformedInUpdate_padding_forAlignment[0x20];
      /// @brief Field m_LastPerformedInUpdate, offset: 0x20, size: 0x4, def value: None
      uint32_t ___m_LastPerformedInUpdate_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___m_LastCanceledInUpdate_padding[0x24];
      /// @brief Field m_LastCanceledInUpdate, offset: 0x24, size: 0x4, def value: None
      uint32_t ___m_LastCanceledInUpdate;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___m_LastCanceledInUpdate_padding_forAlignment[0x24];
      /// @brief Field m_LastCanceledInUpdate, offset: 0x24, size: 0x4, def value: None
      uint32_t ___m_LastCanceledInUpdate_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x28
      uint8_t ___m_PressedInUpdate_padding[0x28];
      /// @brief Field m_PressedInUpdate, offset: 0x28, size: 0x4, def value: None
      uint32_t ___m_PressedInUpdate;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x28 for alignment
      uint8_t ___m_PressedInUpdate_padding_forAlignment[0x28];
      /// @brief Field m_PressedInUpdate, offset: 0x28, size: 0x4, def value: None
      uint32_t ___m_PressedInUpdate_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2c
      uint8_t ___m_ReleasedInUpdate_padding[0x2c];
      /// @brief Field m_ReleasedInUpdate, offset: 0x2c, size: 0x4, def value: None
      uint32_t ___m_ReleasedInUpdate;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2c for alignment
      uint8_t ___m_ReleasedInUpdate_padding_forAlignment[0x2c];
      /// @brief Field m_ReleasedInUpdate, offset: 0x2c, size: 0x4, def value: None
      uint32_t ___m_ReleasedInUpdate_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field kMaxNumBindings offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumBindings{ static_cast<int32_t>(0xffff) };

  /// @brief Field kMaxNumControls offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumControls{ static_cast<int32_t>(0xffff) };

  /// @brief Field kMaxNumMaps offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumMaps{ static_cast<int32_t>(0xff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState_TriggerState, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct CORDL_TYPE InputActionState_ActionMapIndices {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState_ActionMapIndices();

  // Ctor Parameters [CppParam { name: "actionStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "controlStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingStartIndex",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interactionStartIndex", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "processorStartIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "processorCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compositeStartIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionState_ActionMapIndices(int32_t actionStartIndex, int32_t actionCount, int32_t controlStartIndex, int32_t controlCount, int32_t bindingStartIndex, int32_t bindingCount,
                                              int32_t interactionStartIndex, int32_t interactionCount, int32_t processorStartIndex, int32_t processorCount, int32_t compositeStartIndex,
                                              int32_t compositeCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field actionStartIndex, offset: 0x0, size: 0x4, def value: None
  int32_t actionStartIndex;

  /// @brief Field actionCount, offset: 0x4, size: 0x4, def value: None
  int32_t actionCount;

  /// @brief Field controlStartIndex, offset: 0x8, size: 0x4, def value: None
  int32_t controlStartIndex;

  /// @brief Field controlCount, offset: 0xc, size: 0x4, def value: None
  int32_t controlCount;

  /// @brief Field bindingStartIndex, offset: 0x10, size: 0x4, def value: None
  int32_t bindingStartIndex;

  /// @brief Field bindingCount, offset: 0x14, size: 0x4, def value: None
  int32_t bindingCount;

  /// @brief Field interactionStartIndex, offset: 0x18, size: 0x4, def value: None
  int32_t interactionStartIndex;

  /// @brief Field interactionCount, offset: 0x1c, size: 0x4, def value: None
  int32_t interactionCount;

  /// @brief Field processorStartIndex, offset: 0x20, size: 0x4, def value: None
  int32_t processorStartIndex;

  /// @brief Field processorCount, offset: 0x24, size: 0x4, def value: None
  int32_t processorCount;

  /// @brief Field compositeStartIndex, offset: 0x28, size: 0x4, def value: None
  int32_t compositeStartIndex;

  /// @brief Field compositeCount, offset: 0x2c, size: 0x4, def value: None
  int32_t compositeCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, actionStartIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, actionCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, controlStartIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, controlCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, bindingStartIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, bindingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, interactionStartIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, interactionCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, processorStartIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, processorCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, compositeStartIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, compositeCount) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState_ActionMapIndices, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.IDisposable
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct CORDL_TYPE InputActionState_UnmanagedMemory {
public:
  // Declarations
  __declspec(property(get = get_isAllocated)) bool isAllocated;

  __declspec(property(get = get_sizeInBytes)) int32_t sizeInBytes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Allocate, addr 0x455b39c, size 0x128, virtual false, abstract: false, final false
  inline void Allocate(int32_t mapCount, int32_t actionCount, int32_t bindingCount, int32_t controlCount, int32_t interactionCount, int32_t compositeCount);

  /// @brief Method Clone, addr 0x4554618, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory Clone();

  /// @brief Method CopyDataFrom, addr 0x455b4c4, size 0x16c, virtual false, abstract: false, final false
  inline void CopyDataFrom(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory);

  /// @brief Method Dispose, addr 0x455448c, size 0x3c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_isAllocated, addr 0x455b340, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAllocated();

  /// @brief Method get_sizeInBytes, addr 0x455b350, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_sizeInBytes();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState_UnmanagedMemory();

  // Ctor Parameters [CppParam { name: "basePtr", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "bindingCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compositeCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_TriggerState>", modifiers: "", def_value:
  // None }, CppParam { name: "bindingStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState>", modifiers: "", def_value: None }, CppParam { name:
  // "interactionStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_InteractionState>", modifiers: "", def_value: None }, CppParam { name: "controlMagnitudes", ty:
  // "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam { name: "compositeMagnitudes", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam {
  // name: "enabledControls", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "actionBindingIndicesAndCounts", ty: "::cordl_internals::Ptr<uint16_t>",
  // modifiers: "", def_value: None }, CppParam { name: "actionBindingIndices", ty: "::cordl_internals::Ptr<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "controlIndexToBindingIndex",
  // ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "controlGroupingAndComplexity", ty: "::cordl_internals::Ptr<uint16_t>", modifiers: "", def_value: None },
  // CppParam { name: "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mapIndices", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_ActionMapIndices>", modifiers: "", def_value: None }]
  constexpr InputActionState_UnmanagedMemory(::cordl_internals::Ptr<void> basePtr, int32_t mapCount, int32_t actionCount, int32_t interactionCount, int32_t bindingCount, int32_t controlCount,
                                             int32_t compositeCount, ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_TriggerState> actionStates,
                                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState> bindingStates,
                                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_InteractionState> interactionStates, ::cordl_internals::Ptr<float_t> controlMagnitudes,
                                             ::cordl_internals::Ptr<float_t> compositeMagnitudes, ::cordl_internals::Ptr<int32_t> enabledControls,
                                             ::cordl_internals::Ptr<uint16_t> actionBindingIndicesAndCounts, ::cordl_internals::Ptr<uint16_t> actionBindingIndices,
                                             ::cordl_internals::Ptr<int32_t> controlIndexToBindingIndex, ::cordl_internals::Ptr<uint16_t> controlGroupingAndComplexity, bool controlGroupingInitialized,
                                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_ActionMapIndices> mapIndices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field basePtr, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> basePtr;

  /// @brief Field mapCount, offset: 0x8, size: 0x4, def value: None
  int32_t mapCount;

  /// @brief Field actionCount, offset: 0xc, size: 0x4, def value: None
  int32_t actionCount;

  /// @brief Field interactionCount, offset: 0x10, size: 0x4, def value: None
  int32_t interactionCount;

  /// @brief Field bindingCount, offset: 0x14, size: 0x4, def value: None
  int32_t bindingCount;

  /// @brief Field controlCount, offset: 0x18, size: 0x4, def value: None
  int32_t controlCount;

  /// @brief Field compositeCount, offset: 0x1c, size: 0x4, def value: None
  int32_t compositeCount;

  /// @brief Field actionStates, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_TriggerState> actionStates;

  /// @brief Field bindingStates, offset: 0x28, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState> bindingStates;

  /// @brief Field interactionStates, offset: 0x30, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_InteractionState> interactionStates;

  /// @brief Field controlMagnitudes, offset: 0x38, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> controlMagnitudes;

  /// @brief Field compositeMagnitudes, offset: 0x40, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> compositeMagnitudes;

  /// @brief Field enabledControls, offset: 0x48, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> enabledControls;

  /// @brief Field actionBindingIndicesAndCounts, offset: 0x50, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint16_t> actionBindingIndicesAndCounts;

  /// @brief Field actionBindingIndices, offset: 0x58, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint16_t> actionBindingIndices;

  /// @brief Field controlIndexToBindingIndex, offset: 0x60, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> controlIndexToBindingIndex;

  /// @brief Field controlGroupingAndComplexity, offset: 0x68, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint16_t> controlGroupingAndComplexity;

  /// @brief Field controlGroupingInitialized, offset: 0x70, size: 0x1, def value: None
  bool controlGroupingInitialized;

  /// @brief Field mapIndices, offset: 0x78, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_ActionMapIndices> mapIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, basePtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, mapCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, actionCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, interactionCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, bindingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, controlCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, compositeCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, actionStates) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, bindingStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, interactionStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, controlMagnitudes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, compositeMagnitudes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, enabledControls) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, actionBindingIndicesAndCounts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, actionBindingIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, controlIndexToBindingIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, controlGroupingAndComplexity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, controlGroupingInitialized) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, mapIndices) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/GlobalState
struct CORDL_TYPE InputActionState_GlobalState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState_GlobalState();

  // Ctor Parameters [CppParam { name: "globalList", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: None },
  // CppParam { name: "onActionChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>", modifiers:
  // "", def_value: None }, CppParam { name: "onActionControlsChanged", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>", modifiers: "", def_value:
  // None }]
  constexpr InputActionState_GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList,
                                         ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> onActionChange,
                                         ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*> onActionControlsChanged) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb8 };

  /// @brief Field globalList, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList;

  /// @brief Field onActionChange, offset: 0x18, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> onActionChange;

  /// @brief Field onActionControlsChanged, offset: 0x68, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*> onActionControlsChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_GlobalState, globalList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_GlobalState, onActionChange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState_GlobalState, onActionControlsChanged) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState_GlobalState, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionState/<>c
class CORDL_TYPE InputActionState___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::InputActionState___c* __9;

  /// @brief Field <>9__135_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__135_0,
                      put = setStaticF___9__135_0)) ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>* __9__135_0;

  /// @brief Field <>9__135_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__135_1, put = setStaticF___9__135_1)) ::System::Action* __9__135_1;

  static inline ::UnityEngine::InputSystem::InputActionState___c* New_ctor();

  /// @brief Method <SaveAndResetState>b__135_0, addr 0x455b694, size 0x6c, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__135_0(::ByRef<::UnityEngine::InputSystem::InputActionState_GlobalState> state);

  /// @brief Method <SaveAndResetState>b__135_1, addr 0x455b700, size 0x4, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__135_1();

  /// @brief Method .ctor, addr 0x455b68c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::InputActionState___c* getStaticF___9();

  static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>* getStaticF___9__135_0();

  static inline ::System::Action* getStaticF___9__135_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::InputActionState___c* value);

  static inline void setStaticF___9__135_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>* value);

  static inline void setStaticF___9__135_1(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionState___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionState___c(InputActionState___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionState___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionState___c(InputActionState___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.ICloneable, System.IDisposable, System.Object, UnityEngine.InputSystem.InputActionState::GlobalState, UnityEngine.InputSystem.InputActionState::UnmanagedMemory,
// UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionState
class CORDL_TYPE InputActionState : public ::System::Object {
public:
  // Declarations
  using ActionMapIndices = ::UnityEngine::InputSystem::InputActionState_ActionMapIndices;

  using BindingState = ::UnityEngine::InputSystem::InputActionState_BindingState;

  using GlobalState = ::UnityEngine::InputSystem::InputActionState_GlobalState;

  using InteractionState = ::UnityEngine::InputSystem::InputActionState_InteractionState;

  using TriggerState = ::UnityEngine::InputSystem::InputActionState_TriggerState;

  using UnmanagedMemory = ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory;

  using __c = ::UnityEngine::InputSystem::InputActionState___c;

  __declspec(property(get = get_actionStates)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_TriggerState> actionStates;

  __declspec(property(get = get_bindingStates)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState> bindingStates;

  /// @brief Field composites, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_composites,
                      put = __cordl_internal_set_composites)) ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>
      composites;

  __declspec(property(get = get_controlGroupingAndComplexity)) ::cordl_internals::Ptr<uint16_t> controlGroupingAndComplexity;

  __declspec(property(get = get_controlIndexToBindingIndex)) ::cordl_internals::Ptr<int32_t> controlIndexToBindingIndex;

  __declspec(property(get = get_controlMagnitudes)) ::cordl_internals::Ptr<float_t> controlMagnitudes;

  /// @brief Field controls, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_controls,
                      put = __cordl_internal_set_controls)) ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>
      controls;

  __declspec(property(get = get_enabledControls)) ::cordl_internals::Ptr<uint32_t> enabledControls;

  __declspec(property(get = get_interactionStates)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_InteractionState> interactionStates;

  /// @brief Field interactions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_interactions, put = __cordl_internal_set_interactions)) ::ArrayW<::cordl_internals::InterfaceW, ::Array<::cordl_internals::InterfaceW>*> interactions;

  __declspec(property(get = get_isProcessingControlStateChange)) bool isProcessingControlStateChange;

  /// @brief Field m_CurrentlyProcessingThisEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentlyProcessingThisEvent,
                      put = __cordl_internal_set_m_CurrentlyProcessingThisEvent)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_CurrentlyProcessingThisEvent;

  /// @brief Field m_InProcessControlStateChange, offset 0xc2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InProcessControlStateChange, put = __cordl_internal_set_m_InProcessControlStateChange)) bool m_InProcessControlStateChange;

  /// @brief Field m_OnAfterUpdateDelegate, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnAfterUpdateDelegate, put = __cordl_internal_set_m_OnAfterUpdateDelegate)) ::System::Action* m_OnAfterUpdateDelegate;

  /// @brief Field m_OnAfterUpdateHooked, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OnAfterUpdateHooked, put = __cordl_internal_set_m_OnAfterUpdateHooked)) bool m_OnAfterUpdateHooked;

  /// @brief Field m_OnBeforeUpdateDelegate, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnBeforeUpdateDelegate, put = __cordl_internal_set_m_OnBeforeUpdateDelegate)) ::System::Action* m_OnBeforeUpdateDelegate;

  /// @brief Field m_OnBeforeUpdateHooked, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OnBeforeUpdateHooked, put = __cordl_internal_set_m_OnBeforeUpdateHooked)) bool m_OnBeforeUpdateHooked;

  __declspec(property(get = get_mapIndices)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_ActionMapIndices> mapIndices;

  /// @brief Field maps, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_maps, put = __cordl_internal_set_maps)) ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>
      maps;

  /// @brief Field memory, offset 0x40, size 0x80
  __declspec(property(get = __cordl_internal_get_memory, put = __cordl_internal_set_memory)) ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory;

  /// @brief Field processors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_processors,
                      put = __cordl_internal_set_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*>
      processors;

  /// @brief Field s_GlobalState, offset 0xffffffff, size 0xb8
  __declspec(property(get = getStaticF_s_GlobalState, put = setStaticF_s_GlobalState)) ::UnityEngine::InputSystem::InputActionState_GlobalState s_GlobalState;

  __declspec(property(get = get_totalActionCount)) int32_t totalActionCount;

  __declspec(property(get = get_totalBindingCount)) int32_t totalBindingCount;

  __declspec(property(get = get_totalCompositeCount)) int32_t totalCompositeCount;

  __declspec(property(get = get_totalControlCount)) int32_t totalControlCount;

  __declspec(property(get = get_totalInteractionCount)) int32_t totalInteractionCount;

  __declspec(property(get = get_totalMapCount)) int32_t totalMapCount;

  /// @brief Field totalProcessorCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_totalProcessorCount, put = __cordl_internal_set_totalProcessorCount)) int32_t totalProcessorCount;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

  /// @brief Method AddToGlobalList, addr 0x4553d50, size 0x88, virtual false, abstract: false, final false
  inline void AddToGlobalList();

  /// @brief Method ApplyProcessors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ApplyProcessors(int32_t bindingIndex, TValue value, ::UnityEngine::InputSystem::InputControl_1<TValue>* controlOfType);

  /// @brief Method CallActionListeners, addr 0x4558e48, size 0x1c0, virtual false, abstract: false, final false
  inline void CallActionListeners(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputActionPhase phase,
                                  ::ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>> listeners,
                                  ::StringW callbackName);

  /// @brief Method CanUseDevice, addr 0x455486c, size 0x200, virtual false, abstract: false, final false
  inline bool CanUseDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ChangePhaseOfAction, addr 0x45568d8, size 0x1f8, virtual false, abstract: false, final false
  inline bool ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase newPhase, ::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger,
                                  ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformedOrCanceled);

  /// @brief Method ChangePhaseOfActionInternal, addr 0x4558bc4, size 0x270, virtual false, abstract: false, final false
  inline void ChangePhaseOfActionInternal(int32_t actionIndex, ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_TriggerState> actionState,
                                          ::UnityEngine::InputSystem::InputActionPhase newPhase, ::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger);

  /// @brief Method ChangePhaseOfInteraction, addr 0x45587b8, size 0x40c, virtual false, abstract: false, final false
  inline void ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase newPhase, ::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger,
                                       ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformed, bool processNextInteractionOnCancel);

  /// @brief Method ClaimDataFrom, addr 0x4553cbc, size 0x94, virtual false, abstract: false, final false
  inline void ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver resolver);

  /// @brief Method Clone, addr 0x45544c8, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionState* Clone();

  /// @brief Method CompactGlobalList, addr 0x4559de0, size 0x168, virtual false, abstract: false, final false
  static inline void CompactGlobalList();

  /// @brief Method ComputeControlGroupingIfNecessary, addr 0x4553dd8, size 0x1ac, virtual false, abstract: false, final false
  inline void ComputeControlGroupingIfNecessary();

  /// @brief Method DeferredResolutionOfBindings, addr 0x455a7a4, size 0x294, virtual false, abstract: false, final false
  static inline void DeferredResolutionOfBindings();

  /// @brief Method Destroy, addr 0x455403c, size 0x190, virtual false, abstract: false, final false
  inline void Destroy(bool isFinalizing);

  /// @brief Method DestroyAllActionMapStates, addr 0x455a06c, size 0x170, virtual false, abstract: false, final false
  static inline void DestroyAllActionMapStates();

  /// @brief Method DisableAllActions, addr 0x455aa38, size 0x150, virtual false, abstract: false, final false
  static inline void DisableAllActions();

  /// @brief Method DisableAllActions, addr 0x45550c4, size 0x100, virtual false, abstract: false, final false
  inline void DisableAllActions(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method DisableControls, addr 0x4556de0, size 0xb0, virtual false, abstract: false, final false
  inline void DisableControls(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method DisableControls, addr 0x4555474, size 0x40, virtual false, abstract: false, final false
  inline void DisableControls(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method DisableControls, addr 0x45541d4, size 0x180, virtual false, abstract: false, final false
  inline void DisableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls);

  /// @brief Method DisableSingleAction, addr 0x4556d88, size 0x58, virtual false, abstract: false, final false
  inline void DisableSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Dispose, addr 0x45541cc, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnableAllActions, addr 0x4556b88, size 0xac, virtual false, abstract: false, final false
  inline void EnableAllActions(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method EnableControls, addr 0x4556cd8, size 0xb0, virtual false, abstract: false, final false
  inline void EnableControls(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method EnableControls, addr 0x4556c34, size 0x40, virtual false, abstract: false, final false
  inline void EnableControls(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method EnableControls, addr 0x4555d14, size 0x188, virtual false, abstract: false, final false
  inline void EnableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls);

  /// @brief Method EnableSingleAction, addr 0x4556c74, size 0x64, virtual false, abstract: false, final false
  inline void EnableSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method EvaluateCompositePartMagnitude, addr 0x4559600, size 0xd4, virtual false, abstract: false, final false
  inline float_t EvaluateCompositePartMagnitude(int32_t bindingIndex, int32_t partNumber);

  /// @brief Method FetchActionState, addr 0x4556b30, size 0x24, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> FetchActionState(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method FetchMapIndices, addr 0x4556b54, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionState_ActionMapIndices FetchMapIndices(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method Finalize, addr 0x4553fa4, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FindAllEnabledActions, addr 0x455a1dc, size 0x2b0, virtual false, abstract: false, final false
  static inline int32_t FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* result);

  /// @brief Method FindControlIndexOnBinding, addr 0x4555e9c, size 0x60, virtual false, abstract: false, final false
  inline int32_t FindControlIndexOnBinding(int32_t bindingIndex, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method FinishBindingCompositeSetups, addr 0x4554afc, size 0xb4, virtual false, abstract: false, final false
  inline void FinishBindingCompositeSetups();

  /// @brief Method FinishBindingResolution, addr 0x45555a8, size 0x88, virtual false, abstract: false, final false
  inline void FinishBindingResolution(bool hasEnabledActions, ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory oldMemory,
                                      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls, bool isFullResolve);

  /// @brief Method GetActionBindingStartIndexAndCount, addr 0x4556814, size 0x20, virtual false, abstract: false, final false
  inline uint16_t GetActionBindingStartIndexAndCount(int32_t actionIndex, ::ByRef<uint16_t> bindingCount);

  /// @brief Method GetActionMap, addr 0x4559310, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* GetActionMap(int32_t bindingIndex);

  /// @brief Method GetActionOrNoneString, addr 0x4559008, size 0x64, virtual false, abstract: false, final false
  inline ::System::Object* GetActionOrNoneString(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger);

  /// @brief Method GetActionOrNull, addr 0x4559100, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* GetActionOrNull(int32_t bindingIndex);

  /// @brief Method GetActionOrNull, addr 0x455906c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* GetActionOrNull(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger);

  /// @brief Method GetBinding, addr 0x4559290, size 0x80, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::InputSystem::InputBinding> GetBinding(int32_t bindingIndex);

  /// @brief Method GetBindingIndexInMap, addr 0x455921c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetBindingIndexInMap(int32_t bindingIndex);

  /// @brief Method GetBindingIndexInState, addr 0x4559258, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetBindingIndexInState(int32_t mapIndex, int32_t bindingIndexInMap);

  /// @brief Method GetBindingState, addr 0x4559280, size 0x10, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::InputSystem::InputActionState_BindingState> GetBindingState(int32_t bindingIndex);

  /// @brief Method GetComplexityFromMonitorIndex, addr 0x4557a38, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetComplexityFromMonitorIndex(int64_t mapControlAndBindingIndex);

  /// @brief Method GetCompositePartPressTime, addr 0x45596d4, size 0x80, virtual false, abstract: false, final false
  inline double_t GetCompositePartPressTime(int32_t bindingIndex, int32_t partNumber);

  /// @brief Method GetControl, addr 0x4559194, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* GetControl(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger);

  /// @brief Method GetInteractionOrNull, addr 0x45591d4, size 0x48, virtual false, abstract: false, final false
  inline ::cordl_internals::InterfaceW GetInteractionOrNull(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger);

  /// @brief Method GetValueSizeInBytes, addr 0x4559350, size 0x94, virtual false, abstract: false, final false
  inline int32_t GetValueSizeInBytes(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method GetValueType, addr 0x45593e4, size 0x94, virtual false, abstract: false, final false
  inline ::System::Type* GetValueType(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method HasEnabledActions, addr 0x4554a84, size 0x78, virtual false, abstract: false, final false
  inline bool HasEnabledActions();

  /// @brief Method HookOnBeforeUpdate, addr 0x45562a0, size 0xd0, virtual false, abstract: false, final false
  inline void HookOnBeforeUpdate();

  /// @brief Method Initialize, addr 0x4553c48, size 0x74, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::InputSystem::InputBindingResolver resolver);

  /// @brief Method IsActionBoundToControlFromDevice, addr 0x4556764, size 0xb0, virtual false, abstract: false, final false
  inline bool IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice* device, int32_t actionIndex);

  /// @brief Method IsActiveControl, addr 0x4556470, size 0xb4, virtual false, abstract: false, final false
  inline bool IsActiveControl(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method IsActuated, addr 0x455860c, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsActuated(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, float_t threshold);

  /// @brief Method IsConflictingInput, addr 0x4557c78, size 0x410, virtual false, abstract: false, final false
  inline bool IsConflictingInput(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t actionIndex);

  /// @brief Method IsControlEnabled, addr 0x4556e90, size 0x24, virtual false, abstract: false, final false
  inline bool IsControlEnabled(int32_t controlIndex);

  /// @brief Method IsUsingDevice, addr 0x45546b4, size 0x1b8, virtual false, abstract: false, final false
  inline bool IsUsingDevice(::UnityEngine::InputSystem::InputDevice* device);

  static inline ::UnityEngine::InputSystem::InputActionState* New_ctor();

  /// @brief Method NotifyListenersOfActionChange, addr 0x45554b4, size 0xf4, virtual false, abstract: false, final false
  inline void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change);

  /// @brief Method NotifyListenersOfActionChange, addr 0x4556370, size 0x100, virtual false, abstract: false, final false
  static inline void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change, ::System::Object* actionOrMapOrAsset);

  /// @brief Method OnBeforeInitialUpdate, addr 0x4557070, size 0x1f0, virtual false, abstract: false, final false
  inline void OnBeforeInitialUpdate();

  /// @brief Method OnDeviceChange, addr 0x455a48c, size 0x318, virtual false, abstract: false, final false
  static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method PrepareForBindingReResolution, addr 0x4554bc8, size 0x4fc, virtual false, abstract: false, final false
  inline void PrepareForBindingReResolution(bool needFullResolve, ::ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>> activeControls,
                                            ::ByRef<bool> hasEnabledActions);

  /// @brief Method ProcessButtonState, addr 0x4558088, size 0x1b8, virtual false, abstract: false, final false
  inline void ProcessButtonState(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t actionIndex,
                                 ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState> bindingStatePtr);

  /// @brief Method ProcessControlStateChange, addr 0x45572a0, size 0x584, virtual false, abstract: false, final false
  inline void ProcessControlStateChange(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method ProcessDefaultInteraction, addr 0x4558240, size 0x3a8, virtual false, abstract: false, final false
  inline void ProcessDefaultInteraction(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t actionIndex);

  /// @brief Method ProcessInteractions, addr 0x4557ad8, size 0x1a0, virtual false, abstract: false, final false
  inline void ProcessInteractions(::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t interactionStartIndex, int32_t interactionCount);

  /// @brief Method ProcessTimeout, addr 0x455783c, size 0x1fc, virtual false, abstract: false, final false
  inline void ProcessTimeout(double_t time, int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, int32_t interactionIndex);

  /// @brief Method ReadCompositePartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TComparer>
  inline TValue ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, ::cordl_internals::Ptr<bool> buttonValuePtr, ::ByRef<int32_t> controlIndex, TComparer comparer);

  /// @brief Method ReadCompositePartValue, addr 0x4559754, size 0x114, virtual false, abstract: false, final false
  inline bool ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadCompositePartValueAsObject, addr 0x4559868, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Object* ReadCompositePartValueAsObject(int32_t bindingIndex, int32_t partNumber);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites);

  /// @brief Method ReadValue, addr 0x4559478, size 0x174, virtual false, abstract: false, final false
  inline void ReadValue(int32_t bindingIndex, int32_t controlIndex, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize, bool ignoreComposites);

  /// @brief Method ReadValueAsButton, addr 0x4559ad4, size 0x130, virtual false, abstract: false, final false
  inline bool ReadValueAsButton(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method ReadValueAsObject, addr 0x4559964, size 0x170, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites);

  /// @brief Method RemoveMapFromGlobalList, addr 0x4554354, size 0x138, virtual false, abstract: false, final false
  inline void RemoveMapFromGlobalList();

  /// @brief Method ResetActionState, addr 0x4555358, size 0x11c, virtual false, abstract: false, final false
  inline void ResetActionState(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionPhase toPhase, bool hardReset);

  /// @brief Method ResetActionStatesDrivenBy, addr 0x4556524, size 0x234, virtual false, abstract: false, final false
  inline void ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ResetGlobals, addr 0x4559f48, size 0x124, virtual false, abstract: false, final false
  static inline void ResetGlobals();

  /// @brief Method ResetInteractionState, addr 0x4555200, size 0x158, virtual false, abstract: false, final false
  inline void ResetInteractionState(int32_t interactionIndex);

  /// @brief Method ResetInteractionStateAndCancelIfNecessary, addr 0x4556834, size 0xa4, virtual false, abstract: false, final false
  inline void ResetInteractionStateAndCancelIfNecessary(int32_t mapIndex, int32_t bindingIndex, int32_t interactionIndex);

  /// @brief Method RestoreActionStatesAfterReResolvingBindings, addr 0x4555630, size 0x68c, virtual false, abstract: false, final false
  inline void RestoreActionStatesAfterReResolvingBindings(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory oldState,
                                                          ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls, bool isFullResolve);

  /// @brief Method SaveAndResetState, addr 0x4559c04, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState();

  /// @brief Method SetControlEnabled, addr 0x4556f28, size 0x38, virtual false, abstract: false, final false
  inline void SetControlEnabled(int32_t controlIndex, bool state);

  /// @brief Method SetInitialStateCheckPending, addr 0x4556f60, size 0x94, virtual false, abstract: false, final false
  inline void SetInitialStateCheckPending(int32_t actionIndex, bool value);

  /// @brief Method SetInitialStateCheckPending, addr 0x4556edc, size 0x4c, virtual false, abstract: false, final false
  inline void SetInitialStateCheckPending(::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState> bindingStatePtr, bool value);

  /// @brief Method SetTotalTimeoutCompletionTime, addr 0x45586c4, size 0x30, virtual false, abstract: false, final false
  inline void SetTotalTimeoutCompletionTime(float_t seconds, ::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger);

  /// @brief Method ShouldIgnoreInputOnCompositeBinding, addr 0x4557a8c, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldIgnoreInputOnCompositeBinding(::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState> binding,
                                                         ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method SplitUpMapAndControlAndBindingIndex, addr 0x4557284, size 0x1c, virtual false, abstract: false, final false
  inline void SplitUpMapAndControlAndBindingIndex(int64_t mapControlAndBindingIndex, ::ByRef<int32_t> mapIndex, ::ByRef<int32_t> controlIndex, ::ByRef<int32_t> bindingIndex);

  /// @brief Method StartTimeout, addr 0x4556148, size 0x158, virtual false, abstract: false, final false
  inline void StartTimeout(float_t seconds, ::ByRef<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger);

  /// @brief Method StopTimeout, addr 0x45586f4, size 0xc4, virtual false, abstract: false, final false
  inline void StopTimeout(int32_t interactionIndex);

  /// @brief Method System.ICloneable.Clone, addr 0x45546b0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToCombinedMapAndControlAndBindingIndex, addr 0x4556eb4, size 0x28, virtual false, abstract: false, final false
  inline int64_t ToCombinedMapAndControlAndBindingIndex(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex);

  /// @brief Method UnhookOnBeforeUpdate, addr 0x4556ff4, size 0x7c, virtual false, abstract: false, final false
  inline void UnhookOnBeforeUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged, addr 0x455726c, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t mapControlAndBindingIndex);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired, addr 0x4557824, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t mapControlAndBindingIndex,
                                                                                           int32_t interactionIndex);

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> const& __cordl_internal_get_composites() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>& __cordl_internal_get_composites();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_controls() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_controls();

  constexpr ::ArrayW<::cordl_internals::InterfaceW, ::Array<::cordl_internals::InterfaceW>*> const& __cordl_internal_get_interactions() const;

  constexpr ::ArrayW<::cordl_internals::InterfaceW, ::Array<::cordl_internals::InterfaceW>*>& __cordl_internal_get_interactions();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_m_CurrentlyProcessingThisEvent() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_m_CurrentlyProcessingThisEvent();

  constexpr bool const& __cordl_internal_get_m_InProcessControlStateChange() const;

  constexpr bool& __cordl_internal_get_m_InProcessControlStateChange();

  constexpr ::System::Action* const& __cordl_internal_get_m_OnAfterUpdateDelegate() const;

  constexpr ::System::Action*& __cordl_internal_get_m_OnAfterUpdateDelegate();

  constexpr bool const& __cordl_internal_get_m_OnAfterUpdateHooked() const;

  constexpr bool& __cordl_internal_get_m_OnAfterUpdateHooked();

  constexpr ::System::Action* const& __cordl_internal_get_m_OnBeforeUpdateDelegate() const;

  constexpr ::System::Action*& __cordl_internal_get_m_OnBeforeUpdateDelegate();

  constexpr bool const& __cordl_internal_get_m_OnBeforeUpdateHooked() const;

  constexpr bool& __cordl_internal_get_m_OnBeforeUpdateHooked();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> const& __cordl_internal_get_maps() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>& __cordl_internal_get_maps();

  constexpr ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory const& __cordl_internal_get_memory() const;

  constexpr ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory& __cordl_internal_get_memory();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> const& __cordl_internal_get_processors() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*>& __cordl_internal_get_processors();

  constexpr int32_t const& __cordl_internal_get_totalProcessorCount() const;

  constexpr int32_t& __cordl_internal_get_totalProcessorCount();

  constexpr void __cordl_internal_set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> value);

  constexpr void __cordl_internal_set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_interactions(::ArrayW<::cordl_internals::InterfaceW, ::Array<::cordl_internals::InterfaceW>*> value);

  constexpr void __cordl_internal_set_m_CurrentlyProcessingThisEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr value);

  constexpr void __cordl_internal_set_m_InProcessControlStateChange(bool value);

  constexpr void __cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action* value);

  constexpr void __cordl_internal_set_m_OnAfterUpdateHooked(bool value);

  constexpr void __cordl_internal_set_m_OnBeforeUpdateDelegate(::System::Action* value);

  constexpr void __cordl_internal_set_m_OnBeforeUpdateHooked(bool value);

  constexpr void __cordl_internal_set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> value);

  constexpr void __cordl_internal_set_memory(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory value);

  constexpr void __cordl_internal_set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> value);

  constexpr void __cordl_internal_set_totalProcessorCount(int32_t value);

  /// @brief Method .ctor, addr 0x4554610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::InputActionState_GlobalState getStaticF_s_GlobalState();

  /// @brief Method get_actionStates, addr 0x4553c08, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_TriggerState> get_actionStates();

  /// @brief Method get_bindingStates, addr 0x4553c10, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_BindingState> get_bindingStates();

  /// @brief Method get_controlGroupingAndComplexity, addr 0x4553c28, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint16_t> get_controlGroupingAndComplexity();

  /// @brief Method get_controlIndexToBindingIndex, addr 0x4553c20, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<int32_t> get_controlIndexToBindingIndex();

  /// @brief Method get_controlMagnitudes, addr 0x4553c30, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<float_t> get_controlMagnitudes();

  /// @brief Method get_enabledControls, addr 0x4553c38, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint32_t> get_enabledControls();

  /// @brief Method get_interactionStates, addr 0x4553c18, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_InteractionState> get_interactionStates();

  /// @brief Method get_isProcessingControlStateChange, addr 0x4553c40, size 0x8, virtual false, abstract: false, final false
  inline bool get_isProcessingControlStateChange();

  /// @brief Method get_mapIndices, addr 0x4553c00, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::InputActionState_ActionMapIndices> get_mapIndices();

  /// @brief Method get_totalActionCount, addr 0x4553be0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalActionCount();

  /// @brief Method get_totalBindingCount, addr 0x4553be8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalBindingCount();

  /// @brief Method get_totalCompositeCount, addr 0x4553bd0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalCompositeCount();

  /// @brief Method get_totalControlCount, addr 0x4553bf8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalControlCount();

  /// @brief Method get_totalInteractionCount, addr 0x4553bf0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalInteractionCount();

  /// @brief Method get_totalMapCount, addr 0x4553bd8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalMapCount();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept;

  static inline void setStaticF_s_GlobalState(::UnityEngine::InputSystem::InputActionState_GlobalState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionState(InputActionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionState(InputActionState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6587 };

  /// @brief Field kInvalidIndex offset 0xffffffff size 0x4
  static constexpr int32_t kInvalidIndex{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field maps, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> ___maps;

  /// @brief Field controls, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> ___controls;

  /// @brief Field interactions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::cordl_internals::InterfaceW, ::Array<::cordl_internals::InterfaceW>*> ___interactions;

  /// @brief Field processors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> ___processors;

  /// @brief Field composites, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> ___composites;

  /// @brief Field totalProcessorCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___totalProcessorCount;

  /// @brief Field memory, offset: 0x40, size: 0x80, def value: None
  ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory ___memory;

  /// @brief Field m_OnBeforeUpdateHooked, offset: 0xc0, size: 0x1, def value: None
  bool ___m_OnBeforeUpdateHooked;

  /// @brief Field m_OnAfterUpdateHooked, offset: 0xc1, size: 0x1, def value: None
  bool ___m_OnAfterUpdateHooked;

  /// @brief Field m_InProcessControlStateChange, offset: 0xc2, size: 0x1, def value: None
  bool ___m_InProcessControlStateChange;

  /// @brief Field m_CurrentlyProcessingThisEvent, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventPtr ___m_CurrentlyProcessingThisEvent;

  /// @brief Field m_OnBeforeUpdateDelegate, offset: 0xd0, size: 0x8, def value: None
  ::System::Action* ___m_OnBeforeUpdateDelegate;

  /// @brief Field m_OnAfterUpdateDelegate, offset: 0xd8, size: 0x8, def value: None
  ::System::Action* ___m_OnAfterUpdateDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___maps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___controls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___interactions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___processors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___composites) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___totalProcessorCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___memory) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnBeforeUpdateHooked) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnAfterUpdateHooked) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_InProcessControlStateChange) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_CurrentlyProcessingThisEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnBeforeUpdateDelegate) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnAfterUpdateDelegate) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::BindingState_InputActionState_Flags, "UnityEngine.InputSystem", "InputActionState/BindingState/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InteractionState_InputActionState_Flags, "UnityEngine.InputSystem", "InputActionState/InteractionState/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::TriggerState_InputActionState_Flags, "UnityEngine.InputSystem", "InputActionState/TriggerState/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState*, "UnityEngine.InputSystem", "InputActionState");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionState___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState___c*, "UnityEngine.InputSystem", "InputActionState/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState_ActionMapIndices, "UnityEngine.InputSystem", "InputActionState/ActionMapIndices");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState_BindingState, "UnityEngine.InputSystem", "InputActionState/BindingState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState_GlobalState, "UnityEngine.InputSystem", "InputActionState/GlobalState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState_InteractionState, "UnityEngine.InputSystem", "InputActionState/InteractionState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState_TriggerState, "UnityEngine.InputSystem", "InputActionState/TriggerState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, "UnityEngine.InputSystem", "InputActionState/UnmanagedMemory");
