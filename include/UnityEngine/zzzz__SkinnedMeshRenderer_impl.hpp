#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__SkinQuality_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_quality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SkinQuality (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_quality)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efa9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_quality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_quality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::SkinQuality)>(&::UnityEngine::SkinnedMeshRenderer::set_quality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efaaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_quality", {}, { ::i2c::type_of<::UnityEngine::SkinQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efab80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_updateWhenOffscreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(bool)>(&::UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_updateWhenOffscreen", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_forceMatrixRecalculationPerRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efad10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_forceMatrixRecalculationPerRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_forceMatrixRecalculationPerRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(bool)>(&::UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efadcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_forceMatrixRecalculationPerRender", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_rootBone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_rootBone)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6efaea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_rootBone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_rootBone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Transform*)>(&::UnityEngine::SkinnedMeshRenderer::set_rootBone)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6efb02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_rootBone", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_bones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_bones)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efb130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_bones", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_bones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(::ArrayW<::UnityEngine::Transform*>)>(&::UnityEngine::SkinnedMeshRenderer::set_bones)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efb1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_bones", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_sharedMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_sharedMesh)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6efb2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_sharedMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_sharedMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Mesh*)>(&::UnityEngine::SkinnedMeshRenderer::set_sharedMesh)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6efb44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_sharedMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_skinnedMotionVectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efb550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_skinnedMotionVectors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_skinnedMotionVectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(bool)>(&::UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efb60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_skinnedMotionVectors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetBlendShapeWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SkinnedMeshRenderer::*)(int32_t)>(&::UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efb6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetBlendShapeWeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.SetBlendShapeWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(int32_t, float_t)>(&::UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6efb7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "SetBlendShapeWeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Mesh*)>(&::UnityEngine::SkinnedMeshRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6efb8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Mesh*, bool)>(&::UnityEngine::SkinnedMeshRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6efb8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetVertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::GetVertexBuffer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6efb9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetVertexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetPreviousVertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBuffer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6efbb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetPreviousVertexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetVertexBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::GetVertexBufferImpl)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6efba90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetVertexBufferImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetPreviousVertexBufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBufferImpl)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6efbbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetPreviousVertexBufferImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_vertexBufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::get_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efbcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_vertexBufferTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_vertexBufferTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::GraphicsBuffer_Target)>(
    &::UnityEngine::SkinnedMeshRenderer::set_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efbd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_vertexBufferTarget", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.Internal_SetShaderUserValueUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(uint32_t)>(&::UnityEngine::SkinnedMeshRenderer::Internal_SetShaderUserValueUInt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6efbe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "Internal_SetShaderUserValueUInt", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.SetShaderUserValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)(uint32_t)>(&::UnityEngine::SkinnedMeshRenderer::SetShaderUserValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6efbf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "SetShaderUserValue", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.Internal_GetShaderUserValueUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::Internal_GetShaderUserValueUInt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6efbf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "Internal_GetShaderUserValueUInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetShaderUserValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::GetShaderUserValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6efbff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetShaderUserValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SkinnedMeshRenderer::*)()>(&::UnityEngine::SkinnedMeshRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6efbff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_quality_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SkinQuality (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_quality_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efaa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_quality_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_quality_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::SkinQuality)>(&::UnityEngine::SkinnedMeshRenderer::set_quality_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efab3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                             { "set_quality_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::SkinQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreen_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efac00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_updateWhenOffscreen_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreen_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efaccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_updateWhenOffscreen_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_forceMatrixRecalculationPerRender_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efad90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_forceMatrixRecalculationPerRender_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_forceMatrixRecalculationPerRender_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efae5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                             { "set_forceMatrixRecalculationPerRender_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_rootBone_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_rootBone_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efaff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_rootBone_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_rootBone_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::set_rootBone_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efb0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_rootBone_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_bones_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_bones_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efb1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_bones_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_bones_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Transform*>)>(&::UnityEngine::SkinnedMeshRenderer::set_bones_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efb27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                             { "set_bones_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_sharedMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_sharedMesh_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efb410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_sharedMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::set_sharedMesh_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efb50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_skinnedMotionVectors_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efb5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_skinnedMotionVectors_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_skinnedMotionVectors_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efb69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_skinnedMotionVectors_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetBlendShapeWeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efb770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                                                           { "GetBlendShapeWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.SetBlendShapeWeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6efb854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                             { "SetBlendShapeWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.BakeMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::SkinnedMeshRenderer::BakeMesh_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6efb99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                             { "BakeMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetVertexBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::GetVertexBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efbc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.GetPreviousVertexBufferImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efbc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetPreviousVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.get_vertexBufferTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::get_vertexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efbd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.set_vertexBufferTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::SkinnedMeshRenderer::set_vertexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efbe1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                { "set_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.Internal_SetShaderUserValueUInt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::UnityEngine::SkinnedMeshRenderer::Internal_SetShaderUserValueUInt_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6efbef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                             { "Internal_SetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SkinnedMeshRenderer.Internal_GetShaderUserValueUInt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::SkinnedMeshRenderer::Internal_GetShaderUserValueUInt_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6efbfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "Internal_GetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::SkinQuality UnityEngine::SkinnedMeshRenderer::get_quality() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_quality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SkinQuality>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_quality(::UnityEngine::SkinQuality value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_quality", {}, { ::i2c::type_of<::UnityEngine::SkinQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_updateWhenOffscreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_updateWhenOffscreen", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_forceMatrixRecalculationPerRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_forceMatrixRecalculationPerRender", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::SkinnedMeshRenderer::get_rootBone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_rootBone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_rootBone(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_rootBone", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> UnityEngine::SkinnedMeshRenderer::get_bones() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_bones", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_bones(::ArrayW<::UnityEngine::Transform*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_bones", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::SkinnedMeshRenderer::get_sharedMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_sharedMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_sharedMesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_sharedMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_skinnedMotionVectors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_skinnedMotionVectors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetBlendShapeWeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline void UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight(int32_t index, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "SetBlendShapeWeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void UnityEngine::SkinnedMeshRenderer::BakeMesh(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline void UnityEngine::SkinnedMeshRenderer::BakeMesh(/* [NotNull] */ ::UnityEngine::Mesh* mesh, bool useScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "BakeMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, useScale);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::SkinnedMeshRenderer::GetVertexBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetVertexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetPreviousVertexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::SkinnedMeshRenderer::GetVertexBufferImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetVertexBufferImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBufferImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetPreviousVertexBufferImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::SkinnedMeshRenderer::get_vertexBufferTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_vertexBufferTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_vertexBufferTarget", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::SkinnedMeshRenderer::Internal_SetShaderUserValueUInt(uint32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "Internal_SetShaderUserValueUInt", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void UnityEngine::SkinnedMeshRenderer::SetShaderUserValue(uint32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "SetShaderUserValue", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline uint32_t UnityEngine::SkinnedMeshRenderer::Internal_GetShaderUserValueUInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "Internal_GetShaderUserValueUInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::SkinnedMeshRenderer::GetShaderUserValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetShaderUserValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::SkinnedMeshRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SkinQuality UnityEngine::SkinnedMeshRenderer::get_quality_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_quality_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SkinQuality>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_quality_Injected(::System::IntPtr _unity_self, ::UnityEngine::SkinQuality value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                           { "set_quality_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::SkinQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_updateWhenOffscreen_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                                                         { "set_updateWhenOffscreen_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_forceMatrixRecalculationPerRender_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                           { "set_forceMatrixRecalculationPerRender_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::SkinnedMeshRenderer::get_rootBone_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_rootBone_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_rootBone_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                                                         { "set_rootBone_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> UnityEngine::SkinnedMeshRenderer::get_bones_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_bones_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_bones_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Transform*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                           { "set_bones_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::SkinnedMeshRenderer::get_sharedMesh_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_sharedMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "set_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_skinnedMotionVectors_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                                                         { "set_skinnedMotionVectors_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight_Injected(::System::IntPtr _unity_self, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                                                         { "GetBlendShapeWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, index);
}
inline void UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight_Injected(::System::IntPtr _unity_self, int32_t index, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                           { "SetBlendShapeWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, value);
}
inline void UnityEngine::SkinnedMeshRenderer::BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, bool useScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                           { "BakeMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mesh, useScale);
}
inline ::System::IntPtr UnityEngine::SkinnedMeshRenderer::GetVertexBufferImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::SkinnedMeshRenderer::GetPreviousVertexBufferImpl_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "GetPreviousVertexBufferImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::SkinnedMeshRenderer::get_vertexBufferTarget_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "get_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::SkinnedMeshRenderer::set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                           { "set_vertexBufferTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::SkinnedMeshRenderer::Internal_SetShaderUserValueUInt_Injected(::System::IntPtr _unity_self, uint32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(),
                                                           { "Internal_SetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, v);
}
inline uint32_t UnityEngine::SkinnedMeshRenderer::Internal_GetShaderUserValueUInt_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SkinnedMeshRenderer*>(), { "Internal_GetShaderUserValueUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::SkinnedMeshRenderer* UnityEngine::SkinnedMeshRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SkinnedMeshRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SkinnedMeshRenderer::SkinnedMeshRenderer() {}
