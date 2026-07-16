#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableOnPlatform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_impl.hpp"
#include "GlobalNamespace/zzzz__DisableOnPlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableOnPlatform.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOnPlatform::*)()>(&::GlobalNamespace::DisableOnPlatform::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5854820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnPlatform*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableOnPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOnPlatform::*)()>(&::GlobalNamespace::DisableOnPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5854928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnPlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RuntimePlatform>& GlobalNamespace::DisableOnPlatform::__cordl_internal_get__disabledPlatforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledPlatforms;
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform> const& GlobalNamespace::DisableOnPlatform::__cordl_internal_get__disabledPlatforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledPlatforms;
}
constexpr void GlobalNamespace::DisableOnPlatform::__cordl_internal_set__disabledPlatforms(::ArrayW<::UnityEngine::RuntimePlatform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledPlatforms = value;
}
inline void GlobalNamespace::DisableOnPlatform::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnPlatform*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableOnPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnPlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableOnPlatform* GlobalNamespace::DisableOnPlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableOnPlatform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableOnPlatform::DisableOnPlatform() {}
