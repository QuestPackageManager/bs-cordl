#pragma once
// IWYU pragma private; include "UnityEngine/BlendShapeBufferRange.hpp"
#include "UnityEngine/zzzz__BlendShapeBufferRange_def.hpp"
//  Writing Method size for method: ::UnityEngine::BlendShapeBufferRange.set_startIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::BlendShapeBufferRange::*)(uint32_t)>(&::UnityEngine::BlendShapeBufferRange::set_startIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4887938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BlendShapeBufferRange>::get(), "set_startIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BlendShapeBufferRange.set_endIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::BlendShapeBufferRange::*)(uint32_t)>(&::UnityEngine::BlendShapeBufferRange::set_endIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4887948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BlendShapeBufferRange>::get(), "set_endIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::BlendShapeBufferRange::set_startIndex(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BlendShapeBufferRange>::get(), "set_startIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::BlendShapeBufferRange::set_endIndex(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BlendShapeBufferRange>::get(), "set_endIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_StartIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BlendShapeBufferRange::BlendShapeBufferRange(uint32_t m_StartIndex, uint32_t m_EndIndex) noexcept {
  this->m_StartIndex = m_StartIndex;
  this->m_EndIndex = m_EndIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::BlendShapeBufferRange::BlendShapeBufferRange() {}
