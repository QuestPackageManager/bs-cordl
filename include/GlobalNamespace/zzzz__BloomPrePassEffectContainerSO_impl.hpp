#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassEffectContainerSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.get_bloomPrePassEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BloomPrePassEffectSO> (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(
    &::GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectContainerSO*>(), { "get_bloomPrePassEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)(::GlobalNamespace::BloomPrePassEffectSO*)>(
    &::GlobalNamespace::BloomPrePassEffectContainerSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectContainerSO*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(&::GlobalNamespace::BloomPrePassEffectContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectContainerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& GlobalNamespace::BloomPrePassEffectContainerSO::__cordl_internal_get__bloomPrePassEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffect;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& GlobalNamespace::BloomPrePassEffectContainerSO::__cordl_internal_get__bloomPrePassEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffect;
}
constexpr void GlobalNamespace::BloomPrePassEffectContainerSO::__cordl_internal_set__bloomPrePassEffect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassEffect = value;
}
inline ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectContainerSO*>(), { "get_bloomPrePassEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassEffectContainerSO::Init(::GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectContainerSO*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bloomPrePassEffect);
}
inline void GlobalNamespace::BloomPrePassEffectContainerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectContainerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassEffectContainerSO* GlobalNamespace::BloomPrePassEffectContainerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassEffectContainerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO::BloomPrePassEffectContainerSO() {}
