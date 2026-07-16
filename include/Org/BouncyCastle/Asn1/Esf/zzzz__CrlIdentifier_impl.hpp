#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CrlIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CrlIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtcTime_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x336fc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x336fdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::*)(::Org::BouncyCastle::Asn1::X509::X509Name*, ::System::DateTime)>(
    &::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336fffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::*)(
    ::Org::BouncyCastle::Asn1::X509::X509Name*, ::System::DateTime, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3370004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier.get_CrlIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::get_CrlIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3370110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "get_CrlIssuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier.get_CrlIssuedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::*)()>(&::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::get_CrlIssuedTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3370118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "get_CrlIssuedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier.get_CrlNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::get_CrlNumber)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3370130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "get_CrlNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3370140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_get_crlIssuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlIssuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_get_crlIssuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlIssuer;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_set_crlIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlIssuer = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerUtcTime*& Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_get_crlIssuedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlIssuedTime;
}
constexpr ::Org::BouncyCastle::Asn1::DerUtcTime* const& Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_get_crlIssuedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlIssuedTime;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_set_crlIssuedTime(::Org::BouncyCastle::Asn1::DerUtcTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlIssuedTime = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_get_crlNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlNumber;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_get_crlNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlNumber;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CrlIdentifier::__cordl_internal_set_crlNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlNumber = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* Org::BouncyCastle::Asn1::Esf::CrlIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::CrlIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::CrlIdentifier::_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlIssuer, crlIssuedTime);
}
inline void Org::BouncyCastle::Asn1::Esf::CrlIdentifier::_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime,
                                                               ::Org::BouncyCastle::Math::BigInteger* crlNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlIssuer, crlIssuedTime, crlNumber);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::Esf::CrlIdentifier::get_CrlIssuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "get_CrlIssuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Asn1::Esf::CrlIdentifier::get_CrlIssuedTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "get_CrlIssuedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Esf::CrlIdentifier::get_CrlNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), { "get_CrlNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::CrlIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* Org::BouncyCastle::Asn1::Esf::CrlIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* Org::BouncyCastle::Asn1::Esf::CrlIdentifier::New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(crlIssuer, crlIssuedTime));
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* Org::BouncyCastle::Asn1::Esf::CrlIdentifier::New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime,
                                                                                                            ::Org::BouncyCastle::Math::BigInteger* crlNumber) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(crlIssuer, crlIssuedTime, crlNumber));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier::CrlIdentifier() {}
