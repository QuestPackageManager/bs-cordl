#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputState.hpp"
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
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate.NotifyControlStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::*)(
    ::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x640198c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>::get(),
                                                 "NotifyControlStateChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate.NotifyTimerExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::*)(
    ::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64019ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>::get(), "NotifyTimerExpired",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64016c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*&
UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::__cordl_internal_get_valueChangeCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangeCallback;
}
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* const&
UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::__cordl_internal_get_valueChangeCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangeCallback;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::__cordl_internal_set_valueChangeCallback(
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueChangeCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*&
UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::__cordl_internal_get_timerExpiredCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timerExpiredCallback;
}
constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* const&
UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::__cordl_internal_get_timerExpiredCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timerExpiredCallback;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::__cordl_internal_set_timerExpiredCallback(
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___timerExpiredCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                                 ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>::get(),
                                               "NotifyControlStateChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, time, eventPtr, monitorIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex,
                                                                                                          int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>::get(), "NotifyTimerExpired",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control, time, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate* UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*
UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::InputState_StateChangeMonitorDelegate() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_currentUpdateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6400e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                               "get_currentUpdateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_updateCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_updateCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6400e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(),
                                                                               "get_updateCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_currentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_currentTime)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6400edc;

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
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6400fb4;

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
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6401024;

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
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6401094;

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
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x640130c;

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
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x640147c;

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
  constexpr static std::size_t addrs = 0x64015ec;

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
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x64016cc;

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
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x64017c4;

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
  constexpr static std::size_t addrs = 0x64018b8;

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
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, eventPtr, updateType);
}
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
template <typename TState>
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputControl* control, ::ByRef<TState> state,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "Change",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TState>>::get(),
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
inline void UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                             int64_t monitorIndex, uint32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "AddChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
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
inline void UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* control,
                                                                                ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputState*>::get(), "RemoveChangeMonitor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, monitor, monitorIndex);
}
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
