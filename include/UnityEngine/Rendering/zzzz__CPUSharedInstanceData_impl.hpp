#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallEntityIdArray_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallEntityIdArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdateFlags_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.get_handlesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_handlesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c5c698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "get_handlesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.get_instancesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_instancesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c5c6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "get_instancesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData const>)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x6c5c194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.SharedInstanceToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::SharedInstanceToIndex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c5c720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
                                                                                           { "SharedInstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.IndexToSharedInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SharedInstanceHandle (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IndexToSharedInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c5c7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "IndexToSharedInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.IsValidSharedInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidSharedInstance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6c5c82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
                                                                                           { "IsValidSharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.IsValidIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidIndex)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c5c9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.InstanceToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(
    ::by_ref<::UnityEngine::Rendering::CPUInstanceData_ReadOnly const>, ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::InstanceToIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c5caa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
            { "InstanceToIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData_ReadOnly const>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_handlesLength() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "get_handlesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_instancesLength() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "get_instancesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData const> instanceData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceData);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
                                                                                         { "SharedInstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IndexToSharedInstance(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "IndexToSharedInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SharedInstanceHandle>(*this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidSharedInstance(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
                                                                                         { "IsValidSharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::InstanceToIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData_ReadOnly const> instanceData,
                                                                                       ::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(),
          { "InstanceToIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData_ReadOnly const>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instanceData, instance);
}
// Ctor Parameters [CppParam { name: "instanceIndices", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "instances", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIDArrays", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshIDs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localAABBs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodGroupAndMasks", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshLodInfos", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameObjectLayers", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCounts", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::CPUSharedInstanceData_ReadOnly(
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> instanceIndices, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle> instances,
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> rendererGroupIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray> materialIDArrays,
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> meshIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB> localAABBs,
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags, ::Unity::Collections::NativeArray_1_ReadOnly<uint32_t> lodGroupAndMasks,
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenMeshLodInfo> meshLodInfos, ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> gameObjectLayers,
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> refCounts) noexcept {
  this->instanceIndices = instanceIndices;
  this->instances = instances;
  this->rendererGroupIDs = rendererGroupIDs;
  this->materialIDArrays = materialIDArrays;
  this->meshIDs = meshIDs;
  this->localAABBs = localAABBs;
  this->flags = flags;
  this->lodGroupAndMasks = lodGroupAndMasks;
  this->meshLodInfos = meshLodInfos;
  this->gameObjectLayers = gameObjectLayers;
  this->refCounts = refCounts;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::CPUSharedInstanceData_ReadOnly() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_instancesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::get_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c5a8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "get_instancesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.set_instancesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::set_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c5a8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "set_instancesLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_instancesCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::get_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c5a8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "get_instancesCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.set_instancesCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::set_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c5a8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "set_instancesCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_handlesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::get_handlesLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c5a8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "get_handlesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Initialize)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6c5a948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::Dispose)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6c5acd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Grow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Grow)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6c5b044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Grow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AddUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::AddUnsafe)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6c5b2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "AddUnsafe", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.SharedInstanceToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::SharedInstanceToIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c5b4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "SharedInstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IndexToSharedInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SharedInstanceHandle (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::IndexToSharedInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c5b578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "IndexToSharedInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.InstanceToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::by_ref<::UnityEngine::Rendering::CPUInstanceData const>, ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::InstanceToIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c5b584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                            { "InstanceToIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData const>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IsValidInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::IsValidInstance)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6c5b5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "IsValidInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IsFreeInstanceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::IsFreeInstanceHandle)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c5b730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "IsFreeInstanceHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IsValidIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::IsValidIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c5b858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.GetFreeInstancesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::GetFreeInstancesCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c5b920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "GetFreeInstancesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.EnsureFreeInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::EnsureFreeInstances)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c5b930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "EnsureFreeInstances", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AddNoGrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::AddNoGrow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c5b958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "AddNoGrow", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Add)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c5ba00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Remove)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6c5ba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_RendererGroupID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_RendererGroupID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c5bc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_RendererGroupID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_MeshID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_MeshID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c5bc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_MeshID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_LocalAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::AABB> (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_LocalAABB)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c5bcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_LocalAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CPUSharedInstanceFlags (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_Flags)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c5bd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_Flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_LODGroupAndMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_LODGroupAndMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c5bd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_LODGroupAndMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_GameObjectLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_GameObjectLayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c5bd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_GameObjectLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_RefCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_RefCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c5bd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_RefCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_MaterialIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::SmallEntityIdArray> (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_MaterialIDs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c5bdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "Get_MaterialIDs", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_RendererGroupID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_RendererGroupID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c5be30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                             { "Set_RendererGroupID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_MeshID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_MeshID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c5be5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                             { "Set_MeshID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_LocalAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, ::by_ref<::UnityEngine::Rendering::AABB const>)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set_LocalAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c5be88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                            { "Set_LocalAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, ::UnityEngine::Rendering::CPUSharedInstanceFlags)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set_Flags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c5becc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                            { "Set_Flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::UnityEngine::Rendering::CPUSharedInstanceFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_LODGroupAndMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, uint32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_LODGroupAndMask)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c5bef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                             { "Set_LODGroupAndMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_GameObjectLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_GameObjectLayer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c5bf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                             { "Set_GameObjectLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_RefCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_RefCount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c5bf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                             { "Set_RefCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_MaterialIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, ::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const>)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set_MaterialIDs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c5bf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
            { "Set_MaterialIDs", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, ::UnityEngine::EntityId, ::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const>, int32_t, ::by_ref<::UnityEngine::Rendering::AABB const>,
    ::UnityEngine::Rendering::TransformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags, uint32_t, ::UnityEngine::Rendering::GPUDrivenMeshLodInfo, int32_t, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6c5c00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                             { "Set",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB const>>(), ::i2c::type_of<::UnityEngine::Rendering::TransformUpdateFlags>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::InstanceFlags>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.SetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::SetDefault)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c5b984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                           { "SetDefault", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::AsReadOnly)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c5c160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "AsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_instancesLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "get_instancesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::set_instancesLength(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "set_instancesLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_instancesCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "get_instancesCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::set_instancesCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "set_instancesCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_handlesLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "get_handlesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Initialize(int32_t initCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Grow(int32_t newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Grow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::AddUnsafe(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "AddUnsafe", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "SharedInstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::CPUSharedInstanceData::IndexToSharedInstance(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "IndexToSharedInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SharedInstanceHandle>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::InstanceToIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData const> instanceData,
                                                                              ::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                          { "InstanceToIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData const>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instanceData, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData::IsValidInstance(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "IsValidInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData::IsFreeInstanceHandle(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "IsFreeInstanceHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::GetFreeInstancesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "GetFreeInstancesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::EnsureFreeInstances(int32_t instancesCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "EnsureFreeInstances", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instancesCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::AddNoGrow(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "AddNoGrow", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Add(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Remove(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "Get_RendererGroupID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_MeshID(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "Get_MeshID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline ::by_ref<::UnityEngine::Rendering::AABB> UnityEngine::Rendering::CPUSharedInstanceData::Get_LocalAABB(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "Get_LocalAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::AABB>>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::CPUSharedInstanceFlags UnityEngine::Rendering::CPUSharedInstanceData::Get_Flags(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "Get_Flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUSharedInstanceFlags>(*this, ___internal_method, instance);
}
inline uint32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_LODGroupAndMask(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "Get_LODGroupAndMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_GameObjectLayer(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "Get_GameObjectLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_RefCount(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "Get_RefCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline ::by_ref<::UnityEngine::Rendering::SmallEntityIdArray> UnityEngine::Rendering::CPUSharedInstanceData::Get_MaterialIDs(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "Get_MaterialIDs", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::SmallEntityIdArray>>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t rendererGroupID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                           { "Set_RendererGroupID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, rendererGroupID);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_MeshID(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t meshID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                           { "Set_MeshID", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, meshID);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_LocalAABB(::UnityEngine::Rendering::SharedInstanceHandle instance,
                                                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB const> localAABB) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                          { "Set_LocalAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, localAABB);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_Flags(::UnityEngine::Rendering::SharedInstanceHandle instance, ::UnityEngine::Rendering::CPUSharedInstanceFlags instanceFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                       { "Set_Flags", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::UnityEngine::Rendering::CPUSharedInstanceFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, instanceFlags);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_LODGroupAndMask(::UnityEngine::Rendering::SharedInstanceHandle instance, uint32_t lodGroupAndMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                           { "Set_LODGroupAndMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, lodGroupAndMask);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_GameObjectLayer(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t gameObjectLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                           { "Set_GameObjectLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, gameObjectLayer);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_RefCount(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t refCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                           { "Set_RefCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, refCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_MaterialIDs(::UnityEngine::Rendering::SharedInstanceHandle instance,
                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const> materialIDs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
          { "Set_MaterialIDs", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, materialIDs);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set(::UnityEngine::Rendering::SharedInstanceHandle instance, ::UnityEngine::EntityId rendererGroupID,
                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const> materialIDs, int32_t meshID,
                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB const> localAABB,
                                                               ::UnityEngine::Rendering::TransformUpdateFlags transformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags instanceFlags,
                                                               uint32_t lodGroupAndMask, ::UnityEngine::Rendering::GPUDrivenMeshLodInfo meshLodInfo, int32_t gameObjectLayer, int32_t refCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                           { "Set",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SmallEntityIdArray const>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB const>>(), ::i2c::type_of<::UnityEngine::Rendering::TransformUpdateFlags>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::InstanceFlags>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, rendererGroupID, materialIDs, meshID, localAABB, transformUpdateFlags, instanceFlags, lodGroupAndMask,
                                                   meshLodInfo, gameObjectLayer, refCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::SetDefault(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                                                                                         { "SetDefault", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly UnityEngine::Rendering::CPUSharedInstanceData::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::CPUSharedInstanceData::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::CPUSharedInstanceData::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceIndices",
// ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererGroupIDs", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIDArrays", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallEntityIdArray>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshIDs", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localAABBs", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodGroupAndMasks", ty:
// "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshLodInfos", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameObjectLayers", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData::CPUSharedInstanceData(
    ::Unity::Collections::NativeArray_1<int32_t> m_StructData, ::Unity::Collections::NativeList_1<int32_t> m_InstanceIndices,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle> instances, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> rendererGroupIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallEntityIdArray> materialIDArrays, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> meshIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB> localAABBs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags,
    ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenMeshLodInfo> meshLodInfos,
    ::Unity::Collections::NativeArray_1<int32_t> gameObjectLayers, ::Unity::Collections::NativeArray_1<int32_t> refCounts) noexcept {
  this->m_StructData = m_StructData;
  this->m_InstanceIndices = m_InstanceIndices;
  this->instances = instances;
  this->rendererGroupIDs = rendererGroupIDs;
  this->materialIDArrays = materialIDArrays;
  this->meshIDs = meshIDs;
  this->localAABBs = localAABBs;
  this->flags = flags;
  this->lodGroupAndMasks = lodGroupAndMasks;
  this->meshLodInfos = meshLodInfos;
  this->gameObjectLayers = gameObjectLayers;
  this->refCounts = refCounts;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData::CPUSharedInstanceData() {}
