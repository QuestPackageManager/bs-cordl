#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalShaderColorLightWithIds.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__GlobalShaderColorLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__GlobalShaderColorLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>(), { "get_intensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId.set_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::*)(float_t)>(
    &::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::*)(int32_t, float_t)>(
    &::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586f868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
inline float_t GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>(), { "get_intensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::set_intensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightId, lightIntensity);
}
inline ::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId* GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::New_ctor(int32_t lightId,
                                                                                                                                                                float_t lightIntensity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>(lightId, lightIntensity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId::GlobalShaderColorLightWithIds_LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalShaderColorLightWithIds::*)()>(&::GlobalNamespace::GlobalShaderColorLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x586f6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* (
    ::GlobalNamespace::GlobalShaderColorLightWithIds::*)()>(&::GlobalNamespace::GlobalShaderColorLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalShaderColorLightWithIds::*)()>(&::GlobalNamespace::GlobalShaderColorLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586f7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__lightIntensityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr ::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*> const& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__lightIntensityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr void GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_set__lightIntensityData(::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightIntensityData = value;
}
constexpr bool& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__overrideSaturation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideSaturation;
}
constexpr bool const& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__overrideSaturation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideSaturation;
}
constexpr void GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_set__overrideSaturation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideSaturation = value;
}
constexpr float_t& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__saturation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturation;
}
constexpr float_t const& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__saturation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturation;
}
constexpr void GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_set__saturation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saturation = value;
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds::setStaticF__globalLightTintColorPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_globalLightTintColorPropertyId", ::GlobalNamespace::GlobalShaderColorLightWithIds*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GlobalShaderColorLightWithIds::getStaticF__globalLightTintColorPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_globalLightTintColorPropertyId", ::GlobalNamespace::GlobalShaderColorLightWithIds*>();
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds::ProcessNewColorData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GlobalNamespace::GlobalShaderColorLightWithIds::GetLightWithIds() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>*>(this, ___internal_method);
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GlobalShaderColorLightWithIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GlobalShaderColorLightWithIds* GlobalNamespace::GlobalShaderColorLightWithIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GlobalShaderColorLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalShaderColorLightWithIds::GlobalShaderColorLightWithIds() {}
