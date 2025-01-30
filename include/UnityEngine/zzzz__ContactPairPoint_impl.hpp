#pragma once
// IWYU pragma private; include "UnityEngine/ContactPairPoint.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ContactPairPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPairPoint.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPairPoint::*)()>(&::UnityEngine::ContactPairPoint::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4911788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Position",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairPoint.get_Separation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ContactPairPoint::*)()>(&::UnityEngine::ContactPairPoint::get_Separation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4911794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Separation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairPoint.get_Normal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPairPoint::*)()>(&::UnityEngine::ContactPairPoint::get_Normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x491179c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Normal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairPoint.get_Impulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPairPoint::*)()>(&::UnityEngine::ContactPairPoint::get_Impulse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x49117a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Impulse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::ContactPairPoint::get_Position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Position",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t UnityEngine::ContactPairPoint::get_Separation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Separation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPairPoint::get_Normal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Normal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPairPoint::get_Impulse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPairPoint>::get(), "get_Impulse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InternalFaceIndex0", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Impulse", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InternalFaceIndex1", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::ContactPairPoint::ContactPairPoint(::UnityEngine::Vector3 m_Position, float_t m_Separation, ::UnityEngine::Vector3 m_Normal, uint32_t m_InternalFaceIndex0,
                                                            ::UnityEngine::Vector3 m_Impulse, uint32_t m_InternalFaceIndex1) noexcept {
  this->m_Position = m_Position;
  this->m_Separation = m_Separation;
  this->m_Normal = m_Normal;
  this->m_InternalFaceIndex0 = m_InternalFaceIndex0;
  this->m_Impulse = m_Impulse;
  this->m_InternalFaceIndex1 = m_InternalFaceIndex1;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPairPoint::ContactPairPoint() {}
