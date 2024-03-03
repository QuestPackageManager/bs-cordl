#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedChain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::FullBodyBipedChain::FullBodyBipedChain(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::FullBodyBipedChain::FullBodyBipedChain() {}
constexpr ::RootMotion::FinalIK::FullBodyBipedChain RootMotion::FinalIK::FullBodyBipedChain::LeftArm{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::FinalIK::FullBodyBipedChain RootMotion::FinalIK::FullBodyBipedChain::RightArm{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::FinalIK::FullBodyBipedChain RootMotion::FinalIK::FullBodyBipedChain::LeftLeg{ static_cast<int32_t>(0x2) };
constexpr ::RootMotion::FinalIK::FullBodyBipedChain RootMotion::FinalIK::FullBodyBipedChain::RightLeg{ static_cast<int32_t>(0x3) };
