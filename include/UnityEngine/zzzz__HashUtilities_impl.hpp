#pragma once
// IWYU pragma private; include "UnityEngine/HashUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HashUtilities_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::HashUtilities.AppendHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Hash128>, ::by_ref<::UnityEngine::Hash128>)>(&::UnityEngine::HashUtilities::AppendHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ac4d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HashUtilities*>(),
                                                             { "AppendHash", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::HashUtilities::AppendHash(::by_ref<::UnityEngine::Hash128> inHash, ::by_ref<::UnityEngine::Hash128> outHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HashUtilities*>(),
                                                           { "AppendHash", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inHash, outHash);
}
// Ctor Parameters []
constexpr ::UnityEngine::HashUtilities::HashUtilities() {}
