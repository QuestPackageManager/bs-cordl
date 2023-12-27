#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetLoadMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode::AssetLoadMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode::AssetLoadMode() {}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode::RequestedAssetAndDependencies{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode::AllPackedAssetsAndDependencies{ static_cast<int32_t>(
    0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
