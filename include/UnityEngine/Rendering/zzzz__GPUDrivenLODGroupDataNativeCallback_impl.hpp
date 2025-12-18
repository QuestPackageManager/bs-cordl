#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenLODGroupDataNativeCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataNativeCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataNative_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69604b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>, ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*)>(
    &::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6960530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::Invoke(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative> lodGroupDataNative,
                                                                                ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* callback) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lodGroupDataNative, callback);
}
inline ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback* UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback::GPUDrivenLODGroupDataNativeCallback() {}
