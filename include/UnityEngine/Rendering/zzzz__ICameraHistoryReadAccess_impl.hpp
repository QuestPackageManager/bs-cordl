#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ICameraHistoryReadAccess.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryReadAccess_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryReadAccess_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPerFrameHistoryAccessTracker_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x652ddb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(
    ::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*)>(&::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x652def4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x652df08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x652df28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::Invoke(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* historyAccess) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, historyAccess);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::BeginInvoke(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* historyAccess,
                                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, historyAccess, callback, object);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::ICameraHistoryReadAccess_HistoryRequestDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess.add_OnGatherHistoryRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess::*)(
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(&::UnityEngine::Rendering::ICameraHistoryReadAccess::add_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess.remove_OnGatherHistoryRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess::*)(
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(&::UnityEngine::Rendering::ICameraHistoryReadAccess::remove_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess*>::get(), 2));
    return ___internal_method;
  }
};
template <typename Type> inline Type UnityEngine::Rendering::ICameraHistoryReadAccess::GetHistoryForRead() {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }));
  return ::cordl_internals::RunMethodRethrow<Type, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess::add_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess::remove_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ICameraHistoryReadAccess*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
