#pragma once
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SeedWrapEngine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf538ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine* Org::BouncyCastle::Crypto::Engines::SeedWrapEngine::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine*>());
}
inline void Org::BouncyCastle::Crypto::Engines::SeedWrapEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine::SeedWrapEngine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
