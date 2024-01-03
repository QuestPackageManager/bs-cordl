#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2TbsCertListGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtcTime_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x119b74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.SetSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119b7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetSignature", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.SetIssuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119b7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetIssuer", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.SetThisUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(::Org::BouncyCastle::Asn1::DerUtcTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetThisUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x119b7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetThisUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.SetNextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(::Org::BouncyCastle::Asn1::DerUtcTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetNextUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x119b834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetNextUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.SetThisUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(::Org::BouncyCastle::Asn1::X509::Time*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetThisUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119b8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetThisUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.SetNextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(::Org::BouncyCastle::Asn1::X509::Time*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetNextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119b8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetNextUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x119b8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerUtcTime*, int32_t)>(&::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x119b99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::X509::Time*, int32_t)>(&::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119ba28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::X509::Time*, int32_t, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x119ba30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::X509::Time*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x119c540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.SetExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119c68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetExtensions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator.GenerateTbsCertList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateList* (::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::GenerateTbsCertList)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x119c694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(),
                                                                               "GenerateTbsCertList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_thisUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_thisUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__set_thisUpdate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thisUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_nextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_nextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__set_nextUpdate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_crlEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlEntries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__get_crlEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlEntries;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::__set_crlEntries(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___crlEntries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>());
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetSignature", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetIssuer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetThisUpdate(::Org::BouncyCastle::Asn1::DerUtcTime* thisUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetThisUpdate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thisUpdate);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetNextUpdate(::Org::BouncyCastle::Asn1::DerUtcTime* nextUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetNextUpdate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextUpdate);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetThisUpdate(::Org::BouncyCastle::Asn1::X509::Time* thisUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetThisUpdate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thisUpdate);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetNextUpdate(::Org::BouncyCastle::Asn1::X509::Time* nextUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetNextUpdate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextUpdate);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry(::Org::BouncyCastle::Asn1::Asn1Sequence* crlEntry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crlEntry);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::DerUtcTime* revocationDate,
                                                                               int32_t reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userCertificate, revocationDate, reason);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate,
                                                                               int32_t reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userCertificate, revocationDate, reason);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate,
                                                                               int32_t reason, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* invalidityDate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userCertificate, revocationDate, reason, invalidityDate);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate,
                                                                               ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "AddCrlEntry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userCertificate, revocationDate, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(), "SetExtensions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::GenerateTbsCertList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*>::get(),
                                                                             "GenerateTbsCertList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator::V2TbsCertListGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
