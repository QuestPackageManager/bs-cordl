#pragma once
#include "UnityEngine/UIElements/zzzz__IPointerCaptureEventInternal_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerCaptureEventInternal.get_pointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::IPointerCaptureEventInternal::*)()>(
    &::UnityEngine::UIElements::IPointerCaptureEventInternal::get_pointerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IPointerCaptureEventInternal*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IPointerCaptureEventInternal*>::get(), 0));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::IPointerCaptureEventInternal::get_pointerId() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IPointerCaptureEventInternal*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
