#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLightsUpdateSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightsUpdateSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLightsUpdateSystem.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassLightsUpdateSystem::*)()>(&::GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5864f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLightsUpdateSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassLightsUpdateSystem::*)()>(&::GlobalNamespace::BloomPrePassLightsUpdateSystem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5865250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BloomPrePassLightsUpdateSystem::setStaticF_disableUpdateAlways(bool value) {
  ::cordl_internals::setStaticField<bool, "disableUpdateAlways", ::GlobalNamespace::BloomPrePassLightsUpdateSystem*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BloomPrePassLightsUpdateSystem::getStaticF_disableUpdateAlways() {
  return ::cordl_internals::getStaticField<bool, "disableUpdateAlways", ::GlobalNamespace::BloomPrePassLightsUpdateSystem*>();
}
inline void GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLightsUpdateSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassLightsUpdateSystem* GlobalNamespace::BloomPrePassLightsUpdateSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassLightsUpdateSystem::BloomPrePassLightsUpdateSystem() {}
