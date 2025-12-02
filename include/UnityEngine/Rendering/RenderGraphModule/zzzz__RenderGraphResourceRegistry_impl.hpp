#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResourceRegistry.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferResource_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResource_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ImportResourceParams_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureResource_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDebugParams_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceType_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTargetInfo_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListLegacyResource_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListResource_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureResource_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GizmoSubset_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowDrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__UISubset_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x65c6df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65cadb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*, ::System::AsyncCallback*,
                                                                                                        ::System::Object*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65cadc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65cadec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgContext, res);
}
inline ::System::IAsyncResult*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, rgContext, res, callback, object);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::RenderGraphResourceRegistry_ResourceCreateCallback() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x65c6f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65cae10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*, ::System::AsyncCallback*,
                                                                                                  ::System::Object*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65cae24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65cae4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, res);
}
inline ::System::IAsyncResult*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, rgContext, res, callback, object);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::RenderGraphResourceRegistry_ResourceCallback() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65c6d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)(
    bool, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Clear)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65caa28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(), "Clear",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Cleanup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65cabf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(),
                                    "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData.PurgeUnusedGraphicsResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::PurgeUnusedGraphicsResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65cab44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(),
        "PurgeUnusedGraphicsResources", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_resourceArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceArray;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_resourceArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceArray;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_set_resourceArray(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_sharedResourcesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedResourcesCount;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_sharedResourcesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedResourcesCount;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_set_sharedResourcesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedResourcesCount = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_set_pool(
    ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_createResourceCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createResourceCallback;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_createResourceCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createResourceCallback;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_set_createResourceCallback(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___createResourceCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_releaseResourceCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseResourceCallback;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_get_releaseResourceCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseResourceCallback;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::__cordl_internal_set_releaseResourceCallback(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___releaseResourceCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Clear(bool onException, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(), "Clear",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onException, frameIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(),
                                  "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::PurgeUnusedGraphicsResources(int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(), "PurgeUnusedGraphicsResources",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameIndex);
}
template <typename ResType>
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::AddNewRenderGraphResource(::ByRef<ResType> outRes, bool pooledResource) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>::get(), "AddNewRenderGraphResource",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ResType>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<ResType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ResType>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outRes, pooledResource);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::RenderGraphResourceRegistry_RenderGraphResourcesData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.get_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* (*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::get_current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65c5f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "get_current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.set_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::set_current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65c5fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "set_current",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckTextureResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureResource*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckTextureResource)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65c6014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckTextureResource",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x65c60c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65c6200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTexture",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.TextureNeedsFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::TextureNeedsFallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x65bd7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "TextureNeedsFallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRendererList)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x65c62fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckBufferResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::BufferResource*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckBufferResource)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65c645c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckBufferResource",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::BufferResource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65c5920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65c6614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RayTracingAccelerationStructure* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65c55ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                    "GetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetSharedResourceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetSharedResourceCount)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65c6824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetSharedResourceCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x65c685c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x65c69c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.BeginRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginRenderGraph)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65c70f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginRenderGraph",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.BeginExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginExecute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65c7270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginExecute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.EndExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::EndExecute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65c7480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "EndExecute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckHandleValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c7514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckHandleValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x65c7518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IncrementWriteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementWriteCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65bd4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IncrementWriteCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IncrementReadCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementReadCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65bf6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IncrementReadCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.NewVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::NewVersion)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65c76ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "NewVersion",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetLatestVersionHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionHandle)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x65bf510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetLatestVersionHandle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetLatestVersionNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionNumber)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x65c78e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetLatestVersionNumber",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetZeroVersionedHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetZeroVersionedHandle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65bf7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetZeroVersionedHandle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetNewVersionedHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetNewVersionedHandle)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x65bf7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetNewVersionedHandle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetResourceLowLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceLowLevel)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x65c7a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetResourceLowLevel",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65bf3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65c7b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceImported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65bd6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceImported",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceForceReleased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceForceReleased)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65c7bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceForceReleased",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceShared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65c7c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceShared",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceShared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65c7800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceShared",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsGraphicsResourceCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsGraphicsResourceCreated)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65c7ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsGraphicsResourceCreated",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRendererListCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRendererListCreated)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x65c7db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRendererListCreated",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceImported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65c7f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceImported",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceTransientIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceTransientIndex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65be844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceTransientIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RTHandle*>, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65c7fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "ImportTexture", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
        ::ByRef<::UnityEngine::Rendering::RTHandle*>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>, bool)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x65c7fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
        ::ByRef<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x65c835c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSharedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSharedTexture)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x65c855c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateSharedTexture",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.RefreshSharedTextureDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RefreshSharedTextureDesc)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65c8718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "RefreshSharedTextureDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleaseSharedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseSharedTexture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65c875c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseSharedTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportBackbuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
        ::UnityEngine::Rendering::RenderTargetIdentifier, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>,
        ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBackbuffer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x65c8828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportBackbuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRenderTarget)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65c89e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateRenderTarget",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderTargetInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderTargetInfo)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x65c0790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderTargetInfo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetFormat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c8ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateFormat)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x65c8bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateFormat",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTexture)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65bdbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTexture",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetResourceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65c8cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetResourceCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResourceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65bc858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "GetTextureResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x65bda24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x65c621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResourceDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceDesc)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x65bdd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResourceDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65c8d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RendererListParams>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65c8e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererList",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererListParams>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateShadowRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateShadowRendererList)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65c8f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                    "CreateShadowRendererList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateGizmoRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
        ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Camera*>, ::ByRef<::UnityEngine::Rendering::GizmoSubset>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateGizmoRendererList)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x65c900c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "CreateGizmoRendererList", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GizmoSubset>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateUIOverlayRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
        ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Camera*>, ::ByRef<::UnityEngine::Rendering::UISubset>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateUIOverlayRendererList)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x65c90e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "CreateUIOverlayRendererList", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::UISubset>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateWireOverlayRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Camera*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateWireOverlayRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65c91b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "CreateWireOverlayRendererList", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Camera*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65c9278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
        ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Camera*>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65c933c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
        ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Camera*>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x65c9438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::GraphicsBuffer*, bool)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBuffer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65c9570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "ImportBuffer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65be0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateBuffer",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResourceDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferDesc (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceDesc)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x65be230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBufferResourceDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResourceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65bc860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "GetBufferResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65c6504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBufferResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65c6630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBufferResource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRayTracingAccelerationStructureResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResource)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65c6714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRayTracingAccelerationStructureResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRayTracingAccelerationStructureResourceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResourceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65bc868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "GetRayTracingAccelerationStructureResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::ByRef<::UnityEngine::Rendering::RayTracingAccelerationStructure*>, ::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65c9648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportRayTracingAccelerationStructure",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RayTracingAccelerationStructure*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.UpdateSharedResourceLastFrameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65c9720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "UpdateSharedResourceLastFrameIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.UpdateSharedResourceLastFrameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65c97c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "UpdateSharedResourceLastFrameIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ManageSharedRenderGraphResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ManageSharedRenderGraphResources)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x65c7320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "ManageSharedRenderGraphResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreatePooledResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x65c9834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreatePooledResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreatePooledResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65c99a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreatePooledResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateTextureCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTextureCallback)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x65c9a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTextureCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleasePooledResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x65c9c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleasePooledResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleasePooledResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65c9d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleasePooledResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleaseTextureCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseTextureCallback)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x65c9e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseTextureCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateTextureDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateTextureDesc)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x65c9fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateTextureDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateRendererListDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRendererListDesc)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x65ca1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateRendererListDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateBufferDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateBufferDesc)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x65ca37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateBufferDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*, ::UnityEngine::Rendering::ScriptableRenderContext, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererLists)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x65ca49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererLists",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Clear)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x65ca780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.PurgeUnusedGraphicsResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::PurgeUnusedGraphicsResources)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65caadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "PurgeUnusedGraphicsResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65cab5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.FlushLogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::FlushLogs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65cacc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "FlushLogs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.LogResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::LogResources)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x65ca86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "LogResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*,
                   ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphResources;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*,
                   ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphResources;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RenderGraphResources(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*,
             ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderGraphResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RendererListResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListResources;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RendererListResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListResources;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RendererListResources(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RendererListResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RendererListLegacyResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListLegacyResources;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RendererListLegacyResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListLegacyResources;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RendererListLegacyResources(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RendererListLegacyResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphDebug() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphDebug;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphDebug() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphDebug;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RenderGraphDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderGraphDebug)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ResourceLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceLogger;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ResourceLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceLogger;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_ResourceLogger(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourceLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_FrameInformationLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_FrameInformationLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_FrameInformationLogger(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FrameInformationLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_CurrentFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFrameIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ExecutionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ExecutionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_ExecutionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionCount = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentBackbuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBackbuffer;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentBackbuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBackbuffer;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_CurrentBackbuffer(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentBackbuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ActiveRendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRendererLists;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ActiveRendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRendererLists;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_ActiveRendererLists(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveRendererLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_forceManualClearOfResource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceManualClearOfResource;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_forceManualClearOfResource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceManualClearOfResource;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_forceManualClearOfResource(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceManualClearOfResource = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::setStaticF_m_CurrentRegistry(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, "m_CurrentRegistry",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::getStaticF_m_CurrentRegistry() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, "m_CurrentRegistry",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::setStaticF_emptyId(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "emptyId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>(
      std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::getStaticF_emptyId() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "emptyId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::setStaticF_builtinCameraRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "builtinCameraRenderTarget",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>(
      std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::getStaticF_builtinCameraRenderTarget() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "builtinCameraRenderTarget",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::get_current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "get_current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::set_current(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "set_current", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckTextureResource(::UnityEngine::Rendering::RenderGraphModule::TextureResource* texResource) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckTextureResource",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texResource);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::TextureNeedsFallback(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "TextureNeedsFallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RendererList
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRendererList(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList, false>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckBufferResource(::UnityEngine::Rendering::RenderGraphModule::BufferResource* bufferResource) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckBufferResource",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::BufferResource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferResource);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RayTracingAccelerationStructure* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructure(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                  "GetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RayTracingAccelerationStructure*, false>(this, ___internal_method, handle);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetSharedResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetSharedResourceCount",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraphDebug, frameInformationLogger);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginRenderGraph(int32_t executionCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginRenderGraph",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionCount);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginExecute(int32_t currentFrameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginExecute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentFrameIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::EndExecute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "EndExecute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementWriteCount(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IncrementWriteCount",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementReadCount(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IncrementReadCount",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::NewVersion(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "NewVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionHandle(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetLatestVersionHandle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, false>(this, ___internal_method, res);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionNumber(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetLatestVersionNumber",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetZeroVersionedHandle(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetZeroVersionedHandle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, false>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetNewVersionedHandle(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetNewVersionedHandle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, false>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceLowLevel(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetResourceLowLevel",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*, false>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                    int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceImported",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceForceReleased(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                       int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                 "IsRenderGraphResourceForceReleased", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                 "IsRenderGraphResourceShared", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceShared",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsGraphicsResourceCreated(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsGraphicsResourceCreated",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRendererListCreated(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRendererListCreated",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                  int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                 "IsRenderGraphResourceImported", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, index);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceTransientIndex(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceTransientIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture(::ByRef<::UnityEngine::Rendering::RTHandle*> rt,
                                                                                                                                                        bool isBuiltin) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "ImportTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt, isBuiltin);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture(::ByRef<::UnityEngine::Rendering::RTHandle*> rt,
                                                                                      ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams, bool isBuiltin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt, importParams, isBuiltin);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture(::ByRef<::UnityEngine::Rendering::RTHandle*> rt,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                      ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt, info, importParams);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSharedTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, bool explicitRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateSharedTexture",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, desc, explicitRelease);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RefreshSharedTextureDesc(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture,
                                                                                                             ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "RefreshSharedTextureDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseSharedTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseSharedTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt,
                                                                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> info,
                                                                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportBackbuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt, info, importParams);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRenderTarget(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateRenderTarget",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderTargetInfo(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res,
                                                                                                        ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> outInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderTargetInfo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, outInfo);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color,
                                                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(this, ___internal_method, color, depthStencil);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color,
                                                                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateFormat",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depthStencil);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, int32_t transientPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTexture",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, desc, transientPassIndex);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetResourceCount",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "GetTextureResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureResource*, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureResource*, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceDesc(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle, bool noThrowOnInvalidDesc) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResourceDesc",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc, false>(this, ___internal_method, handle, noThrowOnInvalidDesc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList(::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList(::ByRef<::UnityEngine::Rendering::RendererListParams> desc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererList",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererListParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateShadowRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                 ::ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> shadowDrawinSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateShadowRendererList",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, context, shadowDrawinSettings);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateGizmoRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Camera*> camera,
                                                                                                ::ByRef<::UnityEngine::Rendering::GizmoSubset> gizmoSubset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "CreateGizmoRendererList", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GizmoSubset>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, context, camera, gizmoSubset);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateUIOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Camera*> camera,
                                                                                                    ::ByRef<::UnityEngine::Rendering::UISubset> uiSubset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "CreateUIOverlayRendererList", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::UISubset>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, context, camera, uiSubset);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateWireOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                      ::ByRef<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "CreateWireOverlayRendererList", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, context, camera);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, context, camera);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Camera*> camera,
                                                                                                 ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, context, camera, projectionMatrix, viewMatrix);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Camera*> camera,
                                                                                                 ::UnityEngine::Matrix4x4 projectionMatrixL, ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                                                 ::UnityEngine::Matrix4x4 projectionMatrixR, ::UnityEngine::Matrix4x4 viewMatrixR) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Camera*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, context, camera, projectionMatrixL, viewMatrixL,
                                                                                                                     projectionMatrixR, viewMatrixR);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer,
                                                                                                                                                      bool forceRelease) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportBuffer",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, false>(this, ___internal_method, graphicsBuffer, forceRelease);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc, int32_t transientPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateBuffer",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, false>(this, ___internal_method, desc, transientPassIndex);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferDesc
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceDesc(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle, bool noThrowOnInvalidDesc) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBufferResourceDesc",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferDesc, false>(this, ___internal_method, handle, noThrowOnInvalidDesc);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "GetBufferResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBufferResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferResource*, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetBufferResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferResource*, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRayTracingAccelerationStructureResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*, false>(this, ___internal_method, handle);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "GetRayTracingAccelerationStructureResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportRayTracingAccelerationStructure(::ByRef<::UnityEngine::Rendering::RayTracingAccelerationStructure*> accelStruct,
                                                                                                              ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                  "ImportRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RayTracingAccelerationStructure*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle, false>(this, ___internal_method, accelStruct, name);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex(int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "UpdateSharedResourceLastFrameIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "UpdateSharedResourceLastFrameIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ManageSharedRenderGraphResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "ManageSharedRenderGraphResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                         int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreatePooledResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgContext, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreatePooledResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgContext, handle);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTextureCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgContext, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                          int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleasePooledResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, type, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                          ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleasePooledResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseTextureCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateTextureDesc(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateTextureDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRendererListDesc(::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateRendererListDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateBufferDesc(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateBufferDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererLists(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* rendererLists, ::UnityEngine::Rendering::ScriptableRenderContext context,
    bool manualDispatch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererLists",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererLists, context, manualDispatch);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Clear(bool onException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onException);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::PurgeUnusedGraphicsResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "PurgeUnusedGraphicsResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::FlushLogs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "FlushLogs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::LogResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "LogResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>());
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::New_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(renderGraphDebug, frameInformationLogger));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourceRegistry() {}
