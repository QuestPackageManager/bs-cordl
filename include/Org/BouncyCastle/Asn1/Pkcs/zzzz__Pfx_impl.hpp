#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/Pfx.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__Pfx_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__MacData_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pfx.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::Pfx* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Pkcs::Pfx::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x346257c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pfx._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::Pfx::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Pkcs::Pfx::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x346261c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pfx._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::Pfx::*)(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Org::BouncyCastle::Asn1::Pkcs::MacData*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pfx::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346270c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pfx.get_AuthSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* (::Org::BouncyCastle::Asn1::Pkcs::Pfx::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::Pfx::get_AuthSafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3462714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { "get_AuthSafe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pfx.get_MacData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::MacData* (::Org::BouncyCastle::Asn1::Pkcs::Pfx::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::Pfx::get_MacData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { "get_MacData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::Pfx.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::Pfx::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::Pfx::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3462724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*& Org::BouncyCastle::Asn1::Pkcs::Pfx::__cordl_internal_get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* const& Org::BouncyCastle::Asn1::Pkcs::Pfx::__cordl_internal_get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::Pfx::__cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::MacData*& Org::BouncyCastle::Asn1::Pkcs::Pfx::__cordl_internal_get_macData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macData;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::MacData* const& Org::BouncyCastle::Asn1::Pkcs::Pfx::__cordl_internal_get_macData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macData;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::Pfx::__cordl_internal_set_macData(::Org::BouncyCastle::Asn1::Pkcs::MacData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macData = value;
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* Org::BouncyCastle::Asn1::Pkcs::Pfx::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pfx::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Pkcs::Pfx::_ctor(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo, ::Org::BouncyCastle::Asn1::Pkcs::MacData* macData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::MacData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentInfo, macData);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* Org::BouncyCastle::Asn1::Pkcs::Pfx::get_AuthSafe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { "get_AuthSafe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* Org::BouncyCastle::Asn1::Pkcs::Pfx::get_MacData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), { "get_MacData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::MacData*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::Pfx::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* Org::BouncyCastle::Asn1::Pkcs::Pfx::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* Org::BouncyCastle::Asn1::Pkcs::Pfx::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo,
                                                                                          ::Org::BouncyCastle::Asn1::Pkcs::MacData* macData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::Pfx*>(contentInfo, macData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::Pfx::Pfx() {}
