#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver.HandleSaberSwingRatingCounterDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::*)(::GlobalNamespace::ISaberSwingRatingCounter*)>(
    &::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::HandleSaberSwingRatingCounterDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberSwingRatingCounter);
}
