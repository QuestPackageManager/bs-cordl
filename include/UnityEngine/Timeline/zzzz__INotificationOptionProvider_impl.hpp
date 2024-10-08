#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/INotificationOptionProvider.hpp"
#include "UnityEngine/Timeline/zzzz__INotificationOptionProvider_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::INotificationOptionProvider.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::NotificationFlags (::UnityEngine::Timeline::INotificationOptionProvider::*)()>(
    &::UnityEngine::Timeline::INotificationOptionProvider::get_flags)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::INotificationOptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::INotificationOptionProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::NotificationFlags UnityEngine::Timeline::INotificationOptionProvider::get_flags() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::INotificationOptionProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::NotificationFlags, false>(this, ___internal_method);
}
