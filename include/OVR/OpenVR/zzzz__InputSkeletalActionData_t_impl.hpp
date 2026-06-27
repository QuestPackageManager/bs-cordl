#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputSkeletalActionData_t.hpp"
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boneCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::InputSkeletalActionData_t::InputSkeletalActionData_t(bool  bActive, uint64_t  activeOrigin, uint32_t  boneCount) noexcept  {
this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->boneCount = boneCount;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::InputSkeletalActionData_t::InputSkeletalActionData_t()   {
}
