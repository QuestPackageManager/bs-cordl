#pragma once
#include "UnityEngine/UIElements/Experimental/zzzz__IValueAnimationUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Experimental::IValueAnimationUpdate::*)(int64_t)>(
    &::UnityEngine::UIElements::Experimental::IValueAnimationUpdate::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Experimental::IValueAnimationUpdate::Tick(int64_t currentTimeMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
