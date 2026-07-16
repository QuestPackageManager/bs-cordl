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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a07474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature* UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::MetaQuestFeature() {}
