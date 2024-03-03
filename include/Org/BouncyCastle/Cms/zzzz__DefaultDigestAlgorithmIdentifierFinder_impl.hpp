#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder.find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
        &::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x125e188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(), "find", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder.find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::*)(::StringW)>(&::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x126e1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(), "find",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::*)()>(
    &::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x125e180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::setStaticF_digestOids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestOids",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::getStaticF_digestOids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestOids",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::setStaticF_digestNameToOids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestNameToOids",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::getStaticF_digestNameToOids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestNameToOids",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get>();
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(), "find", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method, sigAlgId);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find(::StringW digAlgName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(), "find",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method, digAlgName);
}
inline ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>());
}
inline void Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::DefaultDigestAlgorithmIdentifierFinder() {}
