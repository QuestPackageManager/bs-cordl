#pragma once
// IWYU pragma private; include "GlobalNamespace\AudioReferenceCountingCache.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_impl.hpp"
#include "GlobalNamespace/zzzz__AudioReferenceCountingCache_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceCountingCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceCountingCache::*)()>(&::GlobalNamespace::AudioReferenceCountingCache::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a285f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioReferenceCountingCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioReferenceCountingCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioReferenceCountingCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioReferenceCountingCache* GlobalNamespace::AudioReferenceCountingCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioReferenceCountingCache*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioReferenceCountingCache::AudioReferenceCountingCache() {}
