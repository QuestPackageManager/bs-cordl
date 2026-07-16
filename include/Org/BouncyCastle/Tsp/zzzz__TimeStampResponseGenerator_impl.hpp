#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampResponseGenerator.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampResponseGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampResponseGenerator_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampResponse_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampTokenGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo::*)(int32_t)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x361f2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo::_ctor(int32_t failInfoValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, failInfoValue);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo* Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo::New_ctor(int32_t failInfoValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo*>(failInfoValue));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo::TimeStampResponseGenerator_FailInfo() {}
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(
    ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x361ef9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(
    ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x361f02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                                                               ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*,
                                                                                                                      ::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x361efa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), ::i2c::type_of<::System::Collections::IList*>(),
                                                                 ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.AddStatusString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::AddStatusString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x361f034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(), { "AddStatusString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.SetFailInfoField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::SetFailInfoField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x361f0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(), { "SetFailInfoField", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.GetPkiStatusInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GetPkiStatusInfo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x361f0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(), { "GetPkiStatusInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampResponse* (
    ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*, ::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x361f34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampResponse* (
    ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*, ::Org::BouncyCastle::Math::BigInteger*,
                                                             ::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(&::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x361f3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                                             { "Generate",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.GenerateFailResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Tsp::TimeStampResponse* (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::Org::BouncyCastle::Asn1::Cmp::PkiStatus, int32_t, ::StringW)>(
        &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GenerateFailResponse)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x361fea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                         { "GenerateFailResponse", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_statusStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusStrings;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_statusStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusStrings;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_set_statusStrings(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusStrings = value;
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_failInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failInfo;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_failInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failInfo;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_set_failInfo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failInfo = value;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_tokenGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenGenerator;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_tokenGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenGenerator;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_set_tokenGenerator(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tokenGenerator = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_acceptedAlgorithms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedAlgorithms;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_acceptedAlgorithms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedAlgorithms;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_set_acceptedAlgorithms(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acceptedAlgorithms = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_acceptedPolicies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedPolicies;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_acceptedPolicies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedPolicies;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_set_acceptedPolicies(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acceptedPolicies = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_acceptedExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedExtensions;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_get_acceptedExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedExtensions;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__cordl_internal_set_acceptedExtensions(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acceptedExtensions = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenGenerator, acceptedAlgorithms);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                      ::System::Collections::IList* acceptedPolicy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                                                             ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenGenerator, acceptedAlgorithms, acceptedPolicy);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                      ::System::Collections::IList* acceptedPolicies, ::System::Collections::IList* acceptedExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), ::i2c::type_of<::System::Collections::IList*>(),
                                                               ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenGenerator, acceptedAlgorithms, acceptedPolicies, acceptedExtensions);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::AddStatusString(::StringW statusString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(), { "AddStatusString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusString);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::SetFailInfoField(int32_t field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(), { "SetFailInfoField", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GetPkiStatusInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(), { "GetPkiStatusInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request,
                                                                                                                 ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampResponse*>(this, ___internal_method, request, serialNumber, genTime);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request,
                                                                                                                 ::Org::BouncyCastle::Math::BigInteger* serialNumber,
                                                                                                                 ::Org::BouncyCastle::Utilities::Date::DateTimeObject* genTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                                           { "Generate",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampResponse*>(this, ___internal_method, request, serialNumber, genTime);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GenerateFailResponse(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status, int32_t failInfoField,
                                                                                                                             ::StringW statusString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(),
                                       { "GenerateFailResponse", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampResponse*>(this, ___internal_method, status, failInfoField, statusString);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator,
                                                                                                                          ::System::Collections::IList* acceptedAlgorithms) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(tokenGenerator, acceptedAlgorithms));
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator,
                                                                                                                          ::System::Collections::IList* acceptedAlgorithms,
                                                                                                                          ::System::Collections::IList* acceptedPolicy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(tokenGenerator, acceptedAlgorithms, acceptedPolicy));
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator,
                                                                                                                          ::System::Collections::IList* acceptedAlgorithms,
                                                                                                                          ::System::Collections::IList* acceptedPolicies,
                                                                                                                          ::System::Collections::IList* acceptedExtensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(tokenGenerator, acceptedAlgorithms, acceptedPolicies, acceptedExtensions));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::TimeStampResponseGenerator() {}
