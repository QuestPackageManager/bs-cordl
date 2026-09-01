#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRPointerVisualizer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPointerVisualizer_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPointerVisualizer.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPointerVisualizer::*)()>(&::GlobalNamespace::OVRPointerVisualizer::Update)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5ebee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPointerVisualizer*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPointerVisualizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPointerVisualizer::*)()>(&::GlobalNamespace::OVRPointerVisualizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ebf064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPointerVisualizer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayTransform;
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__cordl_internal_set_rayTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayTransform = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_linePointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePointer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_linePointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePointer;
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__cordl_internal_set_linePointer(::UnityW<::UnityEngine::LineRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePointer = value;
}
constexpr float_t& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayDrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayDrawDistance;
}
constexpr float_t const& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayDrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayDrawDistance;
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__cordl_internal_set_rayDrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayDrawDistance = value;
}
inline void GlobalNamespace::OVRPointerVisualizer::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPointerVisualizer*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPointerVisualizer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPointerVisualizer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPointerVisualizer* GlobalNamespace::OVRPointerVisualizer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPointerVisualizer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPointerVisualizer::OVRPointerVisualizer() {}
