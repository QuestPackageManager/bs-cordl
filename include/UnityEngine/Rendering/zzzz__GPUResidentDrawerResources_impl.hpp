#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version::GPUResidentDrawerResources_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version::GPUResidentDrawerResources_Version() {}
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version UnityEngine::Rendering::GPUResidentDrawerResources_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version UnityEngine::Rendering::GPUResidentDrawerResources_Version::Count{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version UnityEngine::Rendering::GPUResidentDrawerResources_Version::Latest{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                    "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_instanceDataBufferCopyKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferCopyKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                 "get_instanceDataBufferCopyKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_instanceDataBufferCopyKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferCopyKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_instanceDataBufferCopyKernels",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_instanceDataBufferUploadKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferUploadKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                 "get_instanceDataBufferUploadKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_instanceDataBufferUploadKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferUploadKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_instanceDataBufferUploadKernels",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_transformUpdaterKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_transformUpdaterKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                               "get_transformUpdaterKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_transformUpdaterKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_transformUpdaterKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_transformUpdaterKernels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_windDataUpdaterKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_windDataUpdaterKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                               "get_windDataUpdaterKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_windDataUpdaterKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_windDataUpdaterKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_windDataUpdaterKernels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_occluderDepthPyramidKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_occluderDepthPyramidKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                 "get_occluderDepthPyramidKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_occluderDepthPyramidKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_occluderDepthPyramidKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_occluderDepthPyramidKernels",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_instanceOcclusionCullingKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceOcclusionCullingKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                 "get_instanceOcclusionCullingKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_instanceOcclusionCullingKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceOcclusionCullingKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_instanceOcclusionCullingKernels",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_occlusionCullingDebugKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_occlusionCullingDebugKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                 "get_occlusionCullingDebugKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_occlusionCullingDebugKernels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_occlusionCullingDebugKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_occlusionCullingDebugKernels",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_debugOcclusionTestPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOcclusionTestPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                               "get_debugOcclusionTestPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_debugOcclusionTestPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOcclusionTestPS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_debugOcclusionTestPS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_debugOccluderPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOccluderPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665f414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                               "get_debugOccluderPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_debugOccluderPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOccluderPS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665f41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_debugOccluderPS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x665f48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_Version(::UnityEngine::Rendering::GPUResidentDrawerResources_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_InstanceDataBufferCopyKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataBufferCopyKernels;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_InstanceDataBufferCopyKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataBufferCopyKernels;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_InstanceDataBufferCopyKernels(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstanceDataBufferCopyKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_InstanceDataBufferUploadKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataBufferUploadKernels;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_InstanceDataBufferUploadKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataBufferUploadKernels;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_InstanceDataBufferUploadKernels(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstanceDataBufferUploadKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_TransformUpdaterKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdaterKernels;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_TransformUpdaterKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdaterKernels;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_TransformUpdaterKernels(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformUpdaterKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_WindDataUpdaterKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WindDataUpdaterKernels;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_WindDataUpdaterKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WindDataUpdaterKernels;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_WindDataUpdaterKernels(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WindDataUpdaterKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_OccluderDepthPyramidKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDepthPyramidKernels;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_OccluderDepthPyramidKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OccluderDepthPyramidKernels;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_OccluderDepthPyramidKernels(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OccluderDepthPyramidKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_InstanceOcclusionCullingKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceOcclusionCullingKernels;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_InstanceOcclusionCullingKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceOcclusionCullingKernels;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_InstanceOcclusionCullingKernels(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstanceOcclusionCullingKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_OcclusionCullingDebugKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionCullingDebugKernels;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_OcclusionCullingDebugKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionCullingDebugKernels;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_OcclusionCullingDebugKernels(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OcclusionCullingDebugKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_DebugOcclusionTestPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOcclusionTestPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_DebugOcclusionTestPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOcclusionTestPS;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_DebugOcclusionTestPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugOcclusionTestPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_DebugOccluderPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOccluderPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_get_m_DebugOccluderPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOccluderPS;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawerResources::__cordl_internal_set_m_DebugOccluderPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugOccluderPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::GPUResidentDrawerResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                  "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferCopyKernels() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                               "get_instanceDataBufferCopyKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferCopyKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_instanceDataBufferCopyKernels",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferUploadKernels() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                               "get_instanceDataBufferUploadKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferUploadKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_instanceDataBufferUploadKernels",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_transformUpdaterKernels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                             "get_transformUpdaterKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_transformUpdaterKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_transformUpdaterKernels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_windDataUpdaterKernels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                             "get_windDataUpdaterKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_windDataUpdaterKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_windDataUpdaterKernels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_occluderDepthPyramidKernels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                             "get_occluderDepthPyramidKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_occluderDepthPyramidKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_occluderDepthPyramidKernels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceOcclusionCullingKernels() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                               "get_instanceOcclusionCullingKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceOcclusionCullingKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_instanceOcclusionCullingKernels",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_occlusionCullingDebugKernels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                             "get_occlusionCullingDebugKernels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_occlusionCullingDebugKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_occlusionCullingDebugKernels",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOcclusionTestPS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                             "get_debugOcclusionTestPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOcclusionTestPS(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_debugOcclusionTestPS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOccluderPS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                             "get_debugOccluderPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOccluderPS(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(), "set_debugOccluderPS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerResources* UnityEngine::Rendering::GPUResidentDrawerResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::GPUResidentDrawerResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::GPUResidentDrawerResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::GPUResidentDrawerResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::GPUResidentDrawerResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::GPUResidentDrawerResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources::GPUResidentDrawerResources() {}
