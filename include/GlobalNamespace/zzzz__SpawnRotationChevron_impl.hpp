#pragma once
// IWYU pragma private; include "GlobalNamespace\SpawnRotationChevron.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnRotationChevron_Pool::*)()>(&::GlobalNamespace::SpawnRotationChevron_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59a6378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpawnRotationChevron_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnRotationChevron_Pool* GlobalNamespace::SpawnRotationChevron_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnRotationChevron_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationChevron_Pool::SpawnRotationChevron_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)(::UnityEngine::Color)>(&::GlobalNamespace::SpawnRotationChevron::ColorWasSet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59a62e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), { ::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron.SetLightAmount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)(float_t)>(&::GlobalNamespace::SpawnRotationChevron::SetLightAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), { "SetLightAmount", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron.UpdateLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)()>(&::GlobalNamespace::SpawnRotationChevron::UpdateLights)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59a62f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), { "UpdateLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)()>(&::GlobalNamespace::SpawnRotationChevron::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59a6364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> const& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr void GlobalNamespace::SpawnRotationChevron::__cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lights = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::SpawnRotationChevron::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lightAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightAmount;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lightAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightAmount;
}
constexpr void GlobalNamespace::SpawnRotationChevron::__cordl_internal_set__lightAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightAmount = value;
}
inline void GlobalNamespace::SpawnRotationChevron::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::SpawnRotationChevron::SetLightAmount(float_t amount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), { "SetLightAmount", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
inline void GlobalNamespace::SpawnRotationChevron::UpdateLights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), { "UpdateLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnRotationChevron::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpawnRotationChevron*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnRotationChevron* GlobalNamespace::SpawnRotationChevron::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnRotationChevron*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationChevron::SpawnRotationChevron() {}
