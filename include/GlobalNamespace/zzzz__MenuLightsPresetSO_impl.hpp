#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuLightsPresetSO.hpp"
#include "GlobalNamespace/zzzz__LightIdColorPair_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__LightIdColorPair_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO.get_lightIdColorPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::LightIdColorPair*> (::GlobalNamespace::MenuLightsPresetSO::*)()>(
    &::GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsPresetSO*>(), { "get_lightIdColorPairs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO.set_lightIdColorPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsPresetSO::*)(::ArrayW<::GlobalNamespace::LightIdColorPair*>)>(
    &::GlobalNamespace::MenuLightsPresetSO::set_lightIdColorPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2e64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsPresetSO*>(),
                                                                                           { "set_lightIdColorPairs", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::LightIdColorPair*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsPresetSO::*)()>(&::GlobalNamespace::MenuLightsPresetSO::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a2e654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsPresetSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*>& GlobalNamespace::MenuLightsPresetSO::__cordl_internal_get__lightIdColorPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIdColorPairs;
}
constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*> const& GlobalNamespace::MenuLightsPresetSO::__cordl_internal_get__lightIdColorPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIdColorPairs;
}
constexpr void GlobalNamespace::MenuLightsPresetSO::__cordl_internal_set__lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightIdColorPairs = value;
}
inline ::ArrayW<::GlobalNamespace::LightIdColorPair*> GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsPresetSO*>(), { "get_lightIdColorPairs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightIdColorPair*>>(this, ___internal_method);
}
inline void GlobalNamespace::MenuLightsPresetSO::set_lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsPresetSO*>(),
                                                                                         { "set_lightIdColorPairs", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::LightIdColorPair*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuLightsPresetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsPresetSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuLightsPresetSO* GlobalNamespace::MenuLightsPresetSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuLightsPresetSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuLightsPresetSO::MenuLightsPresetSO() {}
