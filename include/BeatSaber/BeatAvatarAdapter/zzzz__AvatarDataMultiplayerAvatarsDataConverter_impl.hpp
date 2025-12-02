#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarDataMultiplayerAvatarsDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__AvatarDataMultiplayerAvatarsDataConverter_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter.CreateMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarData (*)(::BeatSaber::BeatAvatarSDK::AvatarData*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x31747f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>::get(), "CreateMultiplayerAvatarsData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter.CreateAvatarData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::BeatAvatarSDK::AvatarData* (*)(::GlobalNamespace::MultiplayerAvatarData)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateAvatarData)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x3174c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>::get(), "CreateAvatarData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarData>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MultiplayerAvatarData
BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateMultiplayerAvatarsData(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>::get(), "CreateMultiplayerAvatarsData",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarData, false>(nullptr, ___internal_method, avatarData);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarData*
BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateAvatarData(::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>::get(), "CreateAvatarData",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarSDK::AvatarData*, false>(nullptr, ___internal_method, multiplayerAvatarsData);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::AvatarDataMultiplayerAvatarsDataConverter() {}
