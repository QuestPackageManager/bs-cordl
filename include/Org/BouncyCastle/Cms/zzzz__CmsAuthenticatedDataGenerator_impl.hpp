#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedData_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11d984c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11d9850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsAuthenticatedData* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x11d9854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsAuthenticatedData* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x11da394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>());
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>(rand));
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rand);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW macOid,
                                                                                                                       ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAuthenticatedData*, false>(this, ___internal_method, content, macOid, keyGen);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAuthenticatedData*, false>(this, ___internal_method, content, encryptionOid);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator::CmsAuthenticatedDataGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
