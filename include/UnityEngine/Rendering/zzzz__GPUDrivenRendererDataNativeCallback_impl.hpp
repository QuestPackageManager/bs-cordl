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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69605d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*,
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*)>(
    &::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6960658;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::Invoke(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative> rendererDataNative,
                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials,
                                                                                ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* callback) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererDataNative, meshes, materials, callback);
}
inline ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback* UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback::GPUDrivenRendererDataNativeCallback() {}
