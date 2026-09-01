#pragma once
// IWYU pragma private; include "GlobalNamespace\AlphaFloatFxGroupEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__AlphaFloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlphaFloatFxGroupEffectTarget.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphaFloatFxGroupEffectTarget::*)()>(&::GlobalNamespace::AlphaFloatFxGroupEffectTarget::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5994ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphaFloatFxGroupEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphaFloatFxGroupEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::AlphaFloatFxGroupEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5994b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { ::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphaFloatFxGroupEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphaFloatFxGroupEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::AlphaFloatFxGroupEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5994c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { ::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphaFloatFxGroupEffectTarget.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphaFloatFxGroupEffectTarget::*)(::UnityEngine::Color)>(&::GlobalNamespace::AlphaFloatFxGroupEffectTarget::SetColor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5994b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphaFloatFxGroupEffectTarget.InitIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphaFloatFxGroupEffectTarget::*)()>(&::GlobalNamespace::AlphaFloatFxGroupEffectTarget::InitIfNeeded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5994af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { "InitIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphaFloatFxGroupEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphaFloatFxGroupEffectTarget::*)()>(&::GlobalNamespace::AlphaFloatFxGroupEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5994c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__staticColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____staticColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__staticColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____staticColor;
}
constexpr void GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_set__staticColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____staticColor = value;
}
constexpr ::StringW& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr ::StringW const& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr void GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_set__property(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____property = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_set__materialPropertyBlockControllers(::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockControllers = value;
}
constexpr int32_t& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
constexpr bool& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::AlphaFloatFxGroupEffectTarget::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline void GlobalNamespace::AlphaFloatFxGroupEffectTarget::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlphaFloatFxGroupEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::AlphaFloatFxGroupEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::AlphaFloatFxGroupEffectTarget::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::AlphaFloatFxGroupEffectTarget::InitIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { "InitIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlphaFloatFxGroupEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AlphaFloatFxGroupEffectTarget* GlobalNamespace::AlphaFloatFxGroupEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlphaFloatFxGroupEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphaFloatFxGroupEffectTarget::AlphaFloatFxGroupEffectTarget() {}
