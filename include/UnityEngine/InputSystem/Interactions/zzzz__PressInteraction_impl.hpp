#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__PressBehavior_impl.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__PressInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::PressInteraction.get_pressPointOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::PressInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::PressInteraction::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b0c6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(), "get_pressPointOrDefault",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::PressInteraction.get_releasePointOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::PressInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::PressInteraction::get_releasePointOrDefault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b0c704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(),
                                                 "get_releasePointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::PressInteraction.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::PressInteraction::*)(
    ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&::UnityEngine::InputSystem::Interactions::PressInteraction::Process)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x2b0c78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::PressInteraction.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::PressInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::PressInteraction::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0cb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::PressInteraction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::PressInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::PressInteraction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0cb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
constexpr UnityEngine::InputSystem::Interactions::PressInteraction::operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
constexpr ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::InputSystem::Interactions::PressInteraction::i___UnityEngine__InputSystem__IInputInteraction() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
constexpr float_t& UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_get_pressPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr float_t const& UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_get_pressPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr void UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_set_pressPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pressPoint = value;
}
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior& UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_get_behavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___behavior;
}
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior const& UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_get_behavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___behavior;
}
constexpr void UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_set_behavior(::UnityEngine::InputSystem::Interactions::PressBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___behavior = value;
}
constexpr bool& UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_get_m_WaitingForRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingForRelease;
}
constexpr bool const& UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_get_m_WaitingForRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingForRelease;
}
constexpr void UnityEngine::InputSystem::Interactions::PressInteraction::__cordl_internal_set_m_WaitingForRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WaitingForRelease = value;
}
inline float_t UnityEngine::InputSystem::Interactions::PressInteraction::get_pressPointOrDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(),
                                                                             "get_pressPointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Interactions::PressInteraction::get_releasePointOrDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(),
                                                                             "get_releasePointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Interactions::PressInteraction::Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Interactions::PressInteraction::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Interactions::PressInteraction* UnityEngine::InputSystem::Interactions::PressInteraction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Interactions::PressInteraction*>());
}
inline void UnityEngine::InputSystem::Interactions::PressInteraction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::PressInteraction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Interactions::PressInteraction::PressInteraction() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
