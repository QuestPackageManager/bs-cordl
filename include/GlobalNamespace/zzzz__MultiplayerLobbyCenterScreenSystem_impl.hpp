#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLobbyCenterScreenSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterScreenSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenSystem::*)()>(&::GlobalNamespace::MultiplayerLobbyCenterScreenSystem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a10204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerLobbyCenterScreenSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem* GlobalNamespace::MultiplayerLobbyCenterScreenSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem::MultiplayerLobbyCenterScreenSystem() {}
