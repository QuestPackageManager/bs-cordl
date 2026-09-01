#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatSDFPointScaleEffect.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatSDFPointScaleEffect_def.hpp"
#include "GlobalNamespace/zzzz__SDFPoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)()>(&::GlobalNamespace::FloatSDFPointScaleEffect::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x599611c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::FloatSDFPointScaleEffect::SetValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5996128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { ::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::FloatSDFPointScaleEffect::TriggerValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5996190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { ::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.Scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)(float_t)>(&::GlobalNamespace::FloatSDFPointScaleEffect::Scale)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x599615c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { "Scale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)()>(&::GlobalNamespace::FloatSDFPointScaleEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59961c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SDFPoint>& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__colorPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorPoints;
}
constexpr ::UnityW<::GlobalNamespace::SDFPoint> const& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__colorPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorPoints;
}
constexpr void GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_set__colorPoints(::UnityW<::GlobalNamespace::SDFPoint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorPoints = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
constexpr float_t& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__startScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startScale;
}
constexpr float_t const& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__startScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startScale;
}
constexpr void GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_set__startScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startScale = value;
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::Scale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { "Scale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatSDFPointScaleEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatSDFPointScaleEffect* GlobalNamespace::FloatSDFPointScaleEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatSDFPointScaleEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatSDFPointScaleEffect::FloatSDFPointScaleEffect() {}
