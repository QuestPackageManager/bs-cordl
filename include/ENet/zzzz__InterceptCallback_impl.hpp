#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ENet/zzzz__InterceptCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "ENet/zzzz__Address_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "ENet/zzzz__Event_def.hpp"
//  Writing Method size for method: ::ENet::InterceptCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::InterceptCallback::*)(::System::Object*, void*)>(&::ENet::InterceptCallback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21ef208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::InterceptCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ENet::InterceptCallback::*)(ByRef<::ENet::Event>, ByRef<::ENet::Address>, void*, int32_t)>(
    &::ENet::InterceptCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21ef2e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::InterceptCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::ENet::InterceptCallback::*)(ByRef<::ENet::Event>, ByRef<::ENet::Address>, void*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::ENet::InterceptCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x21ef2f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::InterceptCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ENet::InterceptCallback::*)(ByRef<::ENet::Event>, ByRef<::ENet::Address>, ::System::IAsyncResult*)>(
    &::ENet::InterceptCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21ef410;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::ENet::InterceptCallback* ENet::InterceptCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::ENet::InterceptCallback*>(object, method));
}
inline void ENet::InterceptCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t ENet::InterceptCallback::Invoke(ByRef<::ENet::Event> event, ByRef<::ENet::Address> address, void* receivedData, int32_t receivedDataLength) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, event, address, receivedData, receivedDataLength);
}
inline ::System::IAsyncResult* ENet::InterceptCallback::BeginInvoke(ByRef<::ENet::Event> event, ByRef<::ENet::Address> address, void* receivedData, int32_t receivedDataLength,
                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, event, address, receivedData, receivedDataLength, callback, object);
}
inline int32_t ENet::InterceptCallback::EndInvoke(ByRef<::ENet::Event> event, ByRef<::ENet::Address> address, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::InterceptCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, event, address, result);
}
// Ctor Parameters []
constexpr ::ENet::InterceptCallback::InterceptCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
