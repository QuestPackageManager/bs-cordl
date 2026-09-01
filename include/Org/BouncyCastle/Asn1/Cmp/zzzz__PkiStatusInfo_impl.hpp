#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\PkiStatusInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFailureInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3350010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x334866c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3350024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)(int32_t)>(&::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3350198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)(int32_t, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3350204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)(
    int32_t, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*, ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3350274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::get_Status)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33502f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo.get_StatusString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::get_StatusString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "get_StatusString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo.get_FailInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::get_FailInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3350314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "get_FailInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x335031c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_set_status(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_get_statusString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusString;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_get_statusString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusString;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_set_statusString(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusString = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_get_failInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failInfo;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_get_failInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::__cordl_internal_set_failInfo(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failInfo = value;
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor(int32_t status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, statusString);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString, ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* failInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, statusString, failInfo);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::get_StatusString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "get_StatusString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::get_FailInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), { "get_FailInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::New_ctor(int32_t status) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(status));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::New_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(status, statusString));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::New_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString,
                                                                                                            ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* failInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(status, statusString, failInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo::PkiStatusInfo() {}
