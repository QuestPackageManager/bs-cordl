#pragma once
// IWYU pragma private; include "UnityEngine\AnimatorStateInfo.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimatorStateInfo.get_normalizedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AnimatorStateInfo::*)()>(&::UnityEngine::AnimatorStateInfo::get_normalizedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a3b524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorStateInfo>(), { "get_normalizedTime", {}, {} })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::AnimatorStateInfo::get_normalizedTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorStateInfo>(), { "get_normalizedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_FullPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorStateInfo::AnimatorStateInfo(int32_t m_Name, int32_t m_Path, int32_t m_FullPath, float_t m_NormalizedTime, float_t m_Length, float_t m_Speed,
                                                              float_t m_SpeedMultiplier, int32_t m_Tag, int32_t m_Loop) noexcept {
  this->m_Name = m_Name;
  this->m_Path = m_Path;
  this->m_FullPath = m_FullPath;
  this->m_NormalizedTime = m_NormalizedTime;
  this->m_Length = m_Length;
  this->m_Speed = m_Speed;
  this->m_SpeedMultiplier = m_SpeedMultiplier;
  this->m_Tag = m_Tag;
  this->m_Loop = m_Loop;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorStateInfo::AnimatorStateInfo() {}
