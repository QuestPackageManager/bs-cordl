#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeRotationSpreadLayout.hpp"
#include "GlobalNamespace/zzzz__CompositeLayoutBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeRotationSpreadLayout_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeRotationSpreadLayout.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeRotationSpreadLayout::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>*,
                                                                                                                  int32_t, int32_t)>(&::GlobalNamespace::CompositeRotationSpreadLayout::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5993388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeRotationSpreadLayout*>(), { ::i2c::class_of<::GlobalNamespace::CompositeRotationSpreadLayout*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeRotationSpreadLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeRotationSpreadLayout::*)()>(&::GlobalNamespace::CompositeRotationSpreadLayout::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x599338c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeRotationSpreadLayout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::CompositeRotationSpreadLayout::__cordl_internal_get__rotationStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CompositeRotationSpreadLayout::__cordl_internal_get__rotationStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStep;
}
constexpr void GlobalNamespace::CompositeRotationSpreadLayout::__cordl_internal_set__rotationStep(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationStep = value;
}
constexpr bool& GlobalNamespace::CompositeRotationSpreadLayout::__cordl_internal_get__startFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr bool const& GlobalNamespace::CompositeRotationSpreadLayout::__cordl_internal_get__startFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr void GlobalNamespace::CompositeRotationSpreadLayout::__cordl_internal_set__startFromCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startFromCenter = value;
}
inline void GlobalNamespace::CompositeRotationSpreadLayout::Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements,
                                                                  int32_t sameIdElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CompositeRotationSpreadLayout*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childTransforms, numberOfElements, sameIdElements);
}
inline void GlobalNamespace::CompositeRotationSpreadLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeRotationSpreadLayout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeRotationSpreadLayout* GlobalNamespace::CompositeRotationSpreadLayout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeRotationSpreadLayout*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeRotationSpreadLayout::CompositeRotationSpreadLayout() {}
