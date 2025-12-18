#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenCallbacks.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*, ::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>, ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*)>(
    &::UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenLODGroupDataNativeCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x696066c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenCallbacks*>::get(), "InvokeGPUDrivenLODGroupDataNativeCallback",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenCallbacks.InvokeGPUDrivenRendererDataNativeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*, ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>,
                         ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*,
                         ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*)>(&::UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenRendererDataNativeCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x696068c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenCallbacks*>::get(), "InvokeGPUDrivenRendererDataNativeCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenRendererDataCallback*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenLODGroupDataNativeCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback* callback,
                                                                                                  ::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative> lodGroupDataNative,
                                                                                                  ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenCallbacks*>::get(), "InvokeGPUDrivenLODGroupDataNativeCallback",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback, lodGroupDataNative, target);
}
inline void UnityEngine::Rendering::GPUDrivenCallbacks::InvokeGPUDrivenRendererDataNativeCallback(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback* callback,
                                                                                                  ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative> rendererDataNative,
                                                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials,
                                                                                                  ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenCallbacks*>::get(), "InvokeGPUDrivenRendererDataNativeCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenRendererDataCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback, rendererDataNative, meshes, materials, target);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenCallbacks::GPUDrivenCallbacks() {}
