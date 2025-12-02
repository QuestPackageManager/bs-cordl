#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/IDepthProvider.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__IDepthProvider_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__DepthFrameDesc_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::IDepthProvider.get_IsSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::EnvironmentDepth::IDepthProvider::*)()>(
    &::Meta::XR::EnvironmentDepth::IDepthProvider::get_IsSupported)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::IDepthProvider.set_RemoveHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::IDepthProvider::*)(bool)>(
    &::Meta::XR::EnvironmentDepth::IDepthProvider::set_RemoveHands)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::IDepthProvider.SetDepthEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::IDepthProvider::*)(bool, bool)>(
    &::Meta::XR::EnvironmentDepth::IDepthProvider::SetDepthEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::IDepthProvider.TryGetUpdatedDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::EnvironmentDepth::IDepthProvider::*)(
    ::ByRef<::UnityEngine::RenderTexture*>, ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*>)>(
    &::Meta::XR::EnvironmentDepth::IDepthProvider::TryGetUpdatedDepthTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 3));
    return ___internal_method;
  }
};
inline bool Meta::XR::EnvironmentDepth::IDepthProvider::get_IsSupported() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::IDepthProvider::set_RemoveHands(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::EnvironmentDepth::IDepthProvider::SetDepthEnabled(bool isEnabled, bool removeHands) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnabled, removeHands);
}
inline bool
Meta::XR::EnvironmentDepth::IDepthProvider::TryGetUpdatedDepthTexture(::ByRef<::UnityEngine::RenderTexture*> depthTexture,
                                                                      ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> frameDescriptors) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::IDepthProvider*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, depthTexture, frameDescriptors);
}
