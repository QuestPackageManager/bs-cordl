#pragma once
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::INotification.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::UnityEngine::Playables::INotification::*)()>(
    &::UnityEngine::Playables::INotification::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotification*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotification*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityEngine::PropertyName UnityEngine::Playables::INotification::get_id() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotification*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(this, ___internal_method);
}
