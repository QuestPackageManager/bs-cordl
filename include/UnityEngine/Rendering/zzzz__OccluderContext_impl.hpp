#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderContext.hpp"
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
  ::cordl_internals::setStaticField<int32_t, "_SrcDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OccluderContext_ShaderIDs::getStaticF__SrcDepth() {
  return ::cordl_internals::getStaticField<int32_t, "_SrcDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::OccluderContext_ShaderIDs::setStaticF__DstDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DstDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OccluderContext_ShaderIDs::getStaticF__DstDepth() {
  return ::cordl_internals::getStaticField<int32_t, "_DstDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::OccluderContext_ShaderIDs::setStaticF_OccluderDepthPyramidConstants(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OccluderDepthPyramidConstants", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OccluderContext_ShaderIDs::getStaticF_OccluderDepthPyramidConstants() {
  return ::cordl_internals::getStaticField<int32_t, "OccluderDepthPyramidConstants",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext_ShaderIDs*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderContext_ShaderIDs::OccluderContext_ShaderIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.get_subviewCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::OccluderContext::*)()>(
    &::UnityEngine::Rendering::OccluderContext::get_subviewCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x660fd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(),
                                                                               "get_subviewCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.IsSubviewValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::OccluderContext::*)(int32_t)>(
    &::UnityEngine::Rendering::OccluderContext::IsSubviewValid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x660fd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "IsSubviewValid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.get_depthBufferSizeInOccluderPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::OccluderContext::*)()>(
    &::UnityEngine::Rendering::OccluderContext::get_depthBufferSizeInOccluderPixels)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x660fd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "get_depthBufferSizeInOccluderPixels",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)()>(&::UnityEngine::Rendering::OccluderContext::Dispose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x660fda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.UpdateMipBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)()>(&::UnityEngine::Rendering::OccluderContext::UpdateMipBounds)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x660fed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(),
                                                                               "UpdateMipBounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.AllocateTexturesIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)(bool)>(
    &::UnityEngine::Rendering::OccluderContext::AllocateTexturesIfNecessary)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x661009c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "AllocateTexturesIfNecessary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::ComputeCommandBuffer*, ::UnityEngine::ComputeShader*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::UnityEngine::Rendering::OccluderContext::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66102ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.SetupFarDepthPyramidConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OccluderDepthPyramidConstants (::UnityEngine::Rendering::OccluderContext::*)(
    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>)>(
    &::UnityEngine::Rendering::OccluderContext::SetupFarDepthPyramidConstants)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x6610318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "SetupFarDepthPyramidConstants", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.CreateFarDepthPyramid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)(
    ::UnityEngine::Rendering::ComputeCommandBuffer*, ::ByRef<::UnityEngine::Rendering::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>,
    ::ByRef<::UnityEngine::Rendering::OccluderHandles>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::UnityEngine::ComputeShader*, int32_t)>(
    &::UnityEngine::Rendering::OccluderContext::CreateFarDepthPyramid)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x6610718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "CreateFarDepthPyramid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OccluderHandles (::UnityEngine::Rendering::OccluderContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::OccluderContext::Import)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6610c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.PrepareOccluders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderContext::*)(::ByRef<::UnityEngine::Rendering::OccluderParameters>)>(
    &::UnityEngine::Rendering::OccluderContext::PrepareOccluders)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6610cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "PrepareOccluders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderContext.GetDebugOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OcclusionCullingDebugOutput (::UnityEngine::Rendering::OccluderContext::*)()>(
    &::UnityEngine::Rendering::OccluderContext::GetDebugOutput)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6610dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(),
                                                                               "GetDebugOutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::OccluderContext::get_subviewCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(),
                                                                             "get_subviewCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::OccluderContext::IsSubviewValid(int32_t subviewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "IsSubviewValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, subviewIndex);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::OccluderContext::get_depthBufferSizeInOccluderPixels() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "get_depthBufferSizeInOccluderPixels",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderContext::UpdateMipBounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(),
                                                                             "UpdateMipBounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderContext::AllocateTexturesIfNecessary(bool debugOverlayEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "AllocateTexturesIfNecessary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugOverlayEnabled);
}
inline void UnityEngine::Rendering::OccluderContext::SetKeyword(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::UnityEngine::ComputeShader* cs,
                                                                ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, cs, keyword, value);
}
inline ::UnityEngine::Rendering::OccluderDepthPyramidConstants
UnityEngine::Rendering::OccluderContext::SetupFarDepthPyramidConstants(::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> silhouettePlanes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "SetupFarDepthPyramidConstants", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OccluderDepthPyramidConstants, false>(this, ___internal_method, occluderSubviewUpdates, silhouettePlanes);
}
inline void UnityEngine::Rendering::OccluderContext::CreateFarDepthPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                                                           ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                                                           ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles,
                                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> silhouettePlanes,
                                                                           ::UnityEngine::ComputeShader* occluderDepthPyramidCS, int32_t occluderDepthDownscaleKernel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "CreateFarDepthPyramid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, occluderParams, occluderSubviewUpdates, occluderHandles, silhouettePlanes, occluderDepthPyramidCS,
                                                          occluderDepthDownscaleKernel);
}
inline ::UnityEngine::Rendering::OccluderHandles UnityEngine::Rendering::OccluderContext::Import(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OccluderHandles, false>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::OccluderContext::PrepareOccluders(::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "PrepareOccluders", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, occluderParams);
}
inline ::UnityEngine::Rendering::OcclusionCullingDebugOutput UnityEngine::Rendering::OccluderContext::GetDebugOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderContext>::get(), "GetDebugOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OcclusionCullingDebugOutput, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::OccluderContext::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::OccluderContext::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
