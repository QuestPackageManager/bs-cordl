#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfigBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfigBase_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ICustomIntegrationConfig_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a99b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a99b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase.GetCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::GetCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a99b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a99c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::GetCamera() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase* Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig"
constexpr Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::operator ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig"
constexpr ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig* Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::i___Meta__XR__ImmersiveDebugger__ICustomIntegrationConfig() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase::CustomIntegrationConfigBase() {}
