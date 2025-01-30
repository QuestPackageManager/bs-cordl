#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/MarkPositionAdjustment.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkPositionAdjustment_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment.get_xPositionAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::*)()>(
    &::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_xPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4924084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>::get(),
                                                                               "get_xPositionAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment.get_yPositionAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::*)()>(
    &::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_yPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x492408c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>::get(),
                                                                               "get_yPositionAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline float_t UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_xPositionAdjustment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>::get(),
                                                                             "get_xPositionAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_yPositionAdjustment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>::get(),
                                                                             "get_yPositionAdjustment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_XPositionAdjustment", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_YPositionAdjustment", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::MarkPositionAdjustment(float_t m_XPositionAdjustment, float_t m_YPositionAdjustment) noexcept {
  this->m_XPositionAdjustment = m_XPositionAdjustment;
  this->m_YPositionAdjustment = m_YPositionAdjustment;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::MarkPositionAdjustment() {}
