#pragma once
// IWYU pragma private; include "GlobalNamespace\RuntimeLightWithLightGroupIds.hpp"
#include "GlobalNamespace/zzzz__LightGroup_impl.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5870bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>(), { "get_intensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId.set_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::*)(float_t)>(
    &::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5870c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::*)(int32_t, float_t)>(
    &::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5870a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
inline float_t GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>(), { "get_intensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::set_intensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::_ctor(int32_t lightId, float_t intensity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightId, intensity);
}
inline ::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId* GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::New_ctor(int32_t lightId, float_t intensity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>(lightId, intensity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId::RuntimeLightWithLightGroupIds_LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::RuntimeLightWithLightGroupIds::ColorWasSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::Awake)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58708d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5870a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* (
    ::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5870be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.ProcessColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)(::UnityEngine::Color, float_t)>(
    &::GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5870bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(),
                                                                                           { "ProcessColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5870be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>>& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__lightGroupList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> const& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__lightGroupList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupList;
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_set__lightGroupList(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroupList = value;
}
constexpr float_t& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__maxIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxIntensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__maxIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxIntensity;
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_set__maxIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxIntensity = value;
}
constexpr bool& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr bool const& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_set__multiplyColorByAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__lightIntensityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*> const& GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_get__lightIntensityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__cordl_internal_set__lightIntensityData(::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightIntensityData = value;
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessNewColorData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GlobalNamespace::RuntimeLightWithLightGroupIds::GetLightWithIds() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>*>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessColor(::UnityEngine::Color color, float_t intensity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(),
                                                                                         { "ProcessColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, color, intensity);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RuntimeLightWithLightGroupIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RuntimeLightWithLightGroupIds* GlobalNamespace::RuntimeLightWithLightGroupIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RuntimeLightWithLightGroupIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeLightWithLightGroupIds::RuntimeLightWithLightGroupIds() {}
