#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/ViveLighthouse.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
#include "Unity/XR/OpenVR/zzzz__ViveLighthouse_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveLighthouse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::OpenVR::ViveLighthouse::*)()>(&::Unity::XR::OpenVR::ViveLighthouse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44c4f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::OpenVR::ViveLighthouse*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Unity::XR::OpenVR::ViveLighthouse* Unity::XR::OpenVR::ViveLighthouse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::OpenVR::ViveLighthouse*>());
}
inline void Unity::XR::OpenVR::ViveLighthouse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::OpenVR::ViveLighthouse*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::OpenVR::ViveLighthouse::ViveLighthouse() {}
