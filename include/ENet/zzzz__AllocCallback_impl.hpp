#pragma once
// IWYU pragma private; include "ENet/AllocCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ENet/zzzz__AllocCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ENet::AllocCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::AllocCallback::*)(::System::Object*, ::System::IntPtr)>(&::ENet::AllocCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a9d798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::AllocCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::ENet::AllocCallback::*)(::System::IntPtr)>(&::ENet::AllocCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a9d824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::AllocCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::ENet::AllocCallback::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
    &::ENet::AllocCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a9d838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::AllocCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::ENet::AllocCallback::*)(::System::IAsyncResult*)>(&::ENet::AllocCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a9d8bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void ENet::AllocCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr ENet::AllocCallback::Invoke(::System::IntPtr size) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, size);
}
inline ::System::IAsyncResult* ENet::AllocCallback::BeginInvoke(::System::IntPtr size, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, size, callback, object);
}
inline ::System::IntPtr ENet::AllocCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::AllocCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::ENet::AllocCallback* ENet::AllocCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ENet::AllocCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::ENet::AllocCallback::AllocCallback() {}
