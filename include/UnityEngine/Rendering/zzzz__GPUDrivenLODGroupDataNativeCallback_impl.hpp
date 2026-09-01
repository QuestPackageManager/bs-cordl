#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\GPUDrivenLODGroupDataNativeCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataNativeCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataNative_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b2b7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::*)(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>,
                                                                                                                               ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*)>(
    &::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b2b874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::Invoke(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative> lodGroupDataNative,
                                                                                ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodGroupDataNative, callback);
}
inline ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback* UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::GPUDrivenLODGroupDataNativeCallback() {}
