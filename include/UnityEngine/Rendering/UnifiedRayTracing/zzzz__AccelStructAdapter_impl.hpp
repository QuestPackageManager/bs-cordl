#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AccelStructAdapter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelStructAdapter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelStructAdapter_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelStructInstances_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPool_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__MeshInstanceDesc_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingResources_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__TerrainDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AccelStructID", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs::AccelStructAdapter_InstanceIDs(int32_t InstanceID, int32_t AccelStructID) noexcept {
  this->InstanceID = InstanceID;
  this->AccelStructID = AccelStructID;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs::AccelStructAdapter_InstanceIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e01f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c._GetInstanceIDs_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs)>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::_GetInstanceIDs_b__26_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e01f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>(),
                                                             { "<GetInstanceIDs>b__26_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::setStaticF___9(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*, "<>9", ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>(
      std::forward<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>(value));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c* UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*, "<>9", ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::setStaticF___9__26_0(
    ::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>*, "<>9__26_0",
                                    ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>(
      std::forward<::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>*>(value));
}
inline ::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>*
UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>*, "<>9__26_0",
                                           ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::_GetInstanceIDs_b__26_0(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>(),
                                                           { "<GetInstanceIDs>b__26_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c* UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c::AccelStructAdapter___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.get_Instances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::get_Instances)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dff340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "get_Instances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*,
                                                                                                                                 ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6dff348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*,
                                                                                                                                 ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6dff518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.GetAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::GetAccelerationStructure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dff988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "GetAccelerationStructure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.get_GeometryPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::get_GeometryPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6dff990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "get_GeometryPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*)>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::Bind)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6dff9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                           { "Bind",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6dffe18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t, ::UnityEngine::Component*, ::System::Span_1<uint32_t>,
                                                                                                                                 ::System::Span_1<uint32_t>, ::System::Span_1<bool>, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6e00078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                             { "AddInstance",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Span_1<uint32_t>>(),
                                                                 ::i2c::type_of<::System::Span_1<uint32_t>>(), ::i2c::type_of<::System::Span_1<bool>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(
    int32_t, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::System::Span_1<uint32_t>, ::System::Span_1<uint32_t>, ::System::Span_1<bool>, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x6e00380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                            { "AddInstance",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::System::Span_1<uint32_t>>(),
                                ::i2c::type_of<::System::Span_1<uint32_t>>(), ::i2c::type_of<::System::Span_1<bool>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6e00248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                             { "AddInstance", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.AddHeightmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddHeightmap)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6e0073c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                         { "AddHeightmap",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.AddTrees
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddTrees)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x6e008b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                         { "AddTrees",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, uint32_t, uint32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6e00de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                            { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.RemoveInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::RemoveInstance)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6e00f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.UpdateInstanceTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceTransform)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6e0119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                             { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.UpdateInstanceMaterialIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t, ::System::Span_1<uint32_t>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceMaterialIDs)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e01534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                             { "UpdateInstanceMaterialIDs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.UpdateInstanceMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t, ::System::Span_1<uint32_t>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceMask)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e01718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                           { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.UpdateInstanceMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceMask)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6e01998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                           { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::GraphicsBuffer*>)>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::Build)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e01b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                { "Build", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.NextFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::NextFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e01c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "NextFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter.GetInstanceIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::*)(int32_t, ::by_ref<::ArrayW<int32_t>>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::GetInstanceIDs)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6e01d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                           { "GetInstanceIDs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*& UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_get__accelStruct() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelStruct;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_get__accelStruct() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelStruct;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_set__accelStruct(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accelStruct = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*& UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_get__instances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instances;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_get__instances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instances;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_set__instances(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instances = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>*&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_get__objectHandleToInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectHandleToInstances;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>* const&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_get__objectHandleToInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectHandleToInstances;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::__cordl_internal_set__objectHandleToInstances(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectHandleToInstances = value;
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::get_Instances() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "get_Instances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                                 ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelStruct, geometryPool);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                                 ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelStruct, resources);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::GetAccelerationStructure() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "GetAccelerationStructure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::get_GeometryPool() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "get_GeometryPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW propertyName,
                                                                                ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                         { "Bind",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, propertyName, shader);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance(int32_t objectHandle, ::UnityEngine::Component* meshRendererOrTerrain, ::System::Span_1<uint32_t> perSubMeshMask,
                                                                                       ::System::Span_1<uint32_t> perSubMeshMaterialIDs, ::System::Span_1<bool> perSubMeshIsOpaque,
                                                                                       uint32_t renderingLayerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                           { "AddInstance",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Span_1<uint32_t>>(),
                                                               ::i2c::type_of<::System::Span_1<uint32_t>>(), ::i2c::type_of<::System::Span_1<bool>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle, meshRendererOrTerrain, perSubMeshMask, perSubMeshMaterialIDs, perSubMeshIsOpaque, renderingLayerMask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance(int32_t objectHandle, ::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 localToWorldMatrix,
                                                                                       ::System::Span_1<uint32_t> perSubMeshMask, ::System::Span_1<uint32_t> perSubMeshMaterialIDs,
                                                                                       ::System::Span_1<bool> perSubMeshIsOpaque, uint32_t renderingLayerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                       { "AddInstance",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::System::Span_1<uint32_t>>(),
                                           ::i2c::type_of<::System::Span_1<uint32_t>>(), ::i2c::type_of<::System::Span_1<bool>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle, mesh, localToWorldMatrix, perSubMeshMask, perSubMeshMaterialIDs, perSubMeshIsOpaque, renderingLayerMask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance(int32_t objectHandle, ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc terrainDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                           { "AddInstance", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle, terrainDesc);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddHeightmap(
    ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc terrainDesc,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*> instanceHandles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                       { "AddHeightmap",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDesc, instanceHandles);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddTrees(
    ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc terrainDesc,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*> instanceHandles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                       { "AddTrees",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDesc, instanceHandles);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs
UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc instanceDesc, uint32_t materialID,
                                                                           uint32_t renderingLayerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                          { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>(this, ___internal_method, instanceDesc, materialID, renderingLayerMask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::RemoveInstance(int32_t objectHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceTransform(int32_t objectHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                           { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle, localToWorldMatrix);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceMaterialIDs(int32_t objectHandle, ::System::Span_1<uint32_t> perSubMeshMaterialIDs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                           { "UpdateInstanceMaterialIDs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle, perSubMeshMaterialIDs);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceMask(int32_t objectHandle, ::System::Span_1<uint32_t> perSubMeshMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                         { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle, perSubMeshMask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::UpdateInstanceMask(int32_t objectHandle, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                         { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectHandle, mask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::Build(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::GraphicsBuffer*> scratchBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                              { "Build", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::NextFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(), { "NextFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::GetInstanceIDs(int32_t rendererID, ::by_ref<::ArrayW<int32_t>> instanceIDs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(),
                                                                                         { "GetInstanceIDs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rendererID, instanceIDs);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*
UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                        ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(accelStruct, geometryPool));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*
UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                        ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*>(accelStruct, resources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter::AccelStructAdapter() {}
