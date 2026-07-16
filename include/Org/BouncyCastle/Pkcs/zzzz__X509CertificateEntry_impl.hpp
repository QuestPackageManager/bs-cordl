#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/X509CertificateEntry.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Entry_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__X509CertificateEntry_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::X509CertificateEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::X509CertificateEntry::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Pkcs::X509CertificateEntry::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35ba1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::X509CertificateEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::X509CertificateEntry::*)(::Org::BouncyCastle::X509::X509Certificate*, ::System::Collections::Hashtable*)>(
    &::Org::BouncyCastle::Pkcs::X509CertificateEntry::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35ba278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::X509CertificateEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::X509CertificateEntry::*)(::Org::BouncyCastle::X509::X509Certificate*, ::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Pkcs::X509CertificateEntry::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35ba2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::X509CertificateEntry.get_Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::Pkcs::X509CertificateEntry::*)()>(
    &::Org::BouncyCastle::Pkcs::X509CertificateEntry::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ba2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), { "get_Certificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::X509CertificateEntry.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkcs::X509CertificateEntry::*)(::System::Object*)>(&::Org::BouncyCastle::Pkcs::X509CertificateEntry::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x35ba2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::X509CertificateEntry.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkcs::X509CertificateEntry::*)()>(&::Org::BouncyCastle::Pkcs::X509CertificateEntry::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35ba384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::Pkcs::X509CertificateEntry::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::Pkcs::X509CertificateEntry::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void Org::BouncyCastle::Pkcs::X509CertificateEntry::__cordl_internal_set_cert(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cert = value;
}
inline void Org::BouncyCastle::Pkcs::X509CertificateEntry::_ctor(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline void Org::BouncyCastle::Pkcs::X509CertificateEntry::_ctor(::Org::BouncyCastle::X509::X509Certificate* cert, ::System::Collections::Hashtable* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert, attributes);
}
inline void Org::BouncyCastle::Pkcs::X509CertificateEntry::_ctor(::Org::BouncyCastle::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert, attributes);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::Pkcs::X509CertificateEntry::get_Certificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), { "get_Certificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkcs::X509CertificateEntry::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Pkcs::X509CertificateEntry::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* Org::BouncyCastle::Pkcs::X509CertificateEntry::New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(cert));
}
inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* Org::BouncyCastle::Pkcs::X509CertificateEntry::New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                                ::System::Collections::Hashtable* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(cert, attributes));
}
inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* Org::BouncyCastle::Pkcs::X509CertificateEntry::New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                                ::System::Collections::IDictionary* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(cert, attributes));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::X509CertificateEntry::X509CertificateEntry() {}
