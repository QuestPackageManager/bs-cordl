#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Livestreaming_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Livestreaming.SetStatusUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LivestreamingStatus*>*)>(
    &::Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26feac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Livestreaming*>::get(), "SetStatusUpdateNotificationCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LivestreamingStatus*>*>::get() })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LivestreamingStatus*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Livestreaming*>::get(), "SetStatusUpdateNotificationCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LivestreamingStatus*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Livestreaming::Livestreaming() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
