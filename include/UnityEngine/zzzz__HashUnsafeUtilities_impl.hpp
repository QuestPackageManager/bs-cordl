#pragma once
// IWYU pragma private; include "UnityEngine/HashUnsafeUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HashUnsafeUtilities_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::HashUnsafeUtilities.ComputeHash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, uint64_t, ::cordl_internals::Ptr<uint64_t>, ::cordl_internals::Ptr<uint64_t>)>(
    &::UnityEngine::HashUnsafeUtilities::ComputeHash128)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4836bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HashUnsafeUtilities.ComputeHash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, uint64_t, ::cordl_internals::Ptr<::UnityEngine::Hash128>)>(
    &::UnityEngine::HashUnsafeUtilities::ComputeHash128)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4836f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::Hash128>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::HashUnsafeUtilities::ComputeHash128(::cordl_internals::Ptr<void> data, uint64_t dataSize, ::cordl_internals::Ptr<uint64_t> hash1, ::cordl_internals::Ptr<uint64_t> hash2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, dataSize, hash1, hash2);
}
inline void UnityEngine::HashUnsafeUtilities::ComputeHash128(::cordl_internals::Ptr<void> data, uint64_t dataSize, ::cordl_internals::Ptr<::UnityEngine::Hash128> hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HashUnsafeUtilities*>::get(), "ComputeHash128", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::Hash128>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, dataSize, hash);
}
// Ctor Parameters []
constexpr ::UnityEngine::HashUnsafeUtilities::HashUnsafeUtilities() {}
