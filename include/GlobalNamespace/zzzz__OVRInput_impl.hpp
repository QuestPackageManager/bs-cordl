#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_Button::OVRInput_Button(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Button::OVRInput_Button() {}
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::One{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Two{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Three{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Four{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Start{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Back{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryShoulder{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryIndexTrigger{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryHandTrigger{ static_cast<int32_t>(0x4000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryThumbstick{ static_cast<int32_t>(0x8000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryThumbstickUp{ static_cast<int32_t>(0x10000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryThumbstickDown{ static_cast<int32_t>(0x20000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryThumbstickLeft{ static_cast<int32_t>(0x40000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryThumbstickRight{ static_cast<int32_t>(0x80000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::PrimaryTouchpad{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryShoulder{ static_cast<int32_t>(0x100000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryIndexTrigger{ static_cast<int32_t>(0x200000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryHandTrigger{ static_cast<int32_t>(0x400000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryThumbstick{ static_cast<int32_t>(0x800000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryThumbstickUp{ static_cast<int32_t>(0x1000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryThumbstickDown{ static_cast<int32_t>(0x2000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryThumbstickLeft{ static_cast<int32_t>(0x4000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryThumbstickRight{ static_cast<int32_t>(0x8000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::SecondaryTouchpad{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::DpadUp{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::DpadDown{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::DpadLeft{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::DpadRight{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Up{ static_cast<int32_t>(0x10000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Down{ static_cast<int32_t>(0x20000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Left{ static_cast<int32_t>(0x40000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Right{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::OVRInput_Button GlobalNamespace::OVRInput_Button::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_RawButton::OVRInput_RawButton(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_RawButton::OVRInput_RawButton() {}
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::A{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::B{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::X{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::Y{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::Start{ static_cast<int32_t>(0x100000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::Back{ static_cast<int32_t>(0x200000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LShoulder{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LIndexTrigger{ static_cast<int32_t>(0x10000000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LHandTrigger{ static_cast<int32_t>(0x20000000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LThumbstick{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LThumbstickUp{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LThumbstickDown{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LThumbstickLeft{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LThumbstickRight{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::LTouchpad{ static_cast<int32_t>(0x40000000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RShoulder{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RIndexTrigger{ static_cast<int32_t>(0x4000000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RHandTrigger{ static_cast<int32_t>(0x8000000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RThumbstick{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RThumbstickUp{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RThumbstickDown{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RThumbstickLeft{ static_cast<int32_t>(0x4000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RThumbstickRight{ static_cast<int32_t>(0x8000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::RTouchpad{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::DpadUp{ static_cast<int32_t>(0x10000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::DpadDown{ static_cast<int32_t>(0x20000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::DpadLeft{ static_cast<int32_t>(0x40000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::DpadRight{ static_cast<int32_t>(0x80000) };
constexpr ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_RawButton::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_Touch::OVRInput_Touch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Touch::OVRInput_Touch() {}
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::One{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::Two{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::Three{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::Four{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::PrimaryIndexTrigger{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::PrimaryThumbstick{ static_cast<int32_t>(0x8000) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::PrimaryThumbRest{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::PrimaryTouchpad{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::SecondaryIndexTrigger{ static_cast<int32_t>(0x200000) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::SecondaryThumbstick{ static_cast<int32_t>(0x800000) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::SecondaryThumbRest{ static_cast<int32_t>(0x100000) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::SecondaryTouchpad{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::OVRInput_Touch GlobalNamespace::OVRInput_Touch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_RawTouch::OVRInput_RawTouch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_RawTouch::OVRInput_RawTouch() {}
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::A{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::B{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::X{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::Y{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::LIndexTrigger{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::LThumbstick{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::LThumbRest{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::LTouchpad{ static_cast<int32_t>(0x40000000) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::RIndexTrigger{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::RThumbstick{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::RThumbRest{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::RTouchpad{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_RawTouch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_NearTouch::OVRInput_NearTouch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_NearTouch::OVRInput_NearTouch() {}
constexpr ::GlobalNamespace::OVRInput_NearTouch GlobalNamespace::OVRInput_NearTouch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_NearTouch GlobalNamespace::OVRInput_NearTouch::PrimaryIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_NearTouch GlobalNamespace::OVRInput_NearTouch::PrimaryThumbButtons{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_NearTouch GlobalNamespace::OVRInput_NearTouch::SecondaryIndexTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_NearTouch GlobalNamespace::OVRInput_NearTouch::SecondaryThumbButtons{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_NearTouch GlobalNamespace::OVRInput_NearTouch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_RawNearTouch::OVRInput_RawNearTouch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_RawNearTouch::OVRInput_RawNearTouch() {}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_RawNearTouch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_RawNearTouch::LIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_RawNearTouch::LThumbButtons{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_RawNearTouch::RIndexTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_RawNearTouch::RThumbButtons{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_RawNearTouch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_Axis1D::OVRInput_Axis1D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Axis1D::OVRInput_Axis1D() {}
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::PrimaryIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::PrimaryHandTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::SecondaryIndexTrigger{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::SecondaryHandTrigger{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::PrimaryIndexTriggerCurl{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::PrimaryIndexTriggerSlide{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::PrimaryThumbRestForce{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::PrimaryStylusForce{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::SecondaryIndexTriggerCurl{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::SecondaryIndexTriggerSlide{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::SecondaryThumbRestForce{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::SecondaryStylusForce{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::PrimaryIndexTriggerForce{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::SecondaryIndexTriggerForce{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::OVRInput_Axis1D GlobalNamespace::OVRInput_Axis1D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_RawAxis1D::OVRInput_RawAxis1D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_RawAxis1D::OVRInput_RawAxis1D() {}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::LIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::LHandTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::RIndexTrigger{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::RHandTrigger{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::LIndexTriggerCurl{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::LIndexTriggerSlide{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::LThumbRestForce{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::LStylusForce{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::RIndexTriggerCurl{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::RIndexTriggerSlide{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::RThumbRestForce{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::RStylusForce{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::LIndexTriggerForce{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::RIndexTriggerForce{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_RawAxis1D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_Axis2D::OVRInput_Axis2D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Axis2D::OVRInput_Axis2D() {}
constexpr ::GlobalNamespace::OVRInput_Axis2D GlobalNamespace::OVRInput_Axis2D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_Axis2D GlobalNamespace::OVRInput_Axis2D::PrimaryThumbstick{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_Axis2D GlobalNamespace::OVRInput_Axis2D::PrimaryTouchpad{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_Axis2D GlobalNamespace::OVRInput_Axis2D::SecondaryThumbstick{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_Axis2D GlobalNamespace::OVRInput_Axis2D::SecondaryTouchpad{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_Axis2D GlobalNamespace::OVRInput_Axis2D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_RawAxis2D::OVRInput_RawAxis2D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_RawAxis2D::OVRInput_RawAxis2D() {}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_RawAxis2D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_RawAxis2D::LThumbstick{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_RawAxis2D::LTouchpad{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_RawAxis2D::RThumbstick{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_RawAxis2D::RTouchpad{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_RawAxis2D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_OpenVRButton::OVRInput_OpenVRButton(uint64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OpenVRButton::OVRInput_OpenVRButton() {}
constexpr ::GlobalNamespace::OVRInput_OpenVRButton GlobalNamespace::OVRInput_OpenVRButton::None{ static_cast<uint64_t>(0x0u) };
constexpr ::GlobalNamespace::OVRInput_OpenVRButton GlobalNamespace::OVRInput_OpenVRButton::Two{ static_cast<uint64_t>(0x2u) };
constexpr ::GlobalNamespace::OVRInput_OpenVRButton GlobalNamespace::OVRInput_OpenVRButton::Thumbstick{ static_cast<uint64_t>(0x100000000u) };
constexpr ::GlobalNamespace::OVRInput_OpenVRButton GlobalNamespace::OVRInput_OpenVRButton::Grip{ static_cast<uint64_t>(0x4u) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_Controller::OVRInput_Controller(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Controller::OVRInput_Controller() {}
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::LTouch{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::RTouch{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::Touch{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::Remote{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::Gamepad{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::Hands{ static_cast<int32_t>(0x60) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::LHand{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::RHand{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::Active{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_Controller::All{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_Handedness::OVRInput_Handedness(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Handedness::OVRInput_Handedness() {}
constexpr ::GlobalNamespace::OVRInput_Handedness GlobalNamespace::OVRInput_Handedness::Unsupported{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_Handedness GlobalNamespace::OVRInput_Handedness::LeftHanded{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_Handedness GlobalNamespace::OVRInput_Handedness::RightHanded{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_HapticsLocation::OVRInput_HapticsLocation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_HapticsLocation::OVRInput_HapticsLocation() {}
constexpr ::GlobalNamespace::OVRInput_HapticsLocation GlobalNamespace::OVRInput_HapticsLocation::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_HapticsLocation GlobalNamespace::OVRInput_HapticsLocation::Hand{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_HapticsLocation GlobalNamespace::OVRInput_HapticsLocation::Thumb{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_HapticsLocation GlobalNamespace::OVRInput_HapticsLocation::Index{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_InteractionProfile::OVRInput_InteractionProfile(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_InteractionProfile::OVRInput_InteractionProfile() {}
constexpr ::GlobalNamespace::OVRInput_InteractionProfile GlobalNamespace::OVRInput_InteractionProfile::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_InteractionProfile GlobalNamespace::OVRInput_InteractionProfile::Touch{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_InteractionProfile GlobalNamespace::OVRInput_InteractionProfile::TouchPro{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_InteractionProfile GlobalNamespace::OVRInput_InteractionProfile::TouchPlus{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_Hand::OVRInput_Hand(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Hand::OVRInput_Hand() {}
constexpr ::GlobalNamespace::OVRInput_Hand GlobalNamespace::OVRInput_Hand::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRInput_Hand GlobalNamespace::OVRInput_Hand::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_Hand GlobalNamespace::OVRInput_Hand::HandRight{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState::OVRInput_InputDeviceShowState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState::OVRInput_InputDeviceShowState() {}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState GlobalNamespace::OVRInput_InputDeviceShowState::Always{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState GlobalNamespace::OVRInput_InputDeviceShowState::ControllerInHandOrNoHand{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState GlobalNamespace::OVRInput_InputDeviceShowState::ControllerInHand{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState GlobalNamespace::OVRInput_InputDeviceShowState::ControllerNotInHand{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState GlobalNamespace::OVRInput_InputDeviceShowState::NoHand{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState::OVRInput_ControllerInHandState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState::OVRInput_ControllerInHandState() {}
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState GlobalNamespace::OVRInput_ControllerInHandState::NoHand{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState GlobalNamespace::OVRInput_ControllerInHandState::ControllerInHand{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRInput_ControllerInHandState GlobalNamespace::OVRInput_ControllerInHandState::ControllerNotInHand{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration::OVRInput_HapticsAmplitudeEnvelopeVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples,
                                                                                                                    float_t Duration) noexcept {
  this->SamplesCount = SamplesCount;
  this->Samples = Samples;
  this->Duration = Duration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration::OVRInput_HapticsAmplitudeEnvelopeVibration() {}
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_HapticsPcmVibration::OVRInput_HapticsPcmVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t SampleRateHz,
                                                                                        bool Append) noexcept {
  this->SamplesCount = SamplesCount;
  this->Samples = Samples;
  this->SampleRateHz = SampleRateHz;
  this->Append = Append;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_HapticsPcmVibration::OVRInput_HapticsPcmVibration() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_OpenVRController::OVRInput_OpenVRController(uint64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OpenVRController::OVRInput_OpenVRController() {}
constexpr ::GlobalNamespace::OVRInput_OpenVRController GlobalNamespace::OVRInput_OpenVRController::Unknown{ static_cast<uint64_t>(0x0u) };
constexpr ::GlobalNamespace::OVRInput_OpenVRController GlobalNamespace::OVRInput_OpenVRController::OculusTouch{ static_cast<uint64_t>(0x1u) };
constexpr ::GlobalNamespace::OVRInput_OpenVRController GlobalNamespace::OVRInput_OpenVRController::ViveController{ static_cast<uint64_t>(0x2u) };
constexpr ::GlobalNamespace::OVRInput_OpenVRController GlobalNamespace::OVRInput_OpenVRController::WindowsMRController{ static_cast<uint64_t>(0x3u) };
// Ctor Parameters [CppParam { name: "state", ty: "::OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controllerType", ty:
// "::GlobalNamespace::OVRInput_OpenVRController", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInput_OpenVRControllerDetails::OVRInput_OpenVRControllerDetails(::OVR::OpenVR::VRControllerState_t state, ::GlobalNamespace::OVRInput_OpenVRController controllerType,
                                                                                                uint32_t deviceID, ::UnityEngine::Vector3 localPosition,
                                                                                                ::UnityEngine::Quaternion localOrientation) noexcept {
  this->state = state;
  this->controllerType = controllerType;
  this->deviceID = deviceID;
  this->localPosition = localPosition;
  this->localOrientation = localOrientation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OpenVRControllerDetails::OVRInput_OpenVRControllerDetails() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_HapticInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_HapticInfo::*)()>(&::GlobalNamespace::OVRInput_HapticInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc2c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_HapticInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_playingHaptics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playingHaptics;
}
constexpr bool const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_playingHaptics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playingHaptics;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_playingHaptics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playingHaptics = value;
}
constexpr float_t& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDurationPlayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticsDurationPlayed;
}
constexpr float_t const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDurationPlayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticsDurationPlayed;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_hapticsDurationPlayed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticsDurationPlayed = value;
}
constexpr float_t& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticsDuration;
}
constexpr float_t const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticsDuration;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_hapticsDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticsDuration = value;
}
constexpr float_t& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticAmplitude;
}
constexpr float_t const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticAmplitude;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_hapticAmplitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticAmplitude = value;
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
inline void GlobalNamespace::OVRInput_HapticInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_HapticInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_HapticInfo* GlobalNamespace::OVRInput_HapticInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_HapticInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_HapticInfo::OVRInput_HapticInfo() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawButton (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::*)(
    ::GlobalNamespace::OVRInput_Button)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::ToRawMask)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3fc4414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::*)()>(
    &::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc36a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_One() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___One;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_One() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___One;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_One(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___One = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Two() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Two;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Two() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Two;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Two = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Three() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Three;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Three() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Three;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Three = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Four() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Four;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Four() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Four;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Four = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Start;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Start;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Start(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Start = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Back() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Back;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Back() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Back;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Back(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Back = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryShoulder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryShoulder;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryShoulder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryShoulder;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryShoulder(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryShoulder = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickUp;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickUp;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbstickUp = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickDown;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickDown;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbstickDown = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickLeft;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickLeft;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbstickLeft = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickRight;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstickRight;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbstickRight = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryShoulder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryShoulder;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryShoulder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryShoulder;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryShoulder(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryShoulder = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickUp;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickUp;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbstickUp = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickDown;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickDown;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbstickDown = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickLeft;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickLeft;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbstickLeft = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickRight;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstickRight;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbstickRight = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadUp;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadUp;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadUp(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DpadUp = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadDown;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadDown;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadDown(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DpadDown = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadLeft;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadLeft;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadLeft(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DpadLeft = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadRight;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DpadRight;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadRight(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DpadRight = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Up() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Up;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Up() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Up;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Up(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Up = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Down() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Down;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Down() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Down;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Down(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Down = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Left(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Left = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Right(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Right = value;
}
inline ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::ToRawMask(::GlobalNamespace::OVRInput_Button virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawButton, false>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::OVRControllerBase_OVRInput_VirtualButtonMap() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawTouch (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::*)(
    ::GlobalNamespace::OVRInput_Touch)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3fc4628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::*)()>(
    &::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc36b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_One() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___One;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_One() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___One;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_One(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___One = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Two() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Two;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Two() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Two;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Two = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Three() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Three;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Three() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Three;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Three = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Four() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Four;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Four() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Four;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Four = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbRest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbRest;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbRest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbRest;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryThumbRest(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbRest = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbRest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbRest;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbRest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbRest;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryThumbRest(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbRest = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryTouchpad = value;
}
inline ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::ToRawMask(::GlobalNamespace::OVRInput_Touch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawTouch, false>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::OVRControllerBase_OVRInput_VirtualTouchMap() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawNearTouch (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::*)(
    ::GlobalNamespace::OVRInput_NearTouch)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3fc46fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::*)()>(
    &::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc36b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryThumbButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbButtons;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryThumbButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbButtons;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_PrimaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbButtons = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryThumbButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbButtons;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryThumbButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbButtons;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_SecondaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbButtons = value;
}
inline ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::ToRawMask(::GlobalNamespace::OVRInput_NearTouch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawNearTouch, false>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::OVRControllerBase_OVRInput_VirtualNearTouchMap() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawAxis1D (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::*)(
    ::GlobalNamespace::OVRInput_Axis1D)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::ToRawMask)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc4750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::*)()>(
    &::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc36c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerCurl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTriggerCurl;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerCurl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTriggerCurl;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryIndexTriggerCurl = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerSlide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTriggerSlide;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerSlide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTriggerSlide;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryIndexTriggerSlide = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryThumbRestForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbRestForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryThumbRestForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbRestForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbRestForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryStylusForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryStylusForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryStylusForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryStylusForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryStylusForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerCurl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTriggerCurl;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerCurl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTriggerCurl;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryIndexTriggerCurl = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerSlide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTriggerSlide;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerSlide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTriggerSlide;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryIndexTriggerSlide = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryThumbRestForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbRestForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryThumbRestForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbRestForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbRestForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryStylusForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryStylusForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryStylusForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryStylusForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryStylusForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTriggerForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryIndexTriggerForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryIndexTriggerForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTriggerForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryIndexTriggerForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryIndexTriggerForce = value;
}
inline ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::ToRawMask(::GlobalNamespace::OVRInput_Axis1D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis1D, false>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::OVRControllerBase_OVRInput_VirtualAxis1DMap() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawAxis2D (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::*)(
    ::GlobalNamespace::OVRInput_Axis2D)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3fc4844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::*)()>(
    &::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc36c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SecondaryTouchpad = value;
}
inline ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::ToRawMask(::GlobalNamespace::OVRInput_Axis2D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>::get(), "ToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis2D, false>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::OVRControllerBase_OVRInput_VirtualAxis2DMap() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3fc34f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Controller (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::Update)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x3fc36d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.GetOpenVRControllerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_ControllerState6 (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput_OVRControllerBase::GetOpenVRControllerState)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x3fc3aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "GetOpenVRControllerState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)(float_t, float_t)>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerVibration)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3fc3f54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerLocalizedVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_HapticsLocation, float_t, float_t)>(&::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3fc3fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerHapticsAmplitudeEnvelope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration)>(&::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3fc404c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerHapticsPcm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_HapticsPcmVibration)>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3fc4184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.GetControllerSampleRateHz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3fc4398;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc440c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawButton (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_Button)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3fc07d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawTouch (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_Touch)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3fc0dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawNearTouch (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_NearTouch)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3fc1490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawAxis1D (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_Axis1D)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3fc2054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_RawAxis2D (::GlobalNamespace::OVRInput_OVRControllerBase::*)(
    ::GlobalNamespace::OVRInput_Axis2D)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3fc2500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Controller& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_controllerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerType;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_controllerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerType;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_controllerType(::GlobalNamespace::OVRInput_Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerType = value;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_buttonMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_buttonMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_buttonMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_touchMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___touchMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_touchMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___touchMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_touchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___touchMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_nearTouchMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearTouchMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_nearTouchMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nearTouchMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_nearTouchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nearTouchMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis1DMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis1DMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis1DMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis1DMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_axis1DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axis1DMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis2DMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis2DMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis2DMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis2DMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_axis2DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axis2DMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_previousState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousState;
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_previousState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousState;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_previousState(::GlobalNamespace::OVRPlugin_ControllerState6 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousState = value;
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_currentState(::GlobalNamespace::OVRPlugin_ControllerState6 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentState = value;
}
constexpr bool& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_shouldApplyDeadzone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldApplyDeadzone;
}
constexpr bool const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_shouldApplyDeadzone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldApplyDeadzone;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_shouldApplyDeadzone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldApplyDeadzone = value;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_HapticsPcmSamplesConsumedCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HapticsPcmSamplesConsumedCache;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_HapticsPcmSamplesConsumedCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HapticsPcmSamplesConsumedCache;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HapticsPcmSamplesConsumedCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_OVRControllerBase::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_ControllerState6 GlobalNamespace::OVRInput_OVRControllerBase::GetOpenVRControllerState(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "GetOpenVRControllerState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_ControllerState6, false>(this, ___internal_method, controllerType);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::SetControllerVibration(float_t frequency, float_t amplitude) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frequency, amplitude);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hapticsLocationMask, frequency, amplitude);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration hapticsVibration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hapticsVibration);
}
inline int32_t GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration hapticsVibration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, hapticsVibration);
}
inline float_t GlobalNamespace::OVRInput_OVRControllerBase::GetControllerSampleRateHz() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerBase::GetBatteryPercentRemaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Button virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawButton, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Touch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawTouch, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_NearTouch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawNearTouch, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Axis1D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis1D, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Axis2D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerBase*>::get(), "ResolveToRawMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis2D, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_OVRControllerBase* GlobalNamespace::OVRInput_OVRControllerBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerBase::OVRInput_OVRControllerBase() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3fbd7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc4898;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3fc4900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3fc493c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3fc4968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3fc49b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3fc49e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 10));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerTouch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerTouch::GetBatteryPercentRemaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerTouch*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerTouch* GlobalNamespace::OVRInput_OVRControllerTouch::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerTouch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerTouch::OVRInput_OVRControllerTouch() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLTouch::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc49f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3fc4a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3fc4a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4ab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3fc4adc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4b24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc4b4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 10));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerLTouch::GetBatteryPercentRemaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLTouch*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerLTouch* GlobalNamespace::OVRInput_OVRControllerLTouch::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerLTouch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerLTouch::OVRInput_OVRControllerLTouch() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRTouch::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3fc4b74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3fc4bec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4c20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3fc4c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4c90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc4cb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 10));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerRTouch::GetBatteryPercentRemaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRTouch*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerRTouch* GlobalNamespace::OVRInput_OVRControllerRTouch::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerRTouch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerRTouch::OVRInput_OVRControllerRTouch() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc4ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4d30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4d58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4d78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4da0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerHands::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3fc4dc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 10));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerHands::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerHands::GetBatteryPercentRemaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerHands*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerHands* GlobalNamespace::OVRInput_OVRControllerHands::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerHands*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerHands::OVRInput_OVRControllerHands() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc4df4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4e6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4e8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4eb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerLHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc4ed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 10));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerLHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerLHand::GetBatteryPercentRemaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerLHand*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerLHand* GlobalNamespace::OVRInput_OVRControllerLHand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerLHand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerLHand::OVRInput_OVRControllerLHand() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc4efc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4f4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4f74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc4f94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4fbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc4fdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 10));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerRHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerRHand::GetBatteryPercentRemaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRHand*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerRHand* GlobalNamespace::OVRInput_OVRControllerRHand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerRHand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerRHand::OVRInput_OVRControllerRHand() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRemote::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc4fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fc5004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc5064;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc508c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc50ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc50d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerRemote::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerRemote*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerRemote* GlobalNamespace::OVRInput_OVRControllerRemote::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerRemote*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerRemote::OVRInput_OVRControllerRemote() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadPC::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc50f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3fc5114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc5184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc51ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3fc51cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc51fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureButtonMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureNearTouchMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis1DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis2DMap() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerGamepadPC* GlobalNamespace::OVRInput_OVRControllerGamepadPC::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerGamepadPC::OVRInput_OVRControllerGamepadPC() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc5224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3fc5244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc52b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc52dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3fc52fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc532c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureButtonMap() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureTouchMap() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureNearTouchMap() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis1DMap() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis2DMap() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid* GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::OVRInput_OVRControllerGamepadAndroid() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput.get_pluginSupportsActiveController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::get_pluginSupportsActiveController)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fbd1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "get_pluginSupportsActiveController",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::Update)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x3fbd90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::FixedUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3fbe494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_InteractionProfile (*)(::GlobalNamespace::OVRInput_Hand)>(
    &::GlobalNamespace::OVRInput::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fbe5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetCurrentInteractionProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerOrientationTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerOrientationTracked)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3fbe5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationTracked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerOrientationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerOrientationValid)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3fbe6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerPositionTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerPositionTracked)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3fbe7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionTracked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerPositionValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerPositionValid)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3fbe8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.AreHandPosesGeneratedByControllerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin_Step, ::GlobalNamespace::OVRInput_Hand)>(
    &::GlobalNamespace::OVRInput::AreHandPosesGeneratedByControllerData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fbe9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "AreHandPosesGeneratedByControllerData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Step>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.EnableSimultaneousHandsAndControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::EnableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3fbea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "EnableSimultaneousHandsAndControllers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.DisableSimultaneousHandsAndControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::DisableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3fbeaa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "DisableSimultaneousHandsAndControllers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerIsInHandState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_ControllerInHandState (*)(::GlobalNamespace::OVRInput_Hand)>(
    &::GlobalNamespace::OVRInput::GetControllerIsInHandState)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3fbeafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerIsInHandState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetActiveControllerForHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Controller (*)(::GlobalNamespace::OVRInput_Handedness)>(
    &::GlobalNamespace::OVRInput::GetActiveControllerForHand)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3fbebfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveControllerForHand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Handedness>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerPosition)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x3fbed00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerVelocity)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3fbf2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerVelocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAcceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerAcceleration)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3fbf53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAcceleration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerRotation)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x3fbf794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerRotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAngularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3fbfd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularVelocity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAngularAcceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3fbffa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularAcceleration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerStatesWithoutPrediction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller, ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Quaternion>,
                                                                                           ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x3fc020c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerStatesWithoutPrediction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Quaternion>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDominantHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Handedness (*)()>(&::GlobalNamespace::OVRInput::GetDominantHand)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc0580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDominantHand",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc05d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fbe3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButton)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3fc0638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc07e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc09b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButtonDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButtonDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3fc0850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonDown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc0a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc0be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButtonUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButtonUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3fc0a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonUp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc0c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fbe42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouch)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3fc0cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc0e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc0fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouchDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3fc0e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchDown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc1044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc120c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouchUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3fc10ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchUp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc1274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc1428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_RawNearTouch,
                                                                                           ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouch)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3fc12dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc14a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc1670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouchDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_RawNearTouch,
                                                                                           ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3fc1510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchDown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc16d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc18a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouchUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_RawNearTouch,
                                                                                           ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3fc1740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchUp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Axis1D, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc1908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_RawAxis1D, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc1fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis1D>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedAxis1D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)(::GlobalNamespace::OVRInput_Axis1D, ::GlobalNamespace::OVRInput_RawAxis1D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedAxis1D)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x3fc1970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis1D", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis1D>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRInput_Axis2D, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc20e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRInput_RawAxis2D, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc2498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis2D>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedAxis2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(
    ::GlobalNamespace::OVRInput_Axis2D, ::GlobalNamespace::OVRInput_RawAxis2D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedAxis2D)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x3fc2148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis2D", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis2D>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetConnectedControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Controller (*)()>(&::GlobalNamespace::OVRInput::GetConnectedControllers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc2678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetConnectedControllers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.IsControllerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::IsControllerConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3fc26d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsControllerConnected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetActiveController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Controller (*)()>(&::GlobalNamespace::OVRInput::GetActiveController)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc2734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.StartVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRInput::StartVibration)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3fc278c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "StartVibration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetOpenVRLocalPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::OVRInput::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3fc2890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetOpenVRLocalPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetOpenVRStringProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::OVR::OpenVR::ETrackedDeviceProperty, uint32_t)>(
    &::GlobalNamespace::OVRInput::GetOpenVRStringProperty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3fc29a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetOpenVRStringProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.UpdateXRControllerNodeIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::UpdateXRControllerNodeIds)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x3fbde48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerNodeIds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.UpdateXRControllerHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::UpdateXRControllerHaptics)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3fbe1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerHaptics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.InitHapticInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::InitHapticInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3fbd7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "InitHapticInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.PlayHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRInput::PlayHapticImpulse)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3fc2af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "PlayHapticImpulse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.IsValidOpenVRDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::GlobalNamespace::OVRInput::IsValidOpenVRDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc2c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsValidOpenVRDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::SetControllerVibration)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3fc2c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerVibration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerLocalizedVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRInput_HapticsLocation, float_t, float_t, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3fc2e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerLocalizedVibration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_HapticsLocation>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerHapticsAmplitudeEnvelope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3fc2ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsAmplitudeEnvelope", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerHapticsPcm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::OVRInput_HapticsPcmVibration, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3fc314c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsPcm", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_HapticsPcmVibration>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerSampleRateHz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3fc32a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerSampleRateHz", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3fc33d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerBatteryPercentRemaining", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateAbsMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fc2650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateAbsMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3fc20bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateDeadzone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3fc2518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateDeadzone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc206c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.ShouldResolveController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller, ::GlobalNamespace::OVRInput_Controller)>(
    &::GlobalNamespace::OVRInput::ShouldResolveController)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3fc0784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "ShouldResolveController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput::setStaticF_AXIS_AS_BUTTON_THRESHOLD(float_t value) {
  ::cordl_internals::setStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_AXIS_AS_BUTTON_THRESHOLD() {
  return ::cordl_internals::getStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_AXIS_DEADZONE_THRESHOLD(float_t value) {
  ::cordl_internals::setStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_AXIS_DEADZONE_THRESHOLD() {
  return ::cordl_internals::getStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_controllers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*, "controllers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>* GlobalNamespace::OVRInput::getStaticF_controllers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*, "controllers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_activeControllerType(::GlobalNamespace::OVRInput_Controller value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRInput_Controller, "activeControllerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::GlobalNamespace::OVRInput_Controller>(value));
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::getStaticF_activeControllerType() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRInput_Controller, "activeControllerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_connectedControllerTypes(::GlobalNamespace::OVRInput_Controller value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRInput_Controller, "connectedControllerTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::GlobalNamespace::OVRInput_Controller>(value));
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::getStaticF_connectedControllerTypes() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRInput_Controller, "connectedControllerTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_stepType(::GlobalNamespace::OVRPlugin_Step value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Step, "stepType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::GlobalNamespace::OVRPlugin_Step>(value));
}
inline ::GlobalNamespace::OVRPlugin_Step GlobalNamespace::OVRInput::getStaticF_stepType() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Step, "stepType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_fixedUpdateCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "fixedUpdateCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRInput::getStaticF_fixedUpdateCount() {
  return ::cordl_internals::getStaticField<int32_t, "fixedUpdateCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveController(bool value) {
  ::cordl_internals::setStaticField<bool, "_pluginSupportsActiveController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveController() {
  return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveControllerCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_pluginSupportsActiveControllerCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveControllerCached() {
  return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveControllerCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveControllerMinVersion(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_pluginSupportsActiveControllerMinVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveControllerMinVersion() {
  return ::cordl_internals::getStaticField<::System::Version*, "_pluginSupportsActiveControllerMinVersion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_NUM_HAPTIC_CHANNELS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRInput::getStaticF_NUM_HAPTIC_CHANNELS() {
  return ::cordl_internals::getStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_hapticInfos(::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*>, "hapticInfos",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*> GlobalNamespace::OVRInput::getStaticF_hapticInfos() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*>, "hapticInfos",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t value) {
  ::cordl_internals::setStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE() {
  return ::cordl_internals::getStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS(float_t value) {
  ::cordl_internals::setStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS() {
  return ::cordl_internals::getStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_TOUCH_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_TOUCH_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_TOUCH_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_TOUCH_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_VIVE_CONTROLLER_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_VIVE_CONTROLLER_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void
GlobalNamespace::OVRInput::setStaticF_openVRControllerDetails(::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*>, "openVRControllerDetails",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*> GlobalNamespace::OVRInput::getStaticF_openVRControllerDetails() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*>, "openVRControllerDetails",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline bool GlobalNamespace::OVRInput::get_pluginSupportsActiveController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "get_pluginSupportsActiveController",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_InteractionProfile GlobalNamespace::OVRInput::GetCurrentInteractionProfile(::GlobalNamespace::OVRInput_Hand hand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetCurrentInteractionProfile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_InteractionProfile, false>(nullptr, ___internal_method, hand);
}
inline bool GlobalNamespace::OVRInput::GetControllerOrientationTracked(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationTracked", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerOrientationValid(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationValid", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerPositionTracked(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionTracked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerPositionValid(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::AreHandPosesGeneratedByControllerData(::GlobalNamespace::OVRPlugin_Step stepId, ::GlobalNamespace::OVRInput_Hand hand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "AreHandPosesGeneratedByControllerData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Step>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stepId, hand);
}
inline bool GlobalNamespace::OVRInput::EnableSimultaneousHandsAndControllers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "EnableSimultaneousHandsAndControllers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::DisableSimultaneousHandsAndControllers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "DisableSimultaneousHandsAndControllers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_ControllerInHandState GlobalNamespace::OVRInput::GetControllerIsInHandState(::GlobalNamespace::OVRInput_Hand hand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerIsInHandState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_ControllerInHandState, false>(nullptr, ___internal_method, hand);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::GetActiveControllerForHand(::GlobalNamespace::OVRInput_Handedness handedness) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveControllerForHand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Handedness>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller, false>(nullptr, ___internal_method, handedness);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerPosition(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerVelocity(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerVelocity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAcceleration(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAcceleration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRInput::GetLocalControllerRotation(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerRotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularVelocity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration(::GlobalNamespace::OVRInput_Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularAcceleration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction(::GlobalNamespace::OVRInput_Controller controllerType, ::ByRef<::UnityEngine::Vector3> position,
                                                                                 ::ByRef<::UnityEngine::Quaternion> rotation, ::ByRef<::UnityEngine::Vector3> velocity,
                                                                                 ::ByRef<::UnityEngine::Vector3> angularVelocity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerStatesWithoutPrediction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Quaternion>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType, position, rotation, velocity, angularVelocity);
}
inline ::GlobalNamespace::OVRInput_Handedness GlobalNamespace::OVRInput::GetDominantHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDominantHand",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Handedness, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButton(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_RawButton rawMask,
                                                         ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButtonDown(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_RawButton rawMask,
                                                             ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButtonUp(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_RawButton rawMask,
                                                           ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonUp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawButton>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouch(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_RawTouch rawMask,
                                                        ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouchDown(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_RawTouch rawMask,
                                                            ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouchUp(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_RawTouch rawMask,
                                                          ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchUp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Touch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouch(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch rawMask,
                                                            ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouchDown(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch rawMask,
                                                                ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouchUp(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch rawMask,
                                                              ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchUp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_NearTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawNearTouch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Axis1D virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawAxis1D rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis1D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::GetResolvedAxis1D(::GlobalNamespace::OVRInput_Axis1D virtualMask, ::GlobalNamespace::OVRInput_RawAxis1D rawMask,
                                                            ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis1D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis1D>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis1D>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Axis2D virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawAxis2D rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis2D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::GetResolvedAxis2D(::GlobalNamespace::OVRInput_Axis2D virtualMask, ::GlobalNamespace::OVRInput_RawAxis2D rawMask,
                                                                           ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis2D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Axis2D>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_RawAxis2D>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::GetConnectedControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetConnectedControllers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::IsControllerConnected(::GlobalNamespace::OVRInput_Controller controller) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsControllerConnected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controller);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::GetActiveController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::StartVibration(float_t amplitude, float_t duration, ::UnityEngine::XR::XRNode controllerNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "StartVibration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, amplitude, duration, controllerNode);
}
inline void GlobalNamespace::OVRInput::SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetOpenVRLocalPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
inline ::StringW GlobalNamespace::OVRInput::GetOpenVRStringProperty(::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t deviceId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetOpenVRStringProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, prop, deviceId);
}
inline void GlobalNamespace::OVRInput::UpdateXRControllerNodeIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerNodeIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::UpdateXRControllerHaptics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerHaptics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::InitHapticInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "InitHapticInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::PlayHapticImpulse(float_t amplitude, ::UnityEngine::XR::XRNode deviceNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "PlayHapticImpulse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, amplitude, deviceNode);
}
inline bool GlobalNamespace::OVRInput::IsValidOpenVRDevice(uint32_t deviceId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsValidOpenVRDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId);
}
inline void GlobalNamespace::OVRInput::SetControllerVibration(float_t frequency, float_t amplitude, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerVibration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frequency, amplitude, controllerMask);
}
inline void GlobalNamespace::OVRInput::SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude,
                                                                       ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerLocalizedVibration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_HapticsLocation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapticsLocationMask, frequency, amplitude, controllerMask);
}
inline void GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration hapticsVibration,
                                                                             ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsAmplitudeEnvelope", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
inline int32_t GlobalNamespace::OVRInput::SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration hapticsVibration, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsPcm", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_HapticsPcmVibration>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::GetControllerSampleRateHz(::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerSampleRateHz", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, controllerMask);
}
inline uint8_t GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining(::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerBatteryPercentRemaining", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateAbsMax(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, a, b);
}
inline float_t GlobalNamespace::OVRInput::CalculateAbsMax(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateDeadzone(::UnityEngine::Vector2 a, float_t deadzone) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, a, deadzone);
}
inline float_t GlobalNamespace::OVRInput::CalculateDeadzone(float_t a, float_t deadzone) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, deadzone);
}
inline bool GlobalNamespace::OVRInput::ShouldResolveController(::GlobalNamespace::OVRInput_Controller controllerType, ::GlobalNamespace::OVRInput_Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "ShouldResolveController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType, controllerMask);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput::OVRInput() {}
