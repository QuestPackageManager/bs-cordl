#pragma once
// IWYU pragma private; include "UnityEngine/JointMotor.hpp"
#include "UnityEngine/zzzz__JointMotor_def.hpp"
//  Writing Method size for method: ::UnityEngine::JointMotor.get_targetVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::JointMotor::*)()>(&::UnityEngine::JointMotor::get_targetVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ef7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "get_targetVelocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.set_targetVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::JointMotor::*)(float_t)>(&::UnityEngine::JointMotor::set_targetVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ef7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "set_targetVelocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.get_force
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::JointMotor::*)()>(&::UnityEngine::JointMotor::get_force)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ef7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "get_force",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.set_force
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::JointMotor::*)(float_t)>(&::UnityEngine::JointMotor::set_force)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ef7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "set_force", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.get_freeSpin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::JointMotor::*)()>(&::UnityEngine::JointMotor::get_freeSpin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x48ef7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "get_freeSpin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.set_freeSpin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::JointMotor::*)(bool)>(&::UnityEngine::JointMotor::set_freeSpin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48ef808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "set_freeSpin", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::JointMotor::get_targetVelocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "get_targetVelocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::JointMotor::set_targetVelocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "set_targetVelocity", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::JointMotor::get_force() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "get_force",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::JointMotor::set_force(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "set_force", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::JointMotor::get_freeSpin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "get_freeSpin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::JointMotor::set_freeSpin(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::JointMotor>::get(), "set_freeSpin", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_TargetVelocity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Force", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_FreeSpin", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::JointMotor::JointMotor(float_t m_TargetVelocity, float_t m_Force, int32_t m_FreeSpin) noexcept {
  this->m_TargetVelocity = m_TargetVelocity;
  this->m_Force = m_Force;
  this->m_FreeSpin = m_FreeSpin;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointMotor::JointMotor() {}
