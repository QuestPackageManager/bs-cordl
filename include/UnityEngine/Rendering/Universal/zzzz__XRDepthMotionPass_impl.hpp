#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRDepthMotionPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRDepthMotionPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRDepthMotionPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66f0f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_objMotionRendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objMotionRendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_objMotionRendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objMotionRendererList;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_objMotionRendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objMotionRendererList = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_previousViewProjectionStereo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousViewProjectionStereo;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_previousViewProjectionStereo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousViewProjectionStereo;
}
constexpr void
UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_previousViewProjectionStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousViewProjectionStereo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_viewProjectionStereo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewProjectionStereo;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_viewProjectionStereo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewProjectionStereo;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_viewProjectionStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewProjectionStereo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_xrMotionVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVector;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_xrMotionVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVector;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_xrMotionVector(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xrMotionVector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::XRDepthMotionPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::*)()>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f1e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0._Render_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::*)(
    ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_Render_b__0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x66f2278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>::get(), "<Render>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*& UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::__cordl_internal_get_passData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passData;
}
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* const& UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::__cordl_internal_get_passData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passData;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::__cordl_internal_set_passData(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_Render_b__0(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* data,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>::get(), "<Render>b__0",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0* UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::XRDepthMotionPass___c__DisplayClass17_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Shader*)>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x66f0d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.GetObjectMotionDrawingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DrawingSettings (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::GetObjectMotionDrawingSettings)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x66f10b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "GetObjectMotionDrawingSettings",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.InitObjectMotionRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>, ::ByRef<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
    ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::InitObjectMotionRendererLists)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x66f1230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "InitObjectMotionRendererLists",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::InitPassData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66f1424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.ImportXRMotionColorAndDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
        &::UnityEngine::Rendering::Universal::XRDepthMotionPass::ImportXRMotionColorAndDepth)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x66f1464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "ImportXRMotionColorAndDepth", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::Render)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x66f1708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.ResetMotionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)()>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::ResetMotionData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66f0fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(),
                                                                               "ResetMotionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*>)>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::Update)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x66f1e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)()>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66f2188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorColor;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorColor;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_XRMotionVectorColor(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XRMotionVectorColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorColor;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_xrMotionVectorColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrMotionVectorColor = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorDepth;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorDepth;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_XRMotionVectorDepth(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XRMotionVectorDepth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorDepth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorDepth;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_xrMotionVectorDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrMotionVectorDepth = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_ViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_ViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_ViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ViewProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PreviousViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PreviousViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_PreviousViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousViewProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_LastFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_LastFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_LastFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastFrameIndex = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorMaterial;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_XRMotionVectorMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XRMotionVectorMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::setStaticF_k_MotionOnlyShaderTagId(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "k_MotionOnlyShaderTagId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::XRDepthMotionPass::getStaticF_k_MotionOnlyShaderTagId() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "k_MotionOnlyShaderTagId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* xrMotionVector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, xrMotionVector);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::XRDepthMotionPass::GetObjectMotionDrawingSettings(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "GetObjectMotionDrawingSettings",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings, false>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::InitObjectMotionRendererLists(::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*> passData,
                                                                                                ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "InitObjectMotionRendererLists", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, cullResults, renderGraph, camera);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::InitPassData(::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*> passData,
                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, cameraData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::ImportXRMotionColorAndDepth(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                              ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "ImportXRMotionColorAndDepth", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, cameraData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::ResetMotionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(),
                                                                             "ResetMotionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::Update(::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass* UnityEngine::Rendering::Universal::XRDepthMotionPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                              ::UnityEngine::Shader* xrMotionVector) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(evt, xrMotionVector));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass::XRDepthMotionPass() {}
