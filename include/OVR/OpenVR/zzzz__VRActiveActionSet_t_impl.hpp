#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRActiveActionSet_t.hpp"
#include "OVR/OpenVR/zzzz__VRActiveActionSet_t_def.hpp"
// Ctor Parameters [CppParam { name: "ulActionSet", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulRestrictedToDevice", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulSecondaryActionSet", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unPadding", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nPriority", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRActiveActionSet_t::VRActiveActionSet_t(uint64_t  ulActionSet, uint64_t  ulRestrictedToDevice, uint64_t  ulSecondaryActionSet, uint32_t  unPadding, int32_t  nPriority) noexcept  {
this->ulActionSet = ulActionSet;
this->ulRestrictedToDevice = ulRestrictedToDevice;
this->ulSecondaryActionSet = ulSecondaryActionSet;
this->unPadding = unPadding;
this->nPriority = nPriority;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRActiveActionSet_t::VRActiveActionSet_t()   {
}
