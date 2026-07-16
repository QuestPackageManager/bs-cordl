#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/NetworkDataUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__NetworkDataUtils_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint64_t> (*)(uint32_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetOculusIdOfColocatedGroupOwnerFromColocationGroupId)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5a7b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(),
                                                                                           { "GetOculusIdOfColocatedGroupOwnerFromColocationGroupId", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetAllPlayersFromColocationGroupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* (*)(uint32_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersFromColocationGroupId)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5a7b79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(),
                                                                                           { "GetAllPlayersFromColocationGroupId", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetAllPlayersColocatedWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* (*)(uint64_t, bool)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersColocatedWith)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5a7ba4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(),
                                                                                           { "GetAllPlayersColocatedWith", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetPlayerFromOculusId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> (*)(uint64_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetPlayerFromOculusId)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5a7bdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(), { "GetPlayerFromOculusId", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<uint64_t> Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetOculusIdOfColocatedGroupOwnerFromColocationGroupId(uint32_t colocationGroupId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(),
                                                                                         { "GetOculusIdOfColocatedGroupOwnerFromColocationGroupId", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>>(nullptr, ___internal_method, colocationGroupId);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*
Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersFromColocationGroupId(uint32_t colocationGroupId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(), { "GetAllPlayersFromColocationGroupId", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*>(nullptr, ___internal_method, colocationGroupId);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*
Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersColocatedWith(uint64_t oculusId, bool includeMyself) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(),
                                                                                         { "GetAllPlayersColocatedWith", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*>(nullptr, ___internal_method, oculusId, includeMyself);
}
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetPlayerFromOculusId(uint64_t oculusId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>(), { "GetPlayerFromOculusId", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>>(nullptr, ___internal_method, oculusId);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::NetworkDataUtils() {}
