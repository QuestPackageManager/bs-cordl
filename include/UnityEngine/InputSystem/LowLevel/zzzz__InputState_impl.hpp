#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\InputState.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::*)(
    ::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65b81b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>(),
                                                                                           { "NotifyControlStateChanged",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate.NotifyTimerExpired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::*)(
    ::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65b81d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>(),
            { "NotifyTimerExpired", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b7ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>(), { ".ctor", {}, {} })));
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
  this->___valueChangeCallback = value;
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
  this->___timerExpiredCallback = value;
}
inline void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                                 ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>(),
                                                                                         { "NotifyControlStateChanged",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, eventPtr, monitorIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex,
                                                                                                          int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>(),
          { "NotifyTimerExpired", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate* UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65b766c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(), { "get_currentUpdateType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_updateCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_updateCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65b76b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(), { "get_updateCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.get_currentTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngine::InputSystem::LowLevel::InputState::get_currentTime)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65b7704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(), { "get_currentTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.add_onChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
    &::UnityEngine::InputSystem::LowLevel::InputState::add_onChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65b77dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                            { "add_onChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.remove_onChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
    &::UnityEngine::InputSystem::LowLevel::InputState::remove_onChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65b784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                            { "remove_onChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.Change
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr,
                                                                ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputState::Change)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x65b78bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                             { "Change",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.IsIntegerFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x65b7b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                                                           { "IsIntegerFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, uint32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x65b7ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                { "AddChangeMonitor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                    ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* (*)(::UnityEngine::InputSystem::InputControl*,
                                                                                    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t,
                                                                                                       ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*,
                                                                                    int32_t, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*)>(
        &::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65b7e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                         { "AddChangeMonitor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                             ::i2c::type_of<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.RemoveChangeMonitor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x65b7ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                             { "RemoveChangeMonitor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.AddChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, double_t, int64_t,
                                                                int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x65b7fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                { "AddChangeMonitorTimeout",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                    ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputState.RemoveChangeMonitorTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x65b80e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
            { "RemoveChangeMonitorTimeout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(), { "get_currentUpdateType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputState::get_updateCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(), { "get_updateCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputState::get_currentTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(), { "get_currentTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                          { "add_onChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                          { "remove_onChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                           { "Change",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, eventPtr, updateType);
}
template <typename TState>
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputControl* control, TState state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                              { "Change",
                                                { ::i2c::class_of<TState>() },
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<TState>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, state, updateType, eventPtr);
}
template <typename TState>
inline void UnityEngine::InputSystem::LowLevel::InputState::Change(::UnityEngine::InputSystem::InputControl* control, ::by_ref<TState> state,
                                                                   ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                              { "Change",
                                                { ::i2c::class_of<TState>() },
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<TState>>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, state, updateType, eventPtr);
}
inline bool UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                                                         { "IsIntegerFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                                             int64_t monitorIndex, uint32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                              { "AddChangeMonitor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                  ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
inline ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor(
    ::UnityEngine::InputSystem::InputControl* control,
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* valueChangeCallback, int32_t monitorIndex,
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* timerExpiredCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                       { "AddChangeMonitor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                           ::i2c::type_of<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(nullptr, ___internal_method, control, valueChangeCallback, monitorIndex,
                                                                                                              timerExpiredCallback);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* control,
                                                                                ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                                           { "RemoveChangeMonitor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, monitor, monitorIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control,
                                                                                    ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double_t time, int64_t monitorIndex,
                                                                                    int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
                                              { "AddChangeMonitorTimeout",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(),
                                                  ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, monitor, time, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                                                                       int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputState*>(),
          { "RemoveChangeMonitorTimeout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monitor, monitorIndex, timerIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputState::InputState() {}
