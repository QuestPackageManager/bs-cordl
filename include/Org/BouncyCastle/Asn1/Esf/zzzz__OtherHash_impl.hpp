#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\OtherHash.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherHash_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherHashAlgAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherHash.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherHash* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::OtherHash::GetInstance)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3373c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherHash::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Esf::OtherHash::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x33757cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherHash::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherHash::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3375598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherHash::*)(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherHash::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3375774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherHash.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Esf::OtherHash::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherHash::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3375880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { "get_HashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherHash.GetHashValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Esf::OtherHash::*)()>(&::Org::BouncyCastle::Asn1::Esf::OtherHash::GetHashValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3375914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { "GetHashValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherHash.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::OtherHash::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherHash::ToAsn1Object)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3375960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Esf::OtherHash::__cordl_internal_get_sha1Hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha1Hash;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Esf::OtherHash::__cordl_internal_get_sha1Hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha1Hash;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OtherHash::__cordl_internal_set_sha1Hash(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sha1Hash = value;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*& Org::BouncyCastle::Asn1::Esf::OtherHash::__cordl_internal_get_otherHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherHash;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* const& Org::BouncyCastle::Asn1::Esf::OtherHash::__cordl_internal_get_otherHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherHash;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OtherHash::__cordl_internal_set_otherHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherHash = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* Org::BouncyCastle::Asn1::Esf::OtherHash::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherHash::_ctor(::ArrayW<uint8_t> sha1Hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sha1Hash);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherHash::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sha1Hash);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherHash::_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherHash);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Esf::OtherHash::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { "get_HashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Esf::OtherHash::GetHashValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), { "GetHashValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::OtherHash::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* Org::BouncyCastle::Asn1::Esf::OtherHash::New_ctor(::ArrayW<uint8_t> sha1Hash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(sha1Hash));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* Org::BouncyCastle::Asn1::Esf::OtherHash::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(sha1Hash));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* Org::BouncyCastle::Asn1::Esf::OtherHash::New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(otherHash));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Esf::OtherHash::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Esf::OtherHash::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash::OtherHash() {}
