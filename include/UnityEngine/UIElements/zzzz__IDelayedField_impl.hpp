#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDelayedField.hpp"
#include "UnityEngine/UIElements/zzzz__IDelayedField_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDelayedField.get_isDelayed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IDelayedField::*)()>(&::UnityEngine::UIElements::IDelayedField::get_isDelayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDelayedField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDelayedField*>::get(), 0));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::IDelayedField::get_isDelayed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDelayedField*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
