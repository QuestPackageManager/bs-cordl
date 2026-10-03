#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/MetaQuestFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/zzzz__MetaQuestFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/zzzz__MetaQuestFeature_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "visibleName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "manifestName", ty: "::StringW", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice::MetaQuestFeature_TargetDevice(::StringW visibleName, ::StringW manifestName, bool enabled,
                                                                                                                              bool active) noexcept {
  this->visibleName = visibleName;
  this->manifestName = manifestName;
  this->enabled = enabled;
  this->active = active;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice::MetaQuestFeature_TargetDevice() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e46430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e46434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { "OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e46438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature* UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::MetaQuestFeature() {}
