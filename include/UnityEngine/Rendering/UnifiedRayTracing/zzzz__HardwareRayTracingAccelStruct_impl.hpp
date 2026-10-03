#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/HardwareRayTracingAccelStruct.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__HardwareRayTracingAccelStruct_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelerationStructureOptions_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__MeshInstanceDesc_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ReferenceCounter_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.get_accelStruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RayTracingAccelerationStructure* (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::get_accelStruct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0c694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "get_accelStruct", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*, ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e0c69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e0c7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::AddInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e0c834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                             { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.RemoveInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::RemoveInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e0c9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.ClearInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::ClearInstances)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e0ca18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "ClearInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.UpdateInstanceTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::UpdateInstanceTransform)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e0ca7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                             { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.UpdateInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::UpdateInstanceID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e0cab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                           { "UpdateInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.UpdateInstanceMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::UpdateInstanceMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e0cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                           { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::Build)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e0cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                             { "Build", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.GetBuildScratchBufferRequiredSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::GetBuildScratchBufferRequiredSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "GetBuildScratchBufferRequiredSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct.CheckInstanceHandleIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::CheckInstanceHandleIsValid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e0cb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                           { "CheckInstanceHandleIsValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure*& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get__accelStruct_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelStruct_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure* const&
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get__accelStruct_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelStruct_k__BackingField;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_set__accelStruct_k__BackingField(::UnityEngine::Rendering::RayTracingAccelerationStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accelStruct_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get_m_BuildFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BuildFlags;
}
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags const&
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get_m_BuildFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BuildFlags;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_set_m_BuildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BuildFlags = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>*&
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get_m_Meshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Meshes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>* const&
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get_m_Meshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Meshes;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_set_m_Meshes(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Meshes = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get_m_Counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Counter;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* const& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_get_m_Counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Counter;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::__cordl_internal_set_m_Counter(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Counter = value;
}
inline ::UnityEngine::Rendering::RayTracingAccelerationStructure* UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::get_accelStruct() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "get_accelStruct", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                            ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, counter);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc meshInstance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                         { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meshInstance);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::RemoveInstance(int32_t instanceHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::ClearInstances() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "ClearInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::UpdateInstanceTransform(int32_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                           { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, localToWorldMatrix);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::UpdateInstanceID(int32_t instanceHandle, uint32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                         { "UpdateInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, instanceID);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::UpdateInstanceMask(int32_t instanceHandle, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                         { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, mask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::Build(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                           { "Build", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::GetBuildScratchBufferRequiredSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(), { "GetBuildScratchBufferRequiredSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::CheckInstanceHandleIsValid(int32_t instanceHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(),
                                                                                         { "CheckInstanceHandleIsValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                   ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*>(options, counter));
}
/// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
constexpr UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingAccelStruct() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct::HardwareRayTracingAccelStruct() {}
