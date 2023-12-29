#pragma once
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GlobalNamespace/zzzz__AudioReferenceCountingCache_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceCountingCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioReferenceCountingCache::*)()>(&::GlobalNamespace::AudioReferenceCountingCache::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21b3650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioReferenceCountingCache*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AudioReferenceCountingCache* GlobalNamespace::AudioReferenceCountingCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AudioReferenceCountingCache*>());
}
inline void GlobalNamespace::AudioReferenceCountingCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioReferenceCountingCache*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioReferenceCountingCache::AudioReferenceCountingCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
