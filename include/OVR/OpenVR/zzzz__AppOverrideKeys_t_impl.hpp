#pragma once
// IWYU pragma private; include "OVR/OpenVR/AppOverrideKeys_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__AppOverrideKeys_t_def.hpp"
// Ctor Parameters [CppParam { name: "pchKey", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "pchValue", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::AppOverrideKeys_t::AppOverrideKeys_t(::System::IntPtr  pchKey, ::System::IntPtr  pchValue) noexcept  {
this->pchKey = pchKey;
this->pchValue = pchValue;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::AppOverrideKeys_t::AppOverrideKeys_t()   {
}
