#pragma once
// IWYU pragma private; include "Meta\XR\MultiplayerBlocks\Shared\ITransferOwnership.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ITransferOwnership_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership.TransferOwnershipToLocalPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership::TransferOwnershipToLocalPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership.HasOwnership
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership::HasOwnership)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(), 1 }));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership::TransferOwnershipToLocalPlayer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership::HasOwnership() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
