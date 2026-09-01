#pragma once
// IWYU pragma private; include "GlobalNamespace\LightGroupTranslationLimits.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationLimits_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupTranslationLimits.get_translationLimits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::LightGroupTranslationLimits::*)()>(
    &::GlobalNamespace::LightGroupTranslationLimits::get_translationLimits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586bd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationLimits*>(), { "get_translationLimits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupTranslationLimits.get_distributionLimits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::LightGroupTranslationLimits::*)()>(
    &::GlobalNamespace::LightGroupTranslationLimits::get_distributionLimits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586bd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationLimits*>(), { "get_distributionLimits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupTranslationLimits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupTranslationLimits::*)()>(&::GlobalNamespace::LightGroupTranslationLimits::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586bd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationLimits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightGroupTranslationLimits::__cordl_internal_get__translationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightGroupTranslationLimits::__cordl_internal_get__translationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationLimits;
}
constexpr void GlobalNamespace::LightGroupTranslationLimits::__cordl_internal_set__translationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____translationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightGroupTranslationLimits::__cordl_internal_get__distributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightGroupTranslationLimits::__cordl_internal_get__distributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionLimits;
}
constexpr void GlobalNamespace::LightGroupTranslationLimits::__cordl_internal_set__distributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distributionLimits = value;
}
inline ::UnityEngine::Vector2 GlobalNamespace::LightGroupTranslationLimits::get_translationLimits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationLimits*>(), { "get_translationLimits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::LightGroupTranslationLimits::get_distributionLimits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationLimits*>(), { "get_distributionLimits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void GlobalNamespace::LightGroupTranslationLimits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationLimits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupTranslationLimits* GlobalNamespace::LightGroupTranslationLimits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupTranslationLimits*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupTranslationLimits::LightGroupTranslationLimits() {}
