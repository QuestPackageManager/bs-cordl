#pragma once
// IWYU pragma private; include "Mono\Security\Interface\MonoTlsConnectionInfo.hpp"
#include "Mono/Security/Interface/zzzz__CipherSuiteCode_impl.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsConnectionInfo_def.hpp"
#include "Mono/Security/Interface/zzzz__CipherSuiteCode_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsConnectionInfo.get_CipherSuiteCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::CipherSuiteCode (::Mono::Security::Interface::MonoTlsConnectionInfo::*)()>(
    &::Mono::Security::Interface::MonoTlsConnectionInfo::get_CipherSuiteCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9df38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { "get_CipherSuiteCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsConnectionInfo.set_CipherSuiteCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsConnectionInfo::*)(::Mono::Security::Interface::CipherSuiteCode)>(
    &::Mono::Security::Interface::MonoTlsConnectionInfo::set_CipherSuiteCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9df40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(),
                                                                                           { "set_CipherSuiteCode", {}, { ::i2c::type_of<::Mono::Security::Interface::CipherSuiteCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsConnectionInfo.get_ProtocolVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::TlsProtocols (::Mono::Security::Interface::MonoTlsConnectionInfo::*)()>(
    &::Mono::Security::Interface::MonoTlsConnectionInfo::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9df48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { "get_ProtocolVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsConnectionInfo.set_ProtocolVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsConnectionInfo::*)(::Mono::Security::Interface::TlsProtocols)>(
    &::Mono::Security::Interface::MonoTlsConnectionInfo::set_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9df50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(),
                                                                                           { "set_ProtocolVersion", {}, { ::i2c::type_of<::Mono::Security::Interface::TlsProtocols>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsConnectionInfo.set_PeerDomainName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsConnectionInfo::*)(::StringW)>(
    &::Mono::Security::Interface::MonoTlsConnectionInfo::set_PeerDomainName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9df58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { "set_PeerDomainName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsConnectionInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Interface::MonoTlsConnectionInfo::*)()>(&::Mono::Security::Interface::MonoTlsConnectionInfo::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a9df60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsConnectionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsConnectionInfo::*)()>(&::Mono::Security::Interface::MonoTlsConnectionInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a9e040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::CipherSuiteCode& Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_get__CipherSuiteCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CipherSuiteCode_k__BackingField;
}
constexpr ::Mono::Security::Interface::CipherSuiteCode const& Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_get__CipherSuiteCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CipherSuiteCode_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_set__CipherSuiteCode_k__BackingField(::Mono::Security::Interface::CipherSuiteCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CipherSuiteCode_k__BackingField = value;
}
constexpr ::Mono::Security::Interface::TlsProtocols& Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_get__ProtocolVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProtocolVersion_k__BackingField;
}
constexpr ::Mono::Security::Interface::TlsProtocols const& Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_get__ProtocolVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProtocolVersion_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_set__ProtocolVersion_k__BackingField(::Mono::Security::Interface::TlsProtocols value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProtocolVersion_k__BackingField = value;
}
constexpr ::StringW& Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_get__PeerDomainName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PeerDomainName_k__BackingField;
}
constexpr ::StringW const& Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_get__PeerDomainName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PeerDomainName_k__BackingField;
}
constexpr void Mono::Security::Interface::MonoTlsConnectionInfo::__cordl_internal_set__PeerDomainName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PeerDomainName_k__BackingField = value;
}
inline ::Mono::Security::Interface::CipherSuiteCode Mono::Security::Interface::MonoTlsConnectionInfo::get_CipherSuiteCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { "get_CipherSuiteCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::CipherSuiteCode>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsConnectionInfo::set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(),
                                                                                         { "set_CipherSuiteCode", {}, { ::i2c::type_of<::Mono::Security::Interface::CipherSuiteCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Security::Interface::TlsProtocols Mono::Security::Interface::MonoTlsConnectionInfo::get_ProtocolVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { "get_ProtocolVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::TlsProtocols>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsConnectionInfo::set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(),
                                                                                         { "set_ProtocolVersion", {}, { ::i2c::type_of<::Mono::Security::Interface::TlsProtocols>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Interface::MonoTlsConnectionInfo::set_PeerDomainName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { "set_PeerDomainName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Mono::Security::Interface::MonoTlsConnectionInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::Interface::MonoTlsConnectionInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsConnectionInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsConnectionInfo* Mono::Security::Interface::MonoTlsConnectionInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::MonoTlsConnectionInfo*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo::MonoTlsConnectionInfo() {}
