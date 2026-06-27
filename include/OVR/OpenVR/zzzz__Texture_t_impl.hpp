#pragma once
// IWYU pragma private; include "OVR/OpenVR/Texture_t.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_impl.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "eType", ty: "::OVR::OpenVR::ETextureType", modifiers: "", def_value: Some("{}") }, CppParam { name: "eColorSpace", ty: "::OVR::OpenVR::EColorSpace", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Texture_t::Texture_t(::System::IntPtr  handle, ::OVR::OpenVR::ETextureType  eType, ::OVR::OpenVR::EColorSpace  eColorSpace) noexcept  {
this->handle = handle;
this->eType = eType;
this->eColorSpace = eColorSpace;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::Texture_t::Texture_t()   {
}
