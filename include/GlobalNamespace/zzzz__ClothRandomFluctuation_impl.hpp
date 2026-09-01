#pragma once
// IWYU pragma private; include "GlobalNamespace\ClothRandomFluctuation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ClothRandomFluctuation_def.hpp"
#include "GlobalNamespace/zzzz__ClothRandomFluctuation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Cloth_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation_SineLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation_SineLayer::*)()>(&::GlobalNamespace::ClothRandomFluctuation_SineLayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58af944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ClothRandomFluctuation_SineLayer::__cordl_internal_get_multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr float_t const& GlobalNamespace::ClothRandomFluctuation_SineLayer::__cordl_internal_get_multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr void GlobalNamespace::ClothRandomFluctuation_SineLayer::__cordl_internal_set_multiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplier = value;
}
constexpr float_t& GlobalNamespace::ClothRandomFluctuation_SineLayer::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr float_t const& GlobalNamespace::ClothRandomFluctuation_SineLayer::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void GlobalNamespace::ClothRandomFluctuation_SineLayer::__cordl_internal_set_offset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
inline void GlobalNamespace::ClothRandomFluctuation_SineLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ClothRandomFluctuation_SineLayer* GlobalNamespace::ClothRandomFluctuation_SineLayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClothRandomFluctuation_SineLayer::ClothRandomFluctuation_SineLayer() {}
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)()>(&::GlobalNamespace::ClothRandomFluctuation::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58af664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.FluctuateCloth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)(::UnityEngine::Cloth*)>(&::GlobalNamespace::ClothRandomFluctuation::FluctuateCloth)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58af66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { "FluctuateCloth", {}, { ::i2c::type_of<::UnityEngine::Cloth*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.GetNoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ClothRandomFluctuation::*)(float_t, float_t)>(&::GlobalNamespace::ClothRandomFluctuation::GetNoise)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58af830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { "GetNoise", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)()>(&::GlobalNamespace::ClothRandomFluctuation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58af940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Cloth>& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__cloth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cloth;
}
constexpr ::UnityW<::UnityEngine::Cloth> const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__cloth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cloth;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__cloth(::UnityW<::UnityEngine::Cloth> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cloth = value;
}
constexpr bool& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalExternalFluctuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalExternalFluctuations;
}
constexpr bool const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalExternalFluctuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalExternalFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__useLocalExternalFluctuations(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLocalExternalFluctuations = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__externalFluctuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalFluctuations;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__externalFluctuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__externalFluctuations(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____externalFluctuations = value;
}
constexpr bool& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalRandomFluctuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalRandomFluctuations;
}
constexpr bool const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalRandomFluctuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalRandomFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__useLocalRandomFluctuations(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLocalRandomFluctuations = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__minFluctuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minFluctuations;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__minFluctuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__minFluctuations(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minFluctuations = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__maxFluctuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFluctuations;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__maxFluctuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__maxFluctuations(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxFluctuations = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>*& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__compoundSins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compoundSins;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>* const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__compoundSins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compoundSins;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compoundSins = value;
}
constexpr float_t& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr float_t const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speed = value;
}
inline void GlobalNamespace::ClothRandomFluctuation::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ClothRandomFluctuation::FluctuateCloth(::UnityEngine::Cloth* cloth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { "FluctuateCloth", {}, { ::i2c::type_of<::UnityEngine::Cloth*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cloth);
}
inline float_t GlobalNamespace::ClothRandomFluctuation::GetNoise(float_t time, float_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { "GetNoise", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time, offset);
}
inline void GlobalNamespace::ClothRandomFluctuation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ClothRandomFluctuation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ClothRandomFluctuation* GlobalNamespace::ClothRandomFluctuation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ClothRandomFluctuation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClothRandomFluctuation::ClothRandomFluctuation() {}
