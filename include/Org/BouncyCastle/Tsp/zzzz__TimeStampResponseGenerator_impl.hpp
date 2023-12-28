#pragma once
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampResponseGenerator_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampResponse_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampResponseGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampTokenGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo::*)(int32_t)>(
    &::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1151404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo* Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo::New_ctor(int32_t failInfoValue) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo*>(failInfoValue));
}
inline void Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo::_ctor(int32_t failInfoValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failInfoValue);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo::__TimeStampResponseGenerator__FailInfo() {}
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(
    ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11510b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(
    ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1151154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(
    ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11510c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.AddStatusString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::AddStatusString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x115115c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "AddStatusString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.SetFailInfoField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::SetFailInfoField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11511dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "SetFailInfoField",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.GetPkiStatusInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GetPkiStatusInfo)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x11511ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(),
                                                                               "GetPkiStatusInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Tsp::TimeStampResponse* (
    ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*, ::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x115146c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Tsp::TimeStampResponse* (
    ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*, ::Org::BouncyCastle::Math::BigInteger*,
                                                             ::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(&::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1151520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator.GenerateFailResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Tsp::TimeStampResponse* (::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::*)(::Org::BouncyCastle::Asn1::Cmp::PkiStatus, int32_t, ::StringW)>(
        &::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GenerateFailResponse)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1151ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "GenerateFailResponse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_statusStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusStrings;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_statusStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusStrings;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__set_statusStrings(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___statusStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_failInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failInfo;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_failInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failInfo;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__set_failInfo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failInfo = value;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_tokenGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenGenerator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*> const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_tokenGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenGenerator;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__set_tokenGenerator(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tokenGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_acceptedAlgorithms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedAlgorithms;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_acceptedAlgorithms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedAlgorithms;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__set_acceptedAlgorithms(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___acceptedAlgorithms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_acceptedPolicies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedPolicies;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_acceptedPolicies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedPolicies;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__set_acceptedPolicies(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___acceptedPolicies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_acceptedExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__get_acceptedExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acceptedExtensions;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::__set_acceptedExtensions(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___acceptedExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator,
                                                                                                                          ::System::Collections::IList* acceptedAlgorithms) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(tokenGenerator, acceptedAlgorithms));
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenGenerator, acceptedAlgorithms);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator,
                                                                                                                          ::System::Collections::IList* acceptedAlgorithms,
                                                                                                                          ::System::Collections::IList* acceptedPolicy) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(tokenGenerator, acceptedAlgorithms, acceptedPolicy));
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                      ::System::Collections::IList* acceptedPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenGenerator, acceptedAlgorithms, acceptedPolicy);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator,
                                                                                                                          ::System::Collections::IList* acceptedAlgorithms,
                                                                                                                          ::System::Collections::IList* acceptedPolicies,
                                                                                                                          ::System::Collections::IList* acceptedExtensions) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>(tokenGenerator, acceptedAlgorithms, acceptedPolicies, acceptedExtensions));
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                      ::System::Collections::IList* acceptedPolicies, ::System::Collections::IList* acceptedExtensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenGenerator, acceptedAlgorithms, acceptedPolicies, acceptedExtensions);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::AddStatusString(::StringW statusString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "AddStatusString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusString);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponseGenerator::SetFailInfoField(int32_t field) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "SetFailInfoField",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GetPkiStatusInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(),
                                                                             "GetPkiStatusInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request,
                                                                                                                 ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampResponse*, false>(this, ___internal_method, request, serialNumber, genTime);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request,
                                                                                                                 ::Org::BouncyCastle::Math::BigInteger* serialNumber,
                                                                                                                 ::Org::BouncyCastle::Utilities::Date::DateTimeObject* genTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampResponse*, false>(this, ___internal_method, request, serialNumber, genTime);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponseGenerator::GenerateFailResponse(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status, int32_t failInfoField,
                                                                                                                             ::StringW statusString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*>::get(), "GenerateFailResponse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiStatus>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampResponse*, false>(this, ___internal_method, status, failInfoField, statusString);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator::TimeStampResponseGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
