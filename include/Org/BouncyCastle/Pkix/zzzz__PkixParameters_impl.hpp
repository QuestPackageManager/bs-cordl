#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathChecker_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x35bdf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsRevocationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsRevocationEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsRevocationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsRevocationEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsExplicitPolicyRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsExplicitPolicyRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsExplicitPolicyRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsExplicitPolicyRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsAnyPolicyInhibited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsAnyPolicyInhibited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsAnyPolicyInhibited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsAnyPolicyInhibited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsPolicyMappingInhibited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyMappingInhibited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsPolicyMappingInhibited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyMappingInhibited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsPolicyQualifiersRejected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyQualifiersRejected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsPolicyQualifiersRejected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyQualifiersRejected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::get_Date)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::set_Date)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35be0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTrustAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetTrustAnchors)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35be104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTrustAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetTrustAnchors)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x35be168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTargetCertConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::X509CertStoreSelector* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetTargetCertConstraints)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x35be61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTargetCertConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Selector*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetTargetCertConstraints)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x35be714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetInitialPolicies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetInitialPolicies)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35be818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetInitialPolicies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetInitialPolicies)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x35be894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetCertPathCheckers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetCertPathCheckers)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x35bec28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetCertPathCheckers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetCertPathCheckers)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x35bf000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.AddCertPathChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Pkix::PkixCertPathChecker*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::AddCertPathChecker)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x35bf3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::Clone)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x35bf4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetParams)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x35bf548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsUseDeltasEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsUseDeltasEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bf8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsUseDeltasEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsUseDeltasEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bf8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_ValidityModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_ValidityModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bf900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_ValidityModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(int32_t)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_ValidityModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bf908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetStores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetStores)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x35bf910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.AddStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::AddStore)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x35bfd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.AddAdditionalStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::AddAdditionalStore)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x35bfde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetAdditionalStores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetAdditionalStores)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35bfeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetStores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetStores)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35bff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsAdditionalLocationsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsAdditionalLocationsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bff74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetAdditionalLocationsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetAdditionalLocationsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bff7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTargetConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Selector* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetTargetConstraints)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x35bff84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTargetConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Selector*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetTargetConstraints)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x35c006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTrustedACIssuers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetTrustedACIssuers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35c0170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTrustedACIssuers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetTrustedACIssuers)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x35c01d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetNecessaryACAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetNecessaryACAttributes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35c0614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetNecessaryACAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetNecessaryACAttributes)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x35c0678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetProhibitedACAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetProhibitedACAttributes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35c0a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetProhibitedACAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetProhibitedACAttributes)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x35c0a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetAttrCertCheckers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixParameters::GetAttrCertCheckers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35c0dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetAttrCertCheckers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixParameters::SetAttrCertCheckers)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x35c0e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 47 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_trustAnchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustAnchors;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_trustAnchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustAnchors;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_trustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustAnchors = value;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_date() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___date;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_date() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___date;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_date(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___date = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_certPathCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathCheckers;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_certPathCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathCheckers;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_certPathCheckers(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certPathCheckers = value;
}
constexpr bool& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_revocationEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationEnabled;
}
constexpr bool const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_revocationEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationEnabled;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_revocationEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revocationEnabled = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_initialPolicies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialPolicies;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_initialPolicies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialPolicies;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_initialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialPolicies = value;
}
constexpr bool& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_explicitPolicyRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explicitPolicyRequired;
}
constexpr bool const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_explicitPolicyRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explicitPolicyRequired;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_explicitPolicyRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___explicitPolicyRequired = value;
}
constexpr bool& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_anyPolicyInhibited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyPolicyInhibited;
}
constexpr bool const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_anyPolicyInhibited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyPolicyInhibited;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_anyPolicyInhibited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyPolicyInhibited = value;
}
constexpr bool& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_policyMappingInhibited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyMappingInhibited;
}
constexpr bool const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_policyMappingInhibited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyMappingInhibited;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_policyMappingInhibited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policyMappingInhibited = value;
}
constexpr bool& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_policyQualifiersRejected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyQualifiersRejected;
}
constexpr bool const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_policyQualifiersRejected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyQualifiersRejected;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_policyQualifiersRejected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policyQualifiersRejected = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_certSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certSelector;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_certSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certSelector;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_certSelector(::Org::BouncyCastle::X509::Store::IX509Selector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certSelector = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_stores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stores;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_stores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stores;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_stores(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stores = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_selector(::Org::BouncyCastle::X509::Store::IX509Selector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selector = value;
}
constexpr bool& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_additionalLocationsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLocationsEnabled;
}
constexpr bool const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_additionalLocationsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLocationsEnabled;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_additionalLocationsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalLocationsEnabled = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_additionalStores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalStores;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_additionalStores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalStores;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_additionalStores(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalStores = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_trustedACIssuers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedACIssuers;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_trustedACIssuers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedACIssuers;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_trustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustedACIssuers = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_necessaryACAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___necessaryACAttributes;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_necessaryACAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___necessaryACAttributes;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_necessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___necessaryACAttributes = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_prohibitedACAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prohibitedACAttributes;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_prohibitedACAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prohibitedACAttributes;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_prohibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prohibitedACAttributes = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_attrCertCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertCheckers;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_attrCertCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertCheckers;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_attrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrCertCheckers = value;
}
constexpr int32_t& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_validityModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validityModel;
}
constexpr int32_t const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_validityModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validityModel;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_validityModel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validityModel = value;
}
constexpr bool& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_useDeltas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDeltas;
}
constexpr bool const& Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_get_useDeltas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDeltas;
}
constexpr void Org::BouncyCastle::Pkix::PkixParameters::__cordl_internal_set_useDeltas(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useDeltas = value;
}
inline void Org::BouncyCastle::Pkix::PkixParameters::_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trustAnchors);
}
inline bool Org::BouncyCastle::Pkix::PkixParameters::get_IsRevocationEnabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_IsRevocationEnabled(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Pkix::PkixParameters::get_IsExplicitPolicyRequired() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_IsExplicitPolicyRequired(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Pkix::PkixParameters::get_IsAnyPolicyInhibited() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_IsAnyPolicyInhibited(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyMappingInhibited() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyMappingInhibited(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyQualifiersRejected() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyQualifiersRejected(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::Pkix::PkixParameters::get_Date() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_Date(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixParameters::GetTrustAnchors() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetTrustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet* tas) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tas);
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::Pkix::PkixParameters::GetTargetCertConstraints() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetTargetCertConstraints(::Org::BouncyCastle::X509::Store::IX509Selector* selector) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixParameters::GetInitialPolicies() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetInitialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialPolicies);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetCertPathCheckers(::System::Collections::IList* checkers) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checkers);
}
inline ::System::Collections::IList* Org::BouncyCastle::Pkix::PkixParameters::GetCertPathCheckers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::AddCertPathChecker(::Org::BouncyCastle::Pkix::PkixCertPathChecker* checker) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checker);
}
inline ::System::Object* Org::BouncyCastle::Pkix::PkixParameters::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetParams(::Org::BouncyCastle::Pkix::PkixParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline bool Org::BouncyCastle::Pkix::PkixParameters::get_IsUseDeltasEnabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_IsUseDeltasEnabled(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Pkix::PkixParameters::get_ValidityModel() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::set_ValidityModel(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetStores(::System::Collections::IList* stores) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stores);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::AddStore(::Org::BouncyCastle::X509::Store::IX509Store* store) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::AddAdditionalStore(::Org::BouncyCastle::X509::Store::IX509Store* store) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store);
}
inline ::System::Collections::IList* Org::BouncyCastle::Pkix::PkixParameters::GetAdditionalStores() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Pkix::PkixParameters::GetStores() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkix::PkixParameters::get_IsAdditionalLocationsEnabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetAdditionalLocationsEnabled(bool enabled) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline ::Org::BouncyCastle::X509::Store::IX509Selector* Org::BouncyCastle::Pkix::PkixParameters::GetTargetConstraints() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Selector*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetTargetConstraints(::Org::BouncyCastle::X509::Store::IX509Selector* selector) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixParameters::GetTrustedACIssuers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetTrustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trustedACIssuers);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixParameters::GetNecessaryACAttributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetNecessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, necessaryACAttributes);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixParameters::GetProhibitedACAttributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetProhibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prohibitedACAttributes);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixParameters::GetAttrCertCheckers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixParameters::SetAttrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrCertCheckers);
}
inline ::Org::BouncyCastle::Pkix::PkixParameters* Org::BouncyCastle::Pkix::PkixParameters::New_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixParameters*>(trustAnchors));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixParameters::PkixParameters() {}
