#pragma once
// IWYU pragma private; include "System/Net/Dns.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Dns_def.hpp"
#include "System/Net/zzzz__Dns_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Dns_GetHostAddressesCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Net::Dns_GetHostAddressesCallback::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6276664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> (
    ::System::Net::Dns_GetHostAddressesCallback::*)(::StringW)>(&::System::Net::Dns_GetHostAddressesCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62772d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::Dns_GetHostAddressesCallback::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns_GetHostAddressesCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62766e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> (
    ::System::Net::Dns_GetHostAddressesCallback::*)(::System::IAsyncResult*)>(&::System::Net::Dns_GetHostAddressesCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6276810;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void System::Net::Dns_GetHostAddressesCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> System::Net::Dns_GetHostAddressesCallback::Invoke(::StringW hostName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, false>(this, ___internal_method, hostName);
}
inline ::System::IAsyncResult* System::Net::Dns_GetHostAddressesCallback::BeginInvoke(::StringW hostName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, hostName, callback, object);
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> System::Net::Dns_GetHostAddressesCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns_GetHostAddressesCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, false>(this, ___internal_method, result);
}
inline ::System::Net::Dns_GetHostAddressesCallback* System::Net::Dns_GetHostAddressesCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Dns_GetHostAddressesCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Dns_GetHostAddressesCallback::Dns_GetHostAddressesCallback() {}
//  Writing Method size for method: ::System::Net::Dns.BeginGetHostAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Dns::BeginGetHostAddresses)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x62764d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "BeginGetHostAddresses", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.EndGetHostAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> (*)(::System::IAsyncResult*)>(
    &::System::Net::Dns::EndGetHostAddresses)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6276700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "EndGetHostAddresses", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByName_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::StringW>, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>,
                                                                                           ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>, int32_t)>(&::System::Net::Dns::GetHostByName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x627681c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByName_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddr_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::StringW>, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>,
                                                                                           ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>, int32_t)>(&::System::Net::Dns::GetHostByAddr_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6276820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByAddr_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostName_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::StringW>)>(&::System::Net::Dns::GetHostName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6276824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostName_icall", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.Error_11001
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Net::Dns::Error_11001)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6276828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "Error_11001", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.hostent_to_IPHostEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Net::IPHostEntry* (*)(::StringW, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Net::Dns::hostent_to_IPHostEntry)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x627688c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "hostent_to_IPHostEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddressFromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::StringW, bool)>(&::System::Net::Dns::GetHostByAddressFromString)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6276b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByAddressFromString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::GetHostEntry)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6276cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostEntry", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::System::Net::IPAddress*)>(&::System::Net::Dns::GetHostEntry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6276e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostEntry", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> (*)(::StringW)>(
    &::System::Net::Dns::GetHostAddresses)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6276fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostAddresses", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::GetHostByName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6276ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Net::Dns::GetHostName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6277188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostAddressesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>* (*)(::StringW)>(&::System::Net::Dns::GetHostAddressesAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x62771ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostAddressesAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::IAsyncResult* System::Net::Dns::BeginGetHostAddresses(::StringW hostNameOrAddress, ::System::AsyncCallback* requestCallback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "BeginGetHostAddresses", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(nullptr, ___internal_method, hostNameOrAddress, requestCallback, state);
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> System::Net::Dns::EndGetHostAddresses(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "EndGetHostAddresses", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, false>(nullptr, ___internal_method, asyncResult);
}
inline bool System::Net::Dns::GetHostByName_icall(::StringW host, ::ByRef<::StringW> h_name, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                                  ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByName_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, host, h_name, h_aliases, h_addr_list, hint);
}
inline bool System::Net::Dns::GetHostByAddr_icall(::StringW addr, ::ByRef<::StringW> h_name, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                                  ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByAddr_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, addr, h_name, h_aliases, h_addr_list, hint);
}
inline bool System::Net::Dns::GetHostName_icall(::ByRef<::StringW> h_name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostName_icall", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, h_name);
}
inline void System::Net::Dns::Error_11001(::StringW hostName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "Error_11001", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hostName);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::hostent_to_IPHostEntry(::StringW originalHostName, ::StringW h_name, ::ArrayW<::StringW, ::Array<::StringW>*> h_aliases,
                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> h_addrlist) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "hostent_to_IPHostEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*, false>(nullptr, ___internal_method, originalHostName, h_name, h_aliases, h_addrlist);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByAddressFromString(::StringW address, bool parse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByAddressFromString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*, false>(nullptr, ___internal_method, address, parse);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostEntry(::StringW hostNameOrAddress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostEntry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*, false>(nullptr, ___internal_method, hostNameOrAddress);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostEntry(::System::Net::IPAddress* address) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostEntry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*, false>(nullptr, ___internal_method, address);
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> System::Net::Dns::GetHostAddresses(::StringW hostNameOrAddress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostAddresses", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, false>(nullptr, ___internal_method, hostNameOrAddress);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByName(::StringW hostName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostByName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*, false>(nullptr, ___internal_method, hostName);
}
inline ::StringW System::Net::Dns::GetHostName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>* System::Net::Dns::GetHostAddressesAsync(::StringW hostNameOrAddress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Dns*>::get(), "GetHostAddressesAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>*, false>(nullptr, ___internal_method,
                                                                                                                                                                   hostNameOrAddress);
}
// Ctor Parameters []
constexpr ::System::Net::Dns::Dns() {}
