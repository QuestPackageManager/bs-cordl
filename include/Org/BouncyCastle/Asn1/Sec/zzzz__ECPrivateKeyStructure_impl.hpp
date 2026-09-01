#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Sec\ECPrivateKeyStructure.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Sec/zzzz__ECPrivateKeyStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x35423ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x354248c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x35424e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3542698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35426b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::DerBitString*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x35426bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(
    int32_t, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35426a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(
    int32_t, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::DerBitString*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x354298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetKey)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3542cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure.GetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetPublicKey)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3542dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure.GetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3543164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure.GetObjectInTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetObjectInTag)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x3542e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { "GetObjectInTag", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq = value;
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor(::Org::BouncyCastle::Math::BigInteger* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, orderBitLength, key);
}
inline void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, parameters);
}
inline void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                       ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, publicKey, parameters);
}
inline void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, orderBitLength, key, parameters);
}
inline void Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                       ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, orderBitLength, key, publicKey, parameters);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetPublicKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::GetObjectInTag(int32_t tagNo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), { "GetObjectInTag", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method, tagNo);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor(::Org::BouncyCastle::Math::BigInteger* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(key));
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(orderBitLength, key));
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor(::Org::BouncyCastle::Math::BigInteger* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(key, parameters));
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor(::Org::BouncyCastle::Math::BigInteger* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(key, publicKey, parameters));
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(orderBitLength, key, parameters));
}
inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*>(orderBitLength, key, publicKey, parameters));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure::ECPrivateKeyStructure() {}
