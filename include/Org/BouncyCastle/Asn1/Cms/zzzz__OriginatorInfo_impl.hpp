#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\OriginatorInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::*)(::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335d7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x335d7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3355020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::GetInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x335598c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo.get_Certificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::get_Certificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335da48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { "get_Certificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo.get_Crls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::get_Crls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335da50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { "get_Crls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x335da58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::OriginatorInfo::__cordl_internal_get_certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::OriginatorInfo::__cordl_internal_get_certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr void Org::BouncyCastle::Asn1::Cms::OriginatorInfo::__cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certs = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::OriginatorInfo::__cordl_internal_get_crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crls;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::OriginatorInfo::__cordl_internal_get_crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crls;
}
constexpr void Org::BouncyCastle::Asn1::Cms::OriginatorInfo::__cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crls = value;
}
inline void Org::BouncyCastle::Asn1::Cms::OriginatorInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs, crls);
}
inline void Org::BouncyCastle::Asn1::Cms::OriginatorInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::OriginatorInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::OriginatorInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::OriginatorInfo::get_Certificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { "get_Certificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::OriginatorInfo::get_Crls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), { "get_Crls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::OriginatorInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::OriginatorInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(certs, crls));
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::OriginatorInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo::OriginatorInfo() {}
