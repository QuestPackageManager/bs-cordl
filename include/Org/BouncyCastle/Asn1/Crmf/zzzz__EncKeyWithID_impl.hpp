#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Crmf\EncKeyWithID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__EncKeyWithID_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtf8String_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3366cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3366d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(
    &::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)(
    ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::Org::BouncyCastle::Asn1::DerUtf8String*)>(&::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtf8String*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)(
    ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID.get_PrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_PrivateKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID.get_HasIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)()>(&::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_HasIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3366e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID.get_IsIdentifierUtf8String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)()>(&::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_IsIdentifierUtf8String)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3366ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID.get_Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3366f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*& Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::__cordl_internal_get_privKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKeyInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* const& Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::__cordl_internal_get_privKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKeyInfo;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::__cordl_internal_set_privKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privKeyInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::__cordl_internal_get_identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::__cordl_internal_get_identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::__cordl_internal_set_identifier(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___identifier = value;
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privKeyInfo);
}
inline void Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::DerUtf8String* str) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtf8String*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privKeyInfo, str);
}
inline void Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privKeyInfo, generalName);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_PrivateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_HasIdentifier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_IsIdentifierUtf8String() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::get_Identifier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(privKeyInfo));
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::DerUtf8String* str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(privKeyInfo, str));
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*>(privKeyInfo, generalName));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID::EncKeyWithID() {}
