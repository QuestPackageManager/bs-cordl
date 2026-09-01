#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\Features\OculusQuestSupport\OculusQuestFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/OculusQuestSupport/zzzz__OculusQuestFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a0e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__cordl_internal_get_targetQuest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__cordl_internal_get_targetQuest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest;
}
constexpr void UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__cordl_internal_set_targetQuest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetQuest = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__cordl_internal_get_targetQuest2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest2;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__cordl_internal_get_targetQuest2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest2;
}
constexpr void UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__cordl_internal_set_targetQuest2(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetQuest2 = value;
}
inline void UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature* UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::OculusQuestFeature() {}
