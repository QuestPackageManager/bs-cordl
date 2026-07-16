#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Store.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Store._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::StringW, bool, bool)>(&::Mono::Security::X509::X509Store::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a968b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Certificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)()>(
    &::Mono::Security::X509::X509Store::get_Certificates)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a968c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "get_Certificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Crls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Crls)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a96ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "get_Crls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::Load)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5a96d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Store::*)(::StringW)>(
    &::Mono::Security::X509::X509Store::LoadCertificate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a96f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "LoadCertificate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::LoadCrl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a96f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "LoadCrl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.CheckStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Store::*)(::StringW, bool)>(&::Mono::Security::X509::X509Store::CheckStore)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a96fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "CheckStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCertificatesCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)(::StringW)>(
    &::Mono::Security::X509::X509Store::BuildCertificatesCollection)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5a968e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "BuildCertificatesCollection", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCrlsCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::BuildCrlsCollection)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5a96b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "BuildCrlsCollection", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Store::__cordl_internal_get__storePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr ::StringW const& Mono::Security::X509::X509Store::__cordl_internal_get__storePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__storePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____storePath = value;
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Store::__cordl_internal_get__certificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificates;
}
constexpr ::Mono::Security::X509::X509CertificateCollection* const& Mono::Security::X509::X509Store::__cordl_internal_get__certificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificates;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__certificates(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certificates = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::X509Store::__cordl_internal_get__crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::X509::X509Store::__cordl_internal_get__crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__crls(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crls = value;
}
constexpr bool& Mono::Security::X509::X509Store::__cordl_internal_get__crl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crl;
}
constexpr bool const& Mono::Security::X509::X509Store::__cordl_internal_get__crl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crl;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__crl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crl = value;
}
constexpr bool& Mono::Security::X509::X509Store::__cordl_internal_get__newFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr bool const& Mono::Security::X509::X509Store::__cordl_internal_get__newFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__newFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newFormat = value;
}
inline void Mono::Security::X509::X509Store::_ctor(::StringW path, bool crl, bool newFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, crl, newFormat);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::get_Certificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "get_Certificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::get_Crls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "get_Crls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Store::Load(::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Store::LoadCertificate(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "LoadCertificate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Store::LoadCrl(::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "LoadCrl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*>(this, ___internal_method, filename);
}
inline bool Mono::Security::X509::X509Store::CheckStore(::StringW path, bool throwException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "CheckStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path, throwException);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::BuildCertificatesCollection(::StringW storeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "BuildCertificatesCollection", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(this, ___internal_method, storeName);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::BuildCrlsCollection(::StringW storeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Store*>(), { "BuildCrlsCollection", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, storeName);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Store::New_ctor(::StringW path, bool crl, bool newFormat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Store*>(path, crl, newFormat));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Store::X509Store() {}
