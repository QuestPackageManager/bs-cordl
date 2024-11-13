#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystemDescriptor.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystemDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRDisplaySubsystemDescriptor::*)()>(
    &::UnityEngine::XR::XRDisplaySubsystemDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a849d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* UnityEngine::XR::XRDisplaySubsystemDescriptor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>());
}
inline void UnityEngine::XR::XRDisplaySubsystemDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystemDescriptor::XRDisplaySubsystemDescriptor() {}
