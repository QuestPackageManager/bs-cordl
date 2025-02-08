#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioReferenceCountingCache.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_impl.hpp"
#include "GlobalNamespace/zzzz__AudioReferenceCountingCache_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceCountingCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioReferenceCountingCache::*)()>(&::GlobalNamespace::AudioReferenceCountingCache::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3c2622c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioReferenceCountingCache*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioReferenceCountingCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioReferenceCountingCache*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioReferenceCountingCache* GlobalNamespace::AudioReferenceCountingCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioReferenceCountingCache*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioReferenceCountingCache::AudioReferenceCountingCache() {}
