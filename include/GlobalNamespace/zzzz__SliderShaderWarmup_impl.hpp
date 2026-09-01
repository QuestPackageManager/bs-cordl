#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderShaderWarmup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderShaderWarmup_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::Start)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x597d274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderShaderWarmup*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597d490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderShaderWarmup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SliderMeshController>& GlobalNamespace::SliderShaderWarmup::__cordl_internal_get__sliderMeshController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr ::UnityW<::GlobalNamespace::SliderMeshController> const& GlobalNamespace::SliderShaderWarmup::__cordl_internal_get__sliderMeshController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr void GlobalNamespace::SliderShaderWarmup::__cordl_internal_set__sliderMeshController(::UnityW<::GlobalNamespace::SliderMeshController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderMeshController = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::SliderShaderWarmup::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::SliderShaderWarmup::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::SliderShaderWarmup::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
inline void GlobalNamespace::SliderShaderWarmup::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderShaderWarmup*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderShaderWarmup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderShaderWarmup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderShaderWarmup* GlobalNamespace::SliderShaderWarmup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderShaderWarmup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderShaderWarmup::SliderShaderWarmup() {}
