#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OnCullingCompleteCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OnCullingCompleteCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::OnCullingCompleteCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6664af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(
    ::Unity::Jobs::JobHandle, ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::ByRef<::UnityEngine::Rendering::BatchCullingOutput>)>(
    &::UnityEngine::Rendering::OnCullingCompleteCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6664b5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::Unity::Jobs::JobHandle, ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::ByRef<::UnityEngine::Rendering::BatchCullingOutput>,
                                                            ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::Rendering::OnCullingCompleteCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6664b70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::ByRef<::UnityEngine::Rendering::BatchCullingOutput>, ::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::OnCullingCompleteCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6664c60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OnCullingCompleteCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::OnCullingCompleteCallback::Invoke(::Unity::Jobs::JobHandle jobHandle, ::ByRef<::UnityEngine::Rendering::BatchCullingContext> cullingContext,
                                                                      ::ByRef<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jobHandle, cullingContext, cullingOutput);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::OnCullingCompleteCallback::BeginInvoke(::Unity::Jobs::JobHandle jobHandle, ::ByRef<::UnityEngine::Rendering::BatchCullingContext> cullingContext,
                                                                                              ::ByRef<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, jobHandle, cullingContext, cullingOutput, callback, object);
}
inline void UnityEngine::Rendering::OnCullingCompleteCallback::EndInvoke(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cullingContext,
                                                                         ::ByRef<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnCullingCompleteCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingContext, cullingOutput, result);
}
inline ::UnityEngine::Rendering::OnCullingCompleteCallback* UnityEngine::Rendering::OnCullingCompleteCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::OnCullingCompleteCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OnCullingCompleteCallback::OnCullingCompleteCallback() {}
