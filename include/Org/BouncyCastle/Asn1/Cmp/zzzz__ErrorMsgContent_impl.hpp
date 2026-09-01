#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\ErrorMsgContent.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__ErrorMsgContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3349bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3349e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::*)(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*)>(
    &::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334a018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::*)(
    ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*)>(&::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x334a024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent.get_PkiStatusInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::get_PkiStatusInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334a080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent.get_ErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::get_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334a088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent.get_ErrorDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* (::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::get_ErrorDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334a090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x334a098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_get_pkiStatusInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiStatusInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_get_pkiStatusInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiStatusInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_set_pkiStatusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pkiStatusInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_get_errorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_get_errorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_set_errorCode(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorCode = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_get_errorDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorDetails;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_get_errorDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorDetails;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::__cordl_internal_set_errorDetails(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorDetails = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkiStatusInfo);
}
inline void Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::DerInteger* errorCode,
                                                                 ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* errorDetails) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkiStatusInfo, errorCode, errorDetails);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::get_PkiStatusInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::get_ErrorCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::get_ErrorDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(pkiStatusInfo));
}
inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo,
                                                                                                                ::Org::BouncyCastle::Asn1::DerInteger* errorCode,
                                                                                                                ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* errorDetails) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*>(pkiStatusInfo, errorCode, errorDetails));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent::ErrorMsgContent() {}
