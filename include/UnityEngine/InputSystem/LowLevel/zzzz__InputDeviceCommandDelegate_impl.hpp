#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputDeviceCommandDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x65a7f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a80e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*, ::System::AsyncCallback*,
                                                                         ::System::Object*)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65a80f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65a811c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Nullable_1<int64_t> UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                            ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method, device, command);
}
inline ::System::IAsyncResult* UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                           ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, device, command, callback, object);
}
inline ::System::Nullable_1<int64_t> UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method, result);
}
inline ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::InputDeviceCommandDelegate() {}
