#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputState_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate.NotifyControlStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::*)(
    ::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
    &::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af41c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*>::get(),
                                                 "NotifyControlStateChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate.NotifyTimerExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::*)(
    ::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2af41e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*>::get(), "NotifyTimerExpired",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::*)()>(
    &::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af3f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*
UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*&
UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::__cordl_internal_get_valueChangeCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangeCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*> const&
UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::__cordl_internal_get_valueChangeCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangeCallback;
}
constexpr void UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::__cordl_internal_set_valueChangeCallback(
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueChangeCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*&
UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::__cordl_internal_get_timerExpiredCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timerExpiredCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*> const&
UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::__cordl_internal_get_timerExpiredCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timerExpiredCallback;
}
constexpr void UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::__cordl_internal_set_timerExpiredCallback(
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___timerExpiredCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                                    ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                                    int64_t monitorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*>::get(),
                                               "NotifyControlStateChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, time, eventPtr, monitorIndex);
}
inline void UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex,
                                                                                                             int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*>::get(), "NotifyTimerExpired",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, time, monitorIndex, timerIndex);
}
inline ::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate* UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*>());
}
inline void UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate::__InputState__StateChangeMonitorDelegate() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_currentUpdateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2af3704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                               "get_currentUpdateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_updateCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_updateCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2af374c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                               "get_updateCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_currentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_currentTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ae705c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                               "get_currentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.add_onChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::LowLevel::InputState::add_onChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2af3794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "add_onChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.remove_onChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::LowLevel::InputState::remove_onChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2af3800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "remove_onChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
        &::UnityEngine::InputSystem::LowLevel::InputState::Change)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2af386c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.IsIntegerFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2af3ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "IsIntegerFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*,
                                                                                           int64_t, uint32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2af3cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "AddChangeMonitor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* (*)(::UnityEngine::InputSystem::InputControl*,
                                                                                    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t,
                                                                                                       ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*,
                                                                                    int32_t, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*)>(
        &::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2af3e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "AddChangeMonitor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.RemoveChangeMonitor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*,
                                                                                           int64_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2af3f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "RemoveChangeMonitor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*,
                                                                                           double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2af4004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "AddChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.RemoveChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2af40f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "RemoveChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                             "get_currentUpdateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputState::get_updateCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                             "get_updateCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputState::get_currentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                             "get_currentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "add_onChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "remove_onChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
/// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: static_cast<int32_t>(0x0))
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, eventPtr, updateType);
}
/// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: static_cast<int32_t>(0x0))
/// @param eventPtr: ::UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
template <typename TState>
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputControl* control, TState state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "Change",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, state, updateType, eventPtr);
}
/// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: static_cast<int32_t>(0x0))
/// @param eventPtr: ::UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
template <typename TState>
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputControl* control, ByRef<TState> state,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "Change",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TState>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, state, updateType, eventPtr);
}
inline bool UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "IsIntegerFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, format);
}
/// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
/// @param groupIndex: uint32_t (default: static_cast<uint32_t>(0xffff0100u))
inline void UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                             int64_t monitorIndex, uint32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "AddChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
/// @param monitorIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param timerExpiredCallback: ::System::Action_4<::UnityEngine::InputSystem::InputControl*,double_t,int64_t,int32_t>* (default: nullptr)
inline ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor(
    ::UnityEngine::InputSystem::InputControl* control,
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* valueChangeCallback, int32_t monitorIndex,
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* timerExpiredCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "AddChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, false>(nullptr, ___internal_method, control, valueChangeCallback, monitorIndex,
                                                                                                                     timerExpiredCallback);
}
/// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* control,
                                                                                ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "RemoveChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, monitorIndex);
}
/// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
/// @param timerIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control,
                                                                                    ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double_t time, int64_t monitorIndex,
                                                                                    int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "AddChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, time, monitorIndex, timerIndex);
}
/// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
/// @param timerIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                                                                       int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "RemoveChangeMonitorTimeout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, monitor, monitorIndex, timerIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputState::InputState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
