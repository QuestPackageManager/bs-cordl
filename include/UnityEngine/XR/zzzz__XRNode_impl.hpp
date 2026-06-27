#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRNode.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRNode::XRNode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRNode::XRNode()   {
}
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::LeftEye{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::RightEye{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::CenterEye{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::Head{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::LeftHand{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::RightHand{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::GameController{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::TrackingReference{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::HardwareTracker{static_cast<int32_t>(0x8)};
