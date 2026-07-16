#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererDataNativeCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererDataNativeCallback_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererDataCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupDataNative_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b28394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::*)(
    ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*,
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*)>(
    &::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b28414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::Invoke(::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative> rendererDataNative,
                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials,
                                                                                ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererDataNative, meshes, materials, callback);
}
inline ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback* UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::GPUDrivenRendererDataNativeCallback() {}
