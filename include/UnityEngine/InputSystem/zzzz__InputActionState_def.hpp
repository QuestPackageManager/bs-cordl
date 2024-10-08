#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState)
namespace GlobalNamespace {
struct __InputActionState__BindingState__Flags;
}
namespace GlobalNamespace {
struct __InputActionState__InteractionState__Flags;
}
namespace GlobalNamespace {
struct __InputActionState__TriggerState__Flags;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
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
class ICloneable;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
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
template <typename TValue> struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class __SavedStructState_1__TypedRestore;
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
struct __InputActionState__ActionMapIndices;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__BindingState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__GlobalState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__InteractionState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__TriggerState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__UnmanagedMemory;
}
namespace UnityEngine::InputSystem {
class __InputActionState____c;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
// Forward declare root types
namespace GlobalNamespace {
struct __InputActionState__BindingState__Flags;
}
namespace GlobalNamespace {
struct __InputActionState__InteractionState__Flags;
}
namespace GlobalNamespace {
struct __InputActionState__TriggerState__Flags;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class __InputActionState____c;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__ActionMapIndices;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__BindingState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__GlobalState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__InteractionState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__TriggerState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__UnmanagedMemory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InputActionState__BindingState__Flags);
MARK_VAL_T(::GlobalNamespace::__InputActionState__InteractionState__Flags);
MARK_VAL_T(::GlobalNamespace::__InputActionState__TriggerState__Flags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionState);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionState____c);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionState__BindingState);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionState__GlobalState);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionState__InteractionState);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionState__TriggerState);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory);
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputActionState::InteractionState::Flags
struct CORDL_TYPE __InputActionState__InteractionState__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputActionState__InteractionState__Flags_Unwrapped
  enum struct ____InputActionState__InteractionState__Flags_Unwrapped : int32_t {
    __E_TimerRunning = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputActionState__InteractionState__Flags_Unwrapped() const noexcept {
    return static_cast<____InputActionState__InteractionState__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__InteractionState__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionState__InteractionState__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field TimerRunning value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InputActionState__InteractionState__Flags const TimerRunning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6542 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputActionState__InteractionState__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputActionState__InteractionState__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InteractionState
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionState::InteractionState
#pragma pack(push, 0)
struct CORDL_TYPE __InputActionState__InteractionState {
public:
  // Declarations
  using Flags = ::GlobalNamespace::__InputActionState__InteractionState__Flags;

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

  /// @brief Method get_isTimerRunning, addr 0x44dec10, size 0xc, virtual false, abstract: false, final false
  inline bool get_isTimerRunning();

  /// @brief Method get_performedTime, addr 0x44e372c, size 0x8, virtual false, abstract: false, final false
  inline double_t get_performedTime();

  /// @brief Method get_phase, addr 0x44e378c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_startTime, addr 0x44e371c, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_timerDuration, addr 0x44e374c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timerDuration();

  /// @brief Method get_timerMonitorIndex, addr 0x44e377c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_timerMonitorIndex();

  /// @brief Method get_timerStartTime, addr 0x44e373c, size 0x8, virtual false, abstract: false, final false
  inline double_t get_timerStartTime();

  /// @brief Method get_totalTimeoutCompletionDone, addr 0x44e375c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_totalTimeoutCompletionDone();

  /// @brief Method get_totalTimeoutCompletionTimeRemaining, addr 0x44e376c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_totalTimeoutCompletionTimeRemaining();

  /// @brief Method get_triggerControlIndex, addr 0x44ddd80, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_triggerControlIndex();

  /// @brief Method set_isTimerRunning, addr 0x44e1248, size 0x10, virtual false, abstract: false, final false
  inline void set_isTimerRunning(bool value);

  /// @brief Method set_performedTime, addr 0x44e3734, size 0x8, virtual false, abstract: false, final false
  inline void set_performedTime(double_t value);

  /// @brief Method set_phase, addr 0x44deb98, size 0x8, virtual false, abstract: false, final false
  inline void set_phase(::UnityEngine::InputSystem::InputActionPhase value);

  /// @brief Method set_startTime, addr 0x44e3724, size 0x8, virtual false, abstract: false, final false
  inline void set_startTime(double_t value);

  /// @brief Method set_timerDuration, addr 0x44e3754, size 0x8, virtual false, abstract: false, final false
  inline void set_timerDuration(float_t value);

  /// @brief Method set_timerMonitorIndex, addr 0x44e3784, size 0x8, virtual false, abstract: false, final false
  inline void set_timerMonitorIndex(int64_t value);

  /// @brief Method set_timerStartTime, addr 0x44e3744, size 0x8, virtual false, abstract: false, final false
  inline void set_timerStartTime(double_t value);

  /// @brief Method set_totalTimeoutCompletionDone, addr 0x44e3764, size 0x8, virtual false, abstract: false, final false
  inline void set_totalTimeoutCompletionDone(float_t value);

  /// @brief Method set_totalTimeoutCompletionTimeRemaining, addr 0x44e3774, size 0x8, virtual false, abstract: false, final false
  inline void set_totalTimeoutCompletionTimeRemaining(float_t value);

  /// @brief Method set_triggerControlIndex, addr 0x44deba0, size 0x70, virtual false, abstract: false, final false
  inline void set_triggerControlIndex(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__InteractionState();

  // Ctor Parameters [CppParam { name: "m_TriggerControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerStartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_PerformedTime", ty: "double_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_TotalTimeoutCompletionTimeDone", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TotalTimeoutCompletionTimeRemaining", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TimerMonitorIndex", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr __InputActionState__InteractionState(uint16_t m_TriggerControlIndex, uint8_t m_Phase, uint8_t m_Flags, float_t m_TimerDuration, double_t m_StartTime, double_t m_TimerStartTime,
                                                 double_t m_PerformedTime, float_t m_TotalTimeoutCompletionTimeDone, float_t m_TotalTimeoutCompletionTimeRemaining,
                                                 int64_t m_TimerMonitorIndex) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6543 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionState__InteractionState, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputActionState::BindingState::Flags
struct CORDL_TYPE __InputActionState__BindingState__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputActionState__BindingState__Flags_Unwrapped
  enum struct ____InputActionState__BindingState__Flags_Unwrapped : int32_t {
    __E_ChainsWithNext = static_cast<int32_t>(0x1),
    __E_EndOfChain = static_cast<int32_t>(0x2),
    __E_Composite = static_cast<int32_t>(0x4),
    __E_PartOfComposite = static_cast<int32_t>(0x8),
    __E_InitialStateCheckPending = static_cast<int32_t>(0x10),
    __E_WantsInitialStateCheck = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputActionState__BindingState__Flags_Unwrapped() const noexcept {
    return static_cast<____InputActionState__BindingState__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__BindingState__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionState__BindingState__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ChainsWithNext value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InputActionState__BindingState__Flags const ChainsWithNext;

  /// @brief Field Composite value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__InputActionState__BindingState__Flags const Composite;

  /// @brief Field EndOfChain value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__InputActionState__BindingState__Flags const EndOfChain;

  /// @brief Field InitialStateCheckPending value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__InputActionState__BindingState__Flags const InitialStateCheckPending;

  /// @brief Field PartOfComposite value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__InputActionState__BindingState__Flags const PartOfComposite;

  /// @brief Field WantsInitialStateCheck value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__InputActionState__BindingState__Flags const WantsInitialStateCheck;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6544 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputActionState__BindingState__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputActionState__BindingState__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BindingState
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionState::BindingState
#pragma pack(push, 0)
struct CORDL_TYPE __InputActionState__BindingState {
public:
  // Declarations
  using Flags = ::GlobalNamespace::__InputActionState__BindingState__Flags;

  /// @brief Field __padding, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get___padding, put = __cordl_internal_set___padding)) int32_t __padding;

  __declspec(property(get = get_actionIndex, put = set_actionIndex)) int32_t actionIndex;

  __declspec(property(get = get_chainsWithNext, put = set_chainsWithNext)) bool chainsWithNext;

  __declspec(property(get = get_compositeOrCompositeBindingIndex, put = set_compositeOrCompositeBindingIndex)) int32_t compositeOrCompositeBindingIndex;

  __declspec(property(get = get_controlCount, put = set_controlCount)) int32_t controlCount;

  __declspec(property(get = get_controlStartIndex, put = set_controlStartIndex)) int32_t controlStartIndex;

  __declspec(property(get = get_flags, put = set_flags)) ::GlobalNamespace::__InputActionState__BindingState__Flags flags;

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

  /// @brief Method get_actionIndex, addr 0x44de858, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_actionIndex();

  /// @brief Method get_chainsWithNext, addr 0x44e3d18, size 0xc, virtual false, abstract: false, final false
  inline bool get_chainsWithNext();

  /// @brief Method get_compositeOrCompositeBindingIndex, addr 0x44dcb24, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_compositeOrCompositeBindingIndex();

  /// @brief Method get_controlCount, addr 0x44e3828, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_controlCount();

  /// @brief Method get_controlStartIndex, addr 0x44e3794, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_controlStartIndex();

  /// @brief Method get_flags, addr 0x44e3d08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputActionState__BindingState__Flags get_flags();

  /// @brief Method get_initialStateCheckPending, addr 0x44dfdf4, size 0xc, virtual false, abstract: false, final false
  inline bool get_initialStateCheckPending();

  /// @brief Method get_interactionCount, addr 0x44e3958, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_interactionCount();

  /// @brief Method get_interactionStartIndex, addr 0x44ddd6c, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_interactionStartIndex();

  /// @brief Method get_isComposite, addr 0x44dd744, size 0xc, virtual false, abstract: false, final false
  inline bool get_isComposite();

  /// @brief Method get_isEndOfChain, addr 0x44e3d34, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEndOfChain();

  /// @brief Method get_isPartOfChain, addr 0x44e3d60, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPartOfChain();

  /// @brief Method get_isPartOfComposite, addr 0x44dcb18, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPartOfComposite();

  /// @brief Method get_mapIndex, addr 0x44e3bb8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mapIndex();

  /// @brief Method get_partIndex, addr 0x44e3dd0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_partIndex();

  /// @brief Method get_pressTime, addr 0x44e3cf8, size 0x8, virtual false, abstract: false, final false
  inline double_t get_pressTime();

  /// @brief Method get_processorCount, addr 0x44e3a88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_processorCount();

  /// @brief Method get_processorStartIndex, addr 0x44e2180, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_processorStartIndex();

  /// @brief Method get_triggerEventIdForComposite, addr 0x44e3ce8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_triggerEventIdForComposite();

  /// @brief Method get_wantsInitialStateCheck, addr 0x44de87c, size 0xc, virtual false, abstract: false, final false
  inline bool get_wantsInitialStateCheck();

  /// @brief Method set_actionIndex, addr 0x44e3b1c, size 0x9c, virtual false, abstract: false, final false
  inline void set_actionIndex(int32_t value);

  /// @brief Method set_chainsWithNext, addr 0x44e3d24, size 0x10, virtual false, abstract: false, final false
  inline void set_chainsWithNext(bool value);

  /// @brief Method set_compositeOrCompositeBindingIndex, addr 0x44e3c4c, size 0x9c, virtual false, abstract: false, final false
  inline void set_compositeOrCompositeBindingIndex(int32_t value);

  /// @brief Method set_controlCount, addr 0x44e3830, size 0x8c, virtual false, abstract: false, final false
  inline void set_controlCount(int32_t value);

  /// @brief Method set_controlStartIndex, addr 0x44e379c, size 0x8c, virtual false, abstract: false, final false
  inline void set_controlStartIndex(int32_t value);

  /// @brief Method set_flags, addr 0x44e3d10, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::GlobalNamespace::__InputActionState__BindingState__Flags value);

  /// @brief Method set_initialStateCheckPending, addr 0x44de888, size 0x20, virtual false, abstract: false, final false
  inline void set_initialStateCheckPending(bool value);

  /// @brief Method set_interactionCount, addr 0x44e3960, size 0x8c, virtual false, abstract: false, final false
  inline void set_interactionCount(int32_t value);

  /// @brief Method set_interactionStartIndex, addr 0x44e38bc, size 0x9c, virtual false, abstract: false, final false
  inline void set_interactionStartIndex(int32_t value);

  /// @brief Method set_isComposite, addr 0x44e3d70, size 0x20, virtual false, abstract: false, final false
  inline void set_isComposite(bool value);

  /// @brief Method set_isEndOfChain, addr 0x44e3d40, size 0x20, virtual false, abstract: false, final false
  inline void set_isEndOfChain(bool value);

  /// @brief Method set_isPartOfComposite, addr 0x44e3d90, size 0x20, virtual false, abstract: false, final false
  inline void set_isPartOfComposite(bool value);

  /// @brief Method set_mapIndex, addr 0x44e3bc0, size 0x8c, virtual false, abstract: false, final false
  inline void set_mapIndex(int32_t value);

  /// @brief Method set_partIndex, addr 0x44e3dd8, size 0x8, virtual false, abstract: false, final false
  inline void set_partIndex(int32_t value);

  /// @brief Method set_pressTime, addr 0x44e3d00, size 0x8, virtual false, abstract: false, final false
  inline void set_pressTime(double_t value);

  /// @brief Method set_processorCount, addr 0x44e3a90, size 0x8c, virtual false, abstract: false, final false
  inline void set_processorCount(int32_t value);

  /// @brief Method set_processorStartIndex, addr 0x44e39ec, size 0x9c, virtual false, abstract: false, final false
  inline void set_processorStartIndex(int32_t value);

  /// @brief Method set_triggerEventIdForComposite, addr 0x44e3cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerEventIdForComposite(int32_t value);

  /// @brief Method set_wantsInitialStateCheck, addr 0x44e3db0, size 0x20, virtual false, abstract: false, final false
  inline void set_wantsInitialStateCheck(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__BindingState();

  // Ctor Parameters [CppParam { name: "m_ControlCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionCount", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "m_ProcessorCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_PartIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ActionIndex", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CompositeOrCompositeBindingIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorStartIndex", ty: "uint16_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_InteractionStartIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlStartIndex", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_PressTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_TriggerEventIdForComposite", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "__padding", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionState__BindingState(uint8_t m_ControlCount, uint8_t m_InteractionCount, uint8_t m_ProcessorCount, uint8_t m_MapIndex, uint8_t m_Flags, uint8_t m_PartIndex,
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6545 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionState__BindingState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputActionState::TriggerState::Flags
struct CORDL_TYPE __InputActionState__TriggerState__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputActionState__TriggerState__Flags_Unwrapped
  enum struct ____InputActionState__TriggerState__Flags_Unwrapped : int32_t {
    __E_HaveMagnitude = static_cast<int32_t>(0x1),
    __E_PassThrough = static_cast<int32_t>(0x2),
    __E_MayNeedConflictResolution = static_cast<int32_t>(0x4),
    __E_HasMultipleConcurrentActuations = static_cast<int32_t>(0x8),
    __E_InProcessing = static_cast<int32_t>(0x10),
    __E_Button = static_cast<int32_t>(0x20),
    __E_Pressed = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputActionState__TriggerState__Flags_Unwrapped() const noexcept {
    return static_cast<____InputActionState__TriggerState__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__TriggerState__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionState__TriggerState__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Button value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__InputActionState__TriggerState__Flags const Button;

  /// @brief Field HasMultipleConcurrentActuations value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__InputActionState__TriggerState__Flags const HasMultipleConcurrentActuations;

  /// @brief Field HaveMagnitude value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InputActionState__TriggerState__Flags const HaveMagnitude;

  /// @brief Field InProcessing value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__InputActionState__TriggerState__Flags const InProcessing;

  /// @brief Field MayNeedConflictResolution value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__InputActionState__TriggerState__Flags const MayNeedConflictResolution;

  /// @brief Field PassThrough value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__InputActionState__TriggerState__Flags const PassThrough;

  /// @brief Field Pressed value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__InputActionState__TriggerState__Flags const Pressed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6546 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputActionState__TriggerState__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputActionState__TriggerState__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TriggerState
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionState::TriggerState
#pragma pack(push, 0)
struct CORDL_TYPE __InputActionState__TriggerState {
public:
  // Declarations
  using Flags = ::GlobalNamespace::__InputActionState__TriggerState__Flags;

  __declspec(property(get = get_bindingIndex, put = set_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_controlIndex, put = set_controlIndex)) int32_t controlIndex;

  __declspec(property(get = get_flags, put = set_flags)) ::GlobalNamespace::__InputActionState__TriggerState__Flags flags;

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

  /// @brief Method get_bindingIndex, addr 0x44e3e64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method get_controlIndex, addr 0x44ddd58, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_controlIndex();

  /// @brief Method get_flags, addr 0x44e3ecc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputActionState__TriggerState__Flags get_flags();

  /// @brief Method get_hasMultipleConcurrentActuations, addr 0x44e1194, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasMultipleConcurrentActuations();

  /// @brief Method get_haveMagnitude, addr 0x44e3e50, size 0xc, virtual false, abstract: false, final false
  inline bool get_haveMagnitude();

  /// @brief Method get_inProcessing, addr 0x44e19c8, size 0xc, virtual false, abstract: false, final false
  inline bool get_inProcessing();

  /// @brief Method get_interactionIndex, addr 0x44deb14, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_interactionIndex();

  /// @brief Method get_isButton, addr 0x44e05f4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isButton();

  /// @brief Method get_isCanceled, addr 0x44e3e18, size 0x10, virtual false, abstract: false, final false
  inline bool get_isCanceled();

  /// @brief Method get_isDisabled, addr 0x44de86c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDisabled();

  /// @brief Method get_isPassThrough, addr 0x44df2ec, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPassThrough();

  /// @brief Method get_isPerformed, addr 0x44e3e08, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPerformed();

  /// @brief Method get_isPressed, addr 0x44e117c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPressed();

  /// @brief Method get_isStarted, addr 0x44e3df8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isStarted();

  /// @brief Method get_isWaiting, addr 0x44e3de8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isWaiting();

  /// @brief Method get_lastCanceledInUpdate, addr 0x44e3e7c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_lastCanceledInUpdate();

  /// @brief Method get_lastPerformedInUpdate, addr 0x44e3e6c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_lastPerformedInUpdate();

  /// @brief Method get_magnitude, addr 0x44e3e48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_mapIndex, addr 0x44e3e5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mapIndex();

  /// @brief Method get_mayNeedConflictResolution, addr 0x44e1188, size 0xc, virtual false, abstract: false, final false
  inline bool get_mayNeedConflictResolution();

  /// @brief Method get_phase, addr 0x44e3de0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_pressedInUpdate, addr 0x44e3e8c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_pressedInUpdate();

  /// @brief Method get_releasedInUpdate, addr 0x44e3e9c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_releasedInUpdate();

  /// @brief Method get_startTime, addr 0x44e3e38, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_time, addr 0x44e3e28, size 0x8, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method set_bindingIndex, addr 0x44dec7c, size 0x60, virtual false, abstract: false, final false
  inline void set_bindingIndex(int32_t value);

  /// @brief Method set_controlIndex, addr 0x44dea90, size 0x70, virtual false, abstract: false, final false
  inline void set_controlIndex(int32_t value);

  /// @brief Method set_flags, addr 0x44e19d4, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::GlobalNamespace::__InputActionState__TriggerState__Flags value);

  /// @brief Method set_hasMultipleConcurrentActuations, addr 0x44df664, size 0x20, virtual false, abstract: false, final false
  inline void set_hasMultipleConcurrentActuations(bool value);

  /// @brief Method set_inProcessing, addr 0x44df684, size 0x20, virtual false, abstract: false, final false
  inline void set_inProcessing(bool value);

  /// @brief Method set_interactionIndex, addr 0x44deb28, size 0x70, virtual false, abstract: false, final false
  inline void set_interactionIndex(int32_t value);

  /// @brief Method set_isButton, addr 0x44e0600, size 0x20, virtual false, abstract: false, final false
  inline void set_isButton(bool value);

  /// @brief Method set_isPassThrough, addr 0x44e05d4, size 0x20, virtual false, abstract: false, final false
  inline void set_isPassThrough(bool value);

  /// @brief Method set_isPressed, addr 0x44df6a4, size 0x20, virtual false, abstract: false, final false
  inline void set_isPressed(bool value);

  /// @brief Method set_lastCanceledInUpdate, addr 0x44e3e84, size 0x8, virtual false, abstract: false, final false
  inline void set_lastCanceledInUpdate(uint32_t value);

  /// @brief Method set_lastPerformedInUpdate, addr 0x44e3e74, size 0x8, virtual false, abstract: false, final false
  inline void set_lastPerformedInUpdate(uint32_t value);

  /// @brief Method set_magnitude, addr 0x44deb00, size 0x14, virtual false, abstract: false, final false
  inline void set_magnitude(float_t value);

  /// @brief Method set_mapIndex, addr 0x44dec1c, size 0x60, virtual false, abstract: false, final false
  inline void set_mapIndex(int32_t value);

  /// @brief Method set_mayNeedConflictResolution, addr 0x44e3eac, size 0x20, virtual false, abstract: false, final false
  inline void set_mayNeedConflictResolution(bool value);

  /// @brief Method set_phase, addr 0x44de850, size 0x8, virtual false, abstract: false, final false
  inline void set_phase(::UnityEngine::InputSystem::InputActionPhase value);

  /// @brief Method set_pressedInUpdate, addr 0x44e3e94, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedInUpdate(uint32_t value);

  /// @brief Method set_releasedInUpdate, addr 0x44e3ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_releasedInUpdate(uint32_t value);

  /// @brief Method set_startTime, addr 0x44e3e40, size 0x8, virtual false, abstract: false, final false
  inline void set_startTime(double_t value);

  /// @brief Method set_time, addr 0x44e3e30, size 0x8, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__TriggerState();

  // Ctor Parameters [CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Time", ty: "double_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Magnitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_LastPerformedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_LastCanceledInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_PressedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ReleasedInUpdate", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __InputActionState__TriggerState(uint8_t m_Phase, uint8_t m_Flags, uint8_t m_MapIndex, uint16_t m_ControlIndex, double_t m_Time, double_t m_StartTime, uint16_t m_BindingIndex,
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6547 };

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionState__TriggerState, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ActionMapIndices
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionState::ActionMapIndices
struct CORDL_TYPE __InputActionState__ActionMapIndices {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__ActionMapIndices();

  // Ctor Parameters [CppParam { name: "actionStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "controlStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingStartIndex",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interactionStartIndex", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "processorStartIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "processorCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compositeStartIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionState__ActionMapIndices(int32_t actionStartIndex, int32_t actionCount, int32_t controlStartIndex, int32_t controlCount, int32_t bindingStartIndex, int32_t bindingCount,
                                                 int32_t interactionStartIndex, int32_t interactionCount, int32_t processorStartIndex, int32_t processorCount, int32_t compositeStartIndex,
                                                 int32_t compositeCount) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6548 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, actionStartIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, actionCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, controlStartIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, controlCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, bindingStartIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, bindingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, interactionStartIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, interactionCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, processorStartIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, processorCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, compositeStartIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, compositeCount) == 0x2c, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::UnmanagedMemory
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionState::UnmanagedMemory
struct CORDL_TYPE __InputActionState__UnmanagedMemory {
public:
  // Declarations
  __declspec(property(get = get_isAllocated)) bool isAllocated;

  __declspec(property(get = get_sizeInBytes)) int32_t sizeInBytes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Allocate, addr 0x44e3f30, size 0x128, virtual false, abstract: false, final false
  inline void Allocate(int32_t mapCount, int32_t actionCount, int32_t bindingCount, int32_t controlCount, int32_t interactionCount, int32_t compositeCount);

  /// @brief Method Clone, addr 0x44dd1ac, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory Clone();

  /// @brief Method CopyDataFrom, addr 0x44e4058, size 0x16c, virtual false, abstract: false, final false
  inline void CopyDataFrom(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory memory);

  /// @brief Method Dispose, addr 0x44dd020, size 0x3c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_isAllocated, addr 0x44e3ed4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAllocated();

  /// @brief Method get_sizeInBytes, addr 0x44e3ee4, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_sizeInBytes();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__UnmanagedMemory();

  // Ctor Parameters [CppParam { name: "basePtr", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "bindingCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compositeCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState>", modifiers: "", def_value:
  // None }, CppParam { name: "bindingStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>", modifiers: "", def_value: None }, CppParam { name:
  // "interactionStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState>", modifiers: "", def_value: None }, CppParam { name: "controlMagnitudes", ty:
  // "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam { name: "compositeMagnitudes", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam {
  // name: "enabledControls", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "actionBindingIndicesAndCounts", ty: "::cordl_internals::Ptr<uint16_t>",
  // modifiers: "", def_value: None }, CppParam { name: "actionBindingIndices", ty: "::cordl_internals::Ptr<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "controlIndexToBindingIndex",
  // ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "controlGroupingAndComplexity", ty: "::cordl_internals::Ptr<uint16_t>", modifiers: "", def_value: None },
  // CppParam { name: "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mapIndices", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices>", modifiers: "", def_value: None }]
  constexpr __InputActionState__UnmanagedMemory(::cordl_internals::Ptr<void> basePtr, int32_t mapCount, int32_t actionCount, int32_t interactionCount, int32_t bindingCount, int32_t controlCount,
                                                int32_t compositeCount, ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> actionStates,
                                                ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStates,
                                                ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState> interactionStates,
                                                ::cordl_internals::Ptr<float_t> controlMagnitudes, ::cordl_internals::Ptr<float_t> compositeMagnitudes, ::cordl_internals::Ptr<int32_t> enabledControls,
                                                ::cordl_internals::Ptr<uint16_t> actionBindingIndicesAndCounts, ::cordl_internals::Ptr<uint16_t> actionBindingIndices,
                                                ::cordl_internals::Ptr<int32_t> controlIndexToBindingIndex, ::cordl_internals::Ptr<uint16_t> controlGroupingAndComplexity,
                                                bool controlGroupingInitialized, ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices> mapIndices) noexcept;

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
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> actionStates;

  /// @brief Field bindingStates, offset: 0x28, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStates;

  /// @brief Field interactionStates, offset: 0x30, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState> interactionStates;

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
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices> mapIndices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6549 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, basePtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, mapCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, actionCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, interactionCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, bindingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, controlCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, compositeCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, actionStates) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, bindingStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, interactionStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, controlMagnitudes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, compositeMagnitudes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, enabledControls) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, actionBindingIndicesAndCounts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, actionBindingIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, controlIndexToBindingIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, controlGroupingAndComplexity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, controlGroupingInitialized) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, mapIndices) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::GlobalState
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 200, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionState::GlobalState
struct CORDL_TYPE __InputActionState__GlobalState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState__GlobalState();

  // Ctor Parameters [CppParam { name: "globalList", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: None },
  // CppParam { name: "onActionChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>", modifiers:
  // "", def_value: None }, CppParam { name: "onActionControlsChanged", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>", modifiers: "", def_value:
  // None }]
  constexpr __InputActionState__GlobalState(
      ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> onActionChange,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*> onActionControlsChanged) noexcept;

  /// @brief Field globalList, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList;

  /// @brief Field onActionChange, offset: 0x18, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> onActionChange;

  /// @brief Field onActionControlsChanged, offset: 0x68, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*> onActionControlsChanged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6550 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionState__GlobalState, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__GlobalState, globalList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__GlobalState, onActionChange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionState__GlobalState, onActionControlsChanged) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputActionState::<>c*
class CORDL_TYPE __InputActionState____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::__InputActionState____c* __9;

  /// @brief Field <>9__135_0, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__135_0,
      put = setStaticF___9__135_0)) ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>* __9__135_0;

  /// @brief Field <>9__135_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__135_1, put = setStaticF___9__135_1)) ::System::Action* __9__135_1;

  static inline ::UnityEngine::InputSystem::__InputActionState____c* New_ctor();

  /// @brief Method <SaveAndResetState>b__135_0, addr 0x44e4228, size 0x6c, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__135_0(ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState> state);

  /// @brief Method <SaveAndResetState>b__135_1, addr 0x44e4294, size 0x4, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__135_1();

  /// @brief Method .ctor, addr 0x44e4220, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::__InputActionState____c* getStaticF___9();

  static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>* getStaticF___9__135_0();

  static inline ::System::Action* getStaticF___9__135_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::__InputActionState____c* value);

  static inline void setStaticF___9__135_0(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>* value);

  static inline void setStaticF___9__135_1(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionState____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionState____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionState____c(__InputActionState____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionState____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionState____c(__InputActionState____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6551 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionState____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionState
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputActionState*
class CORDL_TYPE InputActionState : public ::System::Object {
public:
  // Declarations
  using ActionMapIndices = ::UnityEngine::InputSystem::__InputActionState__ActionMapIndices;

  using BindingState = ::UnityEngine::InputSystem::__InputActionState__BindingState;

  using GlobalState = ::UnityEngine::InputSystem::__InputActionState__GlobalState;

  using InteractionState = ::UnityEngine::InputSystem::__InputActionState__InteractionState;

  using TriggerState = ::UnityEngine::InputSystem::__InputActionState__TriggerState;

  using UnmanagedMemory = ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory;

  using __c = ::UnityEngine::InputSystem::__InputActionState____c;

  __declspec(property(get = get_actionStates)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> actionStates;

  __declspec(property(get = get_bindingStates)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStates;

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

  __declspec(property(get = get_interactionStates)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState> interactionStates;

  /// @brief Field interactions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_interactions, put = __cordl_internal_set_interactions)) ::ArrayW<Il2CppObject*, ::Array<Il2CppObject*>*> interactions;

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

  __declspec(property(get = get_mapIndices)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices> mapIndices;

  /// @brief Field maps, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_maps, put = __cordl_internal_set_maps)) ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>
      maps;

  /// @brief Field memory, offset 0x40, size 0x80
  __declspec(property(get = __cordl_internal_get_memory, put = __cordl_internal_set_memory)) ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory memory;

  /// @brief Field processors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_processors,
                      put = __cordl_internal_set_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*>
      processors;

  /// @brief Field s_GlobalState, offset 0xffffffff, size 0xb8
  static __declspec(property(get = getStaticF_s_GlobalState, put = setStaticF_s_GlobalState)) ::UnityEngine::InputSystem::__InputActionState__GlobalState s_GlobalState;

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

  /// @brief Method AddToGlobalList, addr 0x44dc8e4, size 0x88, virtual false, abstract: false, final false
  inline void AddToGlobalList();

  /// @brief Method ApplyProcessors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ApplyProcessors(int32_t bindingIndex, TValue value, ::UnityEngine::InputSystem::InputControl_1<TValue>* controlOfType);

  /// @brief Method CallActionListeners, addr 0x44e19dc, size 0x1c0, virtual false, abstract: false, final false
  inline void CallActionListeners(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputActionPhase phase,
                                  ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>> listeners,
                                  ::StringW callbackName);

  /// @brief Method CanUseDevice, addr 0x44dd400, size 0x200, virtual false, abstract: false, final false
  inline bool CanUseDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ChangePhaseOfAction, addr 0x44df46c, size 0x1f8, virtual false, abstract: false, final false
  inline bool ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger,
                                  ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformedOrCanceled);

  /// @brief Method ChangePhaseOfActionInternal, addr 0x44e1758, size 0x270, virtual false, abstract: false, final false
  inline void ChangePhaseOfActionInternal(int32_t actionIndex, ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> actionState,
                                          ::UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger);

  /// @brief Method ChangePhaseOfInteraction, addr 0x44e134c, size 0x40c, virtual false, abstract: false, final false
  inline void ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase newPhase, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger,
                                       ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformed, bool processNextInteractionOnCancel);

  /// @brief Method ClaimDataFrom, addr 0x44dc850, size 0x94, virtual false, abstract: false, final false
  inline void ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver resolver);

  /// @brief Method Clone, addr 0x44dd05c, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionState* Clone();

  /// @brief Method CompactGlobalList, addr 0x44e2974, size 0x168, virtual false, abstract: false, final false
  static inline void CompactGlobalList();

  /// @brief Method ComputeControlGroupingIfNecessary, addr 0x44dc96c, size 0x1ac, virtual false, abstract: false, final false
  inline void ComputeControlGroupingIfNecessary();

  /// @brief Method DeferredResolutionOfBindings, addr 0x44e3338, size 0x294, virtual false, abstract: false, final false
  static inline void DeferredResolutionOfBindings();

  /// @brief Method Destroy, addr 0x44dcbd0, size 0x190, virtual false, abstract: false, final false
  inline void Destroy(bool isFinalizing);

  /// @brief Method DestroyAllActionMapStates, addr 0x44e2c00, size 0x170, virtual false, abstract: false, final false
  static inline void DestroyAllActionMapStates();

  /// @brief Method DisableAllActions, addr 0x44e35cc, size 0x150, virtual false, abstract: false, final false
  static inline void DisableAllActions();

  /// @brief Method DisableAllActions, addr 0x44ddc58, size 0x100, virtual false, abstract: false, final false
  inline void DisableAllActions(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method DisableControls, addr 0x44df974, size 0xb0, virtual false, abstract: false, final false
  inline void DisableControls(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method DisableControls, addr 0x44de008, size 0x40, virtual false, abstract: false, final false
  inline void DisableControls(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method DisableControls, addr 0x44dcd68, size 0x180, virtual false, abstract: false, final false
  inline void DisableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls);

  /// @brief Method DisableSingleAction, addr 0x44df91c, size 0x58, virtual false, abstract: false, final false
  inline void DisableSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Dispose, addr 0x44dcd60, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnableAllActions, addr 0x44df71c, size 0xac, virtual false, abstract: false, final false
  inline void EnableAllActions(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method EnableControls, addr 0x44df86c, size 0xb0, virtual false, abstract: false, final false
  inline void EnableControls(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method EnableControls, addr 0x44df7c8, size 0x40, virtual false, abstract: false, final false
  inline void EnableControls(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method EnableControls, addr 0x44de8a8, size 0x188, virtual false, abstract: false, final false
  inline void EnableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls);

  /// @brief Method EnableSingleAction, addr 0x44df808, size 0x64, virtual false, abstract: false, final false
  inline void EnableSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method EvaluateCompositePartMagnitude, addr 0x44e2194, size 0xd4, virtual false, abstract: false, final false
  inline float_t EvaluateCompositePartMagnitude(int32_t bindingIndex, int32_t partNumber);

  /// @brief Method FetchActionState, addr 0x44df6c4, size 0x24, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> FetchActionState(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method FetchMapIndices, addr 0x44df6e8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionState__ActionMapIndices FetchMapIndices(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method Finalize, addr 0x44dcb38, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FindAllEnabledActions, addr 0x44e2d70, size 0x2b0, virtual false, abstract: false, final false
  static inline int32_t FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* result);

  /// @brief Method FindControlIndexOnBinding, addr 0x44dea30, size 0x60, virtual false, abstract: false, final false
  inline int32_t FindControlIndexOnBinding(int32_t bindingIndex, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method FinishBindingCompositeSetups, addr 0x44dd690, size 0xb4, virtual false, abstract: false, final false
  inline void FinishBindingCompositeSetups();

  /// @brief Method FinishBindingResolution, addr 0x44de13c, size 0x88, virtual false, abstract: false, final false
  inline void FinishBindingResolution(bool hasEnabledActions, ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory oldMemory,
                                      ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls, bool isFullResolve);

  /// @brief Method GetActionBindingStartIndexAndCount, addr 0x44df3a8, size 0x20, virtual false, abstract: false, final false
  inline uint16_t GetActionBindingStartIndexAndCount(int32_t actionIndex, ByRef<uint16_t> bindingCount);

  /// @brief Method GetActionMap, addr 0x44e1ea4, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* GetActionMap(int32_t bindingIndex);

  /// @brief Method GetActionOrNoneString, addr 0x44e1b9c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Object* GetActionOrNoneString(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger);

  /// @brief Method GetActionOrNull, addr 0x44e1c94, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* GetActionOrNull(int32_t bindingIndex);

  /// @brief Method GetActionOrNull, addr 0x44e1c00, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* GetActionOrNull(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger);

  /// @brief Method GetBinding, addr 0x44e1e24, size 0x80, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::InputSystem::InputBinding> GetBinding(int32_t bindingIndex);

  /// @brief Method GetBindingIndexInMap, addr 0x44e1db0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetBindingIndexInMap(int32_t bindingIndex);

  /// @brief Method GetBindingIndexInState, addr 0x44e1dec, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetBindingIndexInState(int32_t mapIndex, int32_t bindingIndexInMap);

  /// @brief Method GetBindingState, addr 0x44e1e14, size 0x10, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::InputSystem::__InputActionState__BindingState> GetBindingState(int32_t bindingIndex);

  /// @brief Method GetComplexityFromMonitorIndex, addr 0x44e05cc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetComplexityFromMonitorIndex(int64_t mapControlAndBindingIndex);

  /// @brief Method GetCompositePartPressTime, addr 0x44e2268, size 0x80, virtual false, abstract: false, final false
  inline double_t GetCompositePartPressTime(int32_t bindingIndex, int32_t partNumber);

  /// @brief Method GetControl, addr 0x44e1d28, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* GetControl(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger);

  /// @brief Method GetInteractionOrNull, addr 0x44e1d68, size 0x48, virtual false, abstract: false, final false
  inline Il2CppObject* GetInteractionOrNull(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger);

  /// @brief Method GetValueSizeInBytes, addr 0x44e1ee4, size 0x94, virtual false, abstract: false, final false
  inline int32_t GetValueSizeInBytes(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method GetValueType, addr 0x44e1f78, size 0x94, virtual false, abstract: false, final false
  inline ::System::Type* GetValueType(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method HasEnabledActions, addr 0x44dd618, size 0x78, virtual false, abstract: false, final false
  inline bool HasEnabledActions();

  /// @brief Method HookOnBeforeUpdate, addr 0x44dee34, size 0xd0, virtual false, abstract: false, final false
  inline void HookOnBeforeUpdate();

  /// @brief Method Initialize, addr 0x44dc7dc, size 0x74, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::InputSystem::InputBindingResolver resolver);

  /// @brief Method IsActionBoundToControlFromDevice, addr 0x44df2f8, size 0xb0, virtual false, abstract: false, final false
  inline bool IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice* device, int32_t actionIndex);

  /// @brief Method IsActiveControl, addr 0x44df004, size 0xb4, virtual false, abstract: false, final false
  inline bool IsActiveControl(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method IsActuated, addr 0x44e11a0, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsActuated(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, float_t threshold);

  /// @brief Method IsConflictingInput, addr 0x44e080c, size 0x410, virtual false, abstract: false, final false
  inline bool IsConflictingInput(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t actionIndex);

  /// @brief Method IsControlEnabled, addr 0x44dfa24, size 0x24, virtual false, abstract: false, final false
  inline bool IsControlEnabled(int32_t controlIndex);

  /// @brief Method IsUsingDevice, addr 0x44dd248, size 0x1b8, virtual false, abstract: false, final false
  inline bool IsUsingDevice(::UnityEngine::InputSystem::InputDevice* device);

  static inline ::UnityEngine::InputSystem::InputActionState* New_ctor();

  /// @brief Method NotifyListenersOfActionChange, addr 0x44de048, size 0xf4, virtual false, abstract: false, final false
  inline void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change);

  /// @brief Method NotifyListenersOfActionChange, addr 0x44def04, size 0x100, virtual false, abstract: false, final false
  static inline void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change, ::System::Object* actionOrMapOrAsset);

  /// @brief Method OnBeforeInitialUpdate, addr 0x44dfc04, size 0x1f0, virtual false, abstract: false, final false
  inline void OnBeforeInitialUpdate();

  /// @brief Method OnDeviceChange, addr 0x44e3020, size 0x318, virtual false, abstract: false, final false
  static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method PrepareForBindingReResolution, addr 0x44dd75c, size 0x4fc, virtual false, abstract: false, final false
  inline void PrepareForBindingReResolution(bool needFullResolve, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>> activeControls,
                                            ByRef<bool> hasEnabledActions);

  /// @brief Method ProcessButtonState, addr 0x44e0c1c, size 0x1b8, virtual false, abstract: false, final false
  inline void ProcessButtonState(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t actionIndex,
                                 ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStatePtr);

  /// @brief Method ProcessControlStateChange, addr 0x44dfe34, size 0x584, virtual false, abstract: false, final false
  inline void ProcessControlStateChange(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method ProcessDefaultInteraction, addr 0x44e0dd4, size 0x3a8, virtual false, abstract: false, final false
  inline void ProcessDefaultInteraction(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t actionIndex);

  /// @brief Method ProcessInteractions, addr 0x44e066c, size 0x1a0, virtual false, abstract: false, final false
  inline void ProcessInteractions(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t interactionStartIndex, int32_t interactionCount);

  /// @brief Method ProcessTimeout, addr 0x44e03d0, size 0x1fc, virtual false, abstract: false, final false
  inline void ProcessTimeout(double_t time, int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, int32_t interactionIndex);

  /// @brief Method ReadCompositePartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TComparer>
  inline TValue ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, ::cordl_internals::Ptr<bool> buttonValuePtr, ByRef<int32_t> controlIndex, TComparer comparer);

  /// @brief Method ReadCompositePartValue, addr 0x44e22e8, size 0x114, virtual false, abstract: false, final false
  inline bool ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadCompositePartValueAsObject, addr 0x44e23fc, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Object* ReadCompositePartValueAsObject(int32_t bindingIndex, int32_t partNumber);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites);

  /// @brief Method ReadValue, addr 0x44e200c, size 0x174, virtual false, abstract: false, final false
  inline void ReadValue(int32_t bindingIndex, int32_t controlIndex, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize, bool ignoreComposites);

  /// @brief Method ReadValueAsButton, addr 0x44e2668, size 0x130, virtual false, abstract: false, final false
  inline bool ReadValueAsButton(int32_t bindingIndex, int32_t controlIndex);

  /// @brief Method ReadValueAsObject, addr 0x44e24f8, size 0x170, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites);

  /// @brief Method RemoveMapFromGlobalList, addr 0x44dcee8, size 0x138, virtual false, abstract: false, final false
  inline void RemoveMapFromGlobalList();

  /// @brief Method ResetActionState, addr 0x44ddeec, size 0x11c, virtual false, abstract: false, final false
  inline void ResetActionState(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionPhase toPhase, bool hardReset);

  /// @brief Method ResetActionStatesDrivenBy, addr 0x44df0b8, size 0x234, virtual false, abstract: false, final false
  inline void ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ResetGlobals, addr 0x44e2adc, size 0x124, virtual false, abstract: false, final false
  static inline void ResetGlobals();

  /// @brief Method ResetInteractionState, addr 0x44ddd94, size 0x158, virtual false, abstract: false, final false
  inline void ResetInteractionState(int32_t interactionIndex);

  /// @brief Method ResetInteractionStateAndCancelIfNecessary, addr 0x44df3c8, size 0xa4, virtual false, abstract: false, final false
  inline void ResetInteractionStateAndCancelIfNecessary(int32_t mapIndex, int32_t bindingIndex, int32_t interactionIndex);

  /// @brief Method RestoreActionStatesAfterReResolvingBindings, addr 0x44de1c4, size 0x68c, virtual false, abstract: false, final false
  inline void RestoreActionStatesAfterReResolvingBindings(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory oldState,
                                                          ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls, bool isFullResolve);

  /// @brief Method SaveAndResetState, addr 0x44e2798, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState();

  /// @brief Method SetControlEnabled, addr 0x44dfabc, size 0x38, virtual false, abstract: false, final false
  inline void SetControlEnabled(int32_t controlIndex, bool state);

  /// @brief Method SetInitialStateCheckPending, addr 0x44dfaf4, size 0x94, virtual false, abstract: false, final false
  inline void SetInitialStateCheckPending(int32_t actionIndex, bool value);

  /// @brief Method SetInitialStateCheckPending, addr 0x44dfa70, size 0x4c, virtual false, abstract: false, final false
  inline void SetInitialStateCheckPending(::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStatePtr, bool value);

  /// @brief Method SetTotalTimeoutCompletionTime, addr 0x44e1258, size 0x30, virtual false, abstract: false, final false
  inline void SetTotalTimeoutCompletionTime(float_t seconds, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger);

  /// @brief Method ShouldIgnoreInputOnCompositeBinding, addr 0x44e0620, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldIgnoreInputOnCompositeBinding(::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> binding,
                                                         ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method SplitUpMapAndControlAndBindingIndex, addr 0x44dfe18, size 0x1c, virtual false, abstract: false, final false
  inline void SplitUpMapAndControlAndBindingIndex(int64_t mapControlAndBindingIndex, ByRef<int32_t> mapIndex, ByRef<int32_t> controlIndex, ByRef<int32_t> bindingIndex);

  /// @brief Method StartTimeout, addr 0x44decdc, size 0x158, virtual false, abstract: false, final false
  inline void StartTimeout(float_t seconds, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger);

  /// @brief Method StopTimeout, addr 0x44e1288, size 0xc4, virtual false, abstract: false, final false
  inline void StopTimeout(int32_t interactionIndex);

  /// @brief Method System.ICloneable.Clone, addr 0x44dd244, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToCombinedMapAndControlAndBindingIndex, addr 0x44dfa48, size 0x28, virtual false, abstract: false, final false
  inline int64_t ToCombinedMapAndControlAndBindingIndex(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex);

  /// @brief Method UnhookOnBeforeUpdate, addr 0x44dfb88, size 0x7c, virtual false, abstract: false, final false
  inline void UnhookOnBeforeUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged, addr 0x44dfe00, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t mapControlAndBindingIndex);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired, addr 0x44e03b8, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t mapControlAndBindingIndex,
                                                                                           int32_t interactionIndex);

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> const& __cordl_internal_get_composites() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>& __cordl_internal_get_composites();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_controls() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_controls();

  constexpr ::ArrayW<Il2CppObject*, ::Array<Il2CppObject*>*> const& __cordl_internal_get_interactions() const;

  constexpr ::ArrayW<Il2CppObject*, ::Array<Il2CppObject*>*>& __cordl_internal_get_interactions();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_m_CurrentlyProcessingThisEvent() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_m_CurrentlyProcessingThisEvent();

  constexpr bool const& __cordl_internal_get_m_InProcessControlStateChange() const;

  constexpr bool& __cordl_internal_get_m_InProcessControlStateChange();

  constexpr ::System::Action*& __cordl_internal_get_m_OnAfterUpdateDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_OnAfterUpdateDelegate() const;

  constexpr bool const& __cordl_internal_get_m_OnAfterUpdateHooked() const;

  constexpr bool& __cordl_internal_get_m_OnAfterUpdateHooked();

  constexpr ::System::Action*& __cordl_internal_get_m_OnBeforeUpdateDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_OnBeforeUpdateDelegate() const;

  constexpr bool const& __cordl_internal_get_m_OnBeforeUpdateHooked() const;

  constexpr bool& __cordl_internal_get_m_OnBeforeUpdateHooked();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> const& __cordl_internal_get_maps() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>& __cordl_internal_get_maps();

  constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory const& __cordl_internal_get_memory() const;

  constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory& __cordl_internal_get_memory();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> const& __cordl_internal_get_processors() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*>& __cordl_internal_get_processors();

  constexpr int32_t const& __cordl_internal_get_totalProcessorCount() const;

  constexpr int32_t& __cordl_internal_get_totalProcessorCount();

  constexpr void __cordl_internal_set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> value);

  constexpr void __cordl_internal_set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_interactions(::ArrayW<Il2CppObject*, ::Array<Il2CppObject*>*> value);

  constexpr void __cordl_internal_set_m_CurrentlyProcessingThisEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr value);

  constexpr void __cordl_internal_set_m_InProcessControlStateChange(bool value);

  constexpr void __cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action* value);

  constexpr void __cordl_internal_set_m_OnAfterUpdateHooked(bool value);

  constexpr void __cordl_internal_set_m_OnBeforeUpdateDelegate(::System::Action* value);

  constexpr void __cordl_internal_set_m_OnBeforeUpdateHooked(bool value);

  constexpr void __cordl_internal_set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> value);

  constexpr void __cordl_internal_set_memory(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory value);

  constexpr void __cordl_internal_set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> value);

  constexpr void __cordl_internal_set_totalProcessorCount(int32_t value);

  /// @brief Method .ctor, addr 0x44dd1a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::__InputActionState__GlobalState getStaticF_s_GlobalState();

  /// @brief Method get_actionStates, addr 0x44dc79c, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> get_actionStates();

  /// @brief Method get_bindingStates, addr 0x44dc7a4, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> get_bindingStates();

  /// @brief Method get_controlGroupingAndComplexity, addr 0x44dc7bc, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint16_t> get_controlGroupingAndComplexity();

  /// @brief Method get_controlIndexToBindingIndex, addr 0x44dc7b4, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<int32_t> get_controlIndexToBindingIndex();

  /// @brief Method get_controlMagnitudes, addr 0x44dc7c4, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<float_t> get_controlMagnitudes();

  /// @brief Method get_enabledControls, addr 0x44dc7cc, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint32_t> get_enabledControls();

  /// @brief Method get_interactionStates, addr 0x44dc7ac, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState> get_interactionStates();

  /// @brief Method get_isProcessingControlStateChange, addr 0x44dc7d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isProcessingControlStateChange();

  /// @brief Method get_mapIndices, addr 0x44dc794, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices> get_mapIndices();

  /// @brief Method get_totalActionCount, addr 0x44dc774, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalActionCount();

  /// @brief Method get_totalBindingCount, addr 0x44dc77c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalBindingCount();

  /// @brief Method get_totalCompositeCount, addr 0x44dc764, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalCompositeCount();

  /// @brief Method get_totalControlCount, addr 0x44dc78c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalControlCount();

  /// @brief Method get_totalInteractionCount, addr 0x44dc784, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalInteractionCount();

  /// @brief Method get_totalMapCount, addr 0x44dc76c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalMapCount();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept;

  static inline void setStaticF_s_GlobalState(::UnityEngine::InputSystem::__InputActionState__GlobalState value);

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

  /// @brief Field maps, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> ___maps;

  /// @brief Field controls, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> ___controls;

  /// @brief Field interactions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<Il2CppObject*, ::Array<Il2CppObject*>*> ___interactions;

  /// @brief Field processors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> ___processors;

  /// @brief Field composites, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> ___composites;

  /// @brief Field totalProcessorCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___totalProcessorCount;

  /// @brief Field memory, offset: 0x40, size: 0x80, def value: None
  ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory ___memory;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6552 };

  /// @brief Field kInvalidIndex offset 0xffffffff size 0x4
  static constexpr int32_t kInvalidIndex{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionState, 0xe0>, "Size mismatch!");

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

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputActionState__BindingState__Flags, "UnityEngine.InputSystem", "InputActionState/BindingState/Flags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputActionState__InteractionState__Flags, "UnityEngine.InputSystem", "InputActionState/InteractionState/Flags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputActionState__TriggerState__Flags, "UnityEngine.InputSystem", "InputActionState/TriggerState/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState*, "UnityEngine.InputSystem", "InputActionState");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionState____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionState____c*, "UnityEngine.InputSystem", "InputActionState/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, "UnityEngine.InputSystem", "InputActionState/ActionMapIndices");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionState__BindingState, "UnityEngine.InputSystem", "InputActionState/BindingState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionState__GlobalState, "UnityEngine.InputSystem", "InputActionState/GlobalState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionState__InteractionState, "UnityEngine.InputSystem", "InputActionState/InteractionState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionState__TriggerState, "UnityEngine.InputSystem", "InputActionState/TriggerState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, "UnityEngine.InputSystem", "InputActionState/UnmanagedMemory");
