#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\SignerAttribute.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__SignerAttribute_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignerAttribute.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::SignerAttribute* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::SignerAttribute::GetInstance)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3378f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignerAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignerAttribute::*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::SignerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x33790bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignerAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignerAttribute::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::SignerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3379230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignerAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignerAttribute::*)(::Org::BouncyCastle::Asn1::X509::AttributeCertificate*)>(
    &::Org::BouncyCastle::Asn1::Esf::SignerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3379238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignerAttribute.get_ClaimedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::Esf::SignerAttribute::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignerAttribute::get_ClaimedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3379240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignerAttribute.get_CertifiedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificate* (::Org::BouncyCastle::Asn1::Esf::SignerAttribute::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignerAttribute::get_CertifiedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3379248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignerAttribute.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::SignerAttribute::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignerAttribute::ToAsn1Object)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3379250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::SignerAttribute::__cordl_internal_get_claimedAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___claimedAttributes;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::SignerAttribute::__cordl_internal_get_claimedAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___claimedAttributes;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SignerAttribute::__cordl_internal_set_claimedAttributes(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___claimedAttributes = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& Org::BouncyCastle::Asn1::Esf::SignerAttribute::__cordl_internal_get_certifiedAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certifiedAttributes;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* const& Org::BouncyCastle::Asn1::Esf::SignerAttribute::__cordl_internal_get_certifiedAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certifiedAttributes;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SignerAttribute::__cordl_internal_set_certifiedAttributes(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certifiedAttributes = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* Org::BouncyCastle::Asn1::Esf::SignerAttribute::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::SignerAttribute::_ctor(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::SignerAttribute::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, claimedAttributes);
}
inline void Org::BouncyCastle::Asn1::Esf::SignerAttribute::_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certifiedAttributes);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Esf::SignerAttribute::get_ClaimedAttributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* Org::BouncyCastle::Asn1::Esf::SignerAttribute::get_CertifiedAttributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::SignerAttribute::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* Org::BouncyCastle::Asn1::Esf::SignerAttribute::New_ctor(::System::Object* obj) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(obj));
}
inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* Org::BouncyCastle::Asn1::Esf::SignerAttribute::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(claimedAttributes));
}
inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* Org::BouncyCastle::Asn1::Esf::SignerAttribute::New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignerAttribute*>(certifiedAttributes));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::SignerAttribute::SignerAttribute() {}
