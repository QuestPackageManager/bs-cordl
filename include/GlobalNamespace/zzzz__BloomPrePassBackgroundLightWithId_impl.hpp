#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586edd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586edf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)()>(&::GlobalNamespace::BloomPrePassBackgroundLightWithId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586ee10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor>& GlobalNamespace::BloomPrePassBackgroundLightWithId::__cordl_internal_get__bloomPrePassBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColor;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor> const& GlobalNamespace::BloomPrePassBackgroundLightWithId::__cordl_internal_get__bloomPrePassBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColor;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundLightWithId::__cordl_internal_set__bloomPrePassBackgroundColor(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassBackgroundColor = value;
}
inline ::UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet(::UnityEngine::Color newColor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newColor);
}
inline void GlobalNamespace::BloomPrePassBackgroundLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundLightWithId* GlobalNamespace::BloomPrePassBackgroundLightWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundLightWithId::BloomPrePassBackgroundLightWithId() {}
