#pragma once
// IWYU pragma private; include "GlobalNamespace\DisableIfNotPlatform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_impl.hpp"
#include "GlobalNamespace/zzzz__DisableIfNotPlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5851ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableIfNotPlatform*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5851df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableIfNotPlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RuntimePlatform>& GlobalNamespace::DisableIfNotPlatform::__cordl_internal_get__whitelistPlatforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitelistPlatforms;
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform> const& GlobalNamespace::DisableIfNotPlatform::__cordl_internal_get__whitelistPlatforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitelistPlatforms;
}
constexpr void GlobalNamespace::DisableIfNotPlatform::__cordl_internal_set__whitelistPlatforms(::ArrayW<::UnityEngine::RuntimePlatform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____whitelistPlatforms = value;
}
inline void GlobalNamespace::DisableIfNotPlatform::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableIfNotPlatform*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableIfNotPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableIfNotPlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableIfNotPlatform* GlobalNamespace::DisableIfNotPlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableIfNotPlatform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableIfNotPlatform::DisableIfNotPlatform() {}
