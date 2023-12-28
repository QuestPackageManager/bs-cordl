#pragma once
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::__LightGroupCircularLayouter__RotationDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::__LightGroupCircularLayouter__RotationDirection() {}
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::Clockwise{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::Counterclockwise{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::LightGroupCircularLayouter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupCircularLayouter::*)()>(&::GlobalNamespace::LightGroupCircularLayouter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23a9830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupCircularLayouter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightGroupCircularLayouter::__get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& GlobalNamespace::LightGroupCircularLayouter::__get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr float_t& GlobalNamespace::LightGroupCircularLayouter::__get__angle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____angle;
}
constexpr float_t const& GlobalNamespace::LightGroupCircularLayouter::__get__angle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____angle;
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__angle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____angle = value;
}
constexpr float_t& GlobalNamespace::LightGroupCircularLayouter::__get__startingAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startingAngle;
}
constexpr float_t const& GlobalNamespace::LightGroupCircularLayouter::__get__startingAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startingAngle;
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__startingAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startingAngle = value;
}
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection& GlobalNamespace::LightGroupCircularLayouter::__get__rotationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDirection;
}
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const& GlobalNamespace::LightGroupCircularLayouter::__get__rotationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDirection;
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__rotationDirection(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationDirection = value;
}
constexpr bool& GlobalNamespace::LightGroupCircularLayouter::__get__staticRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____staticRotation;
}
constexpr bool const& GlobalNamespace::LightGroupCircularLayouter::__get__staticRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____staticRotation;
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__staticRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____staticRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightGroupCircularLayouter::__get__additionalAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalAngle;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightGroupCircularLayouter::__get__additionalAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalAngle;
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__additionalAngle(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalAngle = value;
}
inline ::GlobalNamespace::LightGroupCircularLayouter* GlobalNamespace::LightGroupCircularLayouter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightGroupCircularLayouter*>());
}
inline void GlobalNamespace::LightGroupCircularLayouter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupCircularLayouter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupCircularLayouter::LightGroupCircularLayouter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
