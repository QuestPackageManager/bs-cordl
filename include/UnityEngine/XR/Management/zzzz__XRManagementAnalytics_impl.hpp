#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "assigned_loaders", ty:
// "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__XRManagementAnalytics__BuildEvent(::StringW buildGuid, ::StringW buildTarget, ::StringW buildTargetGroup,
                                                                                                                  ::ArrayW<::StringW, ::Array<::StringW>*> assigned_loaders) noexcept {
  this->buildGuid = buildGuid;
  this->buildTarget = buildTarget;
  this->buildTargetGroup = buildTargetGroup;
  this->assigned_loaders = assigned_loaders;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__XRManagementAnalytics__BuildEvent() {}
//  Writing Method size for method: ::UnityEngine::XR::Management::XRManagementAnalytics.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::Management::XRManagementAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c765e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRManagementAnalytics*>::get(),
                                                                               "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Management::XRManagementAnalytics::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRManagementAnalytics*>::get(),
                                                                             "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRManagementAnalytics::XRManagementAnalytics() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
