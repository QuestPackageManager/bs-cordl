#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/BundleFrameData.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__BundleOptions_impl.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BundleSource_impl.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__BundleFrameData_def.hpp"
// Ctor Parameters [CppParam { name: "BundleCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReferenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "PercentComplete", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Status", ty: "::UnityEngine::ResourceManagement::Profiling::ContentStatus", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "Source", ty: "::UnityEngine::ResourceManagement::Util::BundleSource", modifiers: "", def_value: Some("{}") }, CppParam { name: "LoadingOptions", ty:
// "::UnityEngine::ResourceManagement::Profiling::BundleOptions", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Profiling::BundleFrameData::BundleFrameData(int32_t BundleCode, int32_t ReferenceCount, float_t PercentComplete,
                                                                                         ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status,
                                                                                         ::UnityEngine::ResourceManagement::Util::BundleSource Source,
                                                                                         ::UnityEngine::ResourceManagement::Profiling::BundleOptions LoadingOptions) noexcept {
  this->BundleCode = BundleCode;
  this->ReferenceCount = ReferenceCount;
  this->PercentComplete = PercentComplete;
  this->Status = Status;
  this->Source = Source;
  this->LoadingOptions = LoadingOptions;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::BundleFrameData::BundleFrameData() {}
