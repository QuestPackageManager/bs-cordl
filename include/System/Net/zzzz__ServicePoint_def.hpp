#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePoint)
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class BindIPEndPoint;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Net {
class ServicePointScheduler;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class __ServicePointManager__SPKey;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class ServicePoint;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServicePoint);
// Type: System.Net::ServicePoint
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7210))
// CS Name: ::System.Net::ServicePoint*
class CORDL_TYPE ServicePoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field uri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri))::System::Uri* uri;

  /// @brief Field lastDnsResolve, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lastDnsResolve, put = __cordl_internal_set_lastDnsResolve))::System::DateTime lastDnsResolve;

  /// @brief Field protocolVersion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_protocolVersion, put = __cordl_internal_set_protocolVersion))::System::Version* protocolVersion;

  /// @brief Field host, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_host, put = __cordl_internal_set_host))::System::Net::IPHostEntry* host;

  /// @brief Field usesProxy, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_usesProxy, put = __cordl_internal_set_usesProxy)) bool usesProxy;

  /// @brief Field sendContinue, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_sendContinue, put = __cordl_internal_set_sendContinue)) bool sendContinue;

  /// @brief Field useConnect, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_useConnect, put = __cordl_internal_set_useConnect)) bool useConnect;

  /// @brief Field hostE, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_hostE, put = __cordl_internal_set_hostE))::System::Object* hostE;

  /// @brief Field useNagle, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_useNagle, put = __cordl_internal_set_useNagle)) bool useNagle;

  /// @brief Field endPointCallback, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_endPointCallback, put = __cordl_internal_set_endPointCallback))::System::Net::BindIPEndPoint* endPointCallback;

  /// @brief Field tcp_keepalive, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_tcp_keepalive, put = __cordl_internal_set_tcp_keepalive)) bool tcp_keepalive;

  /// @brief Field tcp_keepalive_time, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_tcp_keepalive_time, put = __cordl_internal_set_tcp_keepalive_time)) int32_t tcp_keepalive_time;

  /// @brief Field tcp_keepalive_interval, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_tcp_keepalive_interval, put = __cordl_internal_set_tcp_keepalive_interval)) int32_t tcp_keepalive_interval;

  /// @brief Field disposed, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field connectionLeaseTimeout, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_connectionLeaseTimeout, put = __cordl_internal_set_connectionLeaseTimeout)) int32_t connectionLeaseTimeout;

  /// @brief Field receiveBufferSize, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_receiveBufferSize, put = __cordl_internal_set_receiveBufferSize)) int32_t receiveBufferSize;

  /// @brief Field <Key>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::System::Net::__ServicePointManager__SPKey* _Key_k__BackingField;

  /// @brief Field <Scheduler>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__Scheduler_k__BackingField, put = __cordl_internal_set__Scheduler_k__BackingField))::System::Net::ServicePointScheduler* _Scheduler_k__BackingField;

  /// @brief Field connectionLimit, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_connectionLimit, put = __cordl_internal_set_connectionLimit)) int32_t connectionLimit;

  /// @brief Field maxIdleTime, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxIdleTime, put = __cordl_internal_set_maxIdleTime)) int32_t maxIdleTime;

  /// @brief Field m_ServerCertificateOrBytes, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ServerCertificateOrBytes, put = __cordl_internal_set_m_ServerCertificateOrBytes))::System::Object* m_ServerCertificateOrBytes;

  /// @brief Field m_ClientCertificateOrBytes, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClientCertificateOrBytes, put = __cordl_internal_set_m_ClientCertificateOrBytes))::System::Object* m_ClientCertificateOrBytes;

  __declspec(property(get = get_Key))::System::Net::__ServicePointManager__SPKey* Key;

  __declspec(property(get = get_Scheduler, put = set_Scheduler))::System::Net::ServicePointScheduler* Scheduler;

  __declspec(property(get = get_Address))::System::Uri* Address;

  __declspec(property(get = get_ConnectionLimit)) int32_t ConnectionLimit;

  __declspec(property(get = get_ProtocolVersion))::System::Version* ProtocolVersion;

  __declspec(property(put = set_Expect100Continue)) bool Expect100Continue;

  __declspec(property(get = get_UseNagleAlgorithm, put = set_UseNagleAlgorithm)) bool UseNagleAlgorithm;

  __declspec(property(get = get_SendContinue, put = set_SendContinue)) bool SendContinue;

  __declspec(property(get = get_UsesProxy, put = set_UsesProxy)) bool UsesProxy;

  __declspec(property(get = get_UseConnect, put = set_UseConnect)) bool UseConnect;

  __declspec(property(get = get_HasTimedOut)) bool HasTimedOut;

  __declspec(property(get = get_HostEntry))::System::Net::IPHostEntry* HostEntry;

  constexpr ::System::Uri*& __cordl_internal_get_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_uri() const;

  constexpr void __cordl_internal_set_uri(::System::Uri* value);

  constexpr ::System::DateTime& __cordl_internal_get_lastDnsResolve();

  constexpr ::System::DateTime const& __cordl_internal_get_lastDnsResolve() const;

  constexpr void __cordl_internal_set_lastDnsResolve(::System::DateTime value);

  constexpr ::System::Version*& __cordl_internal_get_protocolVersion();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __cordl_internal_get_protocolVersion() const;

  constexpr void __cordl_internal_set_protocolVersion(::System::Version* value);

  constexpr ::System::Net::IPHostEntry*& __cordl_internal_get_host();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPHostEntry*> const& __cordl_internal_get_host() const;

  constexpr void __cordl_internal_set_host(::System::Net::IPHostEntry* value);

  constexpr bool& __cordl_internal_get_usesProxy();

  constexpr bool const& __cordl_internal_get_usesProxy() const;

  constexpr void __cordl_internal_set_usesProxy(bool value);

  constexpr bool& __cordl_internal_get_sendContinue();

  constexpr bool const& __cordl_internal_get_sendContinue() const;

  constexpr void __cordl_internal_set_sendContinue(bool value);

  constexpr bool& __cordl_internal_get_useConnect();

  constexpr bool const& __cordl_internal_get_useConnect() const;

  constexpr void __cordl_internal_set_useConnect(bool value);

  constexpr ::System::Object*& __cordl_internal_get_hostE();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_hostE() const;

  constexpr void __cordl_internal_set_hostE(::System::Object* value);

  constexpr bool& __cordl_internal_get_useNagle();

  constexpr bool const& __cordl_internal_get_useNagle() const;

  constexpr void __cordl_internal_set_useNagle(bool value);

  constexpr ::System::Net::BindIPEndPoint*& __cordl_internal_get_endPointCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::BindIPEndPoint*> const& __cordl_internal_get_endPointCallback() const;

  constexpr void __cordl_internal_set_endPointCallback(::System::Net::BindIPEndPoint* value);

  constexpr bool& __cordl_internal_get_tcp_keepalive();

  constexpr bool const& __cordl_internal_get_tcp_keepalive() const;

  constexpr void __cordl_internal_set_tcp_keepalive(bool value);

  constexpr int32_t& __cordl_internal_get_tcp_keepalive_time();

  constexpr int32_t const& __cordl_internal_get_tcp_keepalive_time() const;

  constexpr void __cordl_internal_set_tcp_keepalive_time(int32_t value);

  constexpr int32_t& __cordl_internal_get_tcp_keepalive_interval();

  constexpr int32_t const& __cordl_internal_get_tcp_keepalive_interval() const;

  constexpr void __cordl_internal_set_tcp_keepalive_interval(int32_t value);

  constexpr bool& __cordl_internal_get_disposed();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr int32_t& __cordl_internal_get_connectionLeaseTimeout();

  constexpr int32_t const& __cordl_internal_get_connectionLeaseTimeout() const;

  constexpr void __cordl_internal_set_connectionLeaseTimeout(int32_t value);

  constexpr int32_t& __cordl_internal_get_receiveBufferSize();

  constexpr int32_t const& __cordl_internal_get_receiveBufferSize() const;

  constexpr void __cordl_internal_set_receiveBufferSize(int32_t value);

  constexpr ::System::Net::__ServicePointManager__SPKey*& __cordl_internal_get__Key_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__ServicePointManager__SPKey*> const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr void __cordl_internal_set__Key_k__BackingField(::System::Net::__ServicePointManager__SPKey* value);

  constexpr ::System::Net::ServicePointScheduler*& __cordl_internal_get__Scheduler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePointScheduler*> const& __cordl_internal_get__Scheduler_k__BackingField() const;

  constexpr void __cordl_internal_set__Scheduler_k__BackingField(::System::Net::ServicePointScheduler* value);

  constexpr int32_t& __cordl_internal_get_connectionLimit();

  constexpr int32_t const& __cordl_internal_get_connectionLimit() const;

  constexpr void __cordl_internal_set_connectionLimit(int32_t value);

  constexpr int32_t& __cordl_internal_get_maxIdleTime();

  constexpr int32_t const& __cordl_internal_get_maxIdleTime() const;

  constexpr void __cordl_internal_set_maxIdleTime(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get_m_ServerCertificateOrBytes();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_ServerCertificateOrBytes() const;

  constexpr void __cordl_internal_set_m_ServerCertificateOrBytes(::System::Object* value);

  constexpr ::System::Object*& __cordl_internal_get_m_ClientCertificateOrBytes();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_ClientCertificateOrBytes() const;

  constexpr void __cordl_internal_set_m_ClientCertificateOrBytes(::System::Object* value);

  static inline ::System::Net::ServicePoint* New_ctor(::System::Net::__ServicePointManager__SPKey* key, ::System::Uri* uri, int32_t connectionLimit, int32_t maxIdleTime);

  /// @brief Method .ctor, addr 0x29dbcfc, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::__ServicePointManager__SPKey* key, ::System::Uri* uri, int32_t connectionLimit, int32_t maxIdleTime);

  /// @brief Method get_Key, addr 0x29dbfb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::__ServicePointManager__SPKey* get_Key();

  /// @brief Method get_Scheduler, addr 0x29dbfbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePointScheduler* get_Scheduler();

  /// @brief Method set_Scheduler, addr 0x29dbfc4, size 0x8, virtual false, abstract: false, final false
  inline void set_Scheduler(::System::Net::ServicePointScheduler* value);

  /// @brief Method get_Address, addr 0x29dbfcc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_Address();

  /// @brief Method get_ConnectionLimit, addr 0x29dbfd4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ConnectionLimit();

  /// @brief Method get_ProtocolVersion, addr 0x29dbfdc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Version* get_ProtocolVersion();

  /// @brief Method set_Expect100Continue, addr 0x29dbfe4, size 0xc, virtual false, abstract: false, final false
  inline void set_Expect100Continue(bool value);

  /// @brief Method get_UseNagleAlgorithm, addr 0x29dbff0, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseNagleAlgorithm();

  /// @brief Method set_UseNagleAlgorithm, addr 0x29dbff8, size 0xc, virtual false, abstract: false, final false
  inline void set_UseNagleAlgorithm(bool value);

  /// @brief Method get_SendContinue, addr 0x29dc004, size 0x9c, virtual false, abstract: false, final false
  inline bool get_SendContinue();

  /// @brief Method set_SendContinue, addr 0x29dc0a0, size 0xc, virtual false, abstract: false, final false
  inline void set_SendContinue(bool value);

  /// @brief Method SetTcpKeepAlive, addr 0x29dc0ac, size 0xb8, virtual false, abstract: false, final false
  inline void SetTcpKeepAlive(bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval);

  /// @brief Method KeepAliveSetup, addr 0x29dc164, size 0xb4, virtual false, abstract: false, final false
  inline void KeepAliveSetup(::System::Net::Sockets::Socket* socket);

  /// @brief Method PutBytes, addr 0x29dc218, size 0x144, virtual false, abstract: false, final false
  static inline void PutBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, uint32_t v, int32_t offset);

  /// @brief Method get_UsesProxy, addr 0x29dc35c, size 0x8, virtual false, abstract: false, final false
  inline bool get_UsesProxy();

  /// @brief Method set_UsesProxy, addr 0x29dc364, size 0xc, virtual false, abstract: false, final false
  inline void set_UsesProxy(bool value);

  /// @brief Method get_UseConnect, addr 0x29dc370, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseConnect();

  /// @brief Method set_UseConnect, addr 0x29dc378, size 0xc, virtual false, abstract: false, final false
  inline void set_UseConnect(bool value);

  /// @brief Method get_HasTimedOut, addr 0x29dc384, size 0x12c, virtual false, abstract: false, final false
  inline bool get_HasTimedOut();

  /// @brief Method get_HostEntry, addr 0x29dc4b0, size 0x388, virtual false, abstract: false, final false
  inline ::System::Net::IPHostEntry* get_HostEntry();

  /// @brief Method SetVersion, addr 0x29dc838, size 0x8, virtual false, abstract: false, final false
  inline void SetVersion(::System::Version* version);

  /// @brief Method SendRequest, addr 0x29dc840, size 0x17c, virtual false, abstract: false, final false
  inline void SendRequest(::System::Net::WebOperation* operation, ::StringW groupName);

  /// @brief Method CloseConnectionGroup, addr 0x29dcaa4, size 0xec, virtual false, abstract: false, final false
  inline bool CloseConnectionGroup(::StringW connectionGroupName);

  /// @brief Method FreeServicePoint, addr 0x29dcca0, size 0x10, virtual false, abstract: false, final false
  inline void FreeServicePoint();

  /// @brief Method UpdateServerCertificate, addr 0x29dccb0, size 0x34, virtual false, abstract: false, final false
  inline void UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);

  /// @brief Method UpdateClientCertificate, addr 0x29dcce4, size 0x34, virtual false, abstract: false, final false
  inline void UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);

  /// @brief Method CallEndPointDelegate, addr 0x29dcd18, size 0x1a4, virtual false, abstract: false, final false
  inline bool CallEndPointDelegate(::System::Net::Sockets::Socket* sock, ::System::Net::IPEndPoint* remote);

  // Ctor Parameters [CppParam { name: "", ty: "ServicePoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServicePoint(ServicePoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServicePoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServicePoint(ServicePoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServicePoint();

public:
  /// @brief Field uri, offset: 0x10, size: 0x8, def value: None
  ::System::Uri* ___uri;

  /// @brief Field lastDnsResolve, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___lastDnsResolve;

  /// @brief Field protocolVersion, offset: 0x20, size: 0x8, def value: None
  ::System::Version* ___protocolVersion;

  /// @brief Field host, offset: 0x28, size: 0x8, def value: None
  ::System::Net::IPHostEntry* ___host;

  /// @brief Field usesProxy, offset: 0x30, size: 0x1, def value: None
  bool ___usesProxy;

  /// @brief Field sendContinue, offset: 0x31, size: 0x1, def value: None
  bool ___sendContinue;

  /// @brief Field useConnect, offset: 0x32, size: 0x1, def value: None
  bool ___useConnect;

  /// @brief Field hostE, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___hostE;

  /// @brief Field useNagle, offset: 0x40, size: 0x1, def value: None
  bool ___useNagle;

  /// @brief Field endPointCallback, offset: 0x48, size: 0x8, def value: None
  ::System::Net::BindIPEndPoint* ___endPointCallback;

  /// @brief Field tcp_keepalive, offset: 0x50, size: 0x1, def value: None
  bool ___tcp_keepalive;

  /// @brief Field tcp_keepalive_time, offset: 0x54, size: 0x4, def value: None
  int32_t ___tcp_keepalive_time;

  /// @brief Field tcp_keepalive_interval, offset: 0x58, size: 0x4, def value: None
  int32_t ___tcp_keepalive_interval;

  /// @brief Field disposed, offset: 0x5c, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field connectionLeaseTimeout, offset: 0x60, size: 0x4, def value: None
  int32_t ___connectionLeaseTimeout;

  /// @brief Field receiveBufferSize, offset: 0x64, size: 0x4, def value: None
  int32_t ___receiveBufferSize;

  /// @brief Field <Key>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::System::Net::__ServicePointManager__SPKey* ____Key_k__BackingField;

  /// @brief Field <Scheduler>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Net::ServicePointScheduler* ____Scheduler_k__BackingField;

  /// @brief Field connectionLimit, offset: 0x78, size: 0x4, def value: None
  int32_t ___connectionLimit;

  /// @brief Field maxIdleTime, offset: 0x7c, size: 0x4, def value: None
  int32_t ___maxIdleTime;

  /// @brief Field m_ServerCertificateOrBytes, offset: 0x80, size: 0x8, def value: None
  ::System::Object* ___m_ServerCertificateOrBytes;

  /// @brief Field m_ClientCertificateOrBytes, offset: 0x88, size: 0x8, def value: None
  ::System::Object* ___m_ClientCertificateOrBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServicePoint, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___uri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___lastDnsResolve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___protocolVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___host) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___usesProxy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___sendContinue) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___useConnect) == 0x32, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___hostE) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___useNagle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___endPointCallback) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___tcp_keepalive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___tcp_keepalive_time) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___tcp_keepalive_interval) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___disposed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___connectionLeaseTimeout) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___receiveBufferSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ____Key_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ____Scheduler_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___connectionLimit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___maxIdleTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___m_ServerCertificateOrBytes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePoint, ___m_ClientCertificateOrBytes) == 0x88, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ServicePoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePoint*, "System.Net", "ServicePoint");
