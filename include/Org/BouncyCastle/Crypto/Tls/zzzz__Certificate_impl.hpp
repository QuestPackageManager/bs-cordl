#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\Certificate.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::Certificate::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>)>(
    &::Org::BouncyCastle::Crypto::Tls::Certificate::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x34392a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate.GetCertificateList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> (::Org::BouncyCastle::Crypto::Tls::Certificate::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::Certificate::GetCertificateList)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3439300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate.GetCertificateAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* (::Org::BouncyCastle::Crypto::Tls::Certificate::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::Certificate::GetCertificateAt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x343930c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::Certificate::*)()>(&::Org::BouncyCastle::Crypto::Tls::Certificate::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x343933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::Certificate::*)()>(&::Org::BouncyCastle::Crypto::Tls::Certificate::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3439354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::Certificate::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::Certificate::Encode)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x3439374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::Certificate::Parse)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x3439824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Certificate.CloneCertificateList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> (::Org::BouncyCastle::Crypto::Tls::Certificate::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::Certificate::CloneCertificateList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3439cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>& Org::BouncyCastle::Crypto::Tls::Certificate::__cordl_internal_get_mCertificateList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateList;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& Org::BouncyCastle::Crypto::Tls::Certificate::__cordl_internal_get_mCertificateList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateList;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Certificate::__cordl_internal_set_mCertificateList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertificateList = value;
}
inline void Org::BouncyCastle::Crypto::Tls::Certificate::setStaticF_EmptyChain(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Tls::Certificate*, "EmptyChain", ::Org::BouncyCastle::Crypto::Tls::Certificate*>(
      std::forward<::Org::BouncyCastle::Crypto::Tls::Certificate*>(value));
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::Certificate::getStaticF_EmptyChain() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Tls::Certificate*, "EmptyChain", ::Org::BouncyCastle::Crypto::Tls::Certificate*>();
}
inline void Org::BouncyCastle::Crypto::Tls::Certificate::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certificateList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificateList);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> Org::BouncyCastle::Crypto::Tls::Certificate::GetCertificateList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Org::BouncyCastle::Crypto::Tls::Certificate::GetCertificateAt(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(this, ___internal_method, index);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::Certificate::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::Certificate::get_IsEmpty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::Certificate::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::Certificate::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*>(nullptr, ___internal_method, input);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> Org::BouncyCastle::Crypto::Tls::Certificate::CloneCertificateList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::Certificate::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certificateList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::Certificate*>(certificateList));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate::Certificate() {}
