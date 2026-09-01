#pragma once
// IWYU pragma private; include "Meta\XR\MultiplayerBlocks\Shared\IAvatarBehaviour.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__IAvatarBehaviour_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour.get_OculusId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::get_OculusId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour.get_LocalAvatarIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::get_LocalAvatarIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour.get_HasInputAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::get_HasInputAuthority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour.ReceiveStreamData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::*)(::ArrayW<uint8_t>)>(
    &::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::ReceiveStreamData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 3 }));
    return ___internal_method;
  }
};
inline uint64_t Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::get_OculusId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline int32_t Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::get_LocalAvatarIndex() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::get_HasInputAuthority() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour::ReceiveStreamData(::ArrayW<uint8_t> bytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
