#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTextureProcessor3DMappingFloatEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatTextureProcessor3DMappingFloatEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__FloatTextureProcessor3DMappingFloatEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping() {}
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping
    GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping::XYZDisplacementScale{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping
    GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping::RadialDisplacementScale{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping
    GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping::MaxScale{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping
    GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping::RotationMultiplier{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping
    GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping::EmissiveModulationStrength{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598dd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598df84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::*)(float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x598dd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::*)()>(
    &::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x598df88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material = value;
}
constexpr bool& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__useSlave() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSlave;
}
constexpr bool const& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__useSlave() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSlave;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_set__useSlave(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useSlave = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__slaveMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slaveMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__slaveMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slaveMaterial;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_set__slaveMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slaveMaterial = value;
}
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping&
GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__mapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapping;
}
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping const&
GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__mapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapping;
}
constexpr void
GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_set__mapping(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mapping = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
constexpr bool& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__invertAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertAxis;
}
constexpr bool const& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__invertAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertAxis;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_set__invertAxis(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invertAxis = value;
}
constexpr bool& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__invertAxisSlave() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertAxisSlave;
}
constexpr bool const& GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_get__invertAxisSlave() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertAxisSlave;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::__cordl_internal_set__invertAxisSlave(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invertAxisSlave = value;
}
inline void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::setStaticF__propertyStrings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "_propertyStrings", ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::getStaticF__propertyStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_propertyStrings", ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>();
}
inline void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget* GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget::FloatTextureProcessor3DMappingFloatEffectTarget() {}
