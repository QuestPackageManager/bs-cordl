#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AccelStructInstances.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolHandle_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelStructInstances_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelStructInstances_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolHandle_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPool_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__MeshInstanceDesc_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__PersistentGpuArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "localToWorld", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "previousLocalToWorld", ty:
// "::Unity::Mathematics::float4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorldNormals", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceMask", ty: "uint32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "userMaterialID", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "geometryIndex",
// ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance::AccelStructInstances_RTInstance(::Unity::Mathematics::float4x4 localToWorld,
                                                                                                                        ::Unity::Mathematics::float4x4 previousLocalToWorld,
                                                                                                                        ::Unity::Mathematics::float4x4 localToWorldNormals, uint32_t renderingLayerMask,
                                                                                                                        uint32_t instanceMask, uint32_t userMaterialID,
                                                                                                                        uint32_t geometryIndex) noexcept {
  this->localToWorld = localToWorld;
  this->previousLocalToWorld = previousLocalToWorld;
  this->localToWorldNormals = localToWorldNormals;
  this->renderingLayerMask = renderingLayerMask;
  this->instanceMask = instanceMask;
  this->userMaterialID = userMaterialID;
  this->geometryIndex = geometryIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance::AccelStructInstances_RTInstance() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e029c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_geometryPoolHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometryPoolHandle;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle const&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_geometryPoolHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometryPoolHandle;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_set_geometryPoolHandle(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___geometryPoolHandle = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_indexInInstanceBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexInInstanceBuffer;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_indexInInstanceBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexInInstanceBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_set_indexInInstanceBuffer(
    ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexInInstanceBuffer = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_instanceMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceMask;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_instanceMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceMask;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_set_instanceMask(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instanceMask = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_vertexOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexOffset;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_vertexOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexOffset;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_set_vertexOffset(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexOffset = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_indexOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexOffset;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_get_indexOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexOffset;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::__cordl_internal_set_indexOffset(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexOffset = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry* UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry::AccelStructInstances_InstanceEntry() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e02df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c._NextFrame_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance (
    ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::*)(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::_NextFrame_b__22_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e02dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>(),
                                                             { "<NextFrame>b__22_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::setStaticF___9(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*, "<>9", ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>(
      std::forward<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>(value));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c* UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*, "<>9", ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::setStaticF___9__22_0(
    ::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*, "<>9__22_0",
      ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>(
      std::forward<::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*>(
          value));
}
inline ::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*, "<>9__22_0",
      ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::_NextFrame_b__22_0(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>(),
                                                           { "<NextFrame>b__22_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c* UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c::AccelStructInstances___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6dff424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::Dispose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6dffef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.get_instanceBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* (
        ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_instanceBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_instanceBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.get_instances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* (
    ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_instances)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e02374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_instances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.get_geometryPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_geometryPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e023c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_geometryPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc, uint32_t, uint32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::AddInstance)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e00690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                            { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.AddInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(
    ::System::Span_1<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>, ::System::Span_1<uint32_t>, ::System::Span_1<uint32_t>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::AddInstances)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e02710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                           { "AddInstances",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>>(),
                                                                                               ::i2c::type_of<::System::Span_1<uint32_t>>(), ::i2c::type_of<::System::Span_1<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc const>, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::AddInstance)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6e023d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                           { "AddInstance",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc const>>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.GetEntryGeomAllocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::GetEntryGeomAllocation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e029d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                { "GetEntryGeomAllocation", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.get_indexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_indexBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e02a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_indexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.get_vertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_vertexBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e02a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_vertexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.RemoveInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::RemoveInstance)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e01094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.ClearInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::ClearInstances)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6e02a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "ClearInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.UpdateInstanceTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateInstanceTransform)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6e01334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                             { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.UpdateInstanceMaterialID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateInstanceMaterialID)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e01614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                           { "UpdateInstanceMaterialID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.UpdateRenderingLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateRenderingLayerMask)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6e02bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                           { "UpdateRenderingLayerMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.UpdateInstanceMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateInstanceMask)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e0188c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                           { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.NextFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::NextFrame)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e01c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "NextFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.get_instanceListValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_instanceListValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e02d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_instanceListValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*)>(&::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::Bind)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x6dffa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                            { "Bind", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.GetInstanceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::GetInstanceCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e02d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "GetInstanceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances.NormalMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::NormalMatrix)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e02860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                           { "NormalMatrix", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_GeometryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryPool;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_GeometryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryPool;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_set_m_GeometryPool(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GeometryPool = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_InstanceBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceBuffer;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* const&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_InstanceBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_set_m_InstanceBuffer(
    ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceBuffer = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>*&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_Instances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Instances;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* const&
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_Instances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Instances;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_set_m_Instances(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Instances = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_FrameTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameTimestamp;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_FrameTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameTimestamp;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_set_m_FrameTimestamp(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameTimestamp = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_TransformTouchedLastTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformTouchedLastTimestamp;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_get_m_TransformTouchedLastTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformTouchedLastTimestamp;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::__cordl_internal_set_m_TransformTouchedLastTimestamp(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformTouchedLastTimestamp = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, geometryPool);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_instanceBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_instanceBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>*
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_instances() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_instances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>*>(
      this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_geometryPool() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_geometryPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc meshInstance, uint32_t materialID,
                                                                                            uint32_t renderingLayerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                          { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meshInstance, materialID, renderingLayerMask);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::AddInstances(::System::Span_1<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc> meshInstances,
                                                                                             ::System::Span_1<uint32_t> materialIDs, ::System::Span_1<uint32_t> renderingLayerMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                         { "AddInstances",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>>(),
                                                                                             ::i2c::type_of<::System::Span_1<uint32_t>>(), ::i2c::type_of<::System::Span_1<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meshInstances, materialIDs, renderingLayerMask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation slotAllocation,
                                                                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc const> meshInstance,
                                                                                         uint32_t materialID, uint32_t renderingLayerMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                         { "AddInstance",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc const>>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotAllocation, meshInstance, materialID, renderingLayerMask);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::GetEntryGeomAllocation(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle, int32_t submeshIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                              { "GetEntryGeomAllocation", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>(this, ___internal_method, handle, submeshIndex);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_indexBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_indexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_vertexBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_vertexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::RemoveInstance(int32_t instanceHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::ClearInstances() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "ClearInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateInstanceTransform(int32_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                           { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, localToWorldMatrix);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateInstanceMaterialID(int32_t instanceHandle, uint32_t materialID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                         { "UpdateInstanceMaterialID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, materialID);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateRenderingLayerMask(int32_t instanceHandle, uint32_t renderingLayerMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                         { "UpdateRenderingLayerMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, renderingLayerMask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::UpdateInstanceMask(int32_t instanceHandle, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                         { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, mask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::NextFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "NextFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::get_instanceListValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "get_instanceListValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::Bind(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                  ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                          { "Bind", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, shader);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::GetInstanceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(), { "GetInstanceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4x4 UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::NormalMatrix(::Unity::Mathematics::float4x4 m) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(),
                                                                                         { "NormalMatrix", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*
UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*>(geometryPool));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances::AccelStructInstances() {}
