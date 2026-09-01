#pragma once
// IWYU pragma private; include "GlobalNamespace\BlueNoiseDithering.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDithering_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDithering.SetBlueNoiseShaderParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlueNoiseDithering::*)(int32_t, int32_t)>(&::GlobalNamespace::BlueNoiseDithering::SetBlueNoiseShaderParams)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58681f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDithering*>(), { "SetBlueNoiseShaderParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDithering._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlueNoiseDithering::*)()>(&::GlobalNamespace::BlueNoiseDithering::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58682d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDithering*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BlueNoiseDithering::__cordl_internal_get__noiseTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noiseTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BlueNoiseDithering::__cordl_internal_get__noiseTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noiseTexture;
}
constexpr void GlobalNamespace::BlueNoiseDithering::__cordl_internal_set__noiseTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noiseTexture = value;
}
inline void GlobalNamespace::BlueNoiseDithering::setStaticF__noiseParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_noiseParamsID", ::GlobalNamespace::BlueNoiseDithering*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlueNoiseDithering::getStaticF__noiseParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "_noiseParamsID", ::GlobalNamespace::BlueNoiseDithering*>();
}
inline void GlobalNamespace::BlueNoiseDithering::setStaticF__globalNoiseTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_globalNoiseTextureID", ::GlobalNamespace::BlueNoiseDithering*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlueNoiseDithering::getStaticF__globalNoiseTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "_globalNoiseTextureID", ::GlobalNamespace::BlueNoiseDithering*>();
}
inline void GlobalNamespace::BlueNoiseDithering::SetBlueNoiseShaderParams(int32_t cameraPixelWidth, int32_t cameraPixelHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDithering*>(), { "SetBlueNoiseShaderParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraPixelWidth, cameraPixelHeight);
}
inline void GlobalNamespace::BlueNoiseDithering::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDithering*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlueNoiseDithering* GlobalNamespace::BlueNoiseDithering::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlueNoiseDithering*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlueNoiseDithering::BlueNoiseDithering() {}
