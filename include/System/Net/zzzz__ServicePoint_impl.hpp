#pragma once
// IWYU pragma private; include "System/Net/ServicePoint.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__BindIPEndPoint_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Net/zzzz__ServicePointScheduler_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::ServicePoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::ServicePointManager_SPKey*, ::System::Uri*, int32_t, int32_t)>(
    &::System::Net::ServicePoint::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x63375c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Net::ServicePointManager_SPKey*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePointManager_SPKey* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_Scheduler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePointScheduler* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_Scheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_Scheduler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_Scheduler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::ServicePointScheduler*)>(&::System::Net::ServicePoint::set_Scheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_Scheduler", {}, { ::i2c::type_of<::System::Net::ServicePointScheduler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_Address
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_Address", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_BindIPEndPointDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::BindIPEndPoint*)>(&::System::Net::ServicePoint::set_BindIPEndPointDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_BindIPEndPointDelegate", {}, { ::i2c::type_of<::System::Net::BindIPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_ConnectionLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_ConnectionLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_ConnectionLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_ProtocolVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { ::i2c::class_of<::System::Net::ServicePoint*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_Expect100Continue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_Expect100Continue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_Expect100Continue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_UseNagleAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_UseNagleAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_UseNagleAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_UseNagleAlgorithm", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_SendContinue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_SendContinue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x632eb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_SendContinue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_SendContinue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_SendContinue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_SendContinue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.SetTcpKeepAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(bool, int32_t, int32_t)>(&::System::Net::ServicePoint::SetTcpKeepAlive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6337888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "SetTcpKeepAlive", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.KeepAliveSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*)>(&::System::Net::ServicePoint::KeepAliveSetup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6337938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "KeepAliveSetup", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.PutBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, uint32_t, int32_t)>(&::System::Net::ServicePoint::PutBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63379f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "PutBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_UsesProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_UsesProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_UsesProxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_UsesProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_UsesProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_UsesProxy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_UseConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_UseConnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_UseConnect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_UseConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_UseConnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_UseConnect", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_HasTimedOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_HasTimedOut)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6337a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_HasTimedOut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_HostEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_HostEntry)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x6337be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_HostEntry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.SetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Version*)>(&::System::Net::ServicePoint::SetVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6337f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "SetVersion", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.SendRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::WebOperation*, ::StringW)>(&::System::Net::ServicePoint::SendRequest)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x632cbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "SendRequest", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.CloseConnectionGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePoint::*)(::StringW)>(&::System::Net::ServicePoint::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x633807c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "CloseConnectionGroup", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.FreeServicePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::FreeServicePoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6338278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "FreeServicePoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.UpdateServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::System::Net::ServicePoint::UpdateServerCertificate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6338288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                                                             { "UpdateServerCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.UpdateClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::System::Net::ServicePoint::UpdateClientCertificate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63382bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                                                             { "UpdateClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.CallEndPointDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*)>(
    &::System::Net::ServicePoint::CallEndPointDelegate)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x63382f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                                                             { "CallEndPointDelegate", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::ServicePoint::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::System::Uri* const& System::Net::ServicePoint::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uri = value;
}
constexpr ::System::DateTime& System::Net::ServicePoint::__cordl_internal_get_lastDnsResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDnsResolve;
}
constexpr ::System::DateTime const& System::Net::ServicePoint::__cordl_internal_get_lastDnsResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDnsResolve;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_lastDnsResolve(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastDnsResolve = value;
}
constexpr ::System::Version*& System::Net::ServicePoint::__cordl_internal_get_protocolVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolVersion;
}
constexpr ::System::Version* const& System::Net::ServicePoint::__cordl_internal_get_protocolVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolVersion;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_protocolVersion(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___protocolVersion = value;
}
constexpr ::System::Net::IPHostEntry*& System::Net::ServicePoint::__cordl_internal_get_host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___host;
}
constexpr ::System::Net::IPHostEntry* const& System::Net::ServicePoint::__cordl_internal_get_host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___host;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_host(::System::Net::IPHostEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___host = value;
}
constexpr bool& System::Net::ServicePoint::__cordl_internal_get_usesProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usesProxy;
}
constexpr bool const& System::Net::ServicePoint::__cordl_internal_get_usesProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usesProxy;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_usesProxy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usesProxy = value;
}
constexpr bool& System::Net::ServicePoint::__cordl_internal_get_sendContinue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendContinue;
}
constexpr bool const& System::Net::ServicePoint::__cordl_internal_get_sendContinue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendContinue;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_sendContinue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendContinue = value;
}
constexpr bool& System::Net::ServicePoint::__cordl_internal_get_useConnect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useConnect;
}
constexpr bool const& System::Net::ServicePoint::__cordl_internal_get_useConnect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useConnect;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_useConnect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useConnect = value;
}
constexpr ::System::Object*& System::Net::ServicePoint::__cordl_internal_get_hostE() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostE;
}
constexpr ::System::Object* const& System::Net::ServicePoint::__cordl_internal_get_hostE() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostE;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_hostE(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hostE = value;
}
constexpr bool& System::Net::ServicePoint::__cordl_internal_get_useNagle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNagle;
}
constexpr bool const& System::Net::ServicePoint::__cordl_internal_get_useNagle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNagle;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_useNagle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useNagle = value;
}
constexpr ::System::Net::BindIPEndPoint*& System::Net::ServicePoint::__cordl_internal_get_endPointCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPointCallback;
}
constexpr ::System::Net::BindIPEndPoint* const& System::Net::ServicePoint::__cordl_internal_get_endPointCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPointCallback;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_endPointCallback(::System::Net::BindIPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endPointCallback = value;
}
constexpr bool& System::Net::ServicePoint::__cordl_internal_get_tcp_keepalive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive;
}
constexpr bool const& System::Net::ServicePoint::__cordl_internal_get_tcp_keepalive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_tcp_keepalive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcp_keepalive = value;
}
constexpr int32_t& System::Net::ServicePoint::__cordl_internal_get_tcp_keepalive_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_time;
}
constexpr int32_t const& System::Net::ServicePoint::__cordl_internal_get_tcp_keepalive_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_time;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_tcp_keepalive_time(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcp_keepalive_time = value;
}
constexpr int32_t& System::Net::ServicePoint::__cordl_internal_get_tcp_keepalive_interval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_interval;
}
constexpr int32_t const& System::Net::ServicePoint::__cordl_internal_get_tcp_keepalive_interval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_interval;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_tcp_keepalive_interval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcp_keepalive_interval = value;
}
constexpr bool& System::Net::ServicePoint::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::ServicePoint::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr int32_t& System::Net::ServicePoint::__cordl_internal_get_connectionLeaseTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLeaseTimeout;
}
constexpr int32_t const& System::Net::ServicePoint::__cordl_internal_get_connectionLeaseTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLeaseTimeout;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_connectionLeaseTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionLeaseTimeout = value;
}
constexpr int32_t& System::Net::ServicePoint::__cordl_internal_get_receiveBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveBufferSize;
}
constexpr int32_t const& System::Net::ServicePoint::__cordl_internal_get_receiveBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveBufferSize;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_receiveBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receiveBufferSize = value;
}
constexpr ::System::Net::ServicePointManager_SPKey*& System::Net::ServicePoint::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr ::System::Net::ServicePointManager_SPKey* const& System::Net::ServicePoint::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set__Key_k__BackingField(::System::Net::ServicePointManager_SPKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Key_k__BackingField = value;
}
constexpr ::System::Net::ServicePointScheduler*& System::Net::ServicePoint::__cordl_internal_get__Scheduler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Scheduler_k__BackingField;
}
constexpr ::System::Net::ServicePointScheduler* const& System::Net::ServicePoint::__cordl_internal_get__Scheduler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Scheduler_k__BackingField;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set__Scheduler_k__BackingField(::System::Net::ServicePointScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Scheduler_k__BackingField = value;
}
constexpr int32_t& System::Net::ServicePoint::__cordl_internal_get_connectionLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLimit;
}
constexpr int32_t const& System::Net::ServicePoint::__cordl_internal_get_connectionLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLimit;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_connectionLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionLimit = value;
}
constexpr int32_t& System::Net::ServicePoint::__cordl_internal_get_maxIdleTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIdleTime;
}
constexpr int32_t const& System::Net::ServicePoint::__cordl_internal_get_maxIdleTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIdleTime;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_maxIdleTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxIdleTime = value;
}
constexpr ::System::Object*& System::Net::ServicePoint::__cordl_internal_get_m_ServerCertificateOrBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerCertificateOrBytes;
}
constexpr ::System::Object* const& System::Net::ServicePoint::__cordl_internal_get_m_ServerCertificateOrBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerCertificateOrBytes;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_m_ServerCertificateOrBytes(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ServerCertificateOrBytes = value;
}
constexpr ::System::Object*& System::Net::ServicePoint::__cordl_internal_get_m_ClientCertificateOrBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientCertificateOrBytes;
}
constexpr ::System::Object* const& System::Net::ServicePoint::__cordl_internal_get_m_ClientCertificateOrBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientCertificateOrBytes;
}
constexpr void System::Net::ServicePoint::__cordl_internal_set_m_ClientCertificateOrBytes(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClientCertificateOrBytes = value;
}
inline void System::Net::ServicePoint::_ctor(::System::Net::ServicePointManager_SPKey* key, ::System::Uri* uri, int32_t connectionLimit, int32_t maxIdleTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Net::ServicePointManager_SPKey*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, uri, connectionLimit, maxIdleTime);
}
inline ::System::Net::ServicePointManager_SPKey* System::Net::ServicePoint::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePointManager_SPKey*>(this, ___internal_method);
}
inline ::System::Net::ServicePointScheduler* System::Net::ServicePoint::get_Scheduler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_Scheduler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePointScheduler*>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_Scheduler(::System::Net::ServicePointScheduler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_Scheduler", {}, { ::i2c::type_of<::System::Net::ServicePointScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::ServicePoint::get_Address() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_Address", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_BindIPEndPointDelegate(::System::Net::BindIPEndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_BindIPEndPointDelegate", {}, { ::i2c::type_of<::System::Net::BindIPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::ServicePoint::get_ConnectionLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_ConnectionLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Version* System::Net::ServicePoint::get_ProtocolVersion() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ServicePoint*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_Expect100Continue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_Expect100Continue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_UseNagleAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_UseNagleAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_UseNagleAlgorithm(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_UseNagleAlgorithm", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_SendContinue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_SendContinue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_SendContinue(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_SendContinue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::ServicePoint::SetTcpKeepAlive(bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "SetTcpKeepAlive", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled, keepAliveTime, keepAliveInterval);
}
inline void System::Net::ServicePoint::KeepAliveSetup(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "KeepAliveSetup", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void System::Net::ServicePoint::PutBytes(::ArrayW<uint8_t> bytes, uint32_t v, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "PutBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, v, offset);
}
inline bool System::Net::ServicePoint::get_UsesProxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_UsesProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_UsesProxy(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_UsesProxy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_UseConnect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_UseConnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_UseConnect(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "set_UseConnect", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_HasTimedOut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_HasTimedOut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::IPHostEntry* System::Net::ServicePoint::get_HostEntry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "get_HostEntry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method);
}
inline void System::Net::ServicePoint::SetVersion(::System::Version* version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "SetVersion", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void System::Net::ServicePoint::SendRequest(::System::Net::WebOperation* operation, ::StringW groupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "SendRequest", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, groupName);
}
inline bool System::Net::ServicePoint::CloseConnectionGroup(::StringW connectionGroupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "CloseConnectionGroup", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connectionGroupName);
}
inline void System::Net::ServicePoint::FreeServicePoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(), { "FreeServicePoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ServicePoint::UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                                                           { "UpdateServerCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void System::Net::ServicePoint::UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                                                           { "UpdateClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline bool System::Net::ServicePoint::CallEndPointDelegate(::System::Net::Sockets::Socket* sock, ::System::Net::IPEndPoint* remote) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServicePoint*>(),
                                                           { "CallEndPointDelegate", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sock, remote);
}
inline ::System::Net::ServicePoint* System::Net::ServicePoint::New_ctor(::System::Net::ServicePointManager_SPKey* key, ::System::Uri* uri, int32_t connectionLimit, int32_t maxIdleTime) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServicePoint*>(key, uri, connectionLimit, maxIdleTime));
}
// Ctor Parameters []
constexpr ::System::Net::ServicePoint::ServicePoint() {}
