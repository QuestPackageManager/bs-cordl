#pragma once
// IWYU pragma private; include "UnityEngine/IntegrationLimits.hpp"
#include "UnityEngine/zzzz__IntegrationLimits_def.hpp"
#include "UnityEngine/zzzz__ArticulationJointType_def.hpp"
#include "UnityEngine/zzzz__IntegrationLimits_def.hpp"
#include "UnityEngine/zzzz__JointLimitRange_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer::IntegrationLimits__m_Joints_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer::IntegrationLimits__m_Joints_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::IntegrationLimits.GetJointLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointLimitRange (::UnityEngine::IntegrationLimits::*)(::UnityEngine::ArticulationJointType)>(
    &::UnityEngine::IntegrationLimits::GetJointLimit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ffe740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationLimits>(), { "GetJointLimit", {}, { ::i2c::type_of<::UnityEngine::ArticulationJointType>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::JointLimitRange UnityEngine::IntegrationLimits::GetJointLimit(::UnityEngine::ArticulationJointType jointType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegrationLimits>(), { "GetJointLimit", {}, { ::i2c::type_of<::UnityEngine::ArticulationJointType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointLimitRange>(*this, ___internal_method, jointType);
}
// Ctor Parameters [CppParam { name: "m_Joints", ty: "::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::IntegrationLimits::IntegrationLimits(::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer m_Joints) noexcept {
  this->m_Joints = m_Joints;
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegrationLimits::IntegrationLimits() {}
