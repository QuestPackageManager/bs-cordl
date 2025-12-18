#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Icao/LdsSecurityObject.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__LdsSecurityObject_def.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__DataGroupHash_def.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__LdsVersionInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3353a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x3353ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3354234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>,
    ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*)>(&::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33542d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.CheckDatagroupHashSeqSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::CheckDatagroupHashSeqSize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3354194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), "CheckDatagroupHashSeqSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3354378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.get_DigestAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_DigestAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3354390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                               "get_DigestAlgorithmIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.GetDatagroupHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> (
    ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(&::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetDatagroupHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3354398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                               "GetDatagroupHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.get_VersionInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_VersionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33543a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                               "get_VersionInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x33543a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_digestAlgorithmIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithmIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_digestAlgorithmIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithmIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_digestAlgorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestAlgorithmIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>&
Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_datagroupHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datagroupHash;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> const&
Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_datagroupHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datagroupHash;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_datagroupHash(
    ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___datagroupHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_versionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* const& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_versionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionInfo;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_versionInfo(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___versionInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline void
Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                        ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> datagroupHash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestAlgorithmIdentifier, datagroupHash);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                                    ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> datagroupHash,
                                                                    ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* versionInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestAlgorithmIdentifier, datagroupHash, versionInfo);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::CheckDatagroupHashSeqSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), "CheckDatagroupHashSeqSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_DigestAlgorithmIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                             "get_DigestAlgorithmIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetDatagroupHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                             "GetDatagroupHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_VersionInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(),
                                                                             "get_VersionInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*
Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                           ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> datagroupHash) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(digestAlgorithmIdentifier, datagroupHash));
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*
Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                           ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, ::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> datagroupHash,
                                                           ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* versionInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(digestAlgorithmIdentifier, datagroupHash, versionInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::LdsSecurityObject() {}
