#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderBehaviourFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::ProviderBehaviourFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::ProviderBehaviourFlags() {}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags::CanProvideWithFailedDependencies{
  static_cast<int32_t>(0x1)
};
