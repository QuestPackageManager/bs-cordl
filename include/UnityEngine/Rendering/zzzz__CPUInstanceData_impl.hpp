#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CPUInstanceData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_impl.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.get_handlesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)()>(&::UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_handlesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68253f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "get_handlesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.get_instancesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)()>(&::UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_instancesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x682543c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "get_instancesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(::by_ref<::UnityEngine::Rendering::CPUInstanceData>)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x68250b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.InstanceToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::InstanceToIndex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6825484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(),
                                                                                           { "InstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.IndexToInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::IndexToInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6825520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "IndexToInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.IsValidInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidInstance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6825590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(),
                                                                                           { "IsValidInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.IsValidIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidIndex)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6825704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_handlesLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "get_handlesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_instancesLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "get_instancesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData_ReadOnly::_ctor(::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceData);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData_ReadOnly::InstanceToIndex(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(),
                                                                                         { "InstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::CPUInstanceData_ReadOnly::IndexToInstance(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "IndexToInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle>(*this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(),
                                                                                         { "IsValidInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "instanceIndices", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstances", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldIsFlippedBits", ty:
// "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldAABBs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tetrahedronCacheIndices", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "movedInCurrentFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "movedInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "visibleInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "editorData", ty:
// "::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CPUInstanceData_ReadOnly::CPUInstanceData_ReadOnly(
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> instanceIndices, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> instances,
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle> sharedInstances, ::UnityEngine::Rendering::ParallelBitArray localToWorldIsFlippedBits,
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB> worldAABBs, ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> tetrahedronCacheIndices,
    ::UnityEngine::Rendering::ParallelBitArray movedInCurrentFrameBits, ::UnityEngine::Rendering::ParallelBitArray movedInPreviousFrameBits,
    ::UnityEngine::Rendering::ParallelBitArray visibleInPreviousFrameBits, ::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly editorData) noexcept {
  this->instanceIndices = instanceIndices;
  this->instances = instances;
  this->sharedInstances = sharedInstances;
  this->localToWorldIsFlippedBits = localToWorldIsFlippedBits;
  this->worldAABBs = worldAABBs;
  this->tetrahedronCacheIndices = tetrahedronCacheIndices;
  this->movedInCurrentFrameBits = movedInCurrentFrameBits;
  this->movedInPreviousFrameBits = movedInPreviousFrameBits;
  this->visibleInPreviousFrameBits = visibleInPreviousFrameBits;
  this->editorData = editorData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUInstanceData_ReadOnly::CPUInstanceData_ReadOnly() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.get_instancesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(&::UnityEngine::Rendering::CPUInstanceData::get_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6823c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "get_instancesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.set_instancesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData::set_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6823c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "set_instancesLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.get_instancesCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(&::UnityEngine::Rendering::CPUInstanceData::get_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6823c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "get_instancesCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.set_instancesCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData::set_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6823c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "set_instancesCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.get_handlesLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(&::UnityEngine::Rendering::CPUInstanceData::get_handlesLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6823c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "get_handlesLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData::Initialize)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x6823ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)()>(&::UnityEngine::Rendering::CPUInstanceData::Dispose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6824038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Grow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData::Grow)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6824154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Grow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.AddUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::AddUnsafe)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6824380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "AddUnsafe", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.InstanceToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::InstanceToIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6824570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "InstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IndexToInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::IndexToInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6824610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "IndexToInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IsValidInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::IsValidInstance)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x682461c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "IsValidInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IsFreeInstanceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::IsFreeInstanceHandle)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6824774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                           { "IsFreeInstanceHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IsValidIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData::IsValidIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x682489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.GetFreeInstancesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(&::UnityEngine::Rendering::CPUInstanceData::GetFreeInstancesCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6824964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "GetFreeInstancesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.EnsureFreeInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData::EnsureFreeInstances)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6824974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "EnsureFreeInstances", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.AddNoGrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::AddNoGrow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x682499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "AddNoGrow", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Add)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6824a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Remove)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6824abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, ::UnityEngine::Rendering::SharedInstanceHandle,
                                                                                                           bool, ::by_ref<::UnityEngine::Rendering::AABB>, int32_t, bool, bool, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6824cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                            { "Set",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.SetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::SetDefault)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68249c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "SetDefault", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_SharedInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SharedInstanceHandle (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_SharedInstance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6824d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Get_SharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_LocalToWorldIsFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_LocalToWorldIsFlipped)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6824da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                           { "Get_LocalToWorldIsFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_WorldAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AABB (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_WorldAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6824dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Get_WorldAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_TetrahedronCacheIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_TetrahedronCacheIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6824e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                           { "Get_TetrahedronCacheIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_WorldBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::AABB> (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_WorldBounds)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6824e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Get_WorldBounds", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_MovedInCurrentFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_MovedInCurrentFrame)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6824eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                           { "Get_MovedInCurrentFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_MovedInPreviousFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_MovedInPreviousFrame)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6824ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                           { "Get_MovedInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_VisibleInPreviousFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_VisibleInPreviousFrame)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6824ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                           { "Get_VisibleInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_SharedInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, ::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_SharedInstance)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6824f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                            { "Set_SharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_LocalToWorldIsFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_LocalToWorldIsFlipped)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6824f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                             { "Set_LocalToWorldIsFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_WorldAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, ::by_ref<::UnityEngine::Rendering::AABB>)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_WorldAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6824f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                { "Set_WorldAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_TetrahedronCacheIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_TetrahedronCacheIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6824fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                             { "Set_TetrahedronCacheIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_MovedInCurrentFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_MovedInCurrentFrame)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6824fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                             { "Set_MovedInCurrentFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_MovedInPreviousFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_MovedInPreviousFrame)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x682501c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                             { "Set_MovedInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_VisibleInPreviousFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_VisibleInPreviousFrame)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6825050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                             { "Set_VisibleInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.AsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CPUInstanceData_ReadOnly (::UnityEngine::Rendering::CPUInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData::AsReadOnly)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6825084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "AsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUInstanceData::get_instancesLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "get_instancesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::set_instancesLength(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "set_instancesLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::get_instancesCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "get_instancesCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::set_instancesCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "set_instancesCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::get_handlesLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "get_handlesLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::Initialize(int32_t initCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::CPUInstanceData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::Grow(int32_t newCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Grow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::CPUInstanceData::AddUnsafe(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "AddUnsafe", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::InstanceToIndex(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "InstanceToIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::CPUInstanceData::IndexToInstance(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "IndexToInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle>(*this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CPUInstanceData::IsValidInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "IsValidInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::IsFreeInstanceHandle(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "IsFreeInstanceHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "IsValidIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::GetFreeInstancesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "GetFreeInstancesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::EnsureFreeInstances(int32_t instancesCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "EnsureFreeInstances", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instancesCount);
}
inline void UnityEngine::Rendering::CPUInstanceData::AddNoGrow(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "AddNoGrow", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Add(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Remove(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set(::UnityEngine::Rendering::InstanceHandle instance, ::UnityEngine::Rendering::SharedInstanceHandle sharedInstance, bool localToWorldIsFlipped,
                                                         ::by_ref<::UnityEngine::Rendering::AABB> worldAABB, int32_t tetrahedronCacheIndex, bool movedInCurrentFrame, bool movedInPreviousFrame,
                                                         bool visibleInPreviousFrame) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                          { "Set",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, sharedInstance, localToWorldIsFlipped, worldAABB, tetrahedronCacheIndex, movedInCurrentFrame,
                                                   movedInPreviousFrame, visibleInPreviousFrame);
}
inline void UnityEngine::Rendering::CPUInstanceData::SetDefault(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "SetDefault", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::CPUInstanceData::Get_SharedInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Get_SharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SharedInstanceHandle>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_LocalToWorldIsFlipped(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                         { "Get_LocalToWorldIsFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::AABB UnityEngine::Rendering::CPUInstanceData::Get_WorldAABB(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Get_WorldAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AABB>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::Get_TetrahedronCacheIndex(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                         { "Get_TetrahedronCacheIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline ::by_ref<::UnityEngine::Rendering::AABB> UnityEngine::Rendering::CPUInstanceData::Get_WorldBounds(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "Get_WorldBounds", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::AABB>>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_MovedInCurrentFrame(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                         { "Get_MovedInCurrentFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_MovedInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                         { "Get_MovedInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_VisibleInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                                                         { "Get_VisibleInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_SharedInstance(::UnityEngine::Rendering::InstanceHandle instance, ::UnityEngine::Rendering::SharedInstanceHandle sharedInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                          { "Set_SharedInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, sharedInstance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_LocalToWorldIsFlipped(::UnityEngine::Rendering::InstanceHandle instance, bool isFlipped) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                           { "Set_LocalToWorldIsFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, isFlipped);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_WorldAABB(::UnityEngine::Rendering::InstanceHandle instance, ::by_ref<::UnityEngine::Rendering::AABB> worldBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                              { "Set_WorldAABB", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, worldBounds);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_TetrahedronCacheIndex(::UnityEngine::Rendering::InstanceHandle instance, int32_t tetrahedronCacheIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                           { "Set_TetrahedronCacheIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, tetrahedronCacheIndex);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_MovedInCurrentFrame(::UnityEngine::Rendering::InstanceHandle instance, bool movedInCurrentFrame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                           { "Set_MovedInCurrentFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, movedInCurrentFrame);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_MovedInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance, bool movedInPreviousFrame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                           { "Set_MovedInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, movedInPreviousFrame);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_VisibleInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance, bool visibleInPreviousFrame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(),
                                                           { "Set_VisibleInPreviousFrame", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, visibleInPreviousFrame);
}
inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly UnityEngine::Rendering::CPUInstanceData::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CPUInstanceData>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::CPUInstanceData::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::CPUInstanceData::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceIndices", ty:
// "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldIsFlippedBits", ty:
// "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldAABBs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "tetrahedronCacheIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "movedInCurrentFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "movedInPreviousFrameBits", ty:
// "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "editorData", ty: "::UnityEngine::Rendering::EditorInstanceDataArrays", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CPUInstanceData::CPUInstanceData(
    ::Unity::Collections::NativeArray_1<int32_t> m_StructData, ::Unity::Collections::NativeList_1<int32_t> m_InstanceIndices,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle> sharedInstances,
    ::UnityEngine::Rendering::ParallelBitArray localToWorldIsFlippedBits, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB> worldAABBs,
    ::Unity::Collections::NativeArray_1<int32_t> tetrahedronCacheIndices, ::UnityEngine::Rendering::ParallelBitArray movedInCurrentFrameBits,
    ::UnityEngine::Rendering::ParallelBitArray movedInPreviousFrameBits, ::UnityEngine::Rendering::ParallelBitArray visibleInPreviousFrameBits,
    ::UnityEngine::Rendering::EditorInstanceDataArrays editorData) noexcept {
  this->m_StructData = m_StructData;
  this->m_InstanceIndices = m_InstanceIndices;
  this->instances = instances;
  this->sharedInstances = sharedInstances;
  this->localToWorldIsFlippedBits = localToWorldIsFlippedBits;
  this->worldAABBs = worldAABBs;
  this->tetrahedronCacheIndices = tetrahedronCacheIndices;
  this->movedInCurrentFrameBits = movedInCurrentFrameBits;
  this->movedInPreviousFrameBits = movedInPreviousFrameBits;
  this->visibleInPreviousFrameBits = visibleInPreviousFrameBits;
  this->editorData = editorData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUInstanceData::CPUInstanceData() {}
