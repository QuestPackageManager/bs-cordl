#pragma once
// IWYU pragma private; include "Meta\XR\MultiplayerBlocks\Shared\INameTagSpawner.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__INameTagSpawner_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner.get_IsConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner::get_IsConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner.Spawn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(), 1 }));
    return ___internal_method;
  }
};
inline bool Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner::get_IsConnected() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner::Spawn(::StringW playerName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
