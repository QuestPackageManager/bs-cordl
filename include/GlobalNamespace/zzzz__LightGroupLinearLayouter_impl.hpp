#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupLinearLayouter.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupLinearLayouter_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupLinearLayouter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupLinearLayouter::*)()>(&::GlobalNamespace::LightGroupLinearLayouter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5992ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupLinearLayouter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__movementStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementStep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__movementStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementStep;
}
constexpr void GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_set__movementStep(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementStep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__defaultRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__defaultRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr void GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_set__defaultRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultRotation = value;
}
constexpr bool& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__startFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr bool const& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__startFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr void GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_set__startFromCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startFromCenter = value;
}
inline void GlobalNamespace::LightGroupLinearLayouter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupLinearLayouter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupLinearLayouter* GlobalNamespace::LightGroupLinearLayouter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupLinearLayouter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr GlobalNamespace::LightGroupLinearLayouter::operator ::GlobalNamespace::IEditTimeValidated*() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
constexpr ::GlobalNamespace::IEditTimeValidated* GlobalNamespace::LightGroupLinearLayouter::i___GlobalNamespace__IEditTimeValidated() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupLinearLayouter::LightGroupLinearLayouter() {}
