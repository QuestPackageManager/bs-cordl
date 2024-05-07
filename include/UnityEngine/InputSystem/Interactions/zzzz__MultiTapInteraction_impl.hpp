#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Interactions/MultiTapInteraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__MultiTapInteraction_impl.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__MultiTapInteraction_def.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__MultiTapInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::__MultiTapInteraction__TapPhase(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::__MultiTapInteraction__TapPhase() {}
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::WaitingForNextRelease{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::WaitingForNextPress{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_tapTimeOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapTimeOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3179d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "get_tapTimeOrDefault",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_tapDelayOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapDelayOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3179e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "get_tapDelayOrDefault",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_pressPointOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3179e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(),
                                                 "get_pressPointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_releasePointOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_releasePointOrDefault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3179ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(),
                                                 "get_releasePointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)(
    ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::Process)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3179f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::MultiTapInteraction::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x317a1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(
    &::UnityEngine::InputSystem::Interactions::MultiTapInteraction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x317a1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction_1<float_t>"
constexpr UnityEngine::InputSystem::Interactions::MultiTapInteraction::operator ::UnityEngine::InputSystem::IInputInteraction_1<float_t>*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction_1<float_t>"
constexpr ::UnityEngine::InputSystem::IInputInteraction_1<float_t>* UnityEngine::InputSystem::Interactions::MultiTapInteraction::i___UnityEngine__InputSystem__IInputInteraction_1_float_t_() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
constexpr UnityEngine::InputSystem::Interactions::MultiTapInteraction::operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
constexpr ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::InputSystem::Interactions::MultiTapInteraction::i___UnityEngine__InputSystem__IInputInteraction() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
constexpr float_t& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_tapTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapTime;
}
constexpr float_t const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_tapTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapTime;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_tapTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tapTime = value;
}
constexpr float_t& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_tapDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapDelay;
}
constexpr float_t const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_tapDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapDelay;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_tapDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tapDelay = value;
}
constexpr int32_t& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_tapCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapCount;
}
constexpr int32_t const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_tapCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapCount;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_tapCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tapCount = value;
}
constexpr float_t& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_pressPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr float_t const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_pressPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_pressPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pressPoint = value;
}
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_CurrentTapPhase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTapPhase;
}
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_CurrentTapPhase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTapPhase;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_m_CurrentTapPhase(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTapPhase = value;
}
constexpr int32_t& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_CurrentTapCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTapCount;
}
constexpr int32_t const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_CurrentTapCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTapCount;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_m_CurrentTapCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTapCount = value;
}
constexpr double_t& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_CurrentTapStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTapStartTime;
}
constexpr double_t const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_CurrentTapStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTapStartTime;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_m_CurrentTapStartTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTapStartTime = value;
}
constexpr double_t& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_LastTapReleaseTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTapReleaseTime;
}
constexpr double_t const& UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_get_m_LastTapReleaseTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTapReleaseTime;
}
constexpr void UnityEngine::InputSystem::Interactions::MultiTapInteraction::__cordl_internal_set_m_LastTapReleaseTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastTapReleaseTime = value;
}
inline float_t UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapTimeOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "get_tapTimeOrDefault",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapDelayOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "get_tapDelayOrDefault",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_pressPointOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "get_pressPointOrDefault",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_releasePointOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(),
                                               "get_releasePointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Interactions::MultiTapInteraction::Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Interactions::MultiTapInteraction::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Interactions::MultiTapInteraction* UnityEngine::InputSystem::Interactions::MultiTapInteraction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>());
}
inline void UnityEngine::InputSystem::Interactions::MultiTapInteraction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::MultiTapInteraction() {}
