#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Notification_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Notification_t_def.hpp"
// Ctor Parameters [CppParam { name: "ulUserValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "notificationId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Notification_t::VREvent_Notification_t(uint64_t  ulUserValue, uint32_t  notificationId) noexcept  {
this->ulUserValue = ulUserValue;
this->notificationId = notificationId;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Notification_t::VREvent_Notification_t()   {
}
