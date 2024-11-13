#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphAnchorPoint.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAnchorPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint.get_xCoordinate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_xCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bc780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>::get(),
                                                                               "get_xCoordinate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint.get_yCoordinate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)()>(
    &::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_yCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bc788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>::get(),
                                                                               "get_yCoordinate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline float_t UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_xCoordinate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>::get(),
                                                                             "get_xCoordinate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_yCoordinate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>::get(),
                                                                             "get_yCoordinate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_XCoordinate", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_YCoordinate", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::GlyphAnchorPoint(float_t m_XCoordinate, float_t m_YCoordinate) noexcept {
  this->m_XCoordinate = m_XCoordinate;
  this->m_YCoordinate = m_YCoordinate;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::GlyphAnchorPoint() {}
