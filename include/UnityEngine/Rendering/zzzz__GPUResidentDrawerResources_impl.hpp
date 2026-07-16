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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681099c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_instanceDataBufferCopyKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferCopyKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68109a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_instanceDataBufferCopyKernels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_instanceDataBufferCopyKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferCopyKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68109ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                           { "set_instanceDataBufferCopyKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_instanceDataBufferUploadKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferUploadKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_instanceDataBufferUploadKernels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_instanceDataBufferUploadKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferUploadKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                           { "set_instanceDataBufferUploadKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_transformUpdaterKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_transformUpdaterKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_transformUpdaterKernels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_transformUpdaterKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_transformUpdaterKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                           { "set_transformUpdaterKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_windDataUpdaterKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_windDataUpdaterKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_windDataUpdaterKernels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_windDataUpdaterKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_windDataUpdaterKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                           { "set_windDataUpdaterKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_occluderDepthPyramidKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_occluderDepthPyramidKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_occluderDepthPyramidKernels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_occluderDepthPyramidKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_occluderDepthPyramidKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                           { "set_occluderDepthPyramidKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_instanceOcclusionCullingKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceOcclusionCullingKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_instanceOcclusionCullingKernels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_instanceOcclusionCullingKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceOcclusionCullingKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                           { "set_instanceOcclusionCullingKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_occlusionCullingDebugKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_occlusionCullingDebugKernels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_occlusionCullingDebugKernels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_occlusionCullingDebugKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_occlusionCullingDebugKernels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                           { "set_occlusionCullingDebugKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_debugOcclusionTestPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOcclusionTestPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_debugOcclusionTestPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_debugOcclusionTestPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOcclusionTestPS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "set_debugOcclusionTestPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.get_debugOccluderPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOccluderPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6810d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_debugOccluderPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources.set_debugOccluderPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOccluderPS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6810d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "set_debugOccluderPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerResources::*)()>(&::UnityEngine::Rendering::GPUResidentDrawerResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6810ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { ".ctor", {}, {} })));
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
  this->___m_InstanceDataBufferCopyKernels = value;
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
  this->___m_InstanceDataBufferUploadKernels = value;
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
  this->___m_TransformUpdaterKernels = value;
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
  this->___m_WindDataUpdaterKernels = value;
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
  this->___m_OccluderDepthPyramidKernels = value;
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
  this->___m_InstanceOcclusionCullingKernels = value;
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
  this->___m_OcclusionCullingDebugKernels = value;
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
  this->___m_DebugOcclusionTestPS = value;
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
  this->___m_DebugOccluderPS = value;
}
inline int32_t UnityEngine::Rendering::GPUResidentDrawerResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferCopyKernels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_instanceDataBufferCopyKernels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferCopyKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                         { "set_instanceDataBufferCopyKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceDataBufferUploadKernels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_instanceDataBufferUploadKernels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceDataBufferUploadKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                         { "set_instanceDataBufferUploadKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_transformUpdaterKernels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_transformUpdaterKernels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_transformUpdaterKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                         { "set_transformUpdaterKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_windDataUpdaterKernels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_windDataUpdaterKernels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_windDataUpdaterKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                         { "set_windDataUpdaterKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_occluderDepthPyramidKernels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_occluderDepthPyramidKernels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_occluderDepthPyramidKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                         { "set_occluderDepthPyramidKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_instanceOcclusionCullingKernels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_instanceOcclusionCullingKernels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_instanceOcclusionCullingKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                         { "set_instanceOcclusionCullingKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::GPUResidentDrawerResources::get_occlusionCullingDebugKernels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_occlusionCullingDebugKernels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_occlusionCullingDebugKernels(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(),
                                                                                         { "set_occlusionCullingDebugKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOcclusionTestPS() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_debugOcclusionTestPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOcclusionTestPS(::UnityEngine::Shader* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "set_debugOcclusionTestPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::GPUResidentDrawerResources::get_debugOccluderPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "get_debugOccluderPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::set_debugOccluderPS(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { "set_debugOccluderPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::GPUResidentDrawerResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerResources* UnityEngine::Rendering::GPUResidentDrawerResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUResidentDrawerResources*>());
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
