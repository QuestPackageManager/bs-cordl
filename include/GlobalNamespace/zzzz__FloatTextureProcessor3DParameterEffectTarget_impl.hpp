#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTextureProcessor3DParameterEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatTextureProcessor3DParameterEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__FloatTextureProcessor3DParameterEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter() {}
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter
    GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::ComputeKernel{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter
    GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::TextureIndex{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::Speed{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter
    GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::SpatialScale{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::Phase{
  static_cast<int32_t>(0x4)
};
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::Param1{
  static_cast<int32_t>(0x5)
};
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::Param2{
  static_cast<int32_t>(0x6)
};
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter
    GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter::OutputOffset{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel() {}
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel::A{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel::B{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel::C{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel::D{
  static_cast<int32_t>(0x3)
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598e800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598f500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::*)(float_t)>(
    &::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0xcfc;
  constexpr static std::size_t addrs = 0x598e804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::*)()>(
    &::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x598f504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__textureProcessor3D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureProcessor3D;
}
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__textureProcessor3D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureProcessor3D;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_set__textureProcessor3D(::UnityW<::GlobalNamespace::TextureProcessor3D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureProcessor3D = value;
}
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter&
GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__parameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameter;
}
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter const&
GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__parameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameter;
}
constexpr void
GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_set__parameter(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DParameter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameter = value;
}
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel& GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__channel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channel;
}
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel const&
GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__channel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channel;
}
constexpr void
GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_set__channel(::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget_TextureProcessor3DChannel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____channel = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
inline void GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget* GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatTextureProcessor3DParameterEffectTarget::FloatTextureProcessor3DParameterEffectTarget() {}
