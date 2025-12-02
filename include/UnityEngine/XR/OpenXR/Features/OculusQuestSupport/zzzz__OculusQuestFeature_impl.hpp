#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OculusQuestSupport/OculusQuestFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/OculusQuestSupport/zzzz__OculusQuestFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67d60b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature* UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::OculusQuestFeature() {}
