#pragma once
// IWYU pragma private; include "System\Net\ServicePointManager.hpp"
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
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePointManager_SPKey::*)(::System::Uri*, ::System::Uri*, bool)>(&::System::Net::ServicePointManager_SPKey::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x633e1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.get_UsesProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePointManager_SPKey::*)()>(&::System::Net::ServicePointManager_SPKey::get_UsesProxy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x633e654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), { "get_UsesProxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::ServicePointManager_SPKey::*)()>(&::System::Net::ServicePointManager_SPKey::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x633e6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), { ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePointManager_SPKey::*)(::System::Object*)>(&::System::Net::ServicePointManager_SPKey::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x633e774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), { ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 0 }));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::ServicePointManager_SPKey::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::System::Uri* const& System::Net::ServicePointManager_SPKey::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Net::ServicePointManager_SPKey::__cordl_internal_set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uri = value;
}
constexpr ::System::Uri*& System::Net::ServicePointManager_SPKey::__cordl_internal_get_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr ::System::Uri* const& System::Net::ServicePointManager_SPKey::__cordl_internal_get_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr void System::Net::ServicePointManager_SPKey::__cordl_internal_set_proxy(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___proxy = value;
}
constexpr bool& System::Net::ServicePointManager_SPKey::__cordl_internal_get_use_connect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_connect;
}
constexpr bool const& System::Net::ServicePointManager_SPKey::__cordl_internal_get_use_connect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_connect;
}
constexpr void System::Net::ServicePointManager_SPKey::__cordl_internal_set_use_connect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use_connect = value;
}
inline void System::Net::ServicePointManager_SPKey::_ctor(::System::Uri* uri, ::System::Uri* proxy, bool use_connect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, proxy, use_connect);
}
inline bool System::Net::ServicePointManager_SPKey::get_UsesProxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), { "get_UsesProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::ServicePointManager_SPKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::ServicePointManager_SPKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Net::ServicePointManager_SPKey* System::Net::ServicePointManager_SPKey::New_ctor(::System::Uri* uri, ::System::Uri* proxy, bool use_connect) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServicePointManager_SPKey*>(uri, proxy, use_connect));
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointManager_SPKey::ServicePointManager_SPKey() {}
//  Writing Method size for method: ::System::Net::ServicePointManager.GetLegacyCertificatePolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICertificatePolicy* (*)()>(&::System::Net::ServicePointManager::GetLegacyCertificatePolicy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x633dd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "GetLegacyCertificatePolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_CheckCertificateRevocationList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_CheckCertificateRevocationList)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x633ddbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_CheckCertificateRevocationList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_DefaultConnectionLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Net::ServicePointManager::set_DefaultConnectionLimit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x633de18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "set_DefaultConnectionLimit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_DnsRefreshTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::ServicePointManager::get_DnsRefreshTimeout)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x633dec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_DnsRefreshTimeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_SecurityProtocol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SecurityProtocolType (*)()>(&::System::Net::ServicePointManager::get_SecurityProtocol)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x633df24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_SecurityProtocol", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ServerCertValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServerCertValidationCallback* (*)()>(&::System::Net::ServicePointManager::get_ServerCertValidationCallback)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x633df80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_ServerCertValidationCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ServerCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (*)()>(
    &::System::Net::ServicePointManager::get_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x633dfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_ServerCertificateValidationCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_ServerCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(
    &::System::Net::ServicePointManager::set_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x633e068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(),
                                                             { "set_ServerCertificateValidationCallback", {}, { ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_Expect100Continue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Net::ServicePointManager::set_Expect100Continue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x633e114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "set_Expect100Continue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.FindServicePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (*)(::System::Uri*)>(&::System::Net::ServicePointManager::FindServicePoint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x633e178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "FindServicePoint", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.FindServicePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (*)(::System::Uri*, ::System::Net::IWebProxy*)>(&::System::Net::ServicePointManager::FindServicePoint)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x6331b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "FindServicePoint", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::IWebProxy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.CloseConnectionGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::ServicePointManager::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x633e1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "CloseConnectionGroup", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.RemoveServicePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::ServicePoint*)>(&::System::Net::ServicePointManager::RemoveServicePoint)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x633e5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "RemoveServicePoint", {}, { ::i2c::type_of<::System::Net::ServicePoint*>() } })));
    return ___internal_method;
  }
};
inline void
System::Net::ServicePointManager::setStaticF_servicePoints(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*, ::System::Net::ServicePoint*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*, ::System::Net::ServicePoint*>*, "servicePoints",
                                    ::System::Net::ServicePointManager*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*, ::System::Net::ServicePoint*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*, ::System::Net::ServicePoint*>*
System::Net::ServicePointManager::getStaticF_servicePoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*, ::System::Net::ServicePoint*>*, "servicePoints",
                                           ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_policy(::System::Net::ICertificatePolicy* value) {
  ::cordl_internals::setStaticField<::System::Net::ICertificatePolicy*, "policy", ::System::Net::ServicePointManager*>(std::forward<::System::Net::ICertificatePolicy*>(value));
}
inline ::System::Net::ICertificatePolicy* System::Net::ServicePointManager::getStaticF_policy() {
  return ::cordl_internals::getStaticField<::System::Net::ICertificatePolicy*, "policy", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_defaultConnectionLimit(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "defaultConnectionLimit", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_defaultConnectionLimit() {
  return ::cordl_internals::getStaticField<int32_t, "defaultConnectionLimit", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_maxServicePointIdleTime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxServicePointIdleTime", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_maxServicePointIdleTime() {
  return ::cordl_internals::getStaticField<int32_t, "maxServicePointIdleTime", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_maxServicePoints(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxServicePoints", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_maxServicePoints() {
  return ::cordl_internals::getStaticField<int32_t, "maxServicePoints", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_dnsRefreshTimeout(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dnsRefreshTimeout", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_dnsRefreshTimeout() {
  return ::cordl_internals::getStaticField<int32_t, "dnsRefreshTimeout", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF__checkCRL(bool value) {
  ::cordl_internals::setStaticField<bool, "_checkCRL", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF__checkCRL() {
  return ::cordl_internals::getStaticField<bool, "_checkCRL", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF__securityProtocol(::System::Net::SecurityProtocolType value) {
  ::cordl_internals::setStaticField<::System::Net::SecurityProtocolType, "_securityProtocol", ::System::Net::ServicePointManager*>(std::forward<::System::Net::SecurityProtocolType>(value));
}
inline ::System::Net::SecurityProtocolType System::Net::ServicePointManager::getStaticF__securityProtocol() {
  return ::cordl_internals::getStaticField<::System::Net::SecurityProtocolType, "_securityProtocol", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_expectContinue(bool value) {
  ::cordl_internals::setStaticField<bool, "expectContinue", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_expectContinue() {
  return ::cordl_internals::getStaticField<bool, "expectContinue", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_useNagle(bool value) {
  ::cordl_internals::setStaticField<bool, "useNagle", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_useNagle() {
  return ::cordl_internals::getStaticField<bool, "useNagle", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_server_cert_cb(::System::Net::ServerCertValidationCallback* value) {
  ::cordl_internals::setStaticField<::System::Net::ServerCertValidationCallback*, "server_cert_cb", ::System::Net::ServicePointManager*>(
      std::forward<::System::Net::ServerCertValidationCallback*>(value));
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServicePointManager::getStaticF_server_cert_cb() {
  return ::cordl_internals::getStaticField<::System::Net::ServerCertValidationCallback*, "server_cert_cb", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive(bool value) {
  ::cordl_internals::setStaticField<bool, "tcp_keepalive", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_tcp_keepalive() {
  return ::cordl_internals::getStaticField<bool, "tcp_keepalive", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive_time(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "tcp_keepalive_time", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_tcp_keepalive_time() {
  return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_time", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive_interval(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "tcp_keepalive_interval", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_tcp_keepalive_interval() {
  return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_interval", ::System::Net::ServicePointManager*>();
}
inline ::System::Net::ICertificatePolicy* System::Net::ServicePointManager::GetLegacyCertificatePolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "GetLegacyCertificatePolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICertificatePolicy*>(nullptr, ___internal_method);
}
inline bool System::Net::ServicePointManager::get_CheckCertificateRevocationList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_CheckCertificateRevocationList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_DefaultConnectionLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "set_DefaultConnectionLimit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t System::Net::ServicePointManager::get_DnsRefreshTimeout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_DnsRefreshTimeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::System::Net::SecurityProtocolType System::Net::ServicePointManager::get_SecurityProtocol() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_SecurityProtocol", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SecurityProtocolType>(nullptr, ___internal_method);
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServicePointManager::get_ServerCertValidationCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_ServerCertValidationCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback*>(nullptr, ___internal_method);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::ServicePointManager::get_ServerCertificateValidationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "get_ServerCertificateValidationCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(),
                                                           { "set_ServerCertificateValidationCallback", {}, { ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void System::Net::ServicePointManager::set_Expect100Continue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "set_Expect100Continue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::ServicePoint* System::Net::ServicePointManager::FindServicePoint(::System::Uri* address) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "FindServicePoint", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(nullptr, ___internal_method, address);
}
inline ::System::Net::ServicePoint* System::Net::ServicePointManager::FindServicePoint(::System::Uri* address, ::System::Net::IWebProxy* proxy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "FindServicePoint", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::IWebProxy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(nullptr, ___internal_method, address, proxy);
}
inline void System::Net::ServicePointManager::CloseConnectionGroup(::StringW connectionGroupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "CloseConnectionGroup", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionGroupName);
}
inline void System::Net::ServicePointManager::RemoveServicePoint(::System::Net::ServicePoint* sp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePointManager*>(), { "RemoveServicePoint", {}, { ::i2c::type_of<::System::Net::ServicePoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sp);
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointManager::ServicePointManager() {}
