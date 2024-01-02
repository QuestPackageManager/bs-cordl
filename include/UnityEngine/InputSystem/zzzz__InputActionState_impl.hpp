#pragma once
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Action_1_impl.hpp"
#include "System/zzzz__Action_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingResolver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputActionState__InteractionState__Flags::__InputActionState__InteractionState__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputActionState__InteractionState__Flags::__InputActionState__InteractionState__Flags() {}
constexpr ::GlobalNamespace::__InputActionState__InteractionState__Flags GlobalNamespace::__InputActionState__InteractionState__Flags::TimerRunning{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_triggerControlIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_triggerControlIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a4ea40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(),
                                                 "get_triggerControlIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_triggerControlIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_triggerControlIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a4f864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_triggerControlIndex",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5440c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_startTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(double_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_startTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_performedTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_performedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5441c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_performedTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_performedTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(double_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_performedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_performedTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_timerStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_timerStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5442c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_timerStartTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_timerStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(double_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_timerStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_timerStartTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_timerDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_timerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5443c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_timerDuration",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_timerDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(float_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_timerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_timerDuration",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_totalTimeoutCompletionDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_totalTimeoutCompletionDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5444c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(),
                                                 "get_totalTimeoutCompletionDone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_totalTimeoutCompletionDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(float_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_totalTimeoutCompletionDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_totalTimeoutCompletionDone",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_totalTimeoutCompletionTimeRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_totalTimeoutCompletionTimeRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5445c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(),
                                                 "get_totalTimeoutCompletionTimeRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_totalTimeoutCompletionTimeRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(float_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_totalTimeoutCompletionTimeRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_totalTimeoutCompletionTimeRemaining",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_timerMonitorIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_timerMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5446c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(),
                                                 "get_timerMonitorIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_timerMonitorIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(int64_t)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_timerMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_timerMonitorIndex",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_isTimerRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_isTimerRunning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a4f8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_isTimerRunning",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_isTimerRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::set_isTimerRunning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a51f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_isTimerRunning",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.get_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__InteractionState::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5447c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_phase",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__InteractionState.set_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__InteractionState::*)(
    ::UnityEngine::InputSystem::InputActionPhase)>(&::UnityEngine::InputSystem::__InputActionState__InteractionState::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4f85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_phase", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
    return ___internal_method;
  }
};
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TriggerControlIndex() {
  return this->___m_TriggerControlIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TriggerControlIndex() const {
  return this->___m_TriggerControlIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_TriggerControlIndex(uint16_t value) {
  this->___m_TriggerControlIndex = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_Phase() {
  return this->___m_Phase;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_Phase() const {
  return this->___m_Phase;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_Phase(uint8_t value) {
  this->___m_Phase = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_Flags() {
  return this->___m_Flags;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_Flags() const {
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_Flags(uint8_t value) {
  this->___m_Flags = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TimerDuration() {
  return this->___m_TimerDuration;
}
constexpr float_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TimerDuration() const {
  return this->___m_TimerDuration;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_TimerDuration(float_t value) {
  this->___m_TimerDuration = value;
}
constexpr double_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_StartTime() {
  return this->___m_StartTime;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_StartTime() const {
  return this->___m_StartTime;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_StartTime(double_t value) {
  this->___m_StartTime = value;
}
constexpr double_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TimerStartTime() {
  return this->___m_TimerStartTime;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TimerStartTime() const {
  return this->___m_TimerStartTime;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_TimerStartTime(double_t value) {
  this->___m_TimerStartTime = value;
}
constexpr double_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_PerformedTime() {
  return this->___m_PerformedTime;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_PerformedTime() const {
  return this->___m_PerformedTime;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_PerformedTime(double_t value) {
  this->___m_PerformedTime = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TotalTimeoutCompletionTimeDone() {
  return this->___m_TotalTimeoutCompletionTimeDone;
}
constexpr float_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TotalTimeoutCompletionTimeDone() const {
  return this->___m_TotalTimeoutCompletionTimeDone;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_TotalTimeoutCompletionTimeDone(float_t value) {
  this->___m_TotalTimeoutCompletionTimeDone = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TotalTimeoutCompletionTimeRemaining() {
  return this->___m_TotalTimeoutCompletionTimeRemaining;
}
constexpr float_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TotalTimeoutCompletionTimeRemaining() const {
  return this->___m_TotalTimeoutCompletionTimeRemaining;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_TotalTimeoutCompletionTimeRemaining(float_t value) {
  this->___m_TotalTimeoutCompletionTimeRemaining = value;
}
constexpr int64_t& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TimerMonitorIndex() {
  return this->___m_TimerMonitorIndex;
}
constexpr int64_t const& UnityEngine::InputSystem::__InputActionState__InteractionState::__get_m_TimerMonitorIndex() const {
  return this->___m_TimerMonitorIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__InteractionState::__set_m_TimerMonitorIndex(int64_t value) {
  this->___m_TimerMonitorIndex = value;
}
inline int32_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_triggerControlIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(),
                                               "get_triggerControlIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_triggerControlIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_triggerControlIndex",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_startTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_startTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_startTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_startTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_performedTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_performedTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_performedTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_performedTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_timerStartTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_timerStartTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_timerStartTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_timerStartTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_timerDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_timerDuration",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_timerDuration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_timerDuration",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_totalTimeoutCompletionDone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(),
                                               "get_totalTimeoutCompletionDone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_totalTimeoutCompletionDone(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_totalTimeoutCompletionDone",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_totalTimeoutCompletionTimeRemaining() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(),
                                               "get_totalTimeoutCompletionTimeRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_totalTimeoutCompletionTimeRemaining(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_totalTimeoutCompletionTimeRemaining",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t UnityEngine::InputSystem::__InputActionState__InteractionState::get_timerMonitorIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_timerMonitorIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_timerMonitorIndex(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_timerMonitorIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__InteractionState::get_isTimerRunning() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_isTimerRunning",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_isTimerRunning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_isTimerRunning",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::__InputActionState__InteractionState::get_phase() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "get_phase",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__InteractionState::set_phase(::UnityEngine::InputSystem::InputActionPhase value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__InteractionState>::get(), "set_phase", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_TriggerControlIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerStartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_PerformedTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TotalTimeoutCompletionTimeDone", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_TotalTimeoutCompletionTimeRemaining", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimerMonitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionState__InteractionState::__InputActionState__InteractionState(uint16_t m_TriggerControlIndex, uint8_t m_Phase, uint8_t m_Flags,
                                                                                                                 float_t m_TimerDuration, double_t m_StartTime, double_t m_TimerStartTime,
                                                                                                                 double_t m_PerformedTime, float_t m_TotalTimeoutCompletionTimeDone,
                                                                                                                 float_t m_TotalTimeoutCompletionTimeRemaining, int64_t m_TimerMonitorIndex) noexcept {
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
constexpr ::UnityEngine::InputSystem::__InputActionState__InteractionState::__InputActionState__InteractionState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags::__InputActionState__BindingState__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags::__InputActionState__BindingState__Flags() {}
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags GlobalNamespace::__InputActionState__BindingState__Flags::ChainsWithNext{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags GlobalNamespace::__InputActionState__BindingState__Flags::EndOfChain{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags GlobalNamespace::__InputActionState__BindingState__Flags::Composite{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags GlobalNamespace::__InputActionState__BindingState__Flags::PartOfComposite{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags GlobalNamespace::__InputActionState__BindingState__Flags::InitialStateCheckPending{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__InputActionState__BindingState__Flags GlobalNamespace::__InputActionState__BindingState__Flags::WantsInitialStateCheck{ static_cast<int32_t>(0x20) };
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_controlStartIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_controlStartIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_controlStartIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_controlStartIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_controlStartIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a5448c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_controlStartIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_controlCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_controlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_controlCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_controlCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_controlCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a5452c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_controlCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_interactionStartIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_interactionStartIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a4ea2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                                 "get_interactionStartIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_interactionStartIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_interactionStartIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a545c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_interactionStartIndex",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_interactionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_interactionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5466c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_interactionCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_interactionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_interactionCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a54674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_interactionCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_processorStartIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_processorStartIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a52e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_processorStartIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_processorStartIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_processorStartIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a5470c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_processorStartIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_processorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_processorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a547b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_processorCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_processorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_processorCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a547bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_processorCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_actionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_actionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a4f518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_actionIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_actionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_actionIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a54854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_actionIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_mapIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a548fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_mapIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_mapIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_mapIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a54904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_mapIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_compositeOrCompositeBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_compositeOrCompositeBindingIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a4d7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                                 "get_compositeOrCompositeBindingIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_compositeOrCompositeBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_compositeOrCompositeBindingIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a5499c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_compositeOrCompositeBindingIndex",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_triggerEventIdForComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_triggerEventIdForComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                                 "get_triggerEventIdForComposite", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_triggerEventIdForComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_triggerEventIdForComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_triggerEventIdForComposite",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_pressTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_pressTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_pressTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(double_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_pressTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputActionState__BindingState__Flags (
    ::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(&::UnityEngine::InputSystem::__InputActionState__BindingState::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_flags",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(
    ::GlobalNamespace::__InputActionState__BindingState__Flags)>(&::UnityEngine::InputSystem::__InputActionState__BindingState::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_flags", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputActionState__BindingState__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_chainsWithNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_chainsWithNext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a54a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_chainsWithNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_chainsWithNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_chainsWithNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a54a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_chainsWithNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_isEndOfChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_isEndOfChain)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a54a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isEndOfChain",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_isEndOfChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_isEndOfChain)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a54aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_isEndOfChain",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_isPartOfChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_isPartOfChain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a54ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isPartOfChain",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_isComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_isComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a4e400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isComposite",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_isComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_isComposite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a54ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_isComposite",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_isPartOfComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_isPartOfComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a4d7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isPartOfComposite",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_isPartOfComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_isPartOfComposite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a54af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_isPartOfComposite",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_initialStateCheckPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_initialStateCheckPending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a50acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                                 "get_initialStateCheckPending", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_initialStateCheckPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_initialStateCheckPending)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a4f548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_initialStateCheckPending",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_wantsInitialStateCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a4f53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                                 "get_wantsInitialStateCheck", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_wantsInitialStateCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a54b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_wantsInitialStateCheck",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.get_partIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__BindingState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::get_partIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_partIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__BindingState.set_partIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__BindingState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__BindingState::set_partIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_partIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ControlCount() {
  return this->___m_ControlCount;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ControlCount() const {
  return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_ControlCount(uint8_t value) {
  this->___m_ControlCount = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_InteractionCount() {
  return this->___m_InteractionCount;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_InteractionCount() const {
  return this->___m_InteractionCount;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_InteractionCount(uint8_t value) {
  this->___m_InteractionCount = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ProcessorCount() {
  return this->___m_ProcessorCount;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ProcessorCount() const {
  return this->___m_ProcessorCount;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_ProcessorCount(uint8_t value) {
  this->___m_ProcessorCount = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_MapIndex() {
  return this->___m_MapIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_MapIndex() const {
  return this->___m_MapIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_MapIndex(uint8_t value) {
  this->___m_MapIndex = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_Flags() {
  return this->___m_Flags;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_Flags() const {
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_Flags(uint8_t value) {
  this->___m_Flags = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_PartIndex() {
  return this->___m_PartIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_PartIndex() const {
  return this->___m_PartIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_PartIndex(uint8_t value) {
  this->___m_PartIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ActionIndex() {
  return this->___m_ActionIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ActionIndex() const {
  return this->___m_ActionIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_ActionIndex(uint16_t value) {
  this->___m_ActionIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_CompositeOrCompositeBindingIndex() {
  return this->___m_CompositeOrCompositeBindingIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_CompositeOrCompositeBindingIndex() const {
  return this->___m_CompositeOrCompositeBindingIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_CompositeOrCompositeBindingIndex(uint16_t value) {
  this->___m_CompositeOrCompositeBindingIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ProcessorStartIndex() {
  return this->___m_ProcessorStartIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ProcessorStartIndex() const {
  return this->___m_ProcessorStartIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_ProcessorStartIndex(uint16_t value) {
  this->___m_ProcessorStartIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_InteractionStartIndex() {
  return this->___m_InteractionStartIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_InteractionStartIndex() const {
  return this->___m_InteractionStartIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_InteractionStartIndex(uint16_t value) {
  this->___m_InteractionStartIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ControlStartIndex() {
  return this->___m_ControlStartIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_ControlStartIndex() const {
  return this->___m_ControlStartIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_ControlStartIndex(uint16_t value) {
  this->___m_ControlStartIndex = value;
}
constexpr double_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_PressTime() {
  return this->___m_PressTime;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_PressTime() const {
  return this->___m_PressTime;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_PressTime(double_t value) {
  this->___m_PressTime = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_TriggerEventIdForComposite() {
  return this->___m_TriggerEventIdForComposite;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get_m_TriggerEventIdForComposite() const {
  return this->___m_TriggerEventIdForComposite;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set_m_TriggerEventIdForComposite(int32_t value) {
  this->___m_TriggerEventIdForComposite = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionState__BindingState::__get___padding() {
  return this->_____padding;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionState__BindingState::__get___padding() const {
  return this->_____padding;
}
constexpr void UnityEngine::InputSystem::__InputActionState__BindingState::__set___padding(int32_t value) {
  this->_____padding = value;
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_controlStartIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_controlStartIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_controlStartIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_controlStartIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_controlCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_controlCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_controlCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_controlCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_interactionStartIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_interactionStartIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_interactionStartIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_interactionStartIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_interactionCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_interactionCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_interactionCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_interactionCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_processorStartIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_processorStartIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_processorStartIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_processorStartIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_processorCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_processorCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_processorCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_processorCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_actionIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_actionIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_actionIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_actionIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_mapIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_mapIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_mapIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_mapIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_compositeOrCompositeBindingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                               "get_compositeOrCompositeBindingIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_compositeOrCompositeBindingIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_compositeOrCompositeBindingIndex",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_triggerEventIdForComposite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                               "get_triggerEventIdForComposite", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_triggerEventIdForComposite(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_triggerEventIdForComposite",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::__InputActionState__BindingState::get_pressTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_pressTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_pressTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_pressTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__InputActionState__BindingState__Flags UnityEngine::InputSystem::__InputActionState__BindingState::get_flags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_flags",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputActionState__BindingState__Flags, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_flags(::GlobalNamespace::__InputActionState__BindingState__Flags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_flags", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputActionState__BindingState__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__BindingState::get_chainsWithNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_chainsWithNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_chainsWithNext(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_chainsWithNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__BindingState::get_isEndOfChain() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isEndOfChain",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_isEndOfChain(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_isEndOfChain",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__BindingState::get_isPartOfChain() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isPartOfChain",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionState__BindingState::get_isComposite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isComposite",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_isComposite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_isComposite",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__BindingState::get_isPartOfComposite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_isPartOfComposite",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_isPartOfComposite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_isPartOfComposite",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__BindingState::get_initialStateCheckPending() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                               "get_initialStateCheckPending", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_initialStateCheckPending(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_initialStateCheckPending",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__BindingState::get_wantsInitialStateCheck() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(),
                                               "get_wantsInitialStateCheck", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_wantsInitialStateCheck(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_wantsInitialStateCheck",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__BindingState::get_partIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "get_partIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__BindingState::set_partIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__BindingState>::get(), "set_partIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_ControlCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionCount", ty: "uint8_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_ProcessorCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PartIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ActionIndex", ty:
// "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompositeOrCompositeBindingIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ProcessorStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ControlStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PressTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_TriggerEventIdForComposite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionState__BindingState::__InputActionState__BindingState(uint8_t m_ControlCount, uint8_t m_InteractionCount, uint8_t m_ProcessorCount,
                                                                                                         uint8_t m_MapIndex, uint8_t m_Flags, uint8_t m_PartIndex, uint16_t m_ActionIndex,
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
constexpr ::UnityEngine::InputSystem::__InputActionState__BindingState::__InputActionState__BindingState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags::__InputActionState__TriggerState__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags::__InputActionState__TriggerState__Flags() {}
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags GlobalNamespace::__InputActionState__TriggerState__Flags::HaveMagnitude{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags GlobalNamespace::__InputActionState__TriggerState__Flags::PassThrough{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags GlobalNamespace::__InputActionState__TriggerState__Flags::MayNeedConflictResolution{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags GlobalNamespace::__InputActionState__TriggerState__Flags::HasMultipleConcurrentActuations{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags GlobalNamespace::__InputActionState__TriggerState__Flags::InProcessing{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags GlobalNamespace::__InputActionState__TriggerState__Flags::Button{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__InputActionState__TriggerState__Flags GlobalNamespace::__InputActionState__TriggerState__Flags::Pressed{ static_cast<int32_t>(0x40) };
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_phase",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(::UnityEngine::InputSystem::InputActionPhase)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4f510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_phase", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isDisabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a4f52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isDisabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a54b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isWaiting",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a54b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isStarted",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isPerformed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a54b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isPerformed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a54b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isCanceled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_time",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(double_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_time",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_startTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(double_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_startTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_magnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_magnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_magnitude",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_magnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(float_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_magnitude)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a4f7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_magnitude",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_haveMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_haveMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a54ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_haveMagnitude",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_mapIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_mapIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_mapIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_mapIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a4f8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_mapIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_controlIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_controlIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a4ea18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_controlIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_controlIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_controlIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a4f74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_controlIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_bindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_bindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_bindingIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_bindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_bindingIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a4f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_bindingIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_interactionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_interactionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a4f7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_interactionIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_interactionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_interactionIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a4f7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_interactionIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_lastPerformedInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_lastPerformedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(),
                                                 "get_lastPerformedInUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_lastPerformedInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_lastPerformedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_lastPerformedInUpdate",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_lastCanceledInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_lastCanceledInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(),
                                                 "get_lastCanceledInUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_lastCanceledInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_lastCanceledInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_lastCanceledInUpdate",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_pressedInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_pressedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_pressedInUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_pressedInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_pressedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_pressedInUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_releasedInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_releasedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_releasedInUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_releasedInUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_releasedInUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_releasedInUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isPassThrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isPassThrough)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a4ffb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isPassThrough",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_isPassThrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_isPassThrough)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a512e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_isPassThrough",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a512fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isButton",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_isButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_isButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a51308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_isButton",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_isPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_isPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a51e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isPressed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_isPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_isPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a50380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_isPressed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_mayNeedConflictResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_mayNeedConflictResolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a51e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(),
                                                 "get_mayNeedConflictResolution", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_mayNeedConflictResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_mayNeedConflictResolution)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a54c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_mayNeedConflictResolution",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_hasMultipleConcurrentActuations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_hasMultipleConcurrentActuations)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a51e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(),
                                                 "get_hasMultipleConcurrentActuations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_hasMultipleConcurrentActuations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_hasMultipleConcurrentActuations)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a50348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_hasMultipleConcurrentActuations",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_inProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::get_inProcessing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a526a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_inProcessing",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_inProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(bool)>(
    &::UnityEngine::InputSystem::__InputActionState__TriggerState::set_inProcessing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a50364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_inProcessing",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputActionState__TriggerState__Flags (
    ::UnityEngine::InputSystem::__InputActionState__TriggerState::*)()>(&::UnityEngine::InputSystem::__InputActionState__TriggerState::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_flags",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__TriggerState.set_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__TriggerState::*)(
    ::GlobalNamespace::__InputActionState__TriggerState__Flags)>(&::UnityEngine::InputSystem::__InputActionState__TriggerState::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a526b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_flags", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputActionState__TriggerState__Flags>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Phase() {
  return this->___m_Phase;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Phase() const {
  return this->___m_Phase;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_Phase(uint8_t value) {
  this->___m_Phase = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Flags() {
  return this->___m_Flags;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Flags() const {
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_Flags(uint8_t value) {
  this->___m_Flags = value;
}
constexpr uint8_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_MapIndex() {
  return this->___m_MapIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_MapIndex() const {
  return this->___m_MapIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_MapIndex(uint8_t value) {
  this->___m_MapIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_ControlIndex() {
  return this->___m_ControlIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_ControlIndex() const {
  return this->___m_ControlIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_ControlIndex(uint16_t value) {
  this->___m_ControlIndex = value;
}
constexpr double_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Time() {
  return this->___m_Time;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Time() const {
  return this->___m_Time;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_Time(double_t value) {
  this->___m_Time = value;
}
constexpr double_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_StartTime() {
  return this->___m_StartTime;
}
constexpr double_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_StartTime() const {
  return this->___m_StartTime;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_StartTime(double_t value) {
  this->___m_StartTime = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_BindingIndex() {
  return this->___m_BindingIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_BindingIndex() const {
  return this->___m_BindingIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_BindingIndex(uint16_t value) {
  this->___m_BindingIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_InteractionIndex() {
  return this->___m_InteractionIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_InteractionIndex() const {
  return this->___m_InteractionIndex;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_InteractionIndex(uint16_t value) {
  this->___m_InteractionIndex = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Magnitude() {
  return this->___m_Magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_Magnitude() const {
  return this->___m_Magnitude;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_Magnitude(float_t value) {
  this->___m_Magnitude = value;
}
constexpr uint32_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_LastPerformedInUpdate() {
  return this->___m_LastPerformedInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_LastPerformedInUpdate() const {
  return this->___m_LastPerformedInUpdate;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_LastPerformedInUpdate(uint32_t value) {
  this->___m_LastPerformedInUpdate = value;
}
constexpr uint32_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_LastCanceledInUpdate() {
  return this->___m_LastCanceledInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_LastCanceledInUpdate() const {
  return this->___m_LastCanceledInUpdate;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_LastCanceledInUpdate(uint32_t value) {
  this->___m_LastCanceledInUpdate = value;
}
constexpr uint32_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_PressedInUpdate() {
  return this->___m_PressedInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_PressedInUpdate() const {
  return this->___m_PressedInUpdate;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_PressedInUpdate(uint32_t value) {
  this->___m_PressedInUpdate = value;
}
constexpr uint32_t& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_ReleasedInUpdate() {
  return this->___m_ReleasedInUpdate;
}
constexpr uint32_t const& UnityEngine::InputSystem::__InputActionState__TriggerState::__get_m_ReleasedInUpdate() const {
  return this->___m_ReleasedInUpdate;
}
constexpr void UnityEngine::InputSystem::__InputActionState__TriggerState::__set_m_ReleasedInUpdate(uint32_t value) {
  this->___m_ReleasedInUpdate = value;
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::__InputActionState__TriggerState::get_phase() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_phase",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_phase(::UnityEngine::InputSystem::InputActionPhase value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_phase", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isDisabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isDisabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isWaiting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isWaiting",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isStarted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isStarted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isPerformed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isPerformed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isCanceled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_time() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_time",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_time(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_time",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_startTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_startTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_startTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_startTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_magnitude() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_magnitude",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_magnitude(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_magnitude",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_haveMagnitude() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_haveMagnitude",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_mapIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_mapIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_mapIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_mapIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_controlIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_controlIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_controlIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_controlIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_bindingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_bindingIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_bindingIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_bindingIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_interactionIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_interactionIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_interactionIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_interactionIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_lastPerformedInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_lastPerformedInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_lastPerformedInUpdate(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_lastPerformedInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_lastCanceledInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_lastCanceledInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_lastCanceledInUpdate(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_lastCanceledInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_pressedInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_pressedInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_pressedInUpdate(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_pressedInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::__InputActionState__TriggerState::get_releasedInUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_releasedInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_releasedInUpdate(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_releasedInUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isPassThrough() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isPassThrough",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_isPassThrough(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_isPassThrough",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isButton",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_isButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_isButton",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_isPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_isPressed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_isPressed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_isPressed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_mayNeedConflictResolution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(),
                                               "get_mayNeedConflictResolution", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_mayNeedConflictResolution(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_mayNeedConflictResolution",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_hasMultipleConcurrentActuations() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(),
                                               "get_hasMultipleConcurrentActuations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_hasMultipleConcurrentActuations(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_hasMultipleConcurrentActuations",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputActionState__TriggerState::get_inProcessing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_inProcessing",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_inProcessing(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_inProcessing",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__InputActionState__TriggerState__Flags UnityEngine::InputSystem::__InputActionState__TriggerState::get_flags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "get_flags",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputActionState__TriggerState__Flags, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__TriggerState::set_flags(::GlobalNamespace::__InputActionState__TriggerState__Flags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__TriggerState>::get(), "set_flags", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputActionState__TriggerState__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Time", ty:
// "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingIndex", ty: "uint16_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Magnitude", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_LastPerformedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LastCanceledInUpdate", ty: "uint32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_PressedInUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReleasedInUpdate", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionState__TriggerState::__InputActionState__TriggerState(uint8_t m_Phase, uint8_t m_Flags, uint8_t m_MapIndex, uint16_t m_ControlIndex, double_t m_Time,
                                                                                                         double_t m_StartTime, uint16_t m_BindingIndex, uint16_t m_InteractionIndex,
                                                                                                         float_t m_Magnitude, uint32_t m_LastPerformedInUpdate, uint32_t m_LastCanceledInUpdate,
                                                                                                         uint32_t m_PressedInUpdate, uint32_t m_ReleasedInUpdate) noexcept {
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
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionState__TriggerState::__InputActionState__TriggerState() {}
// Ctor Parameters [CppParam { name: "actionStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "controlStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bindingStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "interactionStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "processorStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "processorCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "compositeStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionState__ActionMapIndices::__InputActionState__ActionMapIndices(int32_t actionStartIndex, int32_t actionCount, int32_t controlStartIndex,
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
constexpr ::UnityEngine::InputSystem::__InputActionState__ActionMapIndices::__InputActionState__ActionMapIndices() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory.get_isAllocated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::get_isAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a54c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "get_isAllocated",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory.get_sizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a54c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "get_sizeInBytes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::*)(
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::Allocate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2a54c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "Allocate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::*)()>(
    &::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a4dce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "Dispose",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory.CopyDataFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::*)(
    ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory)>(&::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::CopyDataFrom)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2a54dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "CopyDataFrom", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory (
    ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::*)()>(&::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::Clone)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a4de7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "Clone",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline bool UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::get_isAllocated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "get_isAllocated",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::get_sizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "get_sizeInBytes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::Allocate(int32_t mapCount, int32_t actionCount, int32_t bindingCount, int32_t controlCount, int32_t interactionCount,
                                                                                    int32_t compositeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "Allocate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapCount, actionCount, bindingCount, controlCount, interactionCount, compositeCount);
}
inline void UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::CopyDataFrom(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory memory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "CopyDataFrom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memory);
}
inline ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "basePtr", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "compositeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "bindingStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "interactionStates", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "controlMagnitudes", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "compositeMagnitudes", ty:
// "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "enabledControls", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "actionBindingIndicesAndCounts", ty: "::cordl_internals::Ptr<uint16_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "actionBindingIndices", ty:
// "::cordl_internals::Ptr<uint16_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "controlIndexToBindingIndex", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "controlGroupingAndComplexity", ty: "::cordl_internals::Ptr<uint16_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mapIndices", ty:
// "::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::__InputActionState__UnmanagedMemory(
    ::cordl_internals::Ptr<void> basePtr, int32_t mapCount, int32_t actionCount, int32_t interactionCount, int32_t bindingCount, int32_t controlCount, int32_t compositeCount,
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> actionStates,
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStates,
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState> interactionStates, ::cordl_internals::Ptr<float_t> controlMagnitudes,
    ::cordl_internals::Ptr<float_t> compositeMagnitudes, ::cordl_internals::Ptr<int32_t> enabledControls, ::cordl_internals::Ptr<uint16_t> actionBindingIndicesAndCounts,
    ::cordl_internals::Ptr<uint16_t> actionBindingIndices, ::cordl_internals::Ptr<int32_t> controlIndexToBindingIndex, ::cordl_internals::Ptr<uint16_t> controlGroupingAndComplexity,
    bool controlGroupingInitialized, ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices> mapIndices) noexcept {
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
constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory::__InputActionState__UnmanagedMemory() {}
// Ctor Parameters [CppParam { name: "globalList", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "onActionChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "onActionControlsChanged", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionState__GlobalState::__InputActionState__GlobalState(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList,
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> onActionChange,
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*> onActionControlsChanged) noexcept {
  this->globalList = globalList;
  this->onActionChange = onActionChange;
  this->onActionControlsChanged = onActionControlsChanged;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionState__GlobalState::__InputActionState__GlobalState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState____c::*)()>(
    &::UnityEngine::InputSystem::__InputActionState____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a54f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState____c._SaveAndResetState_b__135_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState____c::*)(
    ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>)>(&::UnityEngine::InputSystem::__InputActionState____c::_SaveAndResetState_b__135_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a54f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get(), "<SaveAndResetState>b__135_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionState____c._SaveAndResetState_b__135_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionState____c::*)()>(
    &::UnityEngine::InputSystem::__InputActionState____c::_SaveAndResetState_b__135_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a54ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get(),
                                                                               "<SaveAndResetState>b__135_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputActionState____c::setStaticF___9(::UnityEngine::InputSystem::__InputActionState____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::__InputActionState____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get>(
      std::forward<::UnityEngine::InputSystem::__InputActionState____c*>(value));
}
inline ::UnityEngine::InputSystem::__InputActionState____c* UnityEngine::InputSystem::__InputActionState____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::__InputActionState____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get>();
}
inline void UnityEngine::InputSystem::__InputActionState____c::setStaticF___9__135_0(
    ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*, "<>9__135_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*
UnityEngine::InputSystem::__InputActionState____c::getStaticF___9__135_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*, "<>9__135_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get>();
}
inline void UnityEngine::InputSystem::__InputActionState____c::setStaticF___9__135_1(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__135_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::__InputActionState____c::getStaticF___9__135_1() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__135_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get>();
}
inline ::UnityEngine::InputSystem::__InputActionState____c* UnityEngine::InputSystem::__InputActionState____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputActionState____c*>());
}
inline void UnityEngine::InputSystem::__InputActionState____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionState____c::_SaveAndResetState_b__135_0(ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get(), "<SaveAndResetState>b__135_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::__InputActionState____c::_SaveAndResetState_b__135_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionState____c*>::get(),
                                                                             "<SaveAndResetState>b__135_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputActionState____c::__InputActionState____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalCompositeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_totalCompositeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_totalCompositeCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalMapCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_totalMapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_totalMapCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalActionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_totalActionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_totalActionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalBindingCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_totalBindingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_totalBindingCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalInteractionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_totalInteractionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_totalInteractionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalControlCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_totalControlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_totalControlCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_mapIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices> (
    ::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_mapIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_mapIndices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_actionStates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> (
    ::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_actionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_actionStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_bindingStates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> (
    ::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_bindingStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_bindingStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_interactionStates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState> (
    ::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_interactionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_interactionStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlIndexToBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<int32_t> (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_controlIndexToBindingIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlGroupingAndComplexity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<uint16_t> (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_controlGroupingAndComplexity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlMagnitudes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<float_t> (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_controlMagnitudes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_controlMagnitudes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_enabledControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<uint32_t> (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_enabledControls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_enabledControls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_isProcessingControlStateChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4d47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "get_isProcessingControlStateChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputBindingResolver)>(
    &::UnityEngine::InputSystem::InputActionState::Initialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a4d484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBindingResolver>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ComputeControlGroupingIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2a4d618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "ComputeControlGroupingIfNecessary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ClaimDataFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputBindingResolver)>(
    &::UnityEngine::InputSystem::InputActionState::ClaimDataFrom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a4d4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ClaimDataFrom", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBindingResolver>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::Finalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a4d800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4da28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(bool)>(
    &::UnityEngine::InputSystem::InputActionState::Destroy)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2a4d898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Destroy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionState* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::Clone)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a4dd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Clone",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a4df20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "System.ICloneable.Clone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsUsingDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionState::IsUsingDevice)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2a4df24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsUsingDevice", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CanUseDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionState::CanUseDevice)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2a4e0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "CanUseDevice", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.HasEnabledActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::HasEnabledActions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a4e2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "HasEnabledActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FinishBindingCompositeSetups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a4e34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "FinishBindingCompositeSetups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.PrepareForBindingReResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(bool, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>, ByRef<bool>)>(
        &::UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2a4e418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "PrepareForBindingReResolution", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FinishBindingResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    bool, ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, bool)>(
    &::UnityEngine::InputSystem::InputActionState::FinishBindingResolution)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a4edfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FinishBindingResolution", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.RestoreActionStatesAfterReResolvingBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, bool)>(
    &::UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x2a4ee84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "RestoreActionStatesAfterReResolvingBindings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActiveControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::IsActiveControl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a4fcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsActiveControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FindControlIndexOnBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a4f6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FindControlIndexOnBinding", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetActionStatesDrivenBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2a4fd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetActionStatesDrivenBy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActionBoundToControlFromDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a4ffc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsActionBoundToControlFromDevice", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetActionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::UnityEngine::InputSystem::InputActionPhase, bool)>(
    &::UnityEngine::InputSystem::InputActionState::ResetActionState)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a4ebac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetActionState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FetchActionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionState::FetchActionState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a5039c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FetchActionState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FetchMapIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionState::FetchMapIndices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a503c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FetchMapIndices", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableAllActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableAllActions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2a503f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableAllActions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a504a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableControls", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableSingleAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableSingleAction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a504e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableSingleAction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a50544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableControls", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableAllActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a4e918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableAllActions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a4ecc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableControls", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableSingleAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableSingleAction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a505f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableSingleAction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a5064c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableControls", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2a4f564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableControls", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2a4da30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableControls", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(
    &::UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a507d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetInitialStateCheckPending", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>, bool)>(&::UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a50750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetInitialStateCheckPending", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsControlEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::IsControlEnabled)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a506fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsControlEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetControlEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(
    &::UnityEngine::InputSystem::InputActionState::SetControlEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a50798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetControlEnabled", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.HookOnBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a4fb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "HookOnBeforeUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnhookOnBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a50860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "UnhookOnBeforeUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.OnBeforeInitialUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2a508dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "OnBeforeInitialUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
        &::UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a50ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                 "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(
        &::UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a510c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ToCombinedMapAndControlAndBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a50728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ToCombinedMapAndControlAndBindingIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SplitUpMapAndControlAndBindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int64_t, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(
    &::UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a50af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SplitUpMapAndControlAndBindingIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetComplexityFromMonitorIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int64_t)>(&::UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a512d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetComplexityFromMonitorIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessControlStateChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    int32_t, int32_t, int32_t, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputActionState::ProcessControlStateChange)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x2a50b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessControlStateChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessButtonState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, int32_t, ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>)>(
    &::UnityEngine::InputSystem::InputActionState::ProcessButtonState)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2a51910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessButtonState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ShouldIgnoreInputOnCompositeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>)>(
        &::UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a51324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ShouldIgnoreInputOnCompositeBinding", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsConflictingInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(
    ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, int32_t)>(&::UnityEngine::InputSystem::InputActionState::IsConflictingInput)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2a51504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsConflictingInput", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionBindingStartIndexAndCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ByRef<uint16_t>)>(
    &::UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a50074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionBindingStartIndexAndCount", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessDefaultInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2a51ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessDefaultInteraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessInteractions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ProcessInteractions)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2a51370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessInteractions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(double_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ProcessTimeout)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2a510d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessTimeout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetTotalTimeoutCompletionTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    float_t, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a51f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetTotalTimeoutCompletionTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.StartTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    float_t, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::StartTimeout)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2a4f9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "StartTimeout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.StopTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::StopTimeout)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2a51f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "StopTimeout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputActionPhase, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, ::UnityEngine::InputSystem::InputActionPhase, bool)>(
    &::UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x2a52038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ChangePhaseOfInteraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(
    ::UnityEngine::InputSystem::InputActionPhase, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, ::UnityEngine::InputSystem::InputActionPhase)>(
    &::UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2a5013c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ChangePhaseOfAction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfActionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    int32_t, ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState>, ::UnityEngine::InputSystem::InputActionPhase,
    ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2a52438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ChangePhaseOfActionInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CallActionListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(
    int32_t, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputActionPhase,
    ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>>, ::StringW)>(
    &::UnityEngine::InputSystem::InputActionState::CallActionListeners)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2a526bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "CallActionListeners", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNoneString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::InputSystem::InputActionState::*)(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetActionOrNoneString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a5288c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionOrNoneString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a52984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionOrNull",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (
    ::UnityEngine::InputSystem::InputActionState::*)(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a528f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionOrNull", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::InputActionState::*)(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetControl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a52a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetInteractionOrNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::IInputInteraction* (
    ::UnityEngine::InputSystem::InputActionState::*)(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetInteractionOrNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a52a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetInteractionOrNull", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingIndexInMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a52aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBindingIndexInMap",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingIndexInState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetBindingIndexInState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a52ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBindingIndexInState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::__InputActionState__BindingState> (::UnityEngine::InputSystem::InputActionState::*)(
    int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetBindingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a52b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBindingState",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetBinding)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a52b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBinding",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetActionMap)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a52b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionMap",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetInteractionStateAndCancelIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a50094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetInteractionStateAndCancelIfNecessary", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetInteractionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ResetInteractionState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2a4ea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetInteractionState",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetValueSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a52bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetValueSizeInBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetValueType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a52c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetValueType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActuated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, float_t)>(
    &::UnityEngine::InputSystem::InputActionState::IsActuated)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a51e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsActuated", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, ::cordl_internals::Ptr<void>, int32_t, bool)>(&::UnityEngine::InputSystem::InputActionState::ReadValue)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2a52d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EvaluateCompositePartMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a52e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EvaluateCompositePartMagnitude", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetCompositePartPressTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a52f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetCompositePartPressTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadCompositePartValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, ::cordl_internals::Ptr<void>, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ReadCompositePartValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a52fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadCompositePartValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadCompositePartValueAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2a530e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadCompositePartValueAsObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::InputSystem::InputActionState::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2a531e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadValueAsObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValueAsButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputActionState::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a53350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadValueAsButton", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SaveAndResetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(
    &::UnityEngine::InputSystem::InputActionState::SaveAndResetState)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2a53480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "SaveAndResetState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.AddToGlobalList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::AddToGlobalList)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a4d590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "AddToGlobalList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.RemoveMapFromGlobalList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(
    &::UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a4dbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "RemoveMapFromGlobalList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CompactGlobalList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::CompactGlobalList)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2a53664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "CompactGlobalList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionChange)>(
    &::UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a4ed08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "NotifyListenersOfActionChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionChange, ::System::Object*)>(
    &::UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a4fbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "NotifyListenersOfActionChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::ResetGlobals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2a537cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "ResetGlobals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FindAllEnabledActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*)>(
    &::UnityEngine::InputSystem::InputActionState::FindAllEnabledActions)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2a53a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FindAllEnabledActions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.OnDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(
    &::UnityEngine::InputSystem::InputActionState::OnDeviceChange)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2a53d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "OnDeviceChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DeferredResolutionOfBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2a54028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "DeferredResolutionOfBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableAllActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a542bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "DisableAllActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DestroyAllActionMapStates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2a538f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                               "DestroyAllActionMapStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4de74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr UnityEngine::InputSystem::InputActionState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr UnityEngine::InputSystem::InputActionState::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputActionState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>& UnityEngine::InputSystem::InputActionState::__get_maps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maps;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> const& UnityEngine::InputSystem::InputActionState::__get_maps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maps;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& UnityEngine::InputSystem::InputActionState::__get_controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& UnityEngine::InputSystem::InputActionState::__get_controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*, ::Array<::UnityEngine::InputSystem::IInputInteraction*>*>& UnityEngine::InputSystem::InputActionState::__get_interactions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactions;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*, ::Array<::UnityEngine::InputSystem::IInputInteraction*>*> const&
UnityEngine::InputSystem::InputActionState::__get_interactions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactions;
}
constexpr void
UnityEngine::InputSystem::InputActionState::__set_interactions(::ArrayW<::UnityEngine::InputSystem::IInputInteraction*, ::Array<::UnityEngine::InputSystem::IInputInteraction*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*>& UnityEngine::InputSystem::InputActionState::__get_processors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> const& UnityEngine::InputSystem::InputActionState::__get_processors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___processors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>& UnityEngine::InputSystem::InputActionState::__get_composites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composites;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> const&
UnityEngine::InputSystem::InputActionState::__get_composites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composites;
}
constexpr void
UnityEngine::InputSystem::InputActionState::__set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___composites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionState::__get_totalProcessorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalProcessorCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionState::__get_totalProcessorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalProcessorCount;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_totalProcessorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalProcessorCount = value;
}
constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory& UnityEngine::InputSystem::InputActionState::__get_memory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memory;
}
constexpr ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory const& UnityEngine::InputSystem::InputActionState::__get_memory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memory;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_memory(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memory = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__get_m_OnBeforeUpdateHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateHooked;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__get_m_OnBeforeUpdateHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateHooked;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnBeforeUpdateHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnBeforeUpdateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__get_m_OnAfterUpdateHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateHooked;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__get_m_OnAfterUpdateHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateHooked;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnAfterUpdateHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnAfterUpdateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__get_m_InProcessControlStateChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InProcessControlStateChange;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__get_m_InProcessControlStateChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InProcessControlStateChange;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_InProcessControlStateChange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InProcessControlStateChange = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::InputActionState::__get_m_CurrentlyProcessingThisEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentlyProcessingThisEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::InputActionState::__get_m_CurrentlyProcessingThisEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentlyProcessingThisEvent;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_CurrentlyProcessingThisEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentlyProcessingThisEvent = value;
}
constexpr ::System::Action*& UnityEngine::InputSystem::InputActionState::__get_m_OnBeforeUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::InputSystem::InputActionState::__get_m_OnBeforeUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnBeforeUpdateDelegate(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnBeforeUpdateDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::InputSystem::InputActionState::__get_m_OnAfterUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::InputSystem::InputActionState::__get_m_OnAfterUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAfterUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::InputActionState::__set_m_OnAfterUpdateDelegate(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnAfterUpdateDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_s_GlobalState(::UnityEngine::InputSystem::__InputActionState__GlobalState value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::__InputActionState__GlobalState, "s_GlobalState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get>(
      std::forward<::UnityEngine::InputSystem::__InputActionState__GlobalState>(value));
}
inline ::UnityEngine::InputSystem::__InputActionState__GlobalState UnityEngine::InputSystem::InputActionState::getStaticF_s_GlobalState() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::__InputActionState__GlobalState, "s_GlobalState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get>();
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalCompositeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_totalCompositeCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalMapCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_totalMapCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalActionCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_totalActionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalBindingCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_totalBindingCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalInteractionCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_totalInteractionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalControlCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_totalControlCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices> UnityEngine::InputSystem::InputActionState::get_mapIndices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_mapIndices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> UnityEngine::InputSystem::InputActionState::get_actionStates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_actionStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> UnityEngine::InputSystem::InputActionState::get_bindingStates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_bindingStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState> UnityEngine::InputSystem::InputActionState::get_interactionStates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_interactionStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__InteractionState>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<int32_t> UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_controlIndexToBindingIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<int32_t>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<uint16_t> UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_controlGroupingAndComplexity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint16_t>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<float_t> UnityEngine::InputSystem::InputActionState::get_controlMagnitudes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_controlMagnitudes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<float_t>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<uint32_t> UnityEngine::InputSystem::InputActionState::get_enabledControls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_enabledControls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint32_t>, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "get_isProcessingControlStateChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Initialize(::UnityEngine::InputSystem::InputBindingResolver resolver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBindingResolver>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resolver);
}
inline void UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "ComputeControlGroupingIfNecessary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver resolver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ClaimDataFrom", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBindingResolver>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resolver);
}
inline void UnityEngine::InputSystem::InputActionState::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param isFinalizing: bool (default: false)
inline void UnityEngine::InputSystem::InputActionState::Destroy(bool isFinalizing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Destroy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isFinalizing);
}
inline ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionState::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState*, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "System.ICloneable.Clone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState::IsUsingDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsUsingDevice", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::CanUseDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "CanUseDevice", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::HasEnabledActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "HasEnabledActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "FinishBindingCompositeSetups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution(bool needFullResolve,
                                                                                      ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>> activeControls,
                                                                                      ByRef<bool> hasEnabledActions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "PrepareForBindingReResolution", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, needFullResolve, activeControls, hasEnabledActions);
}
inline void UnityEngine::InputSystem::InputActionState::FinishBindingResolution(bool hasEnabledActions, ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory oldMemory,
                                                                                ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls,
                                                                                bool isFullResolve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FinishBindingResolution", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasEnabledActions, oldMemory, activeControls, isFullResolve);
}
inline void
UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings(::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory oldState,
                                                                                        ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> activeControls,
                                                                                        bool isFullResolve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "RestoreActionStatesAfterReResolvingBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldState, activeControls, isFullResolve);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActiveControl(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsActiveControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bindingIndex, controlIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding(int32_t bindingIndex, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FindControlIndexOnBinding", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bindingIndex, control);
}
inline void UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetActionStatesDrivenBy", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice* device, int32_t actionIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsActionBoundToControlFromDevice", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device, actionIndex);
}
/// @param toPhase: ::UnityEngine::InputSystem::InputActionPhase (default: static_cast<int32_t>(0x1))
/// @param hardReset: bool (default: false)
inline void UnityEngine::InputSystem::InputActionState::ResetActionState(int32_t actionIndex, ::UnityEngine::InputSystem::InputActionPhase toPhase, bool hardReset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetActionState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionIndex, toPhase, hardReset);
}
inline ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> UnityEngine::InputSystem::InputActionState::FetchActionState(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FetchActionState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>, false>(this, ___internal_method, action);
}
inline ::UnityEngine::InputSystem::__InputActionState__ActionMapIndices UnityEngine::InputSystem::InputActionState::FetchMapIndices(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FetchMapIndices", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionState__ActionMapIndices, false>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableAllActions(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableAllActions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableControls", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableSingleAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableSingleAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableControls", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::DisableAllActions(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableAllActions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(::UnityEngine::InputSystem::InputActionMap* map) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableControls", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::DisableSingleAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableSingleAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableControls", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EnableControls", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapIndex, controlStartIndex, numControls);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(int32_t mapIndex, int32_t controlStartIndex, int32_t numControls) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "DisableControls", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapIndex, controlStartIndex, numControls);
}
/// @param value: bool (default: true)
inline void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(int32_t actionIndex, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetInitialStateCheckPending", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionIndex, value);
}
inline void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStatePtr, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetInitialStateCheckPending", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingStatePtr, value);
}
inline bool UnityEngine::InputSystem::InputActionState::IsControlEnabled(int32_t controlIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsControlEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, controlIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SetControlEnabled(int32_t controlIndex, bool state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetControlEnabled", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controlIndex, state);
}
inline void UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "HookOnBeforeUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "UnhookOnBeforeUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "OnBeforeInitialUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(
    ::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t mapControlAndBindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                               "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, time, eventPtr, mapControlAndBindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                                                     int64_t mapControlAndBindingIndex, int32_t interactionIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, time, mapControlAndBindingIndex, interactionIndex);
}
inline int64_t UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ToCombinedMapAndControlAndBindingIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, mapIndex, controlIndex, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex(int64_t mapControlAndBindingIndex, ByRef<int32_t> mapIndex, ByRef<int32_t> controlIndex,
                                                                                            ByRef<int32_t> bindingIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SplitUpMapAndControlAndBindingIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapControlAndBindingIndex, mapIndex, controlIndex, bindingIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex(int64_t mapControlAndBindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetComplexityFromMonitorIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mapControlAndBindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessControlStateChange(int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, double_t time,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessControlStateChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapIndex, controlIndex, bindingIndex, time, eventPtr);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessButtonState(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t actionIndex,
                                                                           ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> bindingStatePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessButtonState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trigger, actionIndex, bindingStatePtr);
}
inline bool UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding(::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState> binding,
                                                                                            ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ShouldIgnoreInputOnCompositeBinding", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__BindingState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, binding, eventPtr);
}
inline bool UnityEngine::InputSystem::InputActionState::IsConflictingInput(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t actionIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsConflictingInput", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, trigger, actionIndex);
}
inline uint16_t UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount(int32_t actionIndex, ByRef<uint16_t> bindingCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionBindingStartIndexAndCount", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, actionIndex, bindingCount);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t actionIndex) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessDefaultInteraction", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trigger, actionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessInteractions(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, int32_t interactionStartIndex,
                                                                            int32_t interactionCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessInteractions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trigger, interactionStartIndex, interactionCount);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessTimeout(double_t time, int32_t mapIndex, int32_t controlIndex, int32_t bindingIndex, int32_t interactionIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ProcessTimeout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, mapIndex, controlIndex, bindingIndex, interactionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime(float_t seconds, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "SetTotalTimeoutCompletionTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seconds, trigger);
}
inline void UnityEngine::InputSystem::InputActionState::StartTimeout(float_t seconds, ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "StartTimeout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seconds, trigger);
}
inline void UnityEngine::InputSystem::InputActionState::StopTimeout(int32_t interactionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "StopTimeout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactionIndex);
}
/// @param phaseAfterPerformed: ::UnityEngine::InputSystem::InputActionPhase (default: static_cast<int32_t>(0x1))
/// @param processNextInteractionOnCancel: bool (default: true)
inline void UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase newPhase,
                                                                                 ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger,
                                                                                 ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformed, bool processNextInteractionOnCancel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ChangePhaseOfInteraction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPhase, trigger, phaseAfterPerformed, processNextInteractionOnCancel);
}
/// @param phaseAfterPerformedOrCanceled: ::UnityEngine::InputSystem::InputActionPhase (default: static_cast<int32_t>(0x1))
inline bool UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase newPhase,
                                                                            ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger,
                                                                            ::UnityEngine::InputSystem::InputActionPhase phaseAfterPerformedOrCanceled) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ChangePhaseOfAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, newPhase, trigger, phaseAfterPerformedOrCanceled);
}
inline void UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal(int32_t actionIndex,
                                                                                    ::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState> actionState,
                                                                                    ::UnityEngine::InputSystem::InputActionPhase newPhase,
                                                                                    ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ChangePhaseOfActionInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionIndex, actionState, newPhase, trigger);
}
inline void UnityEngine::InputSystem::InputActionState::CallActionListeners(
    int32_t actionIndex, ::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputActionPhase phase,
    ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>> listeners, ::StringW callbackName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "CallActionListeners", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionIndex, actionMap, phase, listeners, callbackName);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::GetActionOrNoneString(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionOrNoneString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, trigger);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionState::GetActionOrNull(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionOrNull",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method, bindingIndex);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionState::GetActionOrNull(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionOrNull", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method, trigger);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputActionState::GetControl(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, trigger);
}
inline ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::InputSystem::InputActionState::GetInteractionOrNull(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetInteractionOrNull", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::IInputInteraction*, false>(this, ___internal_method, trigger);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBindingIndexInMap",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bindingIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInState(int32_t mapIndex, int32_t bindingIndexInMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBindingIndexInState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, mapIndex, bindingIndexInMap);
}
inline ByRef<::UnityEngine::InputSystem::__InputActionState__BindingState> UnityEngine::InputSystem::InputActionState::GetBindingState(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBindingState",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::__InputActionState__BindingState>, false>(this, ___internal_method, bindingIndex);
}
inline ByRef<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionState::GetBinding(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::InputBinding>, false>(this, ___internal_method, bindingIndex);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionState::GetActionMap(int32_t bindingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetActionMap",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*, false>(this, ___internal_method, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary(int32_t mapIndex, int32_t bindingIndex, int32_t interactionIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetInteractionStateAndCancelIfNecessary", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapIndex, bindingIndex, interactionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ResetInteractionState(int32_t interactionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ResetInteractionState",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactionIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetValueSizeInBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bindingIndex, controlIndex);
}
inline ::System::Type* UnityEngine::InputSystem::InputActionState::GetValueType(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetValueType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, bindingIndex, controlIndex);
}
/// @param threshold: float_t (default: 0.0)
inline bool UnityEngine::InputSystem::InputActionState::IsActuated(ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState> trigger, float_t threshold) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "IsActuated", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputActionState__TriggerState>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trigger, threshold);
}
/// @param ignoreComposites: bool (default: false)
inline void UnityEngine::InputSystem::InputActionState::ReadValue(int32_t bindingIndex, int32_t controlIndex, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize, bool ignoreComposites) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingIndex, controlIndex, buffer, bufferSize, ignoreComposites);
}
/// @param ignoreComposites: bool (default: false)
template <typename TValue> inline TValue UnityEngine::InputSystem::InputActionState::ReadValue(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                                  "ReadValue", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
/// @param controlOfType: ::UnityEngine::InputSystem::InputControl_1<TValue>* (default: nullptr)
template <typename TValue>
inline TValue UnityEngine::InputSystem::InputActionState::ApplyProcessors(int32_t bindingIndex, TValue value, ::UnityEngine::InputSystem::InputControl_1<TValue>* controlOfType) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ApplyProcessors",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, bindingIndex, value, controlOfType);
}
inline float_t UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude(int32_t bindingIndex, int32_t partNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "EvaluateCompositePartMagnitude", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, bindingIndex, partNumber);
}
inline double_t UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime(int32_t bindingIndex, int32_t partNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "GetCompositePartPressTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, bindingIndex, partNumber);
}
/// @param comparer: TComparer (default: nullptr)
template <typename TValue, typename TComparer>
inline TValue UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, ::cordl_internals::Ptr<bool> buttonValuePtr, ByRef<int32_t> controlIndex,
                                                                                 TComparer comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadCompositePartValue",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComparer>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, bindingIndex, partNumber, buttonValuePtr, controlIndex, comparer);
}
inline bool UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t bindingIndex, int32_t partNumber, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadCompositePartValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bindingIndex, partNumber, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject(int32_t bindingIndex, int32_t partNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadCompositePartValueAsObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, bindingIndex, partNumber);
}
/// @param ignoreComposites: bool (default: false)
inline ::System::Object* UnityEngine::InputSystem::InputActionState::ReadValueAsObject(int32_t bindingIndex, int32_t controlIndex, bool ignoreComposites) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadValueAsObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
inline bool UnityEngine::InputSystem::InputActionState::ReadValueAsButton(int32_t bindingIndex, int32_t controlIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "ReadValueAsButton", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bindingIndex, controlIndex);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::InputActionState::SaveAndResetState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "SaveAndResetState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::AddToGlobalList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "AddToGlobalList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "RemoveMapFromGlobalList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::CompactGlobalList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "CompactGlobalList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "NotifyListenersOfActionChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, change);
}
inline void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange change, ::System::Object* actionOrMapOrAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "NotifyListenersOfActionChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, change, actionOrMapOrAsset);
}
inline void UnityEngine::InputSystem::InputActionState::ResetGlobals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "ResetGlobals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "FindAllEnabledActions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, result);
}
inline void UnityEngine::InputSystem::InputActionState::OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), "OnDeviceChange", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "DeferredResolutionOfBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::DisableAllActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "DisableAllActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(),
                                                                             "DestroyAllActionMapStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputActionState*>());
}
inline void UnityEngine::InputSystem::InputActionState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionState*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState::InputActionState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
