#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CrlValidatedID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CrlValidatedID_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CrlIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherHash_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33708a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x33716f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::*)(::Org::BouncyCastle::Asn1::Esf::OtherHash*)>(
    &::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33719bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::*)(
    ::Org::BouncyCastle::Asn1::Esf::OtherHash*, ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*)>(&::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33719c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID.get_CrlHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherHash* (::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::get_CrlHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3371a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { "get_CrlHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID.get_CrlIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* (::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::get_CrlIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3371a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { "get_CrlIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::ToAsn1Object)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3371a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& Org::BouncyCastle::Asn1::Esf::CrlValidatedID::__cordl_internal_get_crlHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlHash;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash* const& Org::BouncyCastle::Asn1::Esf::CrlValidatedID::__cordl_internal_get_crlHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlHash;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CrlValidatedID::__cordl_internal_set_crlHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlHash = value;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*& Org::BouncyCastle::Asn1::Esf::CrlValidatedID::__cordl_internal_get_crlIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* const& Org::BouncyCastle::Asn1::Esf::CrlValidatedID::__cordl_internal_get_crlIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CrlValidatedID::__cordl_internal_set_crlIdentifier(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlIdentifier = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* Org::BouncyCastle::Asn1::Esf::CrlValidatedID::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::CrlValidatedID::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::CrlValidatedID::_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlHash);
}
inline void Org::BouncyCastle::Asn1::Esf::CrlValidatedID::_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash, ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlHash, crlIdentifier);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* Org::BouncyCastle::Asn1::Esf::CrlValidatedID::get_CrlHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { "get_CrlHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* Org::BouncyCastle::Asn1::Esf::CrlValidatedID::get_CrlIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), { "get_CrlIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::CrlValidatedID::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* Org::BouncyCastle::Asn1::Esf::CrlValidatedID::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* Org::BouncyCastle::Asn1::Esf::CrlValidatedID::New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(crlHash));
}
inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* Org::BouncyCastle::Asn1::Esf::CrlValidatedID::New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash,
                                                                                                              ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>(crlHash, crlIdentifier));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID::CrlValidatedID() {}
