#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayIntersectionMaskPrimitive_Data_t.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskCircle_t_impl.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskRectangle_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_Data_t_def.hpp"
constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__cordl_internal_get_m_Rectangle()  {
return this->___m_Rectangle;
}
constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t const& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__cordl_internal_get_m_Rectangle() const {
return this->___m_Rectangle;
}
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__cordl_internal_set_m_Rectangle(::OVR::OpenVR::IntersectionMaskRectangle_t  value)  {
this->___m_Rectangle = value;
}
constexpr ::OVR::OpenVR::IntersectionMaskCircle_t& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__cordl_internal_get_m_Circle()  {
return this->___m_Circle;
}
constexpr ::OVR::OpenVR::IntersectionMaskCircle_t const& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__cordl_internal_get_m_Circle() const {
return this->___m_Circle;
}
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__cordl_internal_set_m_Circle(::OVR::OpenVR::IntersectionMaskCircle_t  value)  {
this->___m_Circle = value;
}
// Ctor Parameters [CppParam { name: "m_Rectangle", ty: "::OVR::OpenVR::IntersectionMaskRectangle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Circle", ty: "::OVR::OpenVR::IntersectionMaskCircle_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::VROverlayIntersectionMaskPrimitive_Data_t(::OVR::OpenVR::IntersectionMaskRectangle_t  m_Rectangle, ::OVR::OpenVR::IntersectionMaskCircle_t  m_Circle) noexcept  {
this->m_Rectangle = m_Rectangle;
this->m_Circle = m_Circle;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::VROverlayIntersectionMaskPrimitive_Data_t()   {
}
