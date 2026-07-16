#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/AuthorityKeyIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AuthorityKeyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x355ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x355ac24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.FromExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::FromExtensions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x355b0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                                                           { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x355ad2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x355b120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)(
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x355b12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x355b3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x355b49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x355b3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
            { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.GetKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::GetKeyIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x355b4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "GetKeyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.get_AuthorityCertIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::get_AuthorityCertIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355b4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "get_AuthorityCertIssuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.get_AuthorityCertSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::get_AuthorityCertSerialNumber)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x355b4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "get_AuthorityCertSerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x355b4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::*)()>(&::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x355b5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_get_keyidentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyidentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_get_keyidentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyidentifier;
}
constexpr void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_set_keyidentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyidentifier = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_get_certissuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certissuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_get_certissuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certissuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_set_certissuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certissuer = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_get_certserno() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certserno;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_get_certserno() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certserno;
}
constexpr void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::__cordl_internal_set_certserno(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certserno = value;
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                                                         { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spki);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                         ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spki, name, serialNumber);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, serialNumber);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor(::ArrayW<uint8_t> keyIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyIdentifier);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::_ctor(::ArrayW<uint8_t> keyIdentifier, ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                         ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(),
          { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyIdentifier, name, serialNumber);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::GetKeyIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "GetKeyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::get_AuthorityCertIssuer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "get_AuthorityCertIssuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::get_AuthorityCertSerialNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), { "get_AuthorityCertSerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(spki));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki,
                                                                                                                                ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                                                                                ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(spki, name, serialNumber));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                                                                                ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(name, serialNumber));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::New_ctor(::ArrayW<uint8_t> keyIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(keyIdentifier));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier* Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::New_ctor(::ArrayW<uint8_t> keyIdentifier,
                                                                                                                                ::Org::BouncyCastle::Asn1::X509::GeneralNames* name,
                                                                                                                                ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier*>(keyIdentifier, name, serialNumber));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier::AuthorityKeyIdentifier() {}
