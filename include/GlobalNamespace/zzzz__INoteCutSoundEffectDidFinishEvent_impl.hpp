#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteCutSoundEffectDidFinishEvent.hpp"
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent.HandleNoteCutSoundEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteCutSoundEffectDidFinishEvent::*)(::GlobalNamespace::NoteCutSoundEffect*)>(
    &::GlobalNamespace::INoteCutSoundEffectDidFinishEvent::HandleNoteCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteCutSoundEffectDidFinishEvent::HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutSoundEffect);
}
