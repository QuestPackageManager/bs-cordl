#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/NamingAuthority.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__NamingAuthority_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3450c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::GetInstance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x344f574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::_ctor)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x3450da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority.get_NamingAuthorityID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::get_NamingAuthorityID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority.get_NamingAuthorityText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::get_NamingAuthorityText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority.get_NamingAuthorityUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::get_NamingAuthorityUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW, ::Org::BouncyCastle::Asn1::X500::DirectoryString*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3451470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x345147c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_get_namingAuthorityID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthorityID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_get_namingAuthorityID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthorityID;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_set_namingAuthorityID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namingAuthorityID = value;
}
constexpr ::StringW& Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_get_namingAuthorityUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthorityUrl;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_get_namingAuthorityUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthorityUrl;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_set_namingAuthorityUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namingAuthorityUrl = value;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_get_namingAuthorityText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthorityText;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_get_namingAuthorityText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthorityText;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::__cordl_internal_set_namingAuthorityText(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namingAuthorityText = value;
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::setStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern", ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::getStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern",
                                           ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>();
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj,
                                                                                                                                       bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::get_NamingAuthorityID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::get_NamingAuthorityText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::get_NamingAuthorityUrl() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namingAuthorityID, ::StringW namingAuthorityUrl,
                                                                           ::Org::BouncyCastle::Asn1::X500::DirectoryString* namingAuthorityText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namingAuthorityID, namingAuthorityUrl, namingAuthorityText);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(seq));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*
Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namingAuthorityID, ::StringW namingAuthorityUrl,
                                                                  ::Org::BouncyCastle::Asn1::X500::DirectoryString* namingAuthorityText) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(namingAuthorityID, namingAuthorityUrl, namingAuthorityText));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority::NamingAuthority() {}
