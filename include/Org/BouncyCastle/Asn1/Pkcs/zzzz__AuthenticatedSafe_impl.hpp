#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/AuthenticatedSafe.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__ContentInfo_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__AuthenticatedSafe_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>)>(
    &::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::Copy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x345d9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(),
                                                                                           { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x345da44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x345dae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::*)(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>)>(
    &::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x345dcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe.GetContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> (::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::GetContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345dcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), { "GetContentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::ToAsn1Object)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x345dcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>& Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> const& Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::__cordl_internal_set_info(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::__cordl_internal_get_isBer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBer;
}
constexpr bool const& Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::__cordl_internal_get_isBer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBer;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::__cordl_internal_set_isBer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isBer = value;
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::Copy(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(),
                                                                                         { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>>(nullptr, ___internal_method, info);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::GetContentInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), { "GetContentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*>(info));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe::AuthenticatedSafe() {}
