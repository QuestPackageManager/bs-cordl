#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\OccluderContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDerivedData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderMipBounds_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
inline void UnityEngine::Rendering::OccluderContext_ShaderIDs::setStaticF__SrcDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SrcDepth", ::UnityEngine::Rendering::OccluderContext_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OccluderContext_ShaderIDs::getStaticF__SrcDepth() {
  return ::cordl_internals::getStaticField<int32_t, "_SrcDepth", ::UnityEngine::Rendering::OccluderContext_ShaderIDs*>();
}
inline void UnityEngine::Rendering::OccluderContext_ShaderIDs::setStaticF__DstDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DstDepth", ::UnityEngine::Rendering::OccluderContext_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OccluderContext_ShaderIDs::getStaticF__DstDepth() {
  return ::cordl_internals::getStaticField<int32_t, "_DstDepth", ::UnityEngine::Rendering::OccluderContext_ShaderIDs*>();
}
inline void UnityEngine::Rendering::OccluderContext_ShaderIDs::setStaticF_OccluderDepthPyramidConstants(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OccluderDepthPyramidConstants", ::UnityEngine::Rendering::OccluderContext_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OccluderContext_ShaderIDs::getStaticF_OccluderDepthPyramidConstants() {
  return ::cordl_internals::getStaticField<int32_t, "OccluderDepthPyramidConstants", ::UnityEngine::Rendering::OccluderContext_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderContext_ShaderIDs::OccluderContext_ShaderIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.get_subviewCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::OccluderContext::*)()>(&::UnityEngine::Rendering::OccluderContext::get_subviewCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ea58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "get_subviewCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.IsSubviewValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::OccluderContext::*)(int32_t)>(&::UnityEngine::Rendering::OccluderContext::IsSubviewValid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x682ea60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "IsSubviewValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.get_depthBufferSizeInOccluderPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::OccluderContext::*)()>(
    &::UnityEngine::Rendering::OccluderContext::get_depthBufferSizeInOccluderPixels)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x682ea84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "get_depthBufferSizeInOccluderPixels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)()>(&::UnityEngine::Rendering::OccluderContext::Dispose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x682ea9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.UpdateMipBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)()>(&::UnityEngine::Rendering::OccluderContext::UpdateMipBounds)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x682ebc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "UpdateMipBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.AllocateTexturesIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)(bool)>(&::UnityEngine::Rendering::OccluderContext::AllocateTexturesIfNecessary)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x682ed90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "AllocateTexturesIfNecessary", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ComputeCommandBuffer*, ::UnityEngine::ComputeShader*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>,
                                                                bool)>(&::UnityEngine::Rendering::OccluderContext::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x682efe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                                                             { "SetKeyword",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.SetupFarDepthPyramidConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OccluderDepthPyramidConstants (::UnityEngine::Rendering::OccluderContext::*)(
    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>)>(
    &::UnityEngine::Rendering::OccluderContext::SetupFarDepthPyramidConstants)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x682f00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "SetupFarDepthPyramidConstants",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(),
                                                                                                           ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.CreateFarDepthPyramid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)(
    ::UnityEngine::Rendering::ComputeCommandBuffer*, ::by_ref<::UnityEngine::Rendering::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>,
    ::by_ref<::UnityEngine::Rendering::OccluderHandles>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::UnityEngine::ComputeShader*, int32_t)>(
    &::UnityEngine::Rendering::OccluderContext::CreateFarDepthPyramid)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x682f40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                            { "CreateFarDepthPyramid",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderParameters>>(),
                                ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderHandles>>(),
                                ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OccluderHandles (::UnityEngine::Rendering::OccluderContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::OccluderContext::Import)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x682f904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                                                                                           { "Import", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.PrepareOccluders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)(::by_ref<::UnityEngine::Rendering::OccluderParameters>)>(
    &::UnityEngine::Rendering::OccluderContext::PrepareOccluders)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x682f9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                                                                                           { "PrepareOccluders", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.GetDebugOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OcclusionCullingDebugOutput (::UnityEngine::Rendering::OccluderContext::*)()>(
    &::UnityEngine::Rendering::OccluderContext::GetDebugOutput)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x682fab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "GetDebugOutput", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::OccluderContext::get_subviewCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "get_subviewCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::OccluderContext::IsSubviewValid(int32_t subviewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "IsSubviewValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, subviewIndex);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::OccluderContext::get_depthBufferSizeInOccluderPixels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "get_depthBufferSizeInOccluderPixels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderContext::UpdateMipBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "UpdateMipBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderContext::AllocateTexturesIfNecessary(bool debugOverlayEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "AllocateTexturesIfNecessary", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, debugOverlayEnabled);
}
inline void UnityEngine::Rendering::OccluderContext::SetKeyword(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::UnityEngine::ComputeShader* cs,
                                                                ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                                                           { "SetKeyword",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, keyword, value);
}
inline ::UnityEngine::Rendering::OccluderDepthPyramidConstants
UnityEngine::Rendering::OccluderContext::SetupFarDepthPyramidConstants(::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> silhouettePlanes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "SetupFarDepthPyramidConstants",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(),
                                                                                                         ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OccluderDepthPyramidConstants>(*this, ___internal_method, occluderSubviewUpdates, silhouettePlanes);
}
inline void UnityEngine::Rendering::OccluderContext::CreateFarDepthPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                                                           ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                                                           ::by_ref<::UnityEngine::Rendering::OccluderHandles> occluderHandles,
                                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> silhouettePlanes,
                                                                           ::UnityEngine::ComputeShader* occluderDepthPyramidCS, int32_t occluderDepthDownscaleKernel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                          { "CreateFarDepthPyramid",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderParameters>>(),
                              ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderHandles>>(),
                              ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, occluderParams, occluderSubviewUpdates, occluderHandles, silhouettePlanes, occluderDepthPyramidCS,
                                                   occluderDepthDownscaleKernel);
}
inline ::UnityEngine::Rendering::OccluderHandles UnityEngine::Rendering::OccluderContext::Import(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                                                                                         { "Import", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OccluderHandles>(*this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::OccluderContext::PrepareOccluders(::by_ref<::UnityEngine::Rendering::OccluderParameters> occluderParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(),
                                                                                         { "PrepareOccluders", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, occluderParams);
}
inline ::UnityEngine::Rendering::OcclusionCullingDebugOutput UnityEngine::Rendering::OccluderContext::GetDebugOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderContext>(), { "GetDebugOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OcclusionCullingDebugOutput>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::OccluderContext::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::OccluderContext::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthBufferSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "subviewData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDerivedData>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "subviewValidMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderMipBounds", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderMipBounds>", modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderMipLayoutSize", ty:
// "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderDepthPyramidSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "occluderDepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionDebugOverlaySize", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "occlusionDebugOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "debugNeedsClear", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "constantBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "constantBufferData", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDepthPyramidConstants>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OccluderContext::OccluderContext(int32_t version, ::UnityEngine::Vector2Int depthBufferSize,
                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDerivedData> subviewData, int32_t subviewValidMask,
                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderMipBounds> occluderMipBounds,
                                                                     ::UnityEngine::Vector2Int occluderMipLayoutSize, ::UnityEngine::Vector2Int occluderDepthPyramidSize,
                                                                     ::UnityEngine::Rendering::RTHandle* occluderDepthPyramid, int32_t occlusionDebugOverlaySize,
                                                                     ::UnityEngine::GraphicsBuffer* occlusionDebugOverlay, bool debugNeedsClear, ::UnityEngine::ComputeBuffer* constantBuffer,
                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDepthPyramidConstants> constantBufferData) noexcept {
  this->version = version;
  this->depthBufferSize = depthBufferSize;
  this->subviewData = subviewData;
  this->subviewValidMask = subviewValidMask;
  this->occluderMipBounds = occluderMipBounds;
  this->occluderMipLayoutSize = occluderMipLayoutSize;
  this->occluderDepthPyramidSize = occluderDepthPyramidSize;
  this->occluderDepthPyramid = occluderDepthPyramid;
  this->occlusionDebugOverlaySize = occlusionDebugOverlaySize;
  this->occlusionDebugOverlay = occlusionDebugOverlay;
  this->debugNeedsClear = debugNeedsClear;
  this->constantBuffer = constantBuffer;
  this->constantBufferData = constantBufferData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderContext::OccluderContext() {}
