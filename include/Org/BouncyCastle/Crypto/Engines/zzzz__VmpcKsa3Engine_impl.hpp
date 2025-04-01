#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/VmpcKsa3Engine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcEngine_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcKsa3Engine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x237b620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine.InitKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x237b660;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x237b900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::get_AlgorithmName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyBytes, ivBytes);
}
inline void Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine* Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::VmpcKsa3Engine() {}
