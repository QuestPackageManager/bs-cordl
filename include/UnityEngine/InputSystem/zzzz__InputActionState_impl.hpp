#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputActionState.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingResolver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InteractionState_InputActionState_Flags::InteractionState_InputActionState_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InteractionState_InputActionState_Flags::InteractionState_InputActionState_Flags() {}
constexpr ::UnityEngine::InputSystem::InteractionState_InputActionState_Flags UnityEngine::InputSystem::InteractionState_InputActionState_Flags::TimerRunning{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_triggerControlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_triggerControlIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64ef374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_triggerControlIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_triggerControlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_triggerControlIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64f02d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_triggerControlIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f527c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_startTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(double_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_startTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_performedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_performedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f528c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_performedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_performedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(double_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_performedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_performedTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_timerStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_timerStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f529c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_timerStartTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_timerStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(double_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_timerStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_timerStartTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_timerDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_timerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_timerDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_timerDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(float_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_timerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_timerDuration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_totalTimeoutCompletionDone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_totalTimeoutCompletionDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_totalTimeoutCompletionDone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_totalTimeoutCompletionDone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(float_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_totalTimeoutCompletionDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_totalTimeoutCompletionDone", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_totalTimeoutCompletionTimeRemaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_totalTimeoutCompletionTimeRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_totalTimeoutCompletionTimeRemaining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_totalTimeoutCompletionTimeRemaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(float_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_totalTimeoutCompletionTimeRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(),
                                                                                           { "set_totalTimeoutCompletionTimeRemaining", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_timerMonitorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_timerMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_timerMonitorIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_timerMonitorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(int64_t)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_timerMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_timerMonitorIndex", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_isTimerRunning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_isTimerRunning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f033c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_isTimerRunning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_isTimerRunning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_isTimerRunning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f2b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_isTimerRunning", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.get_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputActionState_InteractionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_phase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_InteractionState.set_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_InteractionState::*)(::UnityEngine::InputSystem::InputActionPhase)>(
    &::UnityEngine::InputSystem::InputActionState_InteractionState::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f02c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(),
                                                                                           { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
    return ___internal_method;
  }
};
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TriggerControlIndex() {
  return this->___m_TriggerControlIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TriggerControlIndex() const {
  return this->___m_TriggerControlIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_TriggerControlIndex(uint16_t value) {
  this->___m_TriggerControlIndex = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_Phase() {
  return this->___m_Phase;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_Phase() const {
  return this->___m_Phase;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_Phase(uint8_t value) {
  this->___m_Phase = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_Flags() {
  return this->___m_Flags;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_Flags() const {
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_Flags(uint8_t value) {
  this->___m_Flags = value;
}
constexpr float_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TimerDuration() {
  return this->___m_TimerDuration;
}
constexpr float_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TimerDuration() const {
  return this->___m_TimerDuration;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_TimerDuration(float_t value) {
  this->___m_TimerDuration = value;
}
constexpr double_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_StartTime() {
  return this->___m_StartTime;
}
constexpr double_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_StartTime() const {
  return this->___m_StartTime;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_StartTime(double_t value) {
  this->___m_StartTime = value;
}
constexpr double_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TimerStartTime() {
  return this->___m_TimerStartTime;
}
constexpr double_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TimerStartTime() const {
  return this->___m_TimerStartTime;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_TimerStartTime(double_t value) {
  this->___m_TimerStartTime = value;
}
constexpr double_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_PerformedTime() {
  return this->___m_PerformedTime;
}
constexpr double_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_PerformedTime() const {
  return this->___m_PerformedTime;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_PerformedTime(double_t value) {
  this->___m_PerformedTime = value;
}
constexpr float_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TotalTimeoutCompletionTimeDone() {
  return this->___m_TotalTimeoutCompletionTimeDone;
}
constexpr float_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TotalTimeoutCompletionTimeDone() const {
  return this->___m_TotalTimeoutCompletionTimeDone;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_TotalTimeoutCompletionTimeDone(float_t value) {
  this->___m_TotalTimeoutCompletionTimeDone = value;
}
constexpr float_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining() {
  return this->___m_TotalTimeoutCompletionTimeRemaining;
}
constexpr float_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining() const {
  return this->___m_TotalTimeoutCompletionTimeRemaining;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_TotalTimeoutCompletionTimeRemaining(float_t value) {
  this->___m_TotalTimeoutCompletionTimeRemaining = value;
}
constexpr int64_t& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TimerMonitorIndex() {
  return this->___m_TimerMonitorIndex;
}
constexpr int64_t const& UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_get_m_TimerMonitorIndex() const {
  return this->___m_TimerMonitorIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_InteractionState::__cordl_internal_set_m_TimerMonitorIndex(int64_t value) {
  this->___m_TimerMonitorIndex = value;
}
inline int32_t UnityEngine::InputSystem::InputActionState_InteractionState::get_triggerControlIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_triggerControlIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_triggerControlIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_triggerControlIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::InputActionState_InteractionState::get_startTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_startTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_startTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_startTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::InputActionState_InteractionState::get_performedTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_performedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_performedTime(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_performedTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::InputActionState_InteractionState::get_timerStartTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_timerStartTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_timerStartTime(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_timerStartTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputActionState_InteractionState::get_timerDuration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_timerDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_timerDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_timerDuration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputActionState_InteractionState::get_totalTimeoutCompletionDone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_totalTimeoutCompletionDone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_totalTimeoutCompletionDone(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_totalTimeoutCompletionDone", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputActionState_InteractionState::get_totalTimeoutCompletionTimeRemaining() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_totalTimeoutCompletionTimeRemaining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_totalTimeoutCompletionTimeRemaining(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(),
                                                                                         { "set_totalTimeoutCompletionTimeRemaining", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t UnityEngine::InputSystem::InputActionState_InteractionState::get_timerMonitorIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_timerMonitorIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_timerMonitorIndex(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_timerMonitorIndex", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_InteractionState::get_isTimerRunning() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_isTimerRunning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_isTimerRunning(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "set_isTimerRunning", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::InputActionState_InteractionState::get_phase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(), { "get_phase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_InteractionState::set_phase(::UnityEngine::InputSystem::InputActionPhase value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_InteractionState>(),
                                                                                         { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_TriggerControlIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerStartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_PerformedTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TotalTimeoutCompletionTimeDone", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_TotalTimeoutCompletionTimeRemaining", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerMonitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionState_InteractionState::InputActionState_InteractionState(uint16_t m_TriggerControlIndex, uint8_t m_Phase, uint8_t m_Flags, float_t m_TimerDuration,
                                                                                                           double_t m_StartTime, double_t m_TimerStartTime, double_t m_PerformedTime,
                                                                                                           float_t m_TotalTimeoutCompletionTimeDone, float_t m_TotalTimeoutCompletionTimeRemaining,
                                                                                                           int64_t m_TimerMonitorIndex) noexcept {
  this->m_TriggerControlIndex = m_TriggerControlIndex;
  this->m_Phase = m_Phase;
  this->m_Flags = m_Flags;
  this->m_TimerDuration = m_TimerDuration;
  this->m_StartTime = m_StartTime;
  this->m_TimerStartTime = m_TimerStartTime;
  this->m_PerformedTime = m_PerformedTime;
  this->m_TotalTimeoutCompletionTimeDone = m_TotalTimeoutCompletionTimeDone;
  this->m_TotalTimeoutCompletionTimeRemaining = m_TotalTimeoutCompletionTimeRemaining;
  this->m_TimerMonitorIndex = m_TimerMonitorIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState_InteractionState::InputActionState_InteractionState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags::BindingState_InputActionState_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags::BindingState_InputActionState_Flags() {}
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags UnityEngine::InputSystem::BindingState_InputActionState_Flags::ChainsWithNext{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags UnityEngine::InputSystem::BindingState_InputActionState_Flags::EndOfChain{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags UnityEngine::InputSystem::BindingState_InputActionState_Flags::Composite{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags UnityEngine::InputSystem::BindingState_InputActionState_Flags::PartOfComposite{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags UnityEngine::InputSystem::BindingState_InputActionState_Flags::InitialStateCheckPending{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::BindingState_InputActionState_Flags UnityEngine::InputSystem::BindingState_InputActionState_Flags::WantsInitialStateCheck{ static_cast<int32_t>(0x20) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_controlStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_controlStartIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f52f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_controlStartIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_controlStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_controlStartIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f52fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_controlStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_controlCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_controlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_controlCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_controlCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_controlCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f5388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_controlCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_interactionStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_interactionStartIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64ef360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_interactionStartIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_interactionStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_interactionStartIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f540c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_interactionStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_interactionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_interactionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f54a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_interactionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_interactionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_interactionCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f54a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_interactionCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_processorStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_processorStartIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f3c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_processorStartIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_processorStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_processorStartIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_processorStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_processorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_processorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f55c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_processorCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_processorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_processorCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f55c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_processorCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_actionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_actionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64eff78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_actionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_actionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_actionIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f564c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_actionIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_mapIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f56e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_mapIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_mapIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_mapIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f56e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_mapIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_compositeOrCompositeBindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_compositeOrCompositeBindingIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64edfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_compositeOrCompositeBindingIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_compositeOrCompositeBindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_compositeOrCompositeBindingIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f576c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_compositeOrCompositeBindingIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_triggerEventIdForComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_triggerEventIdForComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_triggerEventIdForComposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_triggerEventIdForComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_triggerEventIdForComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_triggerEventIdForComposite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_pressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_pressTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_pressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(double_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_pressTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::BindingState_InputActionState_Flags (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(::UnityEngine::InputSystem::BindingState_InputActionState_Flags)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(),
                                                             { "set_flags", {}, { ::i2c::type_of<::UnityEngine::InputSystem::BindingState_InputActionState_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_chainsWithNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_chainsWithNext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f5830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_chainsWithNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_chainsWithNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_chainsWithNext)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f583c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_chainsWithNext", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_isEndOfChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_isEndOfChain)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f5850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isEndOfChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_isEndOfChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_isEndOfChain)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f585c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_isEndOfChain", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_isPartOfChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_isPartOfChain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isPartOfChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_isComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_isComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64eec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isComposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_isComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_isComposite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f588c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_isComposite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_isPartOfComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_isPartOfComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64edfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isPartOfComposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_isPartOfComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_isPartOfComposite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f58ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_isPartOfComposite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_initialStateCheckPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_initialStateCheckPending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f1618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_initialStateCheckPending", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_initialStateCheckPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_initialStateCheckPending)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64effa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_initialStateCheckPending", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_wantsInitialStateCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64eff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_wantsInitialStateCheck", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_wantsInitialStateCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f58cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_wantsInitialStateCheck", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.get_partIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_BindingState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::get_partIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f58ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_partIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_BindingState.set_partIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_BindingState::set_partIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f58f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_partIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ControlCount() {
  return this->___m_ControlCount;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ControlCount() const {
  return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_ControlCount(uint8_t value) {
  this->___m_ControlCount = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_InteractionCount() {
  return this->___m_InteractionCount;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_InteractionCount() const {
  return this->___m_InteractionCount;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_InteractionCount(uint8_t value) {
  this->___m_InteractionCount = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ProcessorCount() {
  return this->___m_ProcessorCount;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ProcessorCount() const {
  return this->___m_ProcessorCount;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_ProcessorCount(uint8_t value) {
  this->___m_ProcessorCount = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_MapIndex() {
  return this->___m_MapIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_MapIndex() const {
  return this->___m_MapIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_MapIndex(uint8_t value) {
  this->___m_MapIndex = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_Flags() {
  return this->___m_Flags;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_Flags() const {
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_Flags(uint8_t value) {
  this->___m_Flags = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_PartIndex() {
  return this->___m_PartIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_PartIndex() const {
  return this->___m_PartIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_PartIndex(uint8_t value) {
  this->___m_PartIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ActionIndex() {
  return this->___m_ActionIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ActionIndex() const {
  return this->___m_ActionIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_ActionIndex(uint16_t value) {
  this->___m_ActionIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_CompositeOrCompositeBindingIndex() {
  return this->___m_CompositeOrCompositeBindingIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_CompositeOrCompositeBindingIndex() const {
  return this->___m_CompositeOrCompositeBindingIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_CompositeOrCompositeBindingIndex(uint16_t value) {
  this->___m_CompositeOrCompositeBindingIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ProcessorStartIndex() {
  return this->___m_ProcessorStartIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ProcessorStartIndex() const {
  return this->___m_ProcessorStartIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_ProcessorStartIndex(uint16_t value) {
  this->___m_ProcessorStartIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_InteractionStartIndex() {
  return this->___m_InteractionStartIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_InteractionStartIndex() const {
  return this->___m_InteractionStartIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_InteractionStartIndex(uint16_t value) {
  this->___m_InteractionStartIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ControlStartIndex() {
  return this->___m_ControlStartIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_ControlStartIndex() const {
  return this->___m_ControlStartIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_ControlStartIndex(uint16_t value) {
  this->___m_ControlStartIndex = value;
}
constexpr double_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_PressTime() {
  return this->___m_PressTime;
}
constexpr double_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_PressTime() const {
  return this->___m_PressTime;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_PressTime(double_t value) {
  this->___m_PressTime = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_TriggerEventIdForComposite() {
  return this->___m_TriggerEventIdForComposite;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get_m_TriggerEventIdForComposite() const {
  return this->___m_TriggerEventIdForComposite;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set_m_TriggerEventIdForComposite(int32_t value) {
  this->___m_TriggerEventIdForComposite = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get___padding() {
  return this->_____padding;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_get___padding() const {
  return this->_____padding;
}
constexpr void UnityEngine::InputSystem::InputActionState_BindingState::__cordl_internal_set___padding(int32_t value) {
  this->_____padding = value;
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_controlStartIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_controlStartIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_controlStartIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_controlStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_controlCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_controlCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_controlCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_controlCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_interactionStartIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_interactionStartIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_interactionStartIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_interactionStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_interactionCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_interactionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_interactionCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_interactionCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_processorStartIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_processorStartIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_processorStartIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_processorStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_processorCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_processorCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_processorCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_processorCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_actionIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_actionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_actionIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_actionIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_mapIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_mapIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_mapIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_mapIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_compositeOrCompositeBindingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_compositeOrCompositeBindingIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_compositeOrCompositeBindingIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_compositeOrCompositeBindingIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_triggerEventIdForComposite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_triggerEventIdForComposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_triggerEventIdForComposite(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_triggerEventIdForComposite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::InputActionState_BindingState::get_pressTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_pressTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_pressTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_pressTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::BindingState_InputActionState_Flags UnityEngine::InputSystem::InputActionState_BindingState::get_flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::BindingState_InputActionState_Flags>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_flags(::UnityEngine::InputSystem::BindingState_InputActionState_Flags value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(),
                                                                                         { "set_flags", {}, { ::i2c::type_of<::UnityEngine::InputSystem::BindingState_InputActionState_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_BindingState::get_chainsWithNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_chainsWithNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_chainsWithNext(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_chainsWithNext", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_BindingState::get_isEndOfChain() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isEndOfChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_isEndOfChain(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_isEndOfChain", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_BindingState::get_isPartOfChain() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isPartOfChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState_BindingState::get_isComposite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isComposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_isComposite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_isComposite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_BindingState::get_isPartOfComposite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_isPartOfComposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_isPartOfComposite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_isPartOfComposite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_BindingState::get_initialStateCheckPending() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_initialStateCheckPending", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_initialStateCheckPending(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_initialStateCheckPending", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_BindingState::get_wantsInitialStateCheck() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_wantsInitialStateCheck", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_wantsInitialStateCheck(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_wantsInitialStateCheck", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_BindingState::get_partIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "get_partIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_BindingState::set_partIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_BindingState>(), { "set_partIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_ControlCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionCount", ty: "uint8_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_ProcessorCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PartIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ActionIndex", ty:
// "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompositeOrCompositeBindingIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ProcessorStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ControlStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PressTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_TriggerEventIdForComposite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionState_BindingState::InputActionState_BindingState(uint8_t m_ControlCount, uint8_t m_InteractionCount, uint8_t m_ProcessorCount, uint8_t m_MapIndex,
                                                                                                   uint8_t m_Flags, uint8_t m_PartIndex, uint16_t m_ActionIndex,
                                                                                                   uint16_t m_CompositeOrCompositeBindingIndex, uint16_t m_ProcessorStartIndex,
                                                                                                   uint16_t m_InteractionStartIndex, uint16_t m_ControlStartIndex, double_t m_PressTime,
                                                                                                   int32_t m_TriggerEventIdForComposite, int32_t __padding) noexcept {
  this->m_ControlCount = m_ControlCount;
  this->m_InteractionCount = m_InteractionCount;
  this->m_ProcessorCount = m_ProcessorCount;
  this->m_MapIndex = m_MapIndex;
  this->m_Flags = m_Flags;
  this->m_PartIndex = m_PartIndex;
  this->m_ActionIndex = m_ActionIndex;
  this->m_CompositeOrCompositeBindingIndex = m_CompositeOrCompositeBindingIndex;
  this->m_ProcessorStartIndex = m_ProcessorStartIndex;
  this->m_InteractionStartIndex = m_InteractionStartIndex;
  this->m_ControlStartIndex = m_ControlStartIndex;
  this->m_PressTime = m_PressTime;
  this->m_TriggerEventIdForComposite = m_TriggerEventIdForComposite;
  this->__padding = __padding;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState_BindingState::InputActionState_BindingState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags::TriggerState_InputActionState_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags::TriggerState_InputActionState_Flags() {}
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::TriggerState_InputActionState_Flags::HaveMagnitude{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::TriggerState_InputActionState_Flags::PassThrough{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::TriggerState_InputActionState_Flags::MayNeedConflictResolution{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::TriggerState_InputActionState_Flags::HasMultipleConcurrentActuations{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::TriggerState_InputActionState_Flags::InProcessing{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::TriggerState_InputActionState_Flags::Button{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::TriggerState_InputActionState_Flags::Pressed{ static_cast<int32_t>(0x40) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f58fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_phase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(::UnityEngine::InputSystem::InputActionPhase)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64eff70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(),
                                                                                           { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isDisabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64eff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isDisabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isWaiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f5904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isWaiting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f5914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isPerformed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f3124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isPerformed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f5924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isCanceled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(double_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f593c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_startTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(double_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f594c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_startTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_magnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_magnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_magnitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_magnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(float_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_magnitude)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f0234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_magnitude", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_haveMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_haveMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f595c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_haveMagnitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_mapIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_mapIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_mapIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_mapIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64f0348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_mapIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_controlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_controlIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64ef34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_controlIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_controlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_controlIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64f01c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_controlIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_bindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_bindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_bindingIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_bindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_bindingIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64eff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_bindingIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_interactionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_interactionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f0248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_interactionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_interactionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_interactionIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64f025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_interactionIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_lastPerformedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_lastPerformedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_lastPerformedInUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_lastPerformedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_lastPerformedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_lastPerformedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_frame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_frame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_frame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_frame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_frame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_frame", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_lastCompletedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_lastCompletedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_lastCompletedInUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_lastCompletedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_lastCompletedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_lastCompletedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_lastCanceledInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_lastCanceledInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_lastCanceledInUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_lastCanceledInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_lastCanceledInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_lastCanceledInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_pressedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_pressedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_pressedInUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_pressedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_pressedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_pressedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_releasedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_releasedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_releasedInUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_releasedInUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_releasedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_releasedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isPassThrough
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isPassThrough)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f09d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isPassThrough", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_isPassThrough
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_isPassThrough)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f1e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_isPassThrough", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f1e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_isButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_isButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f1e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_isButton", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_isPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_isPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f2a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_isPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_isPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f0dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_isPressed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_mayNeedConflictResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_mayNeedConflictResolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f2a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_mayNeedConflictResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_mayNeedConflictResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_mayNeedConflictResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f59d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_mayNeedConflictResolution", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_hasMultipleConcurrentActuations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_hasMultipleConcurrentActuations)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f2a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_hasMultipleConcurrentActuations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_hasMultipleConcurrentActuations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_hasMultipleConcurrentActuations)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f0d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_hasMultipleConcurrentActuations", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_inProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_inProcessing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f3460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_inProcessing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_inProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_inProcessing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f0d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_inProcessing", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::TriggerState_InputActionState_Flags (::UnityEngine::InputSystem::InputActionState_TriggerState::*)()>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f59f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_TriggerState.set_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_TriggerState::*)(::UnityEngine::InputSystem::TriggerState_InputActionState_Flags)>(
    &::UnityEngine::InputSystem::InputActionState_TriggerState::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f346c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(),
                                                             { "set_flags", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TriggerState_InputActionState_Flags>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Phase() {
  return this->___m_Phase;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Phase() const {
  return this->___m_Phase;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_Phase(uint8_t value) {
  this->___m_Phase = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Flags() {
  return this->___m_Flags;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Flags() const {
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_Flags(uint8_t value) {
  this->___m_Flags = value;
}
constexpr uint8_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_MapIndex() {
  return this->___m_MapIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_MapIndex() const {
  return this->___m_MapIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_MapIndex(uint8_t value) {
  this->___m_MapIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_ControlIndex() {
  return this->___m_ControlIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_ControlIndex() const {
  return this->___m_ControlIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_ControlIndex(uint16_t value) {
  this->___m_ControlIndex = value;
}
constexpr double_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Time() {
  return this->___m_Time;
}
constexpr double_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Time() const {
  return this->___m_Time;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_Time(double_t value) {
  this->___m_Time = value;
}
constexpr double_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_StartTime() {
  return this->___m_StartTime;
}
constexpr double_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_StartTime() const {
  return this->___m_StartTime;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_StartTime(double_t value) {
  this->___m_StartTime = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_BindingIndex() {
  return this->___m_BindingIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_BindingIndex() const {
  return this->___m_BindingIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_BindingIndex(uint16_t value) {
  this->___m_BindingIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_InteractionIndex() {
  return this->___m_InteractionIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_InteractionIndex() const {
  return this->___m_InteractionIndex;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_InteractionIndex(uint16_t value) {
  this->___m_InteractionIndex = value;
}
constexpr float_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Magnitude() {
  return this->___m_Magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Magnitude() const {
  return this->___m_Magnitude;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_Magnitude(float_t value) {
  this->___m_Magnitude = value;
}
constexpr uint32_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_LastPerformedInUpdate() {
  return this->___m_LastPerformedInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_LastPerformedInUpdate() const {
  return this->___m_LastPerformedInUpdate;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_LastPerformedInUpdate(uint32_t value) {
  this->___m_LastPerformedInUpdate = value;
}
constexpr uint32_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_LastCanceledInUpdate() {
  return this->___m_LastCanceledInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_LastCanceledInUpdate() const {
  return this->___m_LastCanceledInUpdate;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_LastCanceledInUpdate(uint32_t value) {
  this->___m_LastCanceledInUpdate = value;
}
constexpr uint32_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_PressedInUpdate() {
  return this->___m_PressedInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_PressedInUpdate() const {
  return this->___m_PressedInUpdate;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_PressedInUpdate(uint32_t value) {
  this->___m_PressedInUpdate = value;
}
constexpr uint32_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_ReleasedInUpdate() {
  return this->___m_ReleasedInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_ReleasedInUpdate() const {
  return this->___m_ReleasedInUpdate;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_ReleasedInUpdate(uint32_t value) {
  this->___m_ReleasedInUpdate = value;
}
constexpr uint32_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_LastCompletedInUpdate() {
  return this->___m_LastCompletedInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_LastCompletedInUpdate() const {
  return this->___m_LastCompletedInUpdate;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_LastCompletedInUpdate(uint32_t value) {
  this->___m_LastCompletedInUpdate = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Frame() {
  return this->___m_Frame;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_get_m_Frame() const {
  return this->___m_Frame;
}
constexpr void UnityEngine::InputSystem::InputActionState_TriggerState::__cordl_internal_set_m_Frame(int32_t value) {
  this->___m_Frame = value;
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::InputActionState_TriggerState::get_phase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_phase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_phase(::UnityEngine::InputSystem::InputActionPhase value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(),
                                                                                         { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isDisabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isDisabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isWaiting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isWaiting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isPerformed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isPerformed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isCanceled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputActionState_TriggerState::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_time(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::InputActionState_TriggerState::get_startTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_startTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_startTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_startTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputActionState_TriggerState::get_magnitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_magnitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_magnitude(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_magnitude", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_haveMagnitude() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_haveMagnitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_mapIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_mapIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_mapIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_mapIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_controlIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_controlIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_controlIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_controlIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_bindingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_bindingIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_bindingIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_bindingIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_interactionIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_interactionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_interactionIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_interactionIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_lastPerformedInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_lastPerformedInUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_lastPerformedInUpdate(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_lastPerformedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_frame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_frame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_frame(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_frame", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_lastCompletedInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_lastCompletedInUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_lastCompletedInUpdate(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_lastCompletedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_lastCanceledInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_lastCanceledInUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_lastCanceledInUpdate(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_lastCanceledInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_pressedInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_pressedInUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_pressedInUpdate(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_pressedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::InputActionState_TriggerState::get_releasedInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_releasedInUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_releasedInUpdate(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_releasedInUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isPassThrough() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isPassThrough", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_isPassThrough(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_isPassThrough", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_isButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_isButton", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_isPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_isPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_isPressed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_isPressed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_mayNeedConflictResolution() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_mayNeedConflictResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_mayNeedConflictResolution(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_mayNeedConflictResolution", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_hasMultipleConcurrentActuations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_hasMultipleConcurrentActuations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_hasMultipleConcurrentActuations(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_hasMultipleConcurrentActuations", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionState_TriggerState::get_inProcessing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_inProcessing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_inProcessing(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "set_inProcessing", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::TriggerState_InputActionState_Flags UnityEngine::InputSystem::InputActionState_TriggerState::get_flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(), { "get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TriggerState_InputActionState_Flags>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_TriggerState::set_flags(::UnityEngine::InputSystem::TriggerState_InputActionState_Flags value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_TriggerState>(),
                                                                                         { "set_flags", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TriggerState_InputActionState_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Time", ty:
// "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingIndex", ty: "uint16_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Magnitude", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_LastPerformedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LastCanceledInUpdate", ty: "uint32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_PressedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReleasedInUpdate", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_LastCompletedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Frame", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionState_TriggerState::InputActionState_TriggerState(uint8_t m_Phase, uint8_t m_Flags, uint8_t m_MapIndex, uint16_t m_ControlIndex, double_t m_Time,
                                                                                                   double_t m_StartTime, uint16_t m_BindingIndex, uint16_t m_InteractionIndex, float_t m_Magnitude,
                                                                                                   uint32_t m_LastPerformedInUpdate, uint32_t m_LastCanceledInUpdate, uint32_t m_PressedInUpdate,
                                                                                                   uint32_t m_ReleasedInUpdate, uint32_t m_LastCompletedInUpdate, int32_t m_Frame) noexcept {
  this->m_Phase = m_Phase;
  this->m_Flags = m_Flags;
  this->m_MapIndex = m_MapIndex;
  this->m_ControlIndex = m_ControlIndex;
  this->m_Time = m_Time;
  this->m_StartTime = m_StartTime;
  this->m_BindingIndex = m_BindingIndex;
  this->m_InteractionIndex = m_InteractionIndex;
  this->m_Magnitude = m_Magnitude;
  this->m_LastPerformedInUpdate = m_LastPerformedInUpdate;
  this->m_LastCanceledInUpdate = m_LastCanceledInUpdate;
  this->m_PressedInUpdate = m_PressedInUpdate;
  this->m_ReleasedInUpdate = m_ReleasedInUpdate;
  this->m_LastCompletedInUpdate = m_LastCompletedInUpdate;
  this->m_Frame = m_Frame;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState_TriggerState::InputActionState_TriggerState() {}
// Ctor Parameters [CppParam { name: "actionStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "controlStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bindingStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "interactionStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "processorStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "processorCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "compositeStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionState_ActionMapIndices::InputActionState_ActionMapIndices(int32_t actionStartIndex, int32_t actionCount, int32_t controlStartIndex,
                                                                                                           int32_t controlCount, int32_t bindingStartIndex, int32_t bindingCount,
                                                                                                           int32_t interactionStartIndex, int32_t interactionCount, int32_t processorStartIndex,
                                                                                                           int32_t processorCount, int32_t compositeStartIndex, int32_t compositeCount) noexcept {
  this->actionStartIndex = actionStartIndex;
  this->actionCount = actionCount;
  this->controlStartIndex = controlStartIndex;
  this->controlCount = controlCount;
  this->bindingStartIndex = bindingStartIndex;
  this->bindingCount = bindingCount;
  this->interactionStartIndex = interactionStartIndex;
  this->interactionCount = interactionCount;
  this->processorStartIndex = processorStartIndex;
  this->processorCount = processorCount;
  this->compositeStartIndex = compositeStartIndex;
  this->compositeCount = compositeCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState_ActionMapIndices::InputActionState_ActionMapIndices() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory.get_isAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::*)()>(
    &::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::get_isAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f5a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "get_isAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory.get_sizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::*)()>(
    &::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64f5a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "get_sizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::Allocate)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x64f5a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
            { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::*)()>(
    &::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64ee4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory.CopyDataFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::*)(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory)>(
    &::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::CopyDataFrom)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x64f5bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
                                                             { "CopyDataFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory (::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::*)()>(
    &::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::Clone)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64ee6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::InputActionState_UnmanagedMemory::get_isAllocated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "get_isAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState_UnmanagedMemory::get_sizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "get_sizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_UnmanagedMemory::Allocate(int32_t mapCount, int32_t actionCount, int32_t bindingCount, int32_t controlCount, int32_t interactionCount,
                                                                                 int32_t compositeCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
          { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mapCount, actionCount, bindingCount, controlCount, interactionCount, compositeCount);
}
inline void UnityEngine::InputSystem::InputActionState_UnmanagedMemory::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState_UnmanagedMemory::CopyDataFrom(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
                                                                                         { "CopyDataFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, memory);
}
inline ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory UnityEngine::InputSystem::InputActionState_UnmanagedMemory::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputActionState_UnmanagedMemory::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionState_UnmanagedMemory::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "basePtr", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "actionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bindingCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeCount", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionStates", ty: "::UnityEngine::InputSystem::InputActionState_TriggerState*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "bindingStates", ty: "::UnityEngine::InputSystem::InputActionState_BindingState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionStates", ty:
// "::UnityEngine::InputSystem::InputActionState_InteractionState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlMagnitudes", ty: "float_t*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "compositeMagnitudes", ty: "float_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabledControls", ty: "int32_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "actionBindingIndicesAndCounts", ty: "uint16_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionBindingIndices", ty: "uint16_t*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "controlIndexToBindingIndex", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlGroupingAndComplexity", ty: "uint16_t*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mapIndices", ty:
// "::UnityEngine::InputSystem::InputActionState_ActionMapIndices*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::InputActionState_UnmanagedMemory(
    void* basePtr, int32_t mapCount, int32_t actionCount, int32_t interactionCount, int32_t bindingCount, int32_t controlCount, int32_t compositeCount,
    ::UnityEngine::InputSystem::InputActionState_TriggerState* actionStates, ::UnityEngine::InputSystem::InputActionState_BindingState* bindingStates,
    ::UnityEngine::InputSystem::InputActionState_InteractionState* interactionStates, float_t* controlMagnitudes, float_t* compositeMagnitudes, int32_t* enabledControls,
    uint16_t* actionBindingIndicesAndCounts, uint16_t* actionBindingIndices, int32_t* controlIndexToBindingIndex, uint16_t* controlGroupingAndComplexity, bool controlGroupingInitialized,
    ::UnityEngine::InputSystem::InputActionState_ActionMapIndices* mapIndices) noexcept {
  this->basePtr = basePtr;
  this->mapCount = mapCount;
  this->actionCount = actionCount;
  this->interactionCount = interactionCount;
  this->bindingCount = bindingCount;
  this->controlCount = controlCount;
  this->compositeCount = compositeCount;
  this->actionStates = actionStates;
  this->bindingStates = bindingStates;
  this->interactionStates = interactionStates;
  this->controlMagnitudes = controlMagnitudes;
  this->compositeMagnitudes = compositeMagnitudes;
  this->enabledControls = enabledControls;
  this->actionBindingIndicesAndCounts = actionBindingIndicesAndCounts;
  this->actionBindingIndices = actionBindingIndices;
  this->controlIndexToBindingIndex = controlIndexToBindingIndex;
  this->controlGroupingAndComplexity = controlGroupingAndComplexity;
  this->controlGroupingInitialized = controlGroupingInitialized;
  this->mapIndices = mapIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory::InputActionState_UnmanagedMemory() {}
// Ctor Parameters [CppParam { name: "globalList", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "onActionChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "onActionControlsChanged", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionState_GlobalState::InputActionState_GlobalState(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList,
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> onActionChange,
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*> onActionControlsChanged) noexcept {
  this->globalList = globalList;
  this->onActionChange = onActionChange;
  this->onActionControlsChanged = onActionControlsChanged;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState_GlobalState::InputActionState_GlobalState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState___c::*)()>(&::UnityEngine::InputSystem::InputActionState___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f5f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState___c._SaveAndResetState_b__140_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState___c::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_GlobalState>)>(
    &::UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f5f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                                                             { "<SaveAndResetState>b__140_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_GlobalState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState___c._SaveAndResetState_b__140_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState___c::*)()>(&::UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64f5fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(), { "<SaveAndResetState>b__140_1", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputActionState___c::setStaticF___9(::UnityEngine::InputSystem::InputActionState___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputActionState___c*, "<>9", ::UnityEngine::InputSystem::InputActionState___c*>(
      std::forward<::UnityEngine::InputSystem::InputActionState___c*>(value));
}
inline ::UnityEngine::InputSystem::InputActionState___c* UnityEngine::InputSystem::InputActionState___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputActionState___c*, "<>9", ::UnityEngine::InputSystem::InputActionState___c*>();
}
inline void UnityEngine::InputSystem::InputActionState___c::setStaticF___9__140_0(
    ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>*, "<>9__140_0",
                                    ::UnityEngine::InputSystem::InputActionState___c*>(
      std::forward<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>*
UnityEngine::InputSystem::InputActionState___c::getStaticF___9__140_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>*, "<>9__140_0",
                                           ::UnityEngine::InputSystem::InputActionState___c*>();
}
inline void UnityEngine::InputSystem::InputActionState___c::setStaticF___9__140_1(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__140_1", ::UnityEngine::InputSystem::InputActionState___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::InputActionState___c::getStaticF___9__140_1() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__140_1", ::UnityEngine::InputSystem::InputActionState___c*>();
}
inline void UnityEngine::InputSystem::InputActionState___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_0(::by_ref<::UnityEngine::InputSystem::InputActionState_GlobalState> state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                                                           { "<SaveAndResetState>b__140_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_GlobalState>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(), { "<SaveAndResetState>b__140_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState___c* UnityEngine::InputSystem::InputActionState___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionState___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState___c::InputActionState___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalCompositeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalCompositeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalCompositeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalMapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalMapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalMapCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalActionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalActionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalActionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalBindingCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalBindingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalBindingCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalInteractionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalInteractionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalInteractionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalControlCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalControlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalControlCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_mapIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState_ActionMapIndices* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_mapIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_mapIndices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_actionStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState_TriggerState* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_actionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_actionStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_bindingStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState_BindingState* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_bindingStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_bindingStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_interactionStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState_InteractionState* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_interactionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_interactionStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlIndexToBindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_controlIndexToBindingIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlGroupingAndComplexity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_controlGroupingAndComplexity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlMagnitudes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_controlMagnitudes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_controlMagnitudes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_enabledControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_enabledControls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_enabledControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_isProcessingControlStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64edc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_isProcessingControlStateChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputBindingResolver)>(
    &::UnityEngine::InputSystem::InputActionState::Initialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64edc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ComputeControlGroupingIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x64edde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ComputeControlGroupingIfNecessary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ClaimDataFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputBindingResolver)>(
    &::UnityEngine::InputSystem::InputActionState::ClaimDataFrom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64edcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "ClaimDataFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64edfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64ee1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(bool)>(&::UnityEngine::InputSystem::InputActionState::Destroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x64ee00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "Destroy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::Clone)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x64ee540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64ee740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsUsingDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionState::IsUsingDevice)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x64ee744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "IsUsingDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CanUseDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionState::CanUseDevice)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x64ee8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "CanUseDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.HasEnabledActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::HasEnabledActions)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64eeae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "HasEnabledActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FinishBindingCompositeSetups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64eeb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "FinishBindingCompositeSetups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.PrepareForBindingReResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(bool, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>, ::by_ref<bool>)>(
        &::UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x64eec1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "PrepareForBindingReResolution",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>(),
                                                    ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FinishBindingResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    bool, ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, bool)>(
    &::UnityEngine::InputSystem::InputActionState::FinishBindingResolution)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64ef760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "FinishBindingResolution",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.RestoreActionStatesAfterReResolvingBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, bool)>(
    &::UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x64ef7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "RestoreActionStatesAfterReResolvingBindings",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActiveControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::IsActiveControl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64f0738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "IsActiveControl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FindControlIndexOnBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64f0160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "FindControlIndexOnBinding", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetActionStatesDrivenBy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x64f07e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "ResetActionStatesDrivenBy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActionBoundToControlFromDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x64f09e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "IsActionBoundToControlFromDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetActionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::UnityEngine::InputSystem::InputActionPhase, bool)>(
    &::UnityEngine::InputSystem::InputActionState::ResetActionState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x64ef4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "ResetActionState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FetchActionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionState::FetchActionState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64f0ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "FetchActionState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FetchMapIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState_ActionMapIndices (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionState::FetchMapIndices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64f0e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "FetchMapIndices", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableAllActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableAllActions)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x64f0e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "EnableAllActions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64f0f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "EnableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableSingleAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableSingleAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64f0f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "EnableSingleAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64f1030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "EnableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableAllActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x64ef1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "DisableAllActions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64ef5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "DisableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableSingleAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableSingleAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64f10e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "DisableSingleAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64f1184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DisableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x64effc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "EnableControls", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x64ee1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "DisableControls", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(
    &::UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64f130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "SetInitialStateCheckPending", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionState_BindingState*, bool)>(
    &::UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64f1280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "SetInitialStateCheckPending", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_BindingState*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsControlEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::IsControlEnabled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64f1234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "IsControlEnabled", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetControlEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(&::UnityEngine::InputSystem::InputActionState::SetControlEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64f12d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "SetControlEnabled", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.HookOnBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x64f04fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "HookOnBeforeUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnhookOnBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64f13a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "UnhookOnBeforeUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.OnBeforeInitialUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x64f1424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "OnBeforeInitialUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
        &::UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f1624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64f1c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                         { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ToCombinedMapAndControlAndBindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64f1258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "ToCombinedMapAndControlAndBindingIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SplitUpMapAndControlAndBindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64f163c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "SplitUpMapAndControlAndBindingIndex",
                                                  {},
                                                  { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetComplexityFromMonitorIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetComplexityFromMonitorIndex", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessControlStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    int32_t, int32_t, int32_t, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputActionState::ProcessControlStateChange)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x64f1658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "ProcessControlStateChange",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessButtonState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, int32_t,
                                                                                                              ::UnityEngine::InputSystem::InputActionState_BindingState*)>(
    &::UnityEngine::InputSystem::InputActionState::ProcessButtonState)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x64f2488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "ProcessButtonState",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_BindingState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ShouldIgnoreInputOnCompositeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputActionState_BindingState*, ::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64f1e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                         { "ShouldIgnoreInputOnCompositeBinding",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_BindingState*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsConflictingInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::IsConflictingInput)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x64f2090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "IsConflictingInput", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionBindingStartIndexAndCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::by_ref<uint16_t>)>(
    &::UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f0a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "GetActionBindingStartIndexAndCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessDefaultInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x64f2658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                         { "ProcessDefaultInteraction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessInteractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ProcessInteractions)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x64f1ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
            { "ProcessInteractions", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(double_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ProcessTimeout)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x64f1c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                            { "ProcessTimeout", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetTotalTimeoutCompletionTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(float_t, ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>)>(
    &::UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64f2b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                            { "SetTotalTimeoutCompletionTime", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.StartTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(float_t, ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>)>(
    &::UnityEngine::InputSystem::InputActionState::StartTimeout)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x64f03a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "StartTimeout", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.StopTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::StopTimeout)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x64f2b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "StopTimeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputActionPhase, ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, ::UnityEngine::InputSystem::InputActionPhase,
    ::UnityEngine::InputSystem::InputActionPhase, bool)>(&::UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x64f2c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                            { "ChangePhaseOfInteraction",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(),
                                ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputActionPhase, ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, ::UnityEngine::InputSystem::InputActionPhase)>(
    &::UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x64f0b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                         { "ChangePhaseOfAction",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(),
                                             ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfActionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    int32_t, ::UnityEngine::InputSystem::InputActionState_TriggerState*, ::UnityEngine::InputSystem::InputActionPhase, ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, bool)>(
    &::UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x64f3134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                            { "ChangePhaseOfActionInternal",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_TriggerState*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CallActionListeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    int32_t, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputActionPhase,
    ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>>, ::StringW)>(
    &::UnityEngine::InputSystem::InputActionState::CallActionListeners)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x64f3474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                            { "CallActionListeners",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>>>(),
                                ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNoneString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>)>(
    &::UnityEngine::InputSystem::InputActionState::GetActionOrNoneString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64f366c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "GetActionOrNoneString", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f3768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetActionOrNull", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (
    ::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f36d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "GetActionOrNull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetControl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64f37fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "GetControl", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetInteractionOrNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>)>(
    &::UnityEngine::InputSystem::InputActionState::GetInteractionOrNull)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64f383c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "GetInteractionOrNull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingIndexInMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64f3884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetBindingIndexInMap", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingIndexInState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetBindingIndexInState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64f38bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "GetBindingIndexInState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::InputActionState_BindingState> (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetBindingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f38e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetBindingState", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetBinding)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f38f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetBinding", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetActionMap)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64f3970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetActionMap", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetInteractionStateAndCancelIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t, ::UnityEngine::InputSystem::InputActionPhase)>(
    &::UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64f0abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                         { "ResetInteractionStateAndCancelIfNecessary",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetInteractionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::ResetInteractionState)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x64ef388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ResetInteractionState", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetValueSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f39b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetValueSizeInBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetValueType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f3a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetValueType", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActuated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>, float_t)>(
    &::UnityEngine::InputSystem::InputActionState::IsActuated)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64f2a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "IsActuated", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, void*, int32_t, bool)>(
    &::UnityEngine::InputSystem::InputActionState::ReadValue)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x64f3ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                         { "ReadValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EvaluateCompositePartMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64f3c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "EvaluateCompositePartMagnitude", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetCompositePartPressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f3d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "GetCompositePartPressTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadCompositePartValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, void*, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ReadCompositePartValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x64f3dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "ReadCompositePartValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadCompositePartValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x64f3ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                           { "ReadCompositePartValueAsObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::InputSystem::InputActionState::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x64f3fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "ReadValueAsObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValueAsButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x64f4144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ReadValueAsButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SaveAndResetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(&::UnityEngine::InputSystem::InputActionState::SaveAndResetState)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x64f4280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "SaveAndResetState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.AddToGlobalList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::AddToGlobalList)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64edd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "AddToGlobalList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.RemoveMapFromGlobalList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x64ee344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "RemoveMapFromGlobalList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CompactGlobalList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::CompactGlobalList)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x64f4494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "CompactGlobalList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionChange)>(
    &::UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x64ef610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                             { "NotifyListenersOfActionChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionChange, ::System::Object*)>(
    &::UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x64f060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "NotifyListenersOfActionChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetGlobals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::ResetGlobals)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x64f4668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ResetGlobals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FindAllEnabledActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*)>(
    &::UnityEngine::InputSystem::InputActionState::FindAllEnabledActions)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x64f4980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                { "FindAllEnabledActions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.OnDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(
    &::UnityEngine::InputSystem::InputActionState::OnDeviceChange)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x64f4c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                         { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DeferredResolutionOfBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x64e8144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DeferredResolutionOfBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableAllActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x64f4f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DisableAllActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DestroyAllActionMapStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x64f47d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DestroyAllActionMapStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64ee6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_maps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maps;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_maps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maps;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maps = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controls = value;
}
constexpr ::ArrayW<Il2CppObject*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_interactions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactions;
}
constexpr ::ArrayW<Il2CppObject*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_interactions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactions;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_interactions(::ArrayW<Il2CppObject*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interactions = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_processors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_processors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processors = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_composites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composites;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_composites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composites;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___composites = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_totalProcessorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalProcessorCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_totalProcessorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalProcessorCount;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_totalProcessorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalProcessorCount = value;
}
constexpr ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_memory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memory;
}
constexpr ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_memory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memory;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_memory(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memory = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateHooked;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateHooked;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnBeforeUpdateHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnBeforeUpdateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateHooked;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateHooked;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnAfterUpdateHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnAfterUpdateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_InProcessControlStateChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InProcessControlStateChange;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_InProcessControlStateChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InProcessControlStateChange;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_InProcessControlStateChange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InProcessControlStateChange = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_CurrentlyProcessingThisEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentlyProcessingThisEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_CurrentlyProcessingThisEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentlyProcessingThisEvent;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_CurrentlyProcessingThisEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentlyProcessingThisEvent = value;
}
constexpr ::System::Action*& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateDelegate;
}
constexpr ::System::Action* const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnBeforeUpdateDelegate(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnBeforeUpdateDelegate = value;
}
constexpr ::System::Action*& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateDelegate;
}
constexpr ::System::Action* const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnAfterUpdateDelegate = value;
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputInitialActionStateCheckMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputInitialActionStateCheckMarker", ::UnityEngine::InputSystem::InputActionState*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputInitialActionStateCheckMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputInitialActionStateCheckMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputActionResolveConflictMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionResolveConflictMarker", ::UnityEngine::InputSystem::InputActionState*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputActionResolveConflictMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionResolveConflictMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputActionCallbackMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionCallbackMarker", ::UnityEngine::InputSystem::InputActionState*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputActionCallbackMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionCallbackMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputOnActionChangeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnActionChangeMarker", ::UnityEngine::InputSystem::InputActionState*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputOnActionChangeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnActionChangeMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputOnDeviceChangeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceChangeMarker", ::UnityEngine::InputSystem::InputActionState*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputOnDeviceChangeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceChangeMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_s_GlobalState(::UnityEngine::InputSystem::InputActionState_GlobalState value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputActionState_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::InputActionState*>(
      std::forward<::UnityEngine::InputSystem::InputActionState_GlobalState>(value));
}
inline ::UnityEngine::InputSystem::InputActionState_GlobalState UnityEngine::InputSystem::InputActionState::getStaticF_s_GlobalState() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputActionState_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::InputActionState*>();
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalCompositeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalCompositeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalMapCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalMapCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalActionCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalActionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalBindingCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalBindingCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalInteractionCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalInteractionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalControlCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_totalControlCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState_ActionMapIndices* UnityEngine::InputSystem::InputActionState::get_mapIndices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_mapIndices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState_ActionMapIndices*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState_TriggerState* UnityEngine::InputSystem::InputActionState::get_actionStates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_actionStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState_TriggerState*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState_BindingState* UnityEngine::InputSystem::InputActionState::get_bindingStates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_bindingStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState_BindingState*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState_InteractionState* UnityEngine::InputSystem::InputActionState::get_interactionStates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_interactionStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState_InteractionState*>(this, ___internal_method);
}
inline int32_t* UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_controlIndexToBindingIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t*>(this, ___internal_method);
}
inline uint16_t* UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_controlGroupingAndComplexity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t*>(this, ___internal_method);
}
inline float_t* UnityEngine::InputSystem::InputActionState::get_controlMagnitudes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_controlMagnitudes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t*>(this, ___internal_method);
}
inline uint32_t* UnityEngine::InputSystem::InputActionState::get_enabledControls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_enabledControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "get_isProcessingControlStateChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Initialize(::UnityEngine::InputSystem::InputBindingResolver resolver) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolver);
}
inline void UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ComputeControlGroupingIfNecessary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver resolver) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "ClaimDataFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolver);
}
inline void UnityEngine::InputSystem::InputActionState::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Destroy(bool isFinalizing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "Destroy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFinalizing);
}
inline ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionState::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState::IsUsingDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "IsUsingDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::CanUseDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "CanUseDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::HasEnabledActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "HasEnabledActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "FinishBindingCompositeSetups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution(
    bool needFullResolve, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>> activeControls, ::by_ref<bool> hasEnabledActions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "PrepareForBindingReResolution",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>(),
                                                  ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needFullResolve, activeControls, hasEnabledActions);
}
inline void UnityEngine::InputSystem::InputActionState::FinishBindingResolution(bool hasEnabledActions, ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory oldMemory,
                                                                                ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls,
                                                                                bool isFullResolve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "FinishBindingResolution",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasEnabledActions, oldMemory, activeControls, isFullResolve);
}
inline void
UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory oldState,
                                                                                        ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls,
                                                                                        bool isFullResolve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "RestoreActionStatesAfterReResolvingBindings",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_UnmanagedMemory>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, activeControls, isFullResolve);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActiveControl(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "IsActiveControl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingIndex, controlIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding(int32_t bindingIndex, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "FindControlIndexOnBinding", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bindingIndex, control);
}
inline void UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "ResetActionStatesDrivenBy", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice* device, int32_t actionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "IsActionBoundToControlFromDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device, actionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ResetActionState(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionPhase toPhase, bool hardReset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "ResetActionState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, toPhase, hardReset);
}
inline ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> UnityEngine::InputSystem::InputActionState::FetchActionState(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "FetchActionState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(this, ___internal_method, action);
}
inline ::UnityEngine::InputSystem::InputActionState_ActionMapIndices UnityEngine::InputSystem::InputActionState::FetchMapIndices(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "FetchMapIndices", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState_ActionMapIndices>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableAllActions(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "EnableAllActions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "EnableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableSingleAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "EnableSingleAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "EnableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::DisableAllActions(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "DisableAllActions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "DisableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::DisableSingleAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "DisableSingleAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DisableControls", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "EnableControls", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, controlStartIndex, numControls);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "DisableControls", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, controlStartIndex, numControls);
}
inline void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(int32_t actionIndex, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "SetInitialStateCheckPending", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, value);
}
inline void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(::UnityEngine::InputSystem::InputActionState_BindingState* bindingStatePtr, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "SetInitialStateCheckPending", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_BindingState*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingStatePtr, value);
}
inline bool UnityEngine::InputSystem::InputActionState::IsControlEnabled(int32_t controlIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "IsControlEnabled", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controlIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SetControlEnabled(int32_t controlIndex, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "SetControlEnabled", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlIndex, state);
}
inline void UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "HookOnBeforeUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "UnhookOnBeforeUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "OnBeforeInitialUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(
    ::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t mapControlAndBindingIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, eventPtr, mapControlAndBindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                                                     int64_t mapControlAndBindingIndex, int32_t interactionIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, mapControlAndBindingIndex, interactionIndex);
}
inline int64_t UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "ToCombinedMapAndControlAndBindingIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mapIndex, controlIndex, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex(int64_t mapControlAndBindingIndex, ::by_ref<int32_t> mapIndex, ::by_ref<int32_t> controlIndex,
                                                                                            ::by_ref<int32_t> bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "SplitUpMapAndControlAndBindingIndex",
                                                {},
                                                { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapControlAndBindingIndex, mapIndex, controlIndex, bindingIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex(int64_t mapControlAndBindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetComplexityFromMonitorIndex", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mapControlAndBindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessControlStateChange(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, double_t time,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "ProcessControlStateChange",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, controlIndex, bindingIndex, time, eventPtr);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessButtonState(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t actionIndex,
                                                                           ::UnityEngine::InputSystem::InputActionState_BindingState* bindingStatePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "ProcessButtonState",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_BindingState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, actionIndex, bindingStatePtr);
}
inline bool UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding(::UnityEngine::InputSystem::InputActionState_BindingState* binding,
                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                       { "ShouldIgnoreInputOnCompositeBinding",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_BindingState*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, binding, eventPtr);
}
inline bool UnityEngine::InputSystem::InputActionState::IsConflictingInput(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t actionIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "IsConflictingInput", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trigger, actionIndex);
}
inline uint16_t UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount(int32_t actionIndex, ::by_ref<uint16_t> bindingCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "GetActionBindingStartIndexAndCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, actionIndex, bindingCount);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t actionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                       { "ProcessDefaultInteraction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, actionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessInteractions(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, int32_t interactionStartIndex,
                                                                            int32_t interactionCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
          { "ProcessInteractions", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, interactionStartIndex, interactionCount);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessTimeout(double_t time, int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, int32_t interactionIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                          { "ProcessTimeout", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, mapIndex, controlIndex, bindingIndex, interactionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime(float_t seconds, ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                       { "SetTotalTimeoutCompletionTime", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds, trigger);
}
inline void UnityEngine::InputSystem::InputActionState::StartTimeout(float_t seconds, ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "StartTimeout", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds, trigger);
}
inline void UnityEngine::InputSystem::InputActionState::StopTimeout(int32_t interactionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "StopTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase newPhase,
                                                                                 ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger,
                                                                                 ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformed,
                                                                                 ::UnityEngine::InputSystem::InputActionPhase phaseAfterCanceled, bool processNextInteractionOnCancel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                          { "ChangePhaseOfInteraction",
                            {},
                            { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(),
                              ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPhase, trigger, phaseAfterPerformed, phaseAfterCanceled, processNextInteractionOnCancel);
}
inline bool UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase newPhase,
                                                                            ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger,
                                                                            ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformedOrCanceled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "ChangePhaseOfAction",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newPhase, trigger, phaseAfterPerformedOrCanceled);
}
inline void UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionState_TriggerState* actionState,
                                                                                    ::UnityEngine::InputSystem::InputActionPhase newPhase,
                                                                                    ::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, bool isDisablingAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                          { "ChangePhaseOfActionInternal",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionState_TriggerState*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, actionState, newPhase, trigger, isDisablingAction);
}
inline void UnityEngine::InputSystem::InputActionState::CallActionListeners(
    int32_t actionIndex, ::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputActionPhase phase,
    ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>> listeners, ::StringW callbackName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                          { "CallActionListeners",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>>>(),
                              ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, actionMap, phase, listeners, callbackName);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::GetActionOrNoneString(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "GetActionOrNoneString", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, trigger);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionState::GetActionOrNull(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetActionOrNull", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, bindingIndex);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionState::GetActionOrNull(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "GetActionOrNull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, trigger);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputActionState::GetControl(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "GetControl", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method, trigger);
}
inline Il2CppObject* UnityEngine::InputSystem::InputActionState::GetInteractionOrNull(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "GetInteractionOrNull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>() } })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(this, ___internal_method, trigger);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetBindingIndexInMap", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bindingIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInState(int32_t mapIndex, int32_t bindingIndexInMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetBindingIndexInState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mapIndex, bindingIndexInMap);
}
inline ::by_ref<::UnityEngine::InputSystem::InputActionState_BindingState> UnityEngine::InputSystem::InputActionState::GetBindingState(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetBindingState", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::InputActionState_BindingState>>(this, ___internal_method, bindingIndex);
}
inline ::by_ref<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionState::GetBinding(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetBinding", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method, bindingIndex);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionState::GetActionMap(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetActionMap", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary(int32_t mapIndex, int32_t bindingIndex, int32_t interactionIndex,
                                                                                                  ::UnityEngine::InputSystem::InputActionPhase phaseAfterCanceled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                       { "ResetInteractionStateAndCancelIfNecessary",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, bindingIndex, interactionIndex, phaseAfterCanceled);
}
inline void UnityEngine::InputSystem::InputActionState::ResetInteractionState(int32_t interactionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ResetInteractionState", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetValueSizeInBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bindingIndex, controlIndex);
}
inline ::System::Type* UnityEngine::InputSystem::InputActionState::GetValueType(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "GetValueType", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, bindingIndex, controlIndex);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActuated(::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState> trigger, float_t threshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "IsActuated", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionState_TriggerState>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trigger, threshold);
}
inline void UnityEngine::InputSystem::InputActionState::ReadValue(int32_t bindingIndex, int32_t controlIndex, void* buffer, int32_t bufferSize, bool ignoreComposites) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                       { "ReadValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingIndex, controlIndex, buffer, bufferSize, ignoreComposites);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputActionState::ReadValue(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "ReadValue", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
template <typename TValue>
inline TValue UnityEngine::InputSystem::InputActionState::ApplyProcessors(int32_t bindingIndex, TValue value, ::UnityEngine::InputSystem::InputControl_1<TValue>* controlOfType) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
          { "ApplyProcessors", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, bindingIndex, value, controlOfType);
}
inline float_t UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude(int32_t bindingIndex, int32_t partNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "EvaluateCompositePartMagnitude", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, bindingIndex, partNumber);
}
inline double_t UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime(int32_t bindingIndex, int32_t partNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "GetCompositePartPressTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, bindingIndex, partNumber);
}
template <typename TValue, typename TComparer>
inline TValue UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, bool* buttonValuePtr, ::by_ref<int32_t> controlIndex, TComparer comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                       { "ReadCompositePartValue",
                                         { ::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>() },
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<TComparer>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, bindingIndex, partNumber, buttonValuePtr, controlIndex, comparer);
}
inline bool UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, void* buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "ReadCompositePartValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingIndex, partNumber, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject(int32_t bindingIndex, int32_t partNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                                                         { "ReadCompositePartValueAsObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, bindingIndex, partNumber);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::ReadValueAsObject(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "ReadValueAsObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
inline bool UnityEngine::InputSystem::InputActionState::ReadValueAsButton(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ReadValueAsButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingIndex, controlIndex);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::InputActionState::SaveAndResetState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "SaveAndResetState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::AddToGlobalList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "AddToGlobalList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "RemoveMapFromGlobalList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::CompactGlobalList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "CompactGlobalList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "NotifyListenersOfActionChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, change);
}
inline void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change, ::System::Object* actionOrMapOrAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                              { "NotifyListenersOfActionChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, change, actionOrMapOrAsset);
}
inline void UnityEngine::InputSystem::InputActionState::ResetGlobals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "ResetGlobals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                                           { "FindAllEnabledActions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, result);
}
inline void UnityEngine::InputSystem::InputActionState::OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                                       { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DeferredResolutionOfBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::DisableAllActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DisableAllActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { "DestroyAllActionMapStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionState*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr UnityEngine::InputSystem::InputActionState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* UnityEngine::InputSystem::InputActionState::i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr UnityEngine::InputSystem::InputActionState::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::InputSystem::InputActionState::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputActionState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionState::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState::InputActionState() {}
