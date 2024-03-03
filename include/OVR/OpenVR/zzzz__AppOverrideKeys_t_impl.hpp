#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__AppOverrideKeys_t_def.hpp"
// Ctor Parameters [CppParam { name: "pchKey", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchValue", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::AppOverrideKeys_t::AppOverrideKeys_t(void* pchKey, void* pchValue) noexcept {
  this->pchKey = pchKey;
  this->pchValue = pchValue;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::AppOverrideKeys_t::AppOverrideKeys_t() {}
