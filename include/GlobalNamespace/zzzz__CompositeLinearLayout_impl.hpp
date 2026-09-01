#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLinearLayout.hpp"
#include "GlobalNamespace/zzzz__CompositeLayoutBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeLinearLayout_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeLinearLayout.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLinearLayout::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>*, int32_t,
                                                                                                          int32_t)>(&::GlobalNamespace::CompositeLinearLayout::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5993300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLinearLayout*>(), { ::i2c::class_of<::GlobalNamespace::CompositeLinearLayout*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLinearLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLinearLayout::*)()>(&::GlobalNamespace::CompositeLinearLayout::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5993304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLinearLayout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::CompositeLinearLayout::__cordl_internal_get__movementStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementStep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CompositeLinearLayout::__cordl_internal_get__movementStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementStep;
}
constexpr void GlobalNamespace::CompositeLinearLayout::__cordl_internal_set__movementStep(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementStep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CompositeLinearLayout::__cordl_internal_get__defaultRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CompositeLinearLayout::__cordl_internal_get__defaultRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr void GlobalNamespace::CompositeLinearLayout::__cordl_internal_set__defaultRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultRotation = value;
}
constexpr bool& GlobalNamespace::CompositeLinearLayout::__cordl_internal_get__startFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr bool const& GlobalNamespace::CompositeLinearLayout::__cordl_internal_get__startFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr void GlobalNamespace::CompositeLinearLayout::__cordl_internal_set__startFromCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startFromCenter = value;
}
inline void GlobalNamespace::CompositeLinearLayout::Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements,
                                                          int32_t sameIdElements) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CompositeLinearLayout*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childTransforms, numberOfElements, sameIdElements);
}
inline void GlobalNamespace::CompositeLinearLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLinearLayout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeLinearLayout* GlobalNamespace::CompositeLinearLayout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeLinearLayout*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeLinearLayout::CompositeLinearLayout() {}
