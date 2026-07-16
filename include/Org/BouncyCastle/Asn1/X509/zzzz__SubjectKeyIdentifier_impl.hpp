#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/SubjectKeyIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectKeyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3663848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x366385c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.FromExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::FromExtensions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3663a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                           { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3663ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3663a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36639f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.GetKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetKeyIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3663d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), { "GetKeyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3663dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.CreateSha1KeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* (*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::CreateSha1KeyIdentifier)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3663e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                             { "CreateSha1KeyIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.CreateTruncatedSha1KeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* (*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::CreateTruncatedSha1KeyIdentifier)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3663ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                             { "CreateTruncatedSha1KeyIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier.GetDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetDigest)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3663b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                           { "GetDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::__cordl_internal_get_keyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyIdentifier;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::__cordl_internal_get_keyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::__cordl_internal_set_keyIdentifier(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyIdentifier = value;
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                         { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::_ctor(::ArrayW<uint8_t> keyID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyID);
}
inline void Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyID);
}
inline void Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spki);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetKeyIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), { "GetKeyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*
Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::CreateSha1KeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                           { "CreateSha1KeyIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(nullptr, ___internal_method, keyInfo);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*
Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::CreateTruncatedSha1KeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                           { "CreateTruncatedSha1KeyIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(nullptr, ___internal_method, keyInfo);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::GetDigest(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(),
                                                                                         { "GetDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, spki);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::New_ctor(::ArrayW<uint8_t> keyID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(keyID));
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(keyID));
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(spki));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier::SubjectKeyIdentifier() {}
