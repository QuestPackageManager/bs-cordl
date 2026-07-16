#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/RevocationValues.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__RevocationValues_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherRevVals_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__BasicOcspResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::RevocationValues* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::RevocationValues::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3374d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor)> {
  constexpr static std::size_t size = 0x9f0;
  constexpr static std::size_t addrs = 0x3374db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)(
    ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*>, ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals*)>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33757a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*>>(),
                                             ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)(
    ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals*)>(&::Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3375840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.GetCrlVals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*> (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::GetCrlVals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3375a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "GetCrlVals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.GetOcspVals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*> (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::GetOcspVals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3375b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "GetOcspVals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.get_OtherRevVals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherRevVals* (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::get_OtherRevVals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3375cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "get_OtherRevVals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3375cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_crlVals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlVals;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_crlVals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlVals;
}
constexpr void Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_set_crlVals(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlVals = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_ocspVals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspVals;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_ocspVals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspVals;
}
constexpr void Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_set_ocspVals(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ocspVals = value;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevVals*& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_otherRevVals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRevVals;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* const& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_otherRevVals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRevVals;
}
constexpr void Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_set_otherRevVals(::Org::BouncyCastle::Asn1::Esf::OtherRevVals* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherRevVals = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* Org::BouncyCastle::Asn1::Esf::RevocationValues::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*> crlVals,
                                                                  ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*> ocspVals, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*>>(),
                                           ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlVals, ocspVals, otherRevVals);
}
inline void Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor(::System::Collections::IEnumerable* crlVals, ::System::Collections::IEnumerable* ocspVals,
                                                                  ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlVals, ocspVals, otherRevVals);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*> Org::BouncyCastle::Asn1::Esf::RevocationValues::GetCrlVals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "GetCrlVals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*> Org::BouncyCastle::Asn1::Esf::RevocationValues::GetOcspVals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "GetOcspVals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* Org::BouncyCastle::Asn1::Esf::RevocationValues::get_OtherRevVals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), { "get_OtherRevVals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::RevocationValues::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* Org::BouncyCastle::Asn1::Esf::RevocationValues::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* Org::BouncyCastle::Asn1::Esf::RevocationValues::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*> crlVals,
                                                                                                                  ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*> ocspVals,
                                                                                                                  ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(crlVals, ocspVals, otherRevVals));
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* Org::BouncyCastle::Asn1::Esf::RevocationValues::New_ctor(::System::Collections::IEnumerable* crlVals,
                                                                                                                  ::System::Collections::IEnumerable* ocspVals,
                                                                                                                  ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(crlVals, ocspVals, otherRevVals));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::RevocationValues::RevocationValues() {}
