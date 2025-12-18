#pragma once
// IWYU pragma private; include "UnityEngine/HashUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HashUtilities_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::HashUtilities.AppendHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Hash128>, ::ByRef<::UnityEngine::Hash128>)>(
    &::UnityEngine::HashUtilities::AppendHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68fd5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUtilities*>::get(), "AppendHash", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::HashUtilities::AppendHash(::ByRef<::UnityEngine::Hash128> inHash, ::ByRef<::UnityEngine::Hash128> outHash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUtilities*>::get(), "AppendHash", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inHash, outHash);
}
// Ctor Parameters []
constexpr ::UnityEngine::HashUtilities::HashUtilities() {}
