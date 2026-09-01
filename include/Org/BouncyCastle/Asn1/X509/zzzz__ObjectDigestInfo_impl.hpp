#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\ObjectDigestInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ObjectDigestInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x366260c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x365f0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)(int32_t, ::StringW, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*,
                                                                                                                   ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x36629d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3662790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo.get_DigestedObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerEnumerated* (::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_DigestedObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_DigestedObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo.get_OtherObjectTypeID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_OtherObjectTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_OtherObjectTypeID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo.get_DigestAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_DigestAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_DigestAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo.get_ObjectDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_ObjectDigest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3662adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_ObjectDigest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3662ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerEnumerated*& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_digestedObjectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestedObjectType;
}
constexpr ::Org::BouncyCastle::Asn1::DerEnumerated* const& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_digestedObjectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestedObjectType;
}
constexpr void Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_set_digestedObjectType(::Org::BouncyCastle::Asn1::DerEnumerated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestedObjectType = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_otherObjectTypeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherObjectTypeID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_otherObjectTypeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherObjectTypeID;
}
constexpr void Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_set_otherObjectTypeID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherObjectTypeID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_digestAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_digestAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_objectDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDigest;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_get_objectDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDigest;
}
constexpr void Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::__cordl_internal_set_objectDigest(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectDigest = value;
}
inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::_ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                                                                   ::ArrayW<uint8_t> objectDigest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestedObjectType, otherObjectTypeID, digestAlgorithm, objectDigest);
}
inline void Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerEnumerated* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_DigestedObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_DigestedObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerEnumerated*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_OtherObjectTypeID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_OtherObjectTypeID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_DigestAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_DigestAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::get_ObjectDigest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), { "get_ObjectDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::New_ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID,
                                                                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                                                                                                                    ::ArrayW<uint8_t> objectDigest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(digestedObjectType, otherObjectTypeID, digestAlgorithm, objectDigest));
}
inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::ObjectDigestInfo() {}
