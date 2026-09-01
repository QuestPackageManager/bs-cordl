#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Pkcs\Pbkdf2Params.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__Pbkdf2Params_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3463e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x34640b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x34643e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3464488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)(
    ::ArrayW<uint8_t>, int32_t, int32_t, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3464514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(),
            { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)(::ArrayW<uint8_t>, int32_t, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3464538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(),
                            { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params.GetSalt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetSalt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x346455c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "GetSalt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params.get_IterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IterationCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3464578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_IterationCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params.get_KeyLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_KeyLength)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3464590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_KeyLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params.get_IsDefaultPrf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IsDefaultPrf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x34645a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_IsDefaultPrf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params.get_Prf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_Prf)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3464624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_Prf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::ToAsn1Object)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x346468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_octStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___octStr;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_octStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___octStr;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_set_octStr(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___octStr = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_iterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_iterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iterationCount = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_keyLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyLength;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_keyLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyLength;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_set_keyLength(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyLength = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_prf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prf;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_get_prf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prf;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::__cordl_internal_set_prf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prf = value;
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::setStaticF_algid_hmacWithSHA1(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "algid_hmacWithSHA1", ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::getStaticF_algid_hmacWithSHA1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "algid_hmacWithSHA1", ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>();
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, salt, iterationCount);
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, salt, iterationCount, keyLength);
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(),
          { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, salt, iterationCount, keyLength, prf);
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, salt, iterationCount, prf);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetSalt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "GetSalt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IterationCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_IterationCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_KeyLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_KeyLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IsDefaultPrf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_IsDefaultPrf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_Prf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), { "get_Prf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::New_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(salt, iterationCount));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::New_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(salt, iterationCount, keyLength));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::New_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength,
                                                                                                            ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(salt, iterationCount, keyLength, prf));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::New_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount,
                                                                                                            ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*>(salt, iterationCount, prf));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::Pbkdf2Params() {}
