#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdateDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65b07e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::*)(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>)>(&::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65b0854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>,
                                                                  ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65b0868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::*)(
    ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>, ::System::IAsyncResult*)>(&::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b0928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::Invoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                                                                            ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateType, eventBuffer);
}
inline ::System::IAsyncResult* UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                                                                                                    ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, updateType, eventBuffer, callback, object);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::EndInvoke(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBuffer, result);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate::InputUpdateDelegate() {}
