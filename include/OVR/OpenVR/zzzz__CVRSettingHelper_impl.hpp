#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRSettingHelper_def.hpp"
// Ctor Parameters [CppParam { name: "m_pSettings", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CVRSettingHelper::CVRSettingHelper(void* m_pSettings) noexcept {
  this->m_pSettings = m_pSettings;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSettingHelper::CVRSettingHelper() {}
