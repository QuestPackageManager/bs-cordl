#pragma once
// IWYU pragma private; include "System/Net/ServicePointManager.hpp"
#include "System/Net/zzzz__SecurityProtocolType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/zzzz__ICertificatePolicy_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::__ServicePointManager__SPKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointManager__SPKey::*)(::System::Uri*, ::System::Uri*, bool)>(
    &::System::Net::__ServicePointManager__SPKey::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x435f154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointManager__SPKey.get_UsesProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__ServicePointManager__SPKey::*)()>(
    &::System::Net::__ServicePointManager__SPKey::get_UsesProxy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x435f62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(),
                                                                               "get_UsesProxy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointManager__SPKey.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__ServicePointManager__SPKey::*)()>(
    &::System::Net::__ServicePointManager__SPKey::GetHashCode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x435f68c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointManager__SPKey.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__ServicePointManager__SPKey::*)(::System::Object*)>(
    &::System::Net::__ServicePointManager__SPKey::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x435f760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(), 0));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::__ServicePointManager__SPKey::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::__ServicePointManager__SPKey::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Net::__ServicePointManager__SPKey::__cordl_internal_set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::__ServicePointManager__SPKey::__cordl_internal_get_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::__ServicePointManager__SPKey::__cordl_internal_get_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr void System::Net::__ServicePointManager__SPKey::__cordl_internal_set_proxy(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::__ServicePointManager__SPKey::__cordl_internal_get_use_connect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_connect;
}
constexpr bool const& System::Net::__ServicePointManager__SPKey::__cordl_internal_get_use_connect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_connect;
}
constexpr void System::Net::__ServicePointManager__SPKey::__cordl_internal_set_use_connect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use_connect = value;
}
inline ::System::Net::__ServicePointManager__SPKey* System::Net::__ServicePointManager__SPKey::New_ctor(::System::Uri* uri, ::System::Uri* proxy, bool use_connect) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__ServicePointManager__SPKey*>(uri, proxy, use_connect));
}
inline void System::Net::__ServicePointManager__SPKey::_ctor(::System::Uri* uri, ::System::Uri* proxy, bool use_connect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, proxy, use_connect);
}
inline bool System::Net::__ServicePointManager__SPKey::get_UsesProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(),
                                                                             "get_UsesProxy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Net::__ServicePointManager__SPKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Net::__ServicePointManager__SPKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointManager__SPKey*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Net::__ServicePointManager__SPKey::__ServicePointManager__SPKey() {}
//  Writing Method size for method: ::System::Net::ServicePointManager.GetLegacyCertificatePolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICertificatePolicy* (*)()>(&::System::Net::ServicePointManager::GetLegacyCertificatePolicy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x435ef14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(),
                                                                               "GetLegacyCertificatePolicy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_CheckCertificateRevocationList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_CheckCertificateRevocationList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x435ef6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "get_CheckCertificateRevocationList",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_DnsRefreshTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Net::ServicePointManager::get_DnsRefreshTimeout)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x435efc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(),
                                                                               "get_DnsRefreshTimeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_SecurityProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SecurityProtocolType (*)()>(&::System::Net::ServicePointManager::get_SecurityProtocol)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x435f01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(),
                                                                               "get_SecurityProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ServerCertValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServerCertValidationCallback* (*)()>(
    &::System::Net::ServicePointManager::get_ServerCertValidationCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x435f074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "get_ServerCertValidationCallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ServerCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (*)()>(
    &::System::Net::ServicePointManager::get_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x435f0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "get_ServerCertificateValidationCallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.FindServicePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint* (*)(::System::Uri*, ::System::Net::IWebProxy*)>(
    &::System::Net::ServicePointManager::FindServicePoint)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x43530a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "FindServicePoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.CloseConnectionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Net::ServicePointManager::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x435f190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "CloseConnectionGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.RemoveServicePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::ServicePoint*)>(&::System::Net::ServicePointManager::RemoveServicePoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x435f594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "RemoveServicePoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::ServicePointManager::setStaticF_servicePoints(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*, ::System::Net::ServicePoint*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*, ::System::Net::ServicePoint*>*, "servicePoints",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*, ::System::Net::ServicePoint*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*, ::System::Net::ServicePoint*>*
System::Net::ServicePointManager::getStaticF_servicePoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*, ::System::Net::ServicePoint*>*, "servicePoints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_policy(::System::Net::ICertificatePolicy* value) {
  ::cordl_internals::setStaticField<::System::Net::ICertificatePolicy*, "policy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(
      std::forward<::System::Net::ICertificatePolicy*>(value));
}
inline ::System::Net::ICertificatePolicy* System::Net::ServicePointManager::getStaticF_policy() {
  return ::cordl_internals::getStaticField<::System::Net::ICertificatePolicy*, "policy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_defaultConnectionLimit(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "defaultConnectionLimit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_defaultConnectionLimit() {
  return ::cordl_internals::getStaticField<int32_t, "defaultConnectionLimit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_maxServicePointIdleTime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxServicePointIdleTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_maxServicePointIdleTime() {
  return ::cordl_internals::getStaticField<int32_t, "maxServicePointIdleTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_maxServicePoints(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxServicePoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_maxServicePoints() {
  return ::cordl_internals::getStaticField<int32_t, "maxServicePoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_dnsRefreshTimeout(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dnsRefreshTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_dnsRefreshTimeout() {
  return ::cordl_internals::getStaticField<int32_t, "dnsRefreshTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF__checkCRL(bool value) {
  ::cordl_internals::setStaticField<bool, "_checkCRL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF__checkCRL() {
  return ::cordl_internals::getStaticField<bool, "_checkCRL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF__securityProtocol(::System::Net::SecurityProtocolType value) {
  ::cordl_internals::setStaticField<::System::Net::SecurityProtocolType, "_securityProtocol", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(
      std::forward<::System::Net::SecurityProtocolType>(value));
}
inline ::System::Net::SecurityProtocolType System::Net::ServicePointManager::getStaticF__securityProtocol() {
  return ::cordl_internals::getStaticField<::System::Net::SecurityProtocolType, "_securityProtocol",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_expectContinue(bool value) {
  ::cordl_internals::setStaticField<bool, "expectContinue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_expectContinue() {
  return ::cordl_internals::getStaticField<bool, "expectContinue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_useNagle(bool value) {
  ::cordl_internals::setStaticField<bool, "useNagle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_useNagle() {
  return ::cordl_internals::getStaticField<bool, "useNagle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_server_cert_cb(::System::Net::ServerCertValidationCallback* value) {
  ::cordl_internals::setStaticField<::System::Net::ServerCertValidationCallback*, "server_cert_cb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(
      std::forward<::System::Net::ServerCertValidationCallback*>(value));
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServicePointManager::getStaticF_server_cert_cb() {
  return ::cordl_internals::getStaticField<::System::Net::ServerCertValidationCallback*, "server_cert_cb",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive(bool value) {
  ::cordl_internals::setStaticField<bool, "tcp_keepalive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_tcp_keepalive() {
  return ::cordl_internals::getStaticField<bool, "tcp_keepalive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive_time(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "tcp_keepalive_time", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_tcp_keepalive_time() {
  return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_time", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive_interval(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "tcp_keepalive_interval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_tcp_keepalive_interval() {
  return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_interval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get>();
}
inline ::System::Net::ICertificatePolicy* System::Net::ServicePointManager::GetLegacyCertificatePolicy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(),
                                                                             "GetLegacyCertificatePolicy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICertificatePolicy*, false>(nullptr, ___internal_method);
}
inline bool System::Net::ServicePointManager::get_CheckCertificateRevocationList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "get_CheckCertificateRevocationList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t System::Net::ServicePointManager::get_DnsRefreshTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(),
                                                                             "get_DnsRefreshTimeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::Net::SecurityProtocolType System::Net::ServicePointManager::get_SecurityProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "get_SecurityProtocol",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SecurityProtocolType, false>(nullptr, ___internal_method);
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServicePointManager::get_ServerCertValidationCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(),
                                                                             "get_ServerCertValidationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback*, false>(nullptr, ___internal_method);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::ServicePointManager::get_ServerCertificateValidationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "get_ServerCertificateValidationCallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*, false>(nullptr, ___internal_method);
}
inline ::System::Net::ServicePoint* System::Net::ServicePointManager::FindServicePoint(::System::Uri* address, ::System::Net::IWebProxy* proxy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "FindServicePoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*, false>(nullptr, ___internal_method, address, proxy);
}
inline void System::Net::ServicePointManager::CloseConnectionGroup(::StringW connectionGroupName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "CloseConnectionGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, connectionGroupName);
}
inline void System::Net::ServicePointManager::RemoveServicePoint(::System::Net::ServicePoint* sp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointManager*>::get(), "RemoveServicePoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sp);
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointManager::ServicePointManager() {}
