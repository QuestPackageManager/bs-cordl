#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffect.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXOutputEventArgs_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.get_visualEffectAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::VFX::VisualEffectAsset> (::UnityEngine::VFX::VisualEffect::*)()>(
    &::UnityEngine::VFX::VisualEffect::get_visualEffectAsset)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6bf7f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(),
                                                                               "get_visualEffectAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.CreateVFXEventAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (::UnityEngine::VFX::VisualEffect::*)()>(
    &::UnityEngine::VFX::VisualEffect::CreateVFXEventAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6bf80d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(),
                                                                               "CreateVFXEventAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.InvokeGetCachedEventAttributeForOutputEvent_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bf8168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(), "InvokeGetCachedEventAttributeForOutputEvent_Internal",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VisualEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.InvokeOutputEventReceived_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::VFX::VisualEffect*, int32_t)>(
    &::UnityEngine::VFX::VisualEffect::InvokeOutputEventReceived_Internal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6bf81a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(), "InvokeOutputEventReceived_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VisualEffect*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffect.get_visualEffectAsset_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::VFX::VisualEffect::get_visualEffectAsset_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bf809c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(), "get_visualEffectAsset_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::VFXEventAttribute*& UnityEngine::VFX::VisualEffect::__cordl_internal_get_m_cachedEventAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cachedEventAttribute;
}
constexpr ::UnityEngine::VFX::VFXEventAttribute* const& UnityEngine::VFX::VisualEffect::__cordl_internal_get_m_cachedEventAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cachedEventAttribute;
}
constexpr void UnityEngine::VFX::VisualEffect::__cordl_internal_set_m_cachedEventAttribute(::UnityEngine::VFX::VFXEventAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_cachedEventAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*& UnityEngine::VFX::VisualEffect::__cordl_internal_get_outputEventReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputEventReceived;
}
constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* const& UnityEngine::VFX::VisualEffect::__cordl_internal_get_outputEventReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputEventReceived;
}
constexpr void UnityEngine::VFX::VisualEffect::__cordl_internal_set_outputEventReceived(::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outputEventReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::VFX::VisualEffectAsset> UnityEngine::VFX::VisualEffect::get_visualEffectAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(), "get_visualEffectAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::VFX::VisualEffectAsset>, false>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VisualEffect::CreateVFXEventAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(),
                                                                             "CreateVFXEventAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*, false>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal(::UnityEngine::VFX::VisualEffect* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(), "InvokeGetCachedEventAttributeForOutputEvent_Internal",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VisualEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*, false>(nullptr, ___internal_method, source);
}
inline void UnityEngine::VFX::VisualEffect::InvokeOutputEventReceived_Internal(::UnityEngine::VFX::VisualEffect* source, int32_t eventNameId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(), "InvokeOutputEventReceived_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VisualEffect*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, eventNameId);
}
inline ::System::IntPtr UnityEngine::VFX::VisualEffect::get_visualEffectAsset_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VisualEffect*>::get(), "get_visualEffectAsset_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffect::VisualEffect() {}
