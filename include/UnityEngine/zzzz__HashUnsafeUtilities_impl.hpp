#pragma once
// IWYU pragma private; include "UnityEngine/HashUnsafeUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HashUnsafeUtilities_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::HashUnsafeUtilities.ComputeHash128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint64_t, uint64_t*, uint64_t*)>(&::UnityEngine::HashUnsafeUtilities::ComputeHash128)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ac4da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HashUnsafeUtilities*>(),
                                                { "ComputeHash128", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HashUnsafeUtilities.ComputeHash128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint64_t, ::UnityEngine::Hash128*)>(&::UnityEngine::HashUnsafeUtilities::ComputeHash128)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ac4d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HashUnsafeUtilities*>(),
                                                             { "ComputeHash128", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Hash128*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::HashUnsafeUtilities::ComputeHash128(void* data, uint64_t dataSize, uint64_t* hash1, uint64_t* hash2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HashUnsafeUtilities*>(),
                                              { "ComputeHash128", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataSize, hash1, hash2);
}
inline void UnityEngine::HashUnsafeUtilities::ComputeHash128(void* data, uint64_t dataSize, ::UnityEngine::Hash128* hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HashUnsafeUtilities*>(),
                                                           { "ComputeHash128", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Hash128*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataSize, hash);
}
// Ctor Parameters []
constexpr ::UnityEngine::HashUnsafeUtilities::HashUnsafeUtilities() {}
