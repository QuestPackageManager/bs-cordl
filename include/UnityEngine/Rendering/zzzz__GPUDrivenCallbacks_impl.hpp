#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\GPUDrivenCallbacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenCallbacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataNativeCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataNative_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererDataCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererDataNativeCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupDataNative_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenCallbacks.InvokeGPUDrivenLODGroupDataNativeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*, ::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>,
                                                                ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*)>(
    &::UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenLODGroupDataNativeCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b2b9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenCallbacks*>(), { "InvokeGPUDrivenLODGroupDataNativeCallback",
                                                                                                                    {},
                                                                                                                    { ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(),
                                                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>>(),
                                                                                                                      ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenCallbacks.InvokeGPUDrivenRendererDataNativeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>,
                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*,
                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*)>(
    &::UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenRendererDataNativeCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b2b9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenCallbacks*>(),
                                                                                           { "InvokeGPUDrivenRendererDataNativeCallback",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenRendererDataCallback*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenLODGroupDataNativeCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback* callback,
                                                                                                  ::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative> lodGroupDataNative,
                                                                                                  ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenCallbacks*>(), { "InvokeGPUDrivenLODGroupDataNativeCallback",
                                                                                                                  {},
                                                                                                                  { ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(),
                                                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>>(),
                                                                                                                    ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, lodGroupDataNative, target);
}
inline void UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenRendererDataNativeCallback(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback* callback,
                                                                                                  ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative> rendererDataNative,
                                                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials,
                                                                                                  ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenCallbacks*>(),
                                                                                         { "InvokeGPUDrivenRendererDataNativeCallback",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenRendererDataCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, rendererDataNative, meshes, materials, target);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenCallbacks::GPUDrivenCallbacks() {}
