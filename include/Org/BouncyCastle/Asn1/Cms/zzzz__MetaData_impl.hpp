#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\MetaData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__MetaData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Attributes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBoolean_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtf8String_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::MetaData::*)(::Org::BouncyCastle::Asn1::DerBoolean*, ::Org::BouncyCastle::Asn1::DerUtf8String*,
                                                                                                          ::Org::BouncyCastle::Asn1::DerIA5String*, ::Org::BouncyCastle::Asn1::Cms::Attributes*)>(
    &::Org::BouncyCastle::Asn1::Cms::MetaData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x335cd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtf8String*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::Attributes*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::MetaData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::MetaData::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x335cd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::MetaData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::MetaData::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x335cf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::MetaData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::MetaData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x335cfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData.get_IsHashProtected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Cms::MetaData::*)()>(&::Org::BouncyCastle::Asn1::Cms::MetaData::get_IsHashProtected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x335d190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData.get_FileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerUtf8String* (::Org::BouncyCastle::Asn1::Cms::MetaData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::MetaData::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335d1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData.get_MediaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerIA5String* (::Org::BouncyCastle::Asn1::Cms::MetaData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::MetaData::get_MediaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335d1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::MetaData.get_OtherMetaData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::Attributes* (::Org::BouncyCastle::Asn1::Cms::MetaData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::MetaData::get_OtherMetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335d1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_hashProtected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashProtected;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_hashProtected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashProtected;
}
constexpr void Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_set_hashProtected(::Org::BouncyCastle::Asn1::DerBoolean* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashProtected = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::Org::BouncyCastle::Asn1::DerUtf8String* const& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_set_fileName(::Org::BouncyCastle::Asn1::DerUtf8String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileName = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_mediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_mediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr void Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_set_mediaType(::Org::BouncyCastle::Asn1::DerIA5String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mediaType = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::Attributes*& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_otherMetaData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherMetaData;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::Attributes* const& Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_get_otherMetaData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherMetaData;
}
constexpr void Org::BouncyCastle::Asn1::Cms::MetaData::__cordl_internal_set_otherMetaData(::Org::BouncyCastle::Asn1::Cms::Attributes* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherMetaData = value;
}
inline void Org::BouncyCastle::Asn1::Cms::MetaData::_ctor(::Org::BouncyCastle::Asn1::DerBoolean* hashProtected, ::Org::BouncyCastle::Asn1::DerUtf8String* fileName,
                                                          ::Org::BouncyCastle::Asn1::DerIA5String* mediaType, ::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtf8String*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::Attributes*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashProtected, fileName, mediaType, otherMetaData);
}
inline void Org::BouncyCastle::Asn1::Cms::MetaData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::MetaData* Org::BouncyCastle::Asn1::Cms::MetaData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::MetaData*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::MetaData::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Cms::MetaData::get_IsHashProtected() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerUtf8String* Org::BouncyCastle::Asn1::Cms::MetaData::get_FileName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerUtf8String*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerIA5String* Org::BouncyCastle::Asn1::Cms::MetaData::get_MediaType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerIA5String*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::Attributes* Org::BouncyCastle::Asn1::Cms::MetaData::get_OtherMetaData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Attributes*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::MetaData* Org::BouncyCastle::Asn1::Cms::MetaData::New_ctor(::Org::BouncyCastle::Asn1::DerBoolean* hashProtected,
                                                                                                  ::Org::BouncyCastle::Asn1::DerUtf8String* fileName,
                                                                                                  ::Org::BouncyCastle::Asn1::DerIA5String* mediaType,
                                                                                                  ::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::MetaData*>(hashProtected, fileName, mediaType, otherMetaData));
}
inline ::Org::BouncyCastle::Asn1::Cms::MetaData* Org::BouncyCastle::Asn1::Cms::MetaData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::MetaData*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData::MetaData() {}
