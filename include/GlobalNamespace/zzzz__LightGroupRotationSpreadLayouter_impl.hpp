#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupRotationSpreadLayouter.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationSpreadLayouter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupRotationSpreadLayouter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupRotationSpreadLayouter::*)()>(
    &::GlobalNamespace::LightGroupRotationSpreadLayouter::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b8cac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupRotationSpreadLayouter*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightGroupRotationSpreadLayouter::__cordl_internal_get__rotationStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightGroupRotationSpreadLayouter::__cordl_internal_get__rotationStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStep;
}
constexpr void GlobalNamespace::LightGroupRotationSpreadLayouter::__cordl_internal_set__rotationStep(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationStep = value;
}
constexpr bool& GlobalNamespace::LightGroupRotationSpreadLayouter::__cordl_internal_get__startFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr bool const& GlobalNamespace::LightGroupRotationSpreadLayouter::__cordl_internal_get__startFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr void GlobalNamespace::LightGroupRotationSpreadLayouter::__cordl_internal_set__startFromCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startFromCenter = value;
}
inline void GlobalNamespace::LightGroupRotationSpreadLayouter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupRotationSpreadLayouter*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupRotationSpreadLayouter* GlobalNamespace::LightGroupRotationSpreadLayouter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightGroupRotationSpreadLayouter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupRotationSpreadLayouter::LightGroupRotationSpreadLayouter() {}
