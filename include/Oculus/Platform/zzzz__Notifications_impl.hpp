#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Notifications_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Notifications.MarkAsRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&::Oculus::Platform::Notifications::MarkAsRead)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x26fed94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Notifications*>::get(), "MarkAsRead", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::Notifications::MarkAsRead(uint64_t notificationID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Notifications*>::get(), "MarkAsRead", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, notificationID);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Notifications::Notifications() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
