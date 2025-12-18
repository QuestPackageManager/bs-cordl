#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RenderingData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::RenderingData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x672b180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_universalRenderingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderingData* (
    ::UnityEngine::Rendering::Universal::RenderingData::*)()>(&::UnityEngine::Rendering::Universal::RenderingData::get_universalRenderingData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x672b190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                               "get_universalRenderingData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_commandBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::CommandBuffer*> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_commandBuffer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x672b1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                               "get_commandBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_cullResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::CullingResults> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_cullResults)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x672b29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                               "get_cullResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_supportsDynamicBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_supportsDynamicBatching)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x672b2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                               "get_supportsDynamicBatching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_perObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::PerObjectData> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_perObjectData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x672b35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                               "get_perObjectData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_postProcessingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_postProcessingEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x672b3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                               "get_postProcessingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderingData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* UnityEngine::Rendering::Universal::RenderingData::get_universalRenderingData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                             "get_universalRenderingData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderingData*, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::CommandBuffer*> UnityEngine::Rendering::Universal::RenderingData::get_commandBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                             "get_commandBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::CommandBuffer*>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::CullingResults> UnityEngine::Rendering::Universal::RenderingData::get_cullResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                             "get_cullResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::CullingResults>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::RenderingData::get_supportsDynamicBatching() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                             "get_supportsDynamicBatching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::PerObjectData> UnityEngine::Rendering::Universal::RenderingData::get_perObjectData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                             "get_perObjectData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::PerObjectData>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::RenderingData::get_postProcessingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                             "get_postProcessingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraData", ty:
// "::UnityEngine::Rendering::Universal::CameraData", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightData", ty: "::UnityEngine::Rendering::Universal::LightData", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "shadowData", ty: "::UnityEngine::Rendering::Universal::ShadowData", modifiers: "", def_value: Some("{}") }, CppParam { name: "postProcessingData", ty:
// "::UnityEngine::Rendering::Universal::PostProcessingData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderingData::RenderingData(::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Rendering::Universal::CameraData cameraData,
                                                                            ::UnityEngine::Rendering::Universal::LightData lightData, ::UnityEngine::Rendering::Universal::ShadowData shadowData,
                                                                            ::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData) noexcept {
  this->frameData = frameData;
  this->cameraData = cameraData;
  this->lightData = lightData;
  this->shadowData = shadowData;
  this->postProcessingData = postProcessingData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingData::RenderingData() {}
