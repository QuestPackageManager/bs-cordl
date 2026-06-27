#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Chaperone_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Chaperone_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPreviousUniverse", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCurrentUniverse", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Chaperone_t::VREvent_Chaperone_t(uint64_t  m_nPreviousUniverse, uint64_t  m_nCurrentUniverse) noexcept  {
this->m_nPreviousUniverse = m_nPreviousUniverse;
this->m_nCurrentUniverse = m_nCurrentUniverse;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Chaperone_t::VREvent_Chaperone_t()   {
}
