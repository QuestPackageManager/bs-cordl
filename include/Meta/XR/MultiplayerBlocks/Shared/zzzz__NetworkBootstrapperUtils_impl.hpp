#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/NetworkBootstrapperUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__NetworkBootstrapperUtils_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ColocationFailedReason_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkData_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkMessenger_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__NetworkBootstrapperParams_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils.SetEntitlementIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, ::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>)>(
        &::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetEntitlementIds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58c2d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>::get(), "SetEntitlementIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils.SetUpAndStartAutomaticColocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>, ::UnityEngine::GameObject*, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*,
                         ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*)>(&::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetUpAndStartAutomaticColocation)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x58c2d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>::get(), "SetUpAndStartAutomaticColocation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils.OnColocationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason)>(
    &::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::OnColocationFailed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58c3450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>::get(), "OnColocationFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetEntitlementIds(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo info,
                                                                                             ::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams> param) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>::get(), "SetEntitlementIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, info, param);
}
inline void Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetUpAndStartAutomaticColocation(::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams> param,
                                                                                                            ::UnityEngine::GameObject* anchorPrefab,
                                                                                                            ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* networkData,
                                                                                                            ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* networkMessenger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>::get(), "SetUpAndStartAutomaticColocation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, param, anchorPrefab, networkData, networkMessenger);
}
inline void Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::OnColocationFailed(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>::get(), "OnColocationFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::NetworkBootstrapperUtils() {}
