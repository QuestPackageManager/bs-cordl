#pragma once
#include "OVR/OpenVR/zzzz__EColorSpace_impl.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "eType", ty: "::OVR::OpenVR::ETextureType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "eColorSpace", ty: "::OVR::OpenVR::EColorSpace", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Texture_t::Texture_t(void* handle, ::OVR::OpenVR::ETextureType eType, ::OVR::OpenVR::EColorSpace eColorSpace) noexcept {
  this->handle = handle;
  this->eType = eType;
  this->eColorSpace = eColorSpace;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::Texture_t::Texture_t() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
