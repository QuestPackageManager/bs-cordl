#pragma once
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::XrResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::XrResult() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::TimeoutExpored{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::LossPending{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::EventUnavailable{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SpaceBoundsUnavailable{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotFocused{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::FrameDiscarded{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ValidationFailure{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::RuntimeFailure{ static_cast<int32_t>(0xfffffffe) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::OutOfMemory{ static_cast<int32_t>(0xfffffffd) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ApiVersionUnsupported{ static_cast<int32_t>(0xfffffffc) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::InitializationFailed{ static_cast<int32_t>(0xfffffffa) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::FunctionUnsupported{ static_cast<int32_t>(0xfffffff9) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::FeatureUnsupported{ static_cast<int32_t>(0xfffffff8) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ExtensionNotPresent{ static_cast<int32_t>(0xfffffff7) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::LimitReached{ static_cast<int32_t>(0xfffffff6) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SizeInsufficient{ static_cast<int32_t>(0xfffffff5) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::HandleInvalid{ static_cast<int32_t>(0xfffffff4) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::InstanceLOst{ static_cast<int32_t>(0xfffffff3) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionRunning{ static_cast<int32_t>(0xfffffff2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotRunning{ static_cast<int32_t>(0xfffffff0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionLost{ static_cast<int32_t>(0xffffffef) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SystemInvalid{ static_cast<int32_t>(0xffffffee) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathInvalid{ static_cast<int32_t>(0xffffffed) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathCountExceeded{ static_cast<int32_t>(0xffffffec) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathFormatInvalid{ static_cast<int32_t>(0xffffffeb) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathUnsupported{ static_cast<int32_t>(0xffffffea) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::LayerInvalid{ static_cast<int32_t>(0xffffffe9) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::LayerLimitExceeded{ static_cast<int32_t>(0xffffffe8) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SpwachainRectInvalid{ static_cast<int32_t>(0xffffffe7) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SwapchainFormatUnsupported{ static_cast<int32_t>(0xffffffe6) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ActionTypeMismatch{ static_cast<int32_t>(0xffffffe5) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotReady{ static_cast<int32_t>(0xffffffe4) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotStopping{ static_cast<int32_t>(0xffffffe3) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::TimeInvalid{ static_cast<int32_t>(0xffffffe2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ReferenceSpaceUnsupported{ static_cast<int32_t>(0xffffffe1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::FileAccessError{ static_cast<int32_t>(0xffffffe0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::FileContentsInvalid{ static_cast<int32_t>(0xffffffdf) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::FormFactorUnsupported{ static_cast<int32_t>(0xffffffde) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::FormFactorUnavailable{ static_cast<int32_t>(0xffffffdd) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ApiLayerNotPresent{ static_cast<int32_t>(0xffffffdc) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::CallOrderInvalid{ static_cast<int32_t>(0xffffffdb) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::GraphicsDeviceInvalid{ static_cast<int32_t>(0xffffffda) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::PoseInvalid{ static_cast<int32_t>(0xffffffd9) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::IndexOutOfRange{ static_cast<int32_t>(0xffffffd8) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ViewConfigurationTypeUnsupported{ static_cast<int32_t>(0xffffffd7) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::EnvironmentBlendModeUnsupported{ static_cast<int32_t>(0xffffffd6) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::NameDuplicated{ static_cast<int32_t>(0xffffffd4) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::NameInvalid{ static_cast<int32_t>(0xffffffd3) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ActionsetNotAttached{ static_cast<int32_t>(0xffffffd2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::ActionsetsAlreadyAttached{ static_cast<int32_t>(0xffffffd1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::LocalizedNameDuplicated{ static_cast<int32_t>(0xffffffd0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::LocalizedNameInvalid{ static_cast<int32_t>(0xffffffcf) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::AndroidThreadSettingsIdInvalidKHR{ static_cast<int32_t>(0xc4652a48) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::AndroidThreadSettingsdFailureKHR{ static_cast<int32_t>(0xc4652a47) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::CreateSpatialAnchorFailedMSFT{ static_cast<int32_t>(0xc4649da7) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::SecondaryViewConfigurationTypeNotEnabledMSFT{ static_cast<int32_t>(0xc46466f8) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::XrResult::MaxResult{ static_cast<int32_t>(0x7fffffff) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
