#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputDeviceExecuteCommandDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65a8144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::*)(
    ::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a81c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::*)(::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65a81d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::*)(
    ::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>, ::System::IAsyncResult*)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65a8264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int64_t UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::Invoke(::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, command);
}
inline ::System::IAsyncResult* UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::BeginInvoke(::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command,
                                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, command, callback, object);
}
inline int64_t UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::EndInvoke(::by_ref<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command,
                                                                                                ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, command, result);
}
inline ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate::InputDeviceExecuteCommandDelegate() {}
