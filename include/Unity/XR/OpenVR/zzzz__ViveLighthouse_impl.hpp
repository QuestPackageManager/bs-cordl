#pragma once
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
#include "Unity/XR/OpenVR/zzzz__ViveLighthouse_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveLighthouse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::OpenVR::ViveLighthouse::*)()>(&::Unity::XR::OpenVR::ViveLighthouse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b5874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::OpenVR::ViveLighthouse*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Unity::XR::OpenVR::ViveLighthouse* Unity::XR::OpenVR::ViveLighthouse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Unity::XR::OpenVR::ViveLighthouse*>());
}
inline void Unity::XR::OpenVR::ViveLighthouse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::OpenVR::ViveLighthouse*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::OpenVR::ViveLighthouse::ViveLighthouse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
