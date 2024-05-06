#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultUnityXRHapticsHandler_def.hpp"
#include "GlobalNamespace/zzzz__IUnityXRHapticsHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::DefaultUnityXRHapticsHandler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d9074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(
    &::GlobalNamespace::DefaultUnityXRHapticsHandler::Destroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24d909c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(),
                                                                               "Destroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)(float_t, float_t)>(
    &::GlobalNamespace::DefaultUnityXRHapticsHandler::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24d90a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.StopHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(
    &::GlobalNamespace::DefaultUnityXRHapticsHandler::StopHaptics)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24d90ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(),
                                                                               "StopHaptics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultUnityXRHapticsHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(
    &::GlobalNamespace::DefaultUnityXRHapticsHandler::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24d911c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IUnityXRHapticsHandler"
constexpr GlobalNamespace::DefaultUnityXRHapticsHandler::operator ::GlobalNamespace::IUnityXRHapticsHandler*() noexcept {
  return static_cast<::GlobalNamespace::IUnityXRHapticsHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IUnityXRHapticsHandler"
constexpr ::GlobalNamespace::IUnityXRHapticsHandler* GlobalNamespace::DefaultUnityXRHapticsHandler::i___GlobalNamespace__IUnityXRHapticsHandler() noexcept {
  return static_cast<::GlobalNamespace::IUnityXRHapticsHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::DefaultUnityXRHapticsHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DefaultUnityXRHapticsHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::DefaultUnityXRHapticsHandler::__cordl_internal_get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::DefaultUnityXRHapticsHandler::__cordl_internal_get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr void GlobalNamespace::DefaultUnityXRHapticsHandler::__cordl_internal_set__node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node = value;
}
inline ::GlobalNamespace::DefaultUnityXRHapticsHandler* GlobalNamespace::DefaultUnityXRHapticsHandler::New_ctor(::UnityEngine::XR::XRNode node) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DefaultUnityXRHapticsHandler*>(node));
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::_ctor(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::Destroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(), "Destroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::TriggerHapticPulse(float_t strength, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strength, duration);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::StopHaptics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(),
                                                                             "StopHaptics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultUnityXRHapticsHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultUnityXRHapticsHandler*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultUnityXRHapticsHandler::DefaultUnityXRHapticsHandler() {}
