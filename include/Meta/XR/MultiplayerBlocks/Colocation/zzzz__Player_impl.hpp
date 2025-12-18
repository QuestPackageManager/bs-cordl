#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Player.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Player_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Player._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Player::*)(uint64_t, uint64_t, uint32_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::Player::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58cc8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Player>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Player.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Colocation::Player::*)(::Meta::XR::MultiplayerBlocks::Colocation::Player)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::Player::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58ce98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Player>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::Player>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::Player::_ctor(uint64_t playerId, uint64_t oculusId, uint32_t colocationGroupId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Player>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerId, oculusId, colocationGroupId);
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Player::Equals(::Meta::XR::MultiplayerBlocks::Colocation::Player other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Player>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::Player>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>"
constexpr Meta::XR::MultiplayerBlocks::Colocation::Player::operator ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*() {
  return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>"
constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*
Meta::XR::MultiplayerBlocks::Colocation::Player::i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Player_() {
  return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "playerId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "oculusId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Player::Player(uint64_t playerId, uint64_t oculusId, uint32_t colocationGroupId) noexcept {
  this->playerId = playerId;
  this->oculusId = oculusId;
  this->colocationGroupId = colocationGroupId;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Player::Player() {}
