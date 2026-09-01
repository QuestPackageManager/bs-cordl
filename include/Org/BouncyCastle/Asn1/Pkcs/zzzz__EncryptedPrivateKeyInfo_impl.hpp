#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Pkcs\EncryptedPrivateKeyInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3462150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3462228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3462298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo.get_EncryptionAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::get_EncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346241c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), { "get_EncryptionAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo.GetEncryptedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetEncryptedData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3462424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), { "GetEncryptedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3462440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::__cordl_internal_get_algId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algId;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::__cordl_internal_get_algId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algId;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::__cordl_internal_set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::__cordl_internal_set_data(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algId, encoding);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::get_EncryptionAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), { "get_EncryptionAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetEncryptedData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), { "GetEncryptedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId,
                                                                                                                                  ::ArrayW<uint8_t> encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(algId, encoding));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo() {}
