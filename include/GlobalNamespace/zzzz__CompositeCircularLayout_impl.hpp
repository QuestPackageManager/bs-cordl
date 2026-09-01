#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeCircularLayout.hpp"
#include "GlobalNamespace/zzzz__CompositeLayoutBase_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeCircularLayout_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeCircularLayout.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeCircularLayout::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>*,
                                                                                                            int32_t, int32_t)>(&::GlobalNamespace::CompositeCircularLayout::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598da74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeCircularLayout*>(), { ::i2c::class_of<::GlobalNamespace::CompositeCircularLayout*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeCircularLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeCircularLayout::*)()>(&::GlobalNamespace::CompositeCircularLayout::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x598da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeCircularLayout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void GlobalNamespace::CompositeCircularLayout::__cordl_internal_set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr float_t& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__angle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____angle;
}
constexpr float_t const& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__angle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____angle;
}
constexpr void GlobalNamespace::CompositeCircularLayout::__cordl_internal_set__angle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____angle = value;
}
constexpr float_t& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__startingAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startingAngle;
}
constexpr float_t const& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__startingAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startingAngle;
}
constexpr void GlobalNamespace::CompositeCircularLayout::__cordl_internal_set__startingAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startingAngle = value;
}
constexpr ::GlobalNamespace::LightGroupCircularLayouter_RotationDirection& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__rotationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDirection;
}
constexpr ::GlobalNamespace::LightGroupCircularLayouter_RotationDirection const& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__rotationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDirection;
}
constexpr void GlobalNamespace::CompositeCircularLayout::__cordl_internal_set__rotationDirection(::GlobalNamespace::LightGroupCircularLayouter_RotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationDirection = value;
}
constexpr bool& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__staticRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____staticRotation;
}
constexpr bool const& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__staticRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____staticRotation;
}
constexpr void GlobalNamespace::CompositeCircularLayout::__cordl_internal_set__staticRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____staticRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__additionalAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalAngle;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CompositeCircularLayout::__cordl_internal_get__additionalAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalAngle;
}
constexpr void GlobalNamespace::CompositeCircularLayout::__cordl_internal_set__additionalAngle(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalAngle = value;
}
inline void GlobalNamespace::CompositeCircularLayout::Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements,
                                                            int32_t sameIdElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CompositeCircularLayout*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childTransforms, numberOfElements, sameIdElements);
}
inline void GlobalNamespace::CompositeCircularLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeCircularLayout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeCircularLayout* GlobalNamespace::CompositeCircularLayout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeCircularLayout*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeCircularLayout::CompositeCircularLayout() {}
