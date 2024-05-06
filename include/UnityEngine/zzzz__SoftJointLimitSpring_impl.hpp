#pragma once
#include "UnityEngine/zzzz__SoftJointLimitSpring_def.hpp"
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.get_spring
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::SoftJointLimitSpring::*)()>(&::UnityEngine::SoftJointLimitSpring::get_spring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "get_spring",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.set_spring
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SoftJointLimitSpring::*)(float_t)>(&::UnityEngine::SoftJointLimitSpring::set_spring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "set_spring", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.get_damper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::SoftJointLimitSpring::*)()>(&::UnityEngine::SoftJointLimitSpring::get_damper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "get_damper",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.set_damper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SoftJointLimitSpring::*)(float_t)>(&::UnityEngine::SoftJointLimitSpring::set_damper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "set_damper", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::SoftJointLimitSpring::get_spring() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "get_spring",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::SoftJointLimitSpring::set_spring(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "set_spring",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::SoftJointLimitSpring::get_damper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "get_damper",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::SoftJointLimitSpring::set_damper(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SoftJointLimitSpring>::get(), "set_damper",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Spring", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Damper", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SoftJointLimitSpring::SoftJointLimitSpring(float_t m_Spring, float_t m_Damper) noexcept {
  this->m_Spring = m_Spring;
  this->m_Damper = m_Damper;
}
// Ctor Parameters []
constexpr ::UnityEngine::SoftJointLimitSpring::SoftJointLimitSpring() {}
