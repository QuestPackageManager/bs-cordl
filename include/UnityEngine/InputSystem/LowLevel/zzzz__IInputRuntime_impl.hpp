#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\IInputRuntime.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.AllocateDeviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::IInputRuntime::AllocateDeviceId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.QueueEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::QueueEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.DeviceCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(int32_t, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::DeviceCommand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_onUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_onUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onBeforeUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onBeforeUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_onShouldRunUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onShouldRunUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_onShouldRunUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onShouldRunUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<int32_t, ::StringW>* (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::System::Action_2<int32_t, ::StringW>*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_onPlayerFocusChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<bool>* (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onPlayerFocusChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_onPlayerFocusChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::System::Action_1<bool>*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onPlayerFocusChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_isPlayerFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_isPlayerFocused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_onShutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onShutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_onShutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onShutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_pollingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_pollingFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_pollingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(float_t)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_pollingFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_currentTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_currentTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_currentTimeForFixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_currentTimeForFixedUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_unscaledGameTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_unscaledGameTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_currentTimeOffsetToRealtimeSinceStartup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_currentTimeOffsetToRealtimeSinceStartup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_runInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_runInBackground)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_runInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(bool)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_runInBackground)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_screenSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_screenSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_screenOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ScreenOrientation (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_screenOrientation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_normalizeScrollWheelDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_normalizeScrollWheelDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.set_normalizeScrollWheelDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)(bool)>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::set_normalizeScrollWheelDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_scrollWheelDeltaPerTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_scrollWheelDeltaPerTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputRuntime.get_isInBatchMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::IInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::IInputRuntime::get_isInBatchMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 30 }));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::LowLevel::IInputRuntime::AllocateDeviceId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEvent* ptr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline int64_t UnityEngine::InputSystem::LowLevel::IInputRuntime::DeviceCommand(int32_t deviceId, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* commandPtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, deviceId, commandPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onBeforeUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onShouldRunUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_2<int32_t, ::StringW>* UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onDeviceDiscovered() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t, ::StringW>*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<bool>* UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onPlayerFocusChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<bool>*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onPlayerFocusChanged(::System::Action_1<bool>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::IInputRuntime::get_isPlayerFocused() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Action* UnityEngine::InputSystem::LowLevel::IInputRuntime::get_onShutdown() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_onShutdown(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::LowLevel::IInputRuntime::get_pollingFrequency() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_pollingFrequency(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::IInputRuntime::get_currentTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::IInputRuntime::get_currentTimeForFixedUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::LowLevel::IInputRuntime::get_unscaledGameTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::IInputRuntime::get_currentTimeOffsetToRealtimeSinceStartup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::IInputRuntime::get_runInBackground() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_runInBackground(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::IInputRuntime::get_screenSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::ScreenOrientation UnityEngine::InputSystem::LowLevel::IInputRuntime::get_screenOrientation() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScreenOrientation>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::IInputRuntime::get_normalizeScrollWheelDelta() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::IInputRuntime::set_normalizeScrollWheelDelta(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::LowLevel::IInputRuntime::get_scrollWheelDeltaPerTick() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::IInputRuntime::get_isInBatchMode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
