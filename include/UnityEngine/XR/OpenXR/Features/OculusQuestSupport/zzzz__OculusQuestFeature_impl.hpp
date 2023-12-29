#pragma once
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/OculusQuestSupport/zzzz__OculusQuestFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b17a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__get_targetQuest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__get_targetQuest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest;
}
constexpr void UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__set_targetQuest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetQuest = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__get_targetQuest2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest2;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__get_targetQuest2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetQuest2;
}
constexpr void UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__set_targetQuest2(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetQuest2 = value;
}
inline ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature* UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>());
}
inline void UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::OculusQuestFeature() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
