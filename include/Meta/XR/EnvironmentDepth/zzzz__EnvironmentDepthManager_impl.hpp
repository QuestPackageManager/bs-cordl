#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/EnvironmentDepthManager.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__OcclusionShadersMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RenderTargetSetup_impl.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__EnvironmentDepthManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__DepthFrameDesc_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__EnvironmentDepthManager_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__IDepthProvider_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__OcclusionShadersMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::*)(int32_t, int32_t, float_t)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::_ctor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x588e72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask.ApplyMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::*)(
    ::UnityEngine::RenderTexture*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, ::UnityEngine::Matrix4x4,
    ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*>)>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::ApplyMask)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x588e970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*>::get(), "ApplyMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::Dispose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x588dd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskMaterial;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_set__maskMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maskMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskDepthRt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskDepthRt;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskDepthRt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskDepthRt;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_set__maskDepthRt(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maskDepthRt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskedDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskedDepthTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskedDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskedDepthTexture;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_set__maskedDepthTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maskedDepthTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__maskCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskCommandBuffer;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_set__maskCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maskCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__mvpMatrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mvpMatrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_get__mvpMatrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mvpMatrices;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::__cordl_internal_set__mvpMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mvpMatrices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::_ctor(int32_t width, int32_t height, float_t bias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, bias);
}
inline ::UnityW<::UnityEngine::RenderTexture> Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::ApplyMask(
    ::UnityEngine::RenderTexture* depthTexture, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* meshFilters, ::UnityEngine::Matrix4x4 trackingSpaceWorldToLocal,
    ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> frameDescriptors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*>::get(), "ApplyMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method, depthTexture, meshFilters, trackingSpaceWorldToLocal, frameDescriptors);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::New_ctor(int32_t width, int32_t height, float_t bias) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*>(width, height, bias));
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask::EnvironmentDepthManager_Mask() {}
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.get_MaskMeshFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* (
    ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_MaskMeshFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588cd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "get_MaskMeshFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.set_MaskMeshFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*)>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_MaskMeshFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588cd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_MaskMeshFilters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.add_onDepthTextureUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(
    ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*)>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::add_onDepthTextureUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588cd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "add_onDepthTextureUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.remove_onDepthTextureUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(
    ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*)>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::remove_onDepthTextureUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588ce28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "remove_onDepthTextureUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.get_provider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::EnvironmentDepth::IDepthProvider* (*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_provider)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x588cee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "get_provider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.CreateProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::EnvironmentDepth::IDepthProvider* (*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::CreateProvider)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x588cf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "CreateProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.get_IsSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_IsSupported)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x588d25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "get_IsSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.get_IsDepthAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_IsDepthAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588d328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "get_IsDepthAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.set_IsDepthAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(bool)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_IsDepthAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588d330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_IsDepthAvailable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.get_OcclusionShadersMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::EnvironmentDepth::OcclusionShadersMode (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_OcclusionShadersMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588d338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "get_OcclusionShadersMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.set_OcclusionShadersMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(::Meta::XR::EnvironmentDepth::OcclusionShadersMode)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_OcclusionShadersMode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x588d340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_OcclusionShadersMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::OcclusionShadersMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.get_RemoveHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_RemoveHands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588d57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "get_RemoveHands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.set_RemoveHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(bool)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_RemoveHands)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x588d584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_RemoveHands",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.get_MaskBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_MaskBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588d6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "get_MaskBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.set_MaskBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(float_t)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_MaskBias)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x588d6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_MaskBias",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::Awake)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x588d758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnEnable)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x588d814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.ResetDepthTextureIfAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::ResetDepthTextureIfAvailable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x588da30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "ResetDepthTextureIfAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnDisable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x588dacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnDestroy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x588dc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.OnBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnBeforeRender)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x588ddd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "OnBeforeRender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.CacheCameraRig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::CacheCameraRig)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x588e68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "CacheCameraRig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.SetOcclusionShaderKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::EnvironmentDepth::OcclusionShadersMode)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::SetOcclusionShaderKeywords)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x588d3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "SetOcclusionShaderKeywords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::OcclusionShadersMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.TryFetchDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(::UnityEngine::Matrix4x4)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::TryFetchDepthTexture)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x588e264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "TryFetchDepthTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.GetTrackingSpaceWorldToLocalMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::GetTrackingSpaceWorldToLocalMatrix)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x588e120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                 "GetTrackingSpaceWorldToLocalMatrix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.PreprocessDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)(::UnityEngine::RenderTexture*)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::PreprocessDepthTexture)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x588f298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "PreprocessDepthTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LogType, ::StringW)>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::Log)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x588f57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               "Log", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::*)()>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x588f6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__occlusionShadersMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occlusionShadersMode;
}
constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__occlusionShadersMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occlusionShadersMode;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__occlusionShadersMode(::Meta::XR::EnvironmentDepth::OcclusionShadersMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____occlusionShadersMode = value;
}
constexpr bool& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__removeHands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeHands;
}
constexpr bool const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__removeHands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeHands;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__removeHands(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____removeHands = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get_CustomTrackingSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomTrackingSpace;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get_CustomTrackingSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomTrackingSpace;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set_CustomTrackingSpace(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomTrackingSpace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__MaskMeshFilters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaskMeshFilters_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const&
Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__MaskMeshFilters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaskMeshFilters_k__BackingField;
}
constexpr void
Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__MaskMeshFilters_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MaskMeshFilters_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__isCameraRigCached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCameraRigCached;
}
constexpr bool const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__isCameraRigCached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCameraRigCached;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__isCameraRigCached(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCameraRigCached = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraRig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__hasPermission() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPermission;
}
constexpr bool const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__hasPermission() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPermission;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__hasPermission(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasPermission = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__preprocessMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preprocessMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__preprocessMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preprocessMaterial;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__preprocessMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preprocessMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__preprocessTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preprocessTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__preprocessTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preprocessTexture;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__preprocessTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preprocessTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTargetSetup& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__preprocessRenderTargetSetup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preprocessRenderTargetSetup;
}
constexpr ::UnityEngine::RenderTargetSetup const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__preprocessRenderTargetSetup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preprocessRenderTargetSetup;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__preprocessRenderTargetSetup(::UnityEngine::RenderTargetSetup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preprocessRenderTargetSetup = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get_onDepthTextureUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDepthTextureUpdate;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get_onDepthTextureUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDepthTextureUpdate;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set_onDepthTextureUpdate(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDepthTextureUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*>&
Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get_frameDescriptors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameDescriptors;
}
constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> const&
Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get_frameDescriptors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameDescriptors;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set_frameDescriptors(
    ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frameDescriptors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__maskBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskBias;
}
constexpr float_t const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__maskBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskBias;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__maskBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maskBias = value;
}
constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__mask(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__IsDepthAvailable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDepthAvailable_k__BackingField;
}
constexpr bool const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__IsDepthAvailable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDepthAvailable_k__BackingField;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__IsDepthAvailable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDepthAvailable_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__reprojectionMatrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reprojectionMatrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_get__reprojectionMatrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reprojectionMatrices;
}
constexpr void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::__cordl_internal_set__reprojectionMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reprojectionMatrices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF_DepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DepthTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF_DepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "DepthTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF_ReprojectionMatricesID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ReprojectionMatricesID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF_ReprojectionMatricesID() {
  return ::cordl_internals::getStaticField<int32_t, "ReprojectionMatricesID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF_ZBufferParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ZBufferParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF_ZBufferParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "ZBufferParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF_PreprocessedEnvironmentDepthTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PreprocessedEnvironmentDepthTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF_PreprocessedEnvironmentDepthTexture() {
  return ::cordl_internals::getStaticField<int32_t, "PreprocessedEnvironmentDepthTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF_MvpMatricesID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MvpMatricesID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF_MvpMatricesID() {
  return ::cordl_internals::getStaticField<int32_t, "MvpMatricesID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF_MaskTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaskTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF_MaskTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "MaskTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF_MaskBiasID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaskBiasID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF_MaskBiasID() {
  return ::cordl_internals::getStaticField<int32_t, "MaskBiasID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::setStaticF__provider(::Meta::XR::EnvironmentDepth::IDepthProvider* value) {
  ::cordl_internals::setStaticField<::Meta::XR::EnvironmentDepth::IDepthProvider*, "_provider",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>(
      std::forward<::Meta::XR::EnvironmentDepth::IDepthProvider*>(value));
}
inline ::Meta::XR::EnvironmentDepth::IDepthProvider* Meta::XR::EnvironmentDepth::EnvironmentDepthManager::getStaticF__provider() {
  return ::cordl_internals::getStaticField<::Meta::XR::EnvironmentDepth::IDepthProvider*, "_provider",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get>();
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_MaskMeshFilters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "get_MaskMeshFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_MaskMeshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_MaskMeshFilters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::add_onDepthTextureUpdate(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "add_onDepthTextureUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::remove_onDepthTextureUpdate(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "remove_onDepthTextureUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Meta::XR::EnvironmentDepth::IDepthProvider* Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_provider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "get_provider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::EnvironmentDepth::IDepthProvider*, false>(nullptr, ___internal_method);
}
inline ::Meta::XR::EnvironmentDepth::IDepthProvider* Meta::XR::EnvironmentDepth::EnvironmentDepthManager::CreateProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "CreateProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::EnvironmentDepth::IDepthProvider*, false>(nullptr, ___internal_method);
}
inline bool Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_IsSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "get_IsSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_IsDepthAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "get_IsDepthAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_IsDepthAvailable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_IsDepthAvailable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Meta::XR::EnvironmentDepth::OcclusionShadersMode Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_OcclusionShadersMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "get_OcclusionShadersMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::EnvironmentDepth::OcclusionShadersMode, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_OcclusionShadersMode(::Meta::XR::EnvironmentDepth::OcclusionShadersMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_OcclusionShadersMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::OcclusionShadersMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_RemoveHands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "get_RemoveHands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_RemoveHands(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_RemoveHands",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Meta::XR::EnvironmentDepth::EnvironmentDepthManager::get_MaskBias() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "get_MaskBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::set_MaskBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "set_MaskBias",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::ResetDepthTextureIfAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "ResetDepthTextureIfAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::OnBeforeRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "OnBeforeRender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::CacheCameraRig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "CacheCameraRig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::SetOcclusionShaderKeywords(::Meta::XR::EnvironmentDepth::OcclusionShadersMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "SetOcclusionShaderKeywords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::OcclusionShadersMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::TryFetchDepthTexture(::UnityEngine::Matrix4x4 trackingSpaceWorldToLocal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "TryFetchDepthTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackingSpaceWorldToLocal);
}
inline ::UnityEngine::Matrix4x4 Meta::XR::EnvironmentDepth::EnvironmentDepthManager::GetTrackingSpaceWorldToLocalMatrix() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                               "GetTrackingSpaceWorldToLocalMatrix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::PreprocessDepthTexture(::UnityEngine::RenderTexture* depthTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(), "PreprocessDepthTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, depthTexture);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::Log(::UnityEngine::LogType type, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             "Log", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, msg);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager* Meta::XR::EnvironmentDepth::EnvironmentDepthManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager::EnvironmentDepthManager() {}
