#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BundleSource.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BundleSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource::BundleSource(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource::BundleSource() {}
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource UnityEngine::ResourceManagement::Util::BundleSource::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource UnityEngine::ResourceManagement::Util::BundleSource::Local{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource UnityEngine::ResourceManagement::Util::BundleSource::Cache{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource UnityEngine::ResourceManagement::Util::BundleSource::Download{ static_cast<int32_t>(0x4) };
