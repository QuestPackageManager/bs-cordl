#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRFeatureDescriptor_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__UsageHint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "usageHints", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "featureType", ty:
// "::UnityEngine::InputSystem::XR::FeatureType", modifiers: "", def_value: Some("{}") }, CppParam { name: "customSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::XRFeatureDescriptor::XRFeatureDescriptor(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>* usageHints,
                                                                                   ::UnityEngine::InputSystem::XR::FeatureType featureType, uint32_t customSize) noexcept {
  this->name = name;
  this->usageHints = usageHints;
  this->featureType = featureType;
  this->customSize = customSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRFeatureDescriptor::XRFeatureDescriptor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
