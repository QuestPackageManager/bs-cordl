#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/MetaQuestFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/zzzz__MetaQuestFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/zzzz__MetaQuestFeature_def.hpp"
// Ctor Parameters [CppParam { name: "visibleName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "manifestName", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice::MetaQuestFeature_TargetDevice(::StringW visibleName, ::StringW manifestName, bool enabled,
                                                                                                                              bool active) noexcept {
  this->visibleName = visibleName;
  this->manifestName = manifestName;
  this->enabled = enabled;
  this->active = active;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice::MetaQuestFeature_TargetDevice() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x683c318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature* UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::MetaQuestFeature() {}
