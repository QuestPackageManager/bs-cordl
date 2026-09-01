#pragma once
// IWYU pragma private; include "GlobalNamespace\SetTubeBloomPrePassLightColor.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetTubeBloomPrePassLightColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&::GlobalNamespace::SetTubeBloomPrePassLightColor::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59f1260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetTubeBloomPrePassLightColor*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&::GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f12c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetTubeBloomPrePassLightColor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_set__color(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>& GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__tubeLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> const& GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__tubeLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr void GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_set__tubeLights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tubeLights = value;
}
inline void GlobalNamespace::SetTubeBloomPrePassLightColor::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetTubeBloomPrePassLightColor*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetTubeBloomPrePassLightColor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetTubeBloomPrePassLightColor* GlobalNamespace::SetTubeBloomPrePassLightColor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetTubeBloomPrePassLightColor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetTubeBloomPrePassLightColor::SetTubeBloomPrePassLightColor() {}
