#pragma once
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatEffectDidFinishEvent.HandleBeatEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatEffectDidFinishEvent::*)(::GlobalNamespace::BeatEffect*)>(
    &::GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatEffectDidFinishEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatEffectDidFinishEvent*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatEffectDidFinishEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatEffect);
}
