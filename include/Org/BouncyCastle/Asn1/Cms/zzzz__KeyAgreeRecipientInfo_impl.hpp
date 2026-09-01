#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\KeyAgreeRecipientInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KeyAgreeRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorIdentifierOrKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)(
    ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*, ::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*,
    ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x335be3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x335bec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x335c1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::GetInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x335c1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335c344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.get_Originator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_Originator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335c34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_Originator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.get_UserKeyingMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_UserKeyingMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335c354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_UserKeyingMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.get_KeyEncryptionAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_KeyEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335c35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_KeyEncryptionAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.get_RecipientEncryptedKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_RecipientEncryptedKeys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335c364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_RecipientEncryptedKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x335c36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_originator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originator;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* const& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_originator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originator;
}
constexpr void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originator = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_ukm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ukm;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_ukm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ukm;
}
constexpr void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_set_ukm(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ukm = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_keyEncryptionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_keyEncryptionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyEncryptionAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_recipientEncryptedKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientEncryptedKeys;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_get_recipientEncryptedKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientEncryptedKeys;
}
constexpr void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::__cordl_internal_set_recipientEncryptedKeys(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipientEncryptedKeys = value;
}
inline void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator, ::Org::BouncyCastle::Asn1::Asn1OctetString* ukm,
                                                                       ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm,
                                                                       ::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originator, ukm, keyEncryptionAlgorithm, recipientEncryptedKeys);
}
inline void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_Originator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_Originator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_UserKeyingMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_UserKeyingMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_KeyEncryptionAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_KeyEncryptionAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::get_RecipientEncryptedKeys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), { "get_RecipientEncryptedKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*
Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator, ::Org::BouncyCastle::Asn1::Asn1OctetString* ukm,
                                                              ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm,
                                                              ::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(originator, ukm, keyEncryptionAlgorithm, recipientEncryptedKeys));
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo::KeyAgreeRecipientInfo() {}
