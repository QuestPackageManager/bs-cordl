#pragma once
// IWYU pragma private; include "System\Net\Dns.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Dns_GetHostAddressesCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Net::Dns_GetHostAddressesCallback::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x642c15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (::System::Net::Dns_GetHostAddressesCallback::*)(::StringW)>(
    &::System::Net::Dns_GetHostAddressesCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x642cdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), { ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Dns_GetHostAddressesCallback::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Dns_GetHostAddressesCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x642c1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), { ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (::System::Net::Dns_GetHostAddressesCallback::*)(::System::IAsyncResult*)>(
    &::System::Net::Dns_GetHostAddressesCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x642c308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), { ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void System::Net::Dns_GetHostAddressesCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns_GetHostAddressesCallback::Invoke(::StringW hostName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(this, ___internal_method, hostName);
}
inline ::System::IAsyncResult* System::Net::Dns_GetHostAddressesCallback::BeginInvoke(::StringW hostName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hostName, callback, object);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns_GetHostAddressesCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(this, ___internal_method, result);
}
inline ::System::Net::Dns_GetHostAddressesCallback* System::Net::Dns_GetHostAddressesCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Dns_GetHostAddressesCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Dns_GetHostAddressesCallback::Dns_GetHostAddressesCallback() {}
//  Writing Method size for method: ::System::Net::Dns.BeginGetHostAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns::BeginGetHostAddresses)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x642bfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(),
                                                { "BeginGetHostAddresses", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.EndGetHostAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::System::IAsyncResult*)>(&::System::Net::Dns::EndGetHostAddresses)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x642c1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "EndGetHostAddresses", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByName_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<::StringW>>, int32_t)>(
    &::System::Net::Dns::GetHostByName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x642c314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByName_icall",
                                                                      {},
                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(),
                                                                        ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddr_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<::StringW>>, int32_t)>(
    &::System::Net::Dns::GetHostByAddr_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x642c318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByAddr_icall",
                                                                      {},
                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(),
                                                                        ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostName_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::System::Net::Dns::GetHostName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x642c31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostName_icall", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.Error_11001
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::Dns::Error_11001)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x642c320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "Error_11001", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.hostent_to_IPHostEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW, ::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::System::Net::Dns::hostent_to_IPHostEntry)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x642c384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Dns*>(),
            { "hostent_to_IPHostEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddressFromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW, bool)>(&::System::Net::Dns::GetHostByAddressFromString)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x642c694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByAddressFromString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::GetHostEntry)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x642c7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostEntry", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::System::Net::IPAddress*)>(&::System::Net::Dns::GetHostEntry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x642c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostEntry", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::StringW)>(&::System::Net::Dns::GetHostAddresses)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x642caa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostAddresses", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::GetHostByName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x642c9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Net::Dns::GetHostName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x642cc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostAddressesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* (*)(::StringW)>(&::System::Net::Dns::GetHostAddressesAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x642cca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostAddressesAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::IAsyncResult* System::Net::Dns::BeginGetHostAddresses(::StringW hostNameOrAddress, ::System::AsyncCallback* requestCallback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(),
                                              { "BeginGetHostAddresses", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(nullptr, ___internal_method, hostNameOrAddress, requestCallback, state);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns::EndGetHostAddresses(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "EndGetHostAddresses", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(nullptr, ___internal_method, asyncResult);
}
inline bool System::Net::Dns::GetHostByName_icall(::StringW host, ::by_ref<::StringW> h_name, ::by_ref<::ArrayW<::StringW>> h_aliases, ::by_ref<::ArrayW<::StringW>> h_addr_list, int32_t hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByName_icall",
                                                                                 {},
                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(),
                                                                                   ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, host, h_name, h_aliases, h_addr_list, hint);
}
inline bool System::Net::Dns::GetHostByAddr_icall(::StringW addr, ::by_ref<::StringW> h_name, ::by_ref<::ArrayW<::StringW>> h_aliases, ::by_ref<::ArrayW<::StringW>> h_addr_list, int32_t hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByAddr_icall",
                                                                                 {},
                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(),
                                                                                   ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, addr, h_name, h_aliases, h_addr_list, hint);
}
inline bool System::Net::Dns::GetHostName_icall(::by_ref<::StringW> h_name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostName_icall", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, h_name);
}
inline void System::Net::Dns::Error_11001(::StringW hostName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "Error_11001", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hostName);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::hostent_to_IPHostEntry(::StringW originalHostName, ::StringW h_name, ::ArrayW<::StringW> h_aliases, ::ArrayW<::StringW> h_addrlist) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Net::Dns*>(),
                       { "hostent_to_IPHostEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, originalHostName, h_name, h_aliases, h_addrlist);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByAddressFromString(::StringW address, bool parse) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByAddressFromString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, address, parse);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostEntry(::StringW hostNameOrAddress) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostEntry", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, hostNameOrAddress);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostEntry(::System::Net::IPAddress* address) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostEntry", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, address);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns::GetHostAddresses(::StringW hostNameOrAddress) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostAddresses", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(nullptr, ___internal_method, hostNameOrAddress);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByName(::StringW hostName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, hostName);
}
inline ::StringW System::Net::Dns::GetHostName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* System::Net::Dns::GetHostAddressesAsync(::StringW hostNameOrAddress) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Dns*>(), { "GetHostAddressesAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>*>(nullptr, ___internal_method, hostNameOrAddress);
}
// Ctor Parameters []
constexpr ::System::Net::Dns::Dns() {}
