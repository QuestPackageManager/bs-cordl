#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupRotationSpreadLayouter.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationSpreadLayouter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupRotationSpreadLayouter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupRotationSpreadLayouter::*)()>(&::GlobalNamespace::LightGroupRotationSpreadLayouter::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5992b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationSpreadLayouter*>(), { ".ctor", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationSpreadLayouter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupRotationSpreadLayouter* GlobalNamespace::LightGroupRotationSpreadLayouter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupRotationSpreadLayouter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupRotationSpreadLayouter::LightGroupRotationSpreadLayouter() {}
