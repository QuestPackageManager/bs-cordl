#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagementAnalytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent::XRManagementAnalytics_BuildEvent(::StringW buildGuid, ::StringW buildTarget, ::StringW buildTargetGroup,
                                                                                                            ::ArrayW<::StringW> assigned_loaders) noexcept {
  this->buildGuid = buildGuid;
  this->buildTarget = buildTarget;
  this->buildTargetGroup = buildTargetGroup;
  this->assigned_loaders = assigned_loaders;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent::XRManagementAnalytics_BuildEvent() {}
//  Writing Method size for method: ::UnityEngine::XR::Management::XRManagementAnalytics.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::Management::XRManagementAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e519c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Management::XRManagementAnalytics::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRManagementAnalytics::XRManagementAnalytics() {}
