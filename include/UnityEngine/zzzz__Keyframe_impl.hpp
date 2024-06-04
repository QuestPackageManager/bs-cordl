#pragma once
// IWYU pragma private; include "UnityEngine/Keyframe.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
//  Writing Method size for method: ::UnityEngine::Keyframe._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Keyframe::*)(float_t, float_t)>(&::UnityEngine::Keyframe::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33ff84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Keyframe>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Keyframe::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::Keyframe::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33ff85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Keyframe>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Keyframe::_ctor(float_t time, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Keyframe>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, value);
}
inline void UnityEngine::Keyframe::_ctor(float_t time, float_t value, float_t inTangent, float_t outTangent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Keyframe>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, value, inTangent, outTangent);
}
// Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_InTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_WeightedMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutWeight", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Keyframe::Keyframe(float_t m_Time, float_t m_Value, float_t m_InTangent, float_t m_OutTangent, int32_t m_WeightedMode, float_t m_InWeight, float_t m_OutWeight) noexcept {
  this->m_Time = m_Time;
  this->m_Value = m_Value;
  this->m_InTangent = m_InTangent;
  this->m_OutTangent = m_OutTangent;
  this->m_WeightedMode = m_WeightedMode;
  this->m_InWeight = m_InWeight;
  this->m_OutWeight = m_OutWeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::Keyframe::Keyframe() {}
