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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x67e02d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67e428c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*, ::System::AsyncCallback*,
                                                                                                        ::System::Object*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67e42a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67e42c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgContext, res);
}
inline ::System::IAsyncResult*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rgContext, res, callback, object);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback::RenderGraphResourceRegistry_ResourceCreateCallback() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x67e0418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67e42ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*, ::System::AsyncCallback*,
                                                                                                  ::System::Object*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67e4300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67e4328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, res);
}
inline ::System::IAsyncResult*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rgContext, res, callback, object);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback::RenderGraphResourceRegistry_ResourceCallback() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x67e0214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)(bool, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Clear)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67e3f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(),
                                                             { "Clear", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Cleanup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67e40d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData.PurgeUnusedGraphicsResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::PurgeUnusedGraphicsResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67e4020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(),
                                                             { "PurgeUnusedGraphicsResources", {}, { ::i2c::type_of<int32_t>() } })));
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
  this->___resourceArray = value;
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
  this->___pool = value;
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
  this->___createResourceCallback = value;
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
  this->___releaseResourceCallback = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Clear(bool onException, int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(),
                                                           { "Clear", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onException, frameIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::PurgeUnusedGraphicsResources(int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(),
                                                           { "PurgeUnusedGraphicsResources", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameIndex);
}
template <typename ResType>
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::AddNewRenderGraphResource(::by_ref<ResType> outRes, bool pooledResource) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>(),
                                                           { "AddNewRenderGraphResource", { ::i2c::class_of<ResType>() }, { ::i2c::type_of<::by_ref<ResType>>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ResType>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outRes, pooledResource);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData::RenderGraphResourceRegistry_RenderGraphResourcesData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* (*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::get_current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67df434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::set_current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67df490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "set_current", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckTextureResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureResource*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckTextureResource)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67df4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CheckTextureResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x67df5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67df6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetTexture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.TextureNeedsFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::TextureNeedsFallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67d6c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "TextureNeedsFallback", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRendererList)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x67df7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckBufferResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::BufferResource*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckBufferResource)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67df938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CheckBufferResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferResource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67dedfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67dfaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RayTracingAccelerationStructure* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67dea88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "GetRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetSharedResourceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetSharedResourceCount)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67dfd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetSharedResourceCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x67dfd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x67dfea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.BeginRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginRenderGraph)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67e05d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "BeginRenderGraph", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.BeginExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginExecute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67e074c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "BeginExecute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.EndExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::EndExecute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67e095c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "EndExecute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckHandleValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67e09f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CheckHandleValidity", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckHandleValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x67e09f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "CheckHandleValidity", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IncrementWriteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementWriteCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x67d69bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "IncrementWriteCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IncrementReadCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementReadCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x67d8b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "IncrementReadCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.NewVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::NewVersion)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x67e0bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "NewVersion", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetLatestVersionHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionHandle)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67d89ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetLatestVersionHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetLatestVersionNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionNumber)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x67e0dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetLatestVersionNumber", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetZeroVersionedHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetZeroVersionedHandle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x67d8ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetZeroVersionedHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetNewVersionedHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetNewVersionedHandle)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x67d8cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetNewVersionedHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetResourceLowLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceLowLevel)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67e0ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetResourceLowLevel", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x67d88d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetRenderGraphResourceName", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67e0ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                         { "GetRenderGraphResourceName", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceImported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67d6b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "IsRenderGraphResourceImported", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceForceReleased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceForceReleased)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67e1098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "IsRenderGraphResourceForceReleased", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceShared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67e113c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "IsRenderGraphResourceShared", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceShared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67e0cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "IsRenderGraphResourceShared", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsGraphicsResourceCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsGraphicsResourceCreated)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x67e117c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "IsGraphicsResourceCreated", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRendererListCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRendererListCreated)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x67e1290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "IsRendererListCreated", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceImported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67e13fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "IsRenderGraphResourceImported", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceTransientIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceTransientIndex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67d7d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "GetRenderGraphResourceTransientIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RTHandle*>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67e14a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "ImportTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RTHandle*>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x67e14c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "ImportTexture",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x67e1838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "ImportTexture",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSharedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSharedTexture)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x67e1a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "CreateSharedTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.RefreshSharedTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RefreshSharedTextureDesc)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67e1bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "RefreshSharedTextureDesc",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleaseSharedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseSharedTexture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67e1c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "ReleaseSharedTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportBackbuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBackbuffer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x67e1d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "ImportBackbuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRenderTarget)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67e1ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "ValidateRenderTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderTargetInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderTargetInfo)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x67d9c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "GetRenderTargetInfo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetFormat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67e1f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                         { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateFormat)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67e2094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
            { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTexture)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67d70b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "CreateTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetResourceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67e2194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetResourceCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResourceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67d5d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetTextureResourceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67d6f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetTextureResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x67df6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetTextureResource", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResourceDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceDesc)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x67d721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                         { "GetTextureResourceDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x67e2214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RendererListParams>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67e235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateShadowRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateShadowRendererList)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67e2428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
            { "CreateShadowRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateGizmoRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Camera*>, ::by_ref<::UnityEngine::Rendering::GizmoSubset>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateGizmoRendererList)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67e24e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CreateGizmoRendererList",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GizmoSubset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateUIOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Camera*>, ::by_ref<::UnityEngine::Rendering::UISubset>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateUIOverlayRendererList)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67e25bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CreateUIOverlayRendererList",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UISubset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateWireOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Camera*>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateWireOverlayRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67e2690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "CreateWireOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Camera*>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67e2754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Camera*>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67e2818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CreateSkyboxRendererList",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(),
                                                                 ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Camera*>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x67e2914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "CreateSkyboxRendererList",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::GraphicsBuffer*, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBuffer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67e2a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "ImportBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x67d75b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "CreateBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResourceDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferDesc (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceDesc)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x67d770c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "GetBufferResourceDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResourceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67d5d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetBufferResourceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67df9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "GetBufferResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetBufferResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67dfb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetBufferResource", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRayTracingAccelerationStructureResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResource)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67dfbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "GetRayTracingAccelerationStructureResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRayTracingAccelerationStructureResourceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResourceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67d5d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetRayTracingAccelerationStructureResourceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*>, ::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67e2b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                            { "ImportRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.UpdateSharedResourceLastFrameIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67e2bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "UpdateSharedResourceLastFrameIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.UpdateSharedResourceLastFrameIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67e2ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                { "UpdateSharedResourceLastFrameIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ManageSharedRenderGraphResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ManageSharedRenderGraphResources)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x67e07fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "ManageSharedRenderGraphResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreatePooledResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x67e2d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
            { "CreatePooledResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreatePooledResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x67e2e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "CreatePooledResource",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateTextureCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTextureCallback)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x67e2f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "CreateTextureCallback",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleasePooledResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x67e312c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
            { "ReleasePooledResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleasePooledResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x67e3258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "ReleasePooledResource",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleaseTextureCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseTextureCallback)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x67e3310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                           { "ReleaseTextureCallback",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateTextureDesc)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x67e3484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "ValidateTextureDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateRendererListDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRendererListDesc)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x67e3698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "ValidateRendererListDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateBufferDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateBufferDesc)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x67e3858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "ValidateBufferDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*, ::UnityEngine::Rendering::ScriptableRenderContext, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererLists)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x67e3978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                             { "CreateRendererLists",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Clear)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x67e3c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.PurgeUnusedGraphicsResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::PurgeUnusedGraphicsResources)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67e3fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "PurgeUnusedGraphicsResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x67e4038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.FlushLogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::FlushLogs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67e419c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "FlushLogs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry.LogResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::LogResources)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x67e3d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "LogResources", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphResources;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphResources;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RenderGraphResources(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderGraphResources = value;
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
  this->___m_RendererListResources = value;
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
  this->___m_RendererListLegacyResources = value;
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
  this->___m_RenderGraphDebug = value;
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
  this->___m_ResourceLogger = value;
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
  this->___m_FrameInformationLogger = value;
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
  this->___m_CurrentBackbuffer = value;
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
  this->___m_ActiveRendererLists = value;
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
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::getStaticF_m_CurrentRegistry() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, "m_CurrentRegistry",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::setStaticF_emptyId(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "emptyId", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(
      std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::getStaticF_emptyId() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "emptyId", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::setStaticF_builtinCameraRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "builtinCameraRenderTarget", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(
      std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::getStaticF_builtinCameraRenderTarget() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "builtinCameraRenderTarget", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::get_current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::set_current(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "set_current", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckTextureResource(::UnityEngine::Rendering::RenderGraphModule::TextureResource* texResource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CheckTextureResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texResource);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetTexture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::TextureNeedsFallback(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "TextureNeedsFallback", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RendererList
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRendererList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckBufferResource(::UnityEngine::Rendering::RenderGraphModule::BufferResource* bufferResource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CheckBufferResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferResource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferResource);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, handle);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBuffer(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RayTracingAccelerationStructure* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructure(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                          { "GetRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(this, ___internal_method, handle);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetSharedResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetSharedResourceCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraphDebug, frameInformationLogger);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginRenderGraph(int32_t executionCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "BeginRenderGraph", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executionCount);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginExecute(int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "BeginExecute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentFrameIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::EndExecute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "EndExecute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CheckHandleValidity", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "CheckHandleValidity", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementWriteCount(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "IncrementWriteCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementReadCount(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "IncrementReadCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::NewVersion(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "NewVersion", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetLatestVersionHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(this, ___internal_method, res);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetLatestVersionNumber(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetLatestVersionNumber", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetZeroVersionedHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetZeroVersionedHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetNewVersionedHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetNewVersionedHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceLowLevel(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetResourceLowLevel", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetRenderGraphResourceName", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                    int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                       { "GetRenderGraphResourceName", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "IsRenderGraphResourceImported", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceForceReleased(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                       int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                          { "IsRenderGraphResourceForceReleased", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                       { "IsRenderGraphResourceShared", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "IsRenderGraphResourceShared", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsGraphicsResourceCreated(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "IsGraphicsResourceCreated", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRendererListCreated(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "IsRendererListCreated", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                                  int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                          { "IsRenderGraphResourceImported", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, index);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceTransientIndex(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "GetRenderGraphResourceTransientIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, res);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture(::by_ref<::UnityEngine::Rendering::RTHandle*> rt, bool isBuiltin) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "ImportTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, isBuiltin);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture(::by_ref<::UnityEngine::Rendering::RTHandle*> rt,
                                                                                      ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams, bool isBuiltin) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "ImportTexture",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, importParams, isBuiltin);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture(::by_ref<::UnityEngine::Rendering::RTHandle*> rt,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                      ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "ImportTexture",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, info, importParams);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSharedTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, bool explicitRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "CreateSharedTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc, explicitRelease);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RefreshSharedTextureDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture,
                                                                                                             ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "RefreshSharedTextureDesc",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseSharedTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "ReleaseSharedTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt,
                                                                                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> info,
                                                                                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "ImportBackbuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, info, importParams);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRenderTarget(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "ValidateRenderTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderTargetInfo(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res,
                                                                                                        ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> outInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "GetRenderTargetInfo",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res, outInfo);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color,
                                                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                       { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method, color, depthStencil);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color,
                                                                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
          { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depthStencil);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, int32_t transientPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "CreateTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc, transientPassIndex);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetResourceCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetTextureResourceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetTextureResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetTextureResource", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                                               bool noThrowOnInvalidDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "GetTextureResourceDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(this, ___internal_method, handle, noThrowOnInvalidDesc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererListParams> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateShadowRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                 ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> shadowDrawinSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
          { "CreateShadowRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, context, shadowDrawinSettings);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateGizmoRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                ::by_ref<::UnityEngine::Rendering::GizmoSubset> gizmoSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CreateGizmoRendererList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GizmoSubset>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, context, camera, gizmoSubset);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateUIOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                    ::by_ref<::UnityEngine::Rendering::UISubset> uiSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CreateUIOverlayRendererList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UISubset>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, context, camera, uiSubset);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateWireOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                      ::by_ref<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                          { "CreateWireOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, context, camera);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                          { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, context, camera);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                 ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CreateSkyboxRendererList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(),
                                                               ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, context, camera, projectionMatrix, viewMatrix);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                 ::UnityEngine::Matrix4x4 projectionMatrixL, ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                                                 ::UnityEngine::Matrix4x4 projectionMatrixR, ::UnityEngine::Matrix4x4 viewMatrixR) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                          { "CreateSkyboxRendererList",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                              ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, context, camera, projectionMatrixL, viewMatrixL,
                                                                                                              projectionMatrixR, viewMatrixR);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer,
                                                                                                                                                      bool forceRelease) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "ImportBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, graphicsBuffer, forceRelease);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc, int32_t transientPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "CreateBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, desc, transientPassIndex);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferDesc
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle, bool noThrowOnInvalidDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "GetBufferResourceDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(this, ___internal_method, handle, noThrowOnInvalidDesc);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetBufferResourceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "GetBufferResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferResource*>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetBufferResource(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetBufferResource", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferResource*>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                              { "GetRayTracingAccelerationStructureResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*>(this, ___internal_method, handle);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRayTracingAccelerationStructureResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "GetRayTracingAccelerationStructureResourceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportRayTracingAccelerationStructure(::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*> accelStruct,
                                                                                                              ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                          { "ImportRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(this, ___internal_method, accelStruct, name);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex(int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "UpdateSharedResourceLastFrameIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "UpdateSharedResourceLastFrameIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ManageSharedRenderGraphResources() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "ManageSharedRenderGraphResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                         int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
          { "CreatePooledResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgContext, type, index);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "CreatePooledResource",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgContext, handle);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "CreateTextureCallback",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgContext, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                          int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
          { "ReleasePooledResource", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, type, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "ReleasePooledResource",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                         { "ReleaseTextureCallback",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateTextureDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "ValidateTextureDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRendererListDesc(::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "ValidateRendererListDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateBufferDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "ValidateBufferDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererLists(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* rendererLists, ::UnityEngine::Rendering::ScriptableRenderContext context,
    bool manualDispatch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                           { "CreateRendererLists",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererLists, context, manualDispatch);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Clear(bool onException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onException);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::PurgeUnusedGraphicsResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "PurgeUnusedGraphicsResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::FlushLogs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "FlushLogs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::LogResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), { "LogResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>());
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::New_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(renderGraphDebug, frameInformationLogger));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourceRegistry() {}
