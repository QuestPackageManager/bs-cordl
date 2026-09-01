#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\EncryptedData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EncryptedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EncryptedContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::EncryptedData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::EncryptedData::GetInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3358f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EncryptedData::*)(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*)>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33592a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EncryptedData::*)(
    ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Asn1::Cms::EncryptedData::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x33592ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EncryptedData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedData::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3359088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::EncryptedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedData::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData.get_EncryptedContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* (::Org::BouncyCastle::Asn1::Cms::EncryptedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedData::get_EncryptedContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData.get_UnprotectedAttrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::EncryptedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedData::get_UnprotectedAttrs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::EncryptedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3359398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_get_encryptedContentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedContentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* const& Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_get_encryptedContentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedContentInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_set_encryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptedContentInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_get_unprotectedAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unprotectedAttrs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_get_unprotectedAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unprotectedAttrs;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EncryptedData::__cordl_internal_set_unprotectedAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unprotectedAttrs = value;
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* Org::BouncyCastle::Asn1::Cms::EncryptedData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cms::EncryptedData::_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encInfo);
}
inline void Org::BouncyCastle::Asn1::Cms::EncryptedData::_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encInfo, unprotectedAttrs);
}
inline void Org::BouncyCastle::Asn1::Cms::EncryptedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::EncryptedData::get_Version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* Org::BouncyCastle::Asn1::Cms::EncryptedData::get_EncryptedContentInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::EncryptedData::get_UnprotectedAttrs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::EncryptedData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* Org::BouncyCastle::Asn1::Cms::EncryptedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(encInfo));
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* Org::BouncyCastle::Asn1::Cms::EncryptedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(encInfo, unprotectedAttrs));
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* Org::BouncyCastle::Asn1::Cms::EncryptedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::EncryptedData*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedData::EncryptedData() {}
