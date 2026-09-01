#pragma once
// IWYU pragma private; include "GlobalNamespace\StepFloatMaterialPropertyEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__StepFloatMaterialPropertyEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::*)()>(&::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5997ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5997ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5997f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::*)(float_t)>(
    &::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5997ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::*)()>(&::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5997f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::StringW& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
constexpr float_t& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__stepFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepFactor;
}
constexpr float_t const& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__stepFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepFactor;
}
constexpr void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_set__stepFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepFactor = value;
}
constexpr float_t& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__stepSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr float_t const& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__stepSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_set__stepSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepSize = value;
}
constexpr int32_t& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::__cordl_internal_set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StepFloatMaterialPropertyEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget* GlobalNamespace::StepFloatMaterialPropertyEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget::StepFloatMaterialPropertyEffectTarget() {}
