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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, ::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>)>(
    &::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetEntitlementIds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a7028c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>(),
                                                                                           { "SetEntitlementIds",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>(),
                                                                                               ::i2c::type_of<::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils.SetUpAndStartAutomaticColocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>, ::UnityEngine::GameObject*,
                                                                ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetUpAndStartAutomaticColocation)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5a702cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>(),
                            { "SetUpAndStartAutomaticColocation",
                              {},
                              { ::i2c::type_of<::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils.OnColocationFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason)>(
    &::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::OnColocationFailed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a7099c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>(),
                                                             { "OnColocationFailed", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetEntitlementIds(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo info,
                                                                                             ::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams> param) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>(),
                                                                                         { "SetEntitlementIds",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>(),
                                                                                             ::i2c::type_of<::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, info, param);
}
inline void Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::SetUpAndStartAutomaticColocation(::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams> param,
                                                                                                            ::UnityEngine::GameObject* anchorPrefab,
                                                                                                            ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* networkData,
                                                                                                            ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* networkMessenger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>(),
                          { "SetUpAndStartAutomaticColocation",
                            {},
                            { ::i2c::type_of<::by_ref<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams>>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                              ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, param, anchorPrefab, networkData, networkMessenger);
}
inline void Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::OnColocationFailed(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*>(),
                                                           { "OnColocationFailed", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils::NetworkBootstrapperUtils() {}
