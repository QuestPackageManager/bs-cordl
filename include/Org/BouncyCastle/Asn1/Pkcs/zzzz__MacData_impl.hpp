#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Pkcs\MacData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__MacData_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DigestInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::MacData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::MacData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Pkcs::MacData::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3463078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::MacData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::MacData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::MacData::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x34631fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::MacData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::MacData::*)(::Org::BouncyCastle::Asn1::X509::DigestInfo*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Asn1::Pkcs::MacData::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3463384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::MacData.get_Mac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DigestInfo* (::Org::BouncyCastle::Asn1::Pkcs::MacData::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::MacData::get_Mac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3463470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "get_Mac", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::MacData.GetSalt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Pkcs::MacData::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::MacData::GetSalt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3463478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "GetSalt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::MacData.get_IterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Pkcs::MacData::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::MacData::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34634f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "get_IterationCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::MacData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::MacData::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::MacData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x34634f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo*& Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_get_digInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digInfo;
}
constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo* const& Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_get_digInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digInfo;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_set_digInfo(::Org::BouncyCastle::Asn1::X509::DigestInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digInfo = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_get_salt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_get_salt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_set_salt(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___salt = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_get_iterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_get_iterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::MacData::__cordl_internal_set_iterationCount(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iterationCount = value;
}
inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* Org::BouncyCastle::Asn1::Pkcs::MacData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::MacData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Pkcs::MacData::_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digInfo, ::ArrayW<uint8_t> salt, int32_t iterationCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digInfo, salt, iterationCount);
}
inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* Org::BouncyCastle::Asn1::Pkcs::MacData::get_Mac() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "get_Mac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Pkcs::MacData::GetSalt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "GetSalt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Pkcs::MacData::get_IterationCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), { "get_IterationCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::MacData::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* Org::BouncyCastle::Asn1::Pkcs::MacData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* Org::BouncyCastle::Asn1::Pkcs::MacData::New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digInfo, ::ArrayW<uint8_t> salt,
                                                                                                  int32_t iterationCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(digInfo, salt, iterationCount));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::MacData::MacData() {}
