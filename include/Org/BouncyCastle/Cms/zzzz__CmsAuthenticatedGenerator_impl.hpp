#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35aa22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x35aa284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rand);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::CmsAuthenticatedGenerator() {}
