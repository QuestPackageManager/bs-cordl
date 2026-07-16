#pragma once
// IWYU pragma private; include "GlobalNamespace/BlueNoiseDitheringUpdater.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDitheringUpdater_def.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDithering_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "GlobalNamespace/zzzz__RandomValueToShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)(::GlobalNamespace::IRandom*)>(&::GlobalNamespace::BlueNoiseDitheringUpdater::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x586af30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x586af48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x586b020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.HandleCameraPreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x586b0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(),
                                                { "HandleCameraPreRender", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586b2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BlueNoiseDithering>& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__blueNoiseDithering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blueNoiseDithering;
}
constexpr ::UnityW<::GlobalNamespace::BlueNoiseDithering> const& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__blueNoiseDithering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blueNoiseDithering;
}
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_set__blueNoiseDithering(::UnityW<::GlobalNamespace::BlueNoiseDithering> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blueNoiseDithering = value;
}
constexpr ::UnityW<::GlobalNamespace::RandomValueToShader>& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__randomValueToShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValueToShader;
}
constexpr ::UnityW<::GlobalNamespace::RandomValueToShader> const& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__randomValueToShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValueToShader;
}
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_set__randomValueToShader(::UnityW<::GlobalNamespace::RandomValueToShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomValueToShader = value;
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::Init(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(),
                                              { "HandleCameraPreRender", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BlueNoiseDitheringUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlueNoiseDitheringUpdater* GlobalNamespace::BlueNoiseDitheringUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlueNoiseDitheringUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlueNoiseDitheringUpdater::BlueNoiseDitheringUpdater() {}
