#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/TransferOwnershipOnSelect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__TransferOwnershipOnSelect_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a770a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect* Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect::TransferOwnershipOnSelect() {}
