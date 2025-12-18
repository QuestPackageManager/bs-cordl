#pragma once
// IWYU pragma private; include "UnityEngine/HashUnsafeUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HashUnsafeUtilities_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::HashUnsafeUtilities.ComputeHash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, uint64_t, uint64_t*, uint64_t*)>(&::UnityEngine::HashUnsafeUtilities::ComputeHash128)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68fd620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HashUnsafeUtilities.ComputeHash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, uint64_t, ::UnityEngine::Hash128*)>(&::UnityEngine::HashUnsafeUtilities::ComputeHash128)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68fd5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Hash128*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::HashUnsafeUtilities::ComputeHash128(void* data, uint64_t dataSize, uint64_t* hash1, uint64_t* hash2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, dataSize, hash1, hash2);
}
inline void UnityEngine::HashUnsafeUtilities::ComputeHash128(void* data, uint64_t dataSize, ::UnityEngine::Hash128* hash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Hash128*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, dataSize, hash);
}
// Ctor Parameters []
constexpr ::UnityEngine::HashUnsafeUtilities::HashUnsafeUtilities() {}
