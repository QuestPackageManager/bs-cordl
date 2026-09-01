#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Layouts\InputDeviceFindControlLayoutDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceFindControlLayoutDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65bf8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(
    ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65bf928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::System::AsyncCallback*,
                                                                                  ::System::Object*)>(&::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65bf93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(
    ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::System::IAsyncResult*)>(&::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65bf9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::Invoke(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description,
                                                                                                 ::StringW matchedLayout,
                                                                                                 ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, description, matchedLayout, executeDeviceCommand);
}
inline ::System::IAsyncResult*
UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::BeginInvoke(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                                                     ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand,
                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, description, matchedLayout, executeDeviceCommand, callback, object);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::EndInvoke(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description,
                                                                                                    ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, description, result);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::InputDeviceFindControlLayoutDelegate() {}
