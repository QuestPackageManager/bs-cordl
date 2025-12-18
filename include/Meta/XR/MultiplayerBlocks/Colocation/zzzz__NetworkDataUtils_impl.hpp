#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/NetworkDataUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__NetworkDataUtils_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint64_t> (*)(uint32_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetOculusIdOfColocatedGroupOwnerFromColocationGroupId)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x58ce070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetOculusIdOfColocatedGroupOwnerFromColocationGroupId",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetAllPlayersFromColocationGroupId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* (*)(uint32_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersFromColocationGroupId)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x58ce250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetAllPlayersFromColocationGroupId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetAllPlayersColocatedWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* (*)(uint64_t, bool)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersColocatedWith)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x58ce500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetAllPlayersColocatedWith",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils.GetPlayerFromOculusId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> (*)(uint64_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetPlayerFromOculusId)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58ce888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetPlayerFromOculusId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<uint64_t> Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetOculusIdOfColocatedGroupOwnerFromColocationGroupId(uint32_t colocationGroupId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetOculusIdOfColocatedGroupOwnerFromColocationGroupId",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>, false>(nullptr, ___internal_method, colocationGroupId);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*
Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersFromColocationGroupId(uint32_t colocationGroupId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetAllPlayersFromColocationGroupId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*, false>(nullptr, ___internal_method, colocationGroupId);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*
Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetAllPlayersColocatedWith(uint64_t oculusId, bool includeMyself) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetAllPlayersColocatedWith",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*, false>(nullptr, ___internal_method, oculusId, includeMyself);
}
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::GetPlayerFromOculusId(uint64_t oculusId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*>::get(), "GetPlayerFromOculusId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>, false>(nullptr, ___internal_method, oculusId);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils::NetworkDataUtils() {}
