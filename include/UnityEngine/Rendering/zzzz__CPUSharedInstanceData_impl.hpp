#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdateFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.get_handlesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_handlesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66087ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(),
                                                                               "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.get_instancesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_instancesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6608830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(),
                                                                               "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(
    ::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData>)>(&::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6608394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.SharedInstanceToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::SharedInstanceToIndex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6608874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "SharedInstanceToIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.IndexToSharedInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SharedInstanceHandle (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(
    int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IndexToSharedInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6608910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "IndexToSharedInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.IsValidSharedInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidSharedInstance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6608980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "IsValidSharedInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.IsValidIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidIndex)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6608af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "IsValidIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly.InstanceToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::*)(
    ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>, ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::InstanceToIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6608bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_handlesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(),
                                                                             "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::get_instancesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(),
                                                                             "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::_ctor(::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData> instanceData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceData);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "SharedInstanceToIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IndexToSharedInstance(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "IndexToSharedInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SharedInstanceHandle, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidSharedInstance(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "IsValidSharedInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "IsValidIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::InstanceToIndex(::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData,
                                                                                       ::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instanceData, instance);
}
// Ctor Parameters [CppParam { name: "instanceIndices", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupIDs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIDArrays", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshIDs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localAABBs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupAndMasks", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameObjectLayers", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "refCounts", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::CPUSharedInstanceData_ReadOnly(
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> instanceIndices, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle> instances,
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays,
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> meshIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB> localAABBs,
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags, ::Unity::Collections::NativeArray_1_ReadOnly<uint32_t> lodGroupAndMasks,
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> gameObjectLayers, ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> refCounts) noexcept {
  this->instanceIndices = instanceIndices;
  this->instances = instances;
  this->rendererGroupIDs = rendererGroupIDs;
  this->materialIDArrays = materialIDArrays;
  this->meshIDs = meshIDs;
  this->localAABBs = localAABBs;
  this->flags = flags;
  this->lodGroupAndMasks = lodGroupAndMasks;
  this->gameObjectLayers = gameObjectLayers;
  this->refCounts = refCounts;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly::CPUSharedInstanceData_ReadOnly() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_instancesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::get_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6606b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                               "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.set_instancesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::set_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6606b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "set_instancesLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_instancesCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::get_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6606b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                               "get_instancesCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.set_instancesCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::set_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6606b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "set_instancesCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_handlesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::get_handlesLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6606b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                               "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Initialize)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6606ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Initialize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Dispose)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6606ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Grow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Grow)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6607208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Grow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AddUnsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::AddUnsafe)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x660746c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "AddUnsafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.SharedInstanceToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::SharedInstanceToIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x660765c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "SharedInstanceToIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IndexToSharedInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SharedInstanceHandle (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::IndexToSharedInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66076fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IndexToSharedInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.InstanceToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::ByRef<::UnityEngine::Rendering::CPUInstanceData>, ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::InstanceToIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6607708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IsValidInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::IsValidInstance)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x660775c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IsValidInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IsFreeInstanceHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::IsFreeInstanceHandle)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66078b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IsFreeInstanceHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.IsValidIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::IsValidIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66079dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IsValidIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.GetFreeInstancesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::GetFreeInstancesCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6607aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                               "GetFreeInstancesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.EnsureFreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::EnsureFreeInstances)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6607ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "EnsureFreeInstances",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AddNoGrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::AddNoGrow)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6607adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "AddNoGrow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Add)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6607be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Remove)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6607ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_RendererGroupID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_RendererGroupID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6607ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_RendererGroupID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_MeshID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_MeshID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6607ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_MeshID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_LocalAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::AABB> (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_LocalAABB)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6607ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_LocalAABB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CPUSharedInstanceFlags (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_Flags)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6607f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_Flags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_LODGroupAndMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_LODGroupAndMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6607f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_LODGroupAndMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_GameObjectLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_GameObjectLayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6607fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_GameObjectLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_RefCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Get_RefCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6607fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_RefCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_MaterialIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::SmallIntegerArray> (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_MaterialIDs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6607fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_MaterialIDs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_RendererGroupID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_RendererGroupID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x660805c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_RendererGroupID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_MeshID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_MeshID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6608088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_MeshID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_LocalAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, ::ByRef<::UnityEngine::Rendering::AABB>)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set_LocalAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66080b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_LocalAABB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, ::UnityEngine::Rendering::CPUSharedInstanceFlags)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set_Flags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66080f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_Flags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CPUSharedInstanceFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_LODGroupAndMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, uint32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_LODGroupAndMask)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6608124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_LODGroupAndMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_GameObjectLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_GameObjectLayer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6608150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_GameObjectLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_RefCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::Set_RefCount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x660817c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_RefCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_MaterialIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, ::ByRef<::UnityEngine::Rendering::SmallIntegerArray>)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set_MaterialIDs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66081a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_MaterialIDs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SmallIntegerArray>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(
    ::UnityEngine::Rendering::SharedInstanceHandle, int32_t, ::ByRef<::UnityEngine::Rendering::SmallIntegerArray>, int32_t, ::ByRef<::UnityEngine::Rendering::AABB>,
    ::UnityEngine::Rendering::TransformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags, uint32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6608238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SmallIntegerArray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TransformUpdateFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.SetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::SetDefault)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6607b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "SetDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUSharedInstanceData::AsReadOnly)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6608360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                               "AsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_instancesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                             "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::set_instancesLength(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "set_instancesLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_instancesCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                             "get_instancesCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::set_instancesCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "set_instancesCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_handlesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                             "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Initialize(int32_t initCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Grow(int32_t newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Grow",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::AddUnsafe(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "AddUnsafe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "SharedInstanceToIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::CPUSharedInstanceData::IndexToSharedInstance(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IndexToSharedInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SharedInstanceHandle, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::InstanceToIndex(::ByRef<::UnityEngine::Rendering::CPUInstanceData> instanceData, ::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instanceData, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData::IsValidInstance(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IsValidInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData::IsFreeInstanceHandle(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IsFreeInstanceHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUSharedInstanceData::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "IsValidIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::GetFreeInstancesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                             "GetFreeInstancesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::EnsureFreeInstances(int32_t instancesCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "EnsureFreeInstances",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instancesCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::AddNoGrow(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "AddNoGrow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Add(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Remove(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_RendererGroupID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_MeshID(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_MeshID", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline ::ByRef<::UnityEngine::Rendering::AABB> UnityEngine::Rendering::CPUSharedInstanceData::Get_LocalAABB(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_LocalAABB", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::AABB>, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::CPUSharedInstanceFlags UnityEngine::Rendering::CPUSharedInstanceData::Get_Flags(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_Flags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUSharedInstanceFlags, false>(this, ___internal_method, instance);
}
inline uint32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_LODGroupAndMask(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_LODGroupAndMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_GameObjectLayer(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_GameObjectLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_RefCount(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_RefCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline ::ByRef<::UnityEngine::Rendering::SmallIntegerArray> UnityEngine::Rendering::CPUSharedInstanceData::Get_MaterialIDs(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Get_MaterialIDs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::SmallIntegerArray>, false>(this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t rendererGroupID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_RendererGroupID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, rendererGroupID);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_MeshID(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t meshID) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_MeshID", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, meshID);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_LocalAABB(::UnityEngine::Rendering::SharedInstanceHandle instance, ::ByRef<::UnityEngine::Rendering::AABB> localAABB) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_LocalAABB", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, localAABB);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_Flags(::UnityEngine::Rendering::SharedInstanceHandle instance, ::UnityEngine::Rendering::CPUSharedInstanceFlags instanceFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_Flags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CPUSharedInstanceFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, instanceFlags);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_LODGroupAndMask(::UnityEngine::Rendering::SharedInstanceHandle instance, uint32_t lodGroupAndMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_LODGroupAndMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, lodGroupAndMask);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_GameObjectLayer(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t gameObjectLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_GameObjectLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, gameObjectLayer);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_RefCount(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t refCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_RefCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, refCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_MaterialIDs(::UnityEngine::Rendering::SharedInstanceHandle instance, ::ByRef<::UnityEngine::Rendering::SmallIntegerArray> materialIDs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set_MaterialIDs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SmallIntegerArray>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, materialIDs);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t rendererGroupID,
                                                               ::ByRef<::UnityEngine::Rendering::SmallIntegerArray> materialIDs, int32_t meshID, ::ByRef<::UnityEngine::Rendering::AABB> localAABB,
                                                               ::UnityEngine::Rendering::TransformUpdateFlags transformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags instanceFlags,
                                                               uint32_t lodGroupAndMask, int32_t gameObjectLayer, int32_t refCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SmallIntegerArray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TransformUpdateFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, rendererGroupID, materialIDs, meshID, localAABB, transformUpdateFlags, instanceFlags, lodGroupAndMask,
                                                          gameObjectLayer, refCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::SetDefault(::UnityEngine::Rendering::SharedInstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(), "SetDefault", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly UnityEngine::Rendering::CPUSharedInstanceData::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUSharedInstanceData>::get(),
                                                                             "AsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::CPUSharedInstanceData::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::CPUSharedInstanceData::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceIndices", ty:
// "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupIDs", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIDArrays", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshIDs", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localAABBs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameObjectLayers", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "refCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData::CPUSharedInstanceData(
    ::Unity::Collections::NativeArray_1<int32_t> m_StructData, ::Unity::Collections::NativeList_1<int32_t> m_InstanceIndices,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle> instances, ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays, ::Unity::Collections::NativeArray_1<int32_t> meshIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB> localAABBs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags,
    ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks, ::Unity::Collections::NativeArray_1<int32_t> gameObjectLayers, ::Unity::Collections::NativeArray_1<int32_t> refCounts) noexcept {
  this->m_StructData = m_StructData;
  this->m_InstanceIndices = m_InstanceIndices;
  this->instances = instances;
  this->rendererGroupIDs = rendererGroupIDs;
  this->materialIDArrays = materialIDArrays;
  this->meshIDs = meshIDs;
  this->localAABBs = localAABBs;
  this->flags = flags;
  this->lodGroupAndMasks = lodGroupAndMasks;
  this->gameObjectLayers = gameObjectLayers;
  this->refCounts = refCounts;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData::CPUSharedInstanceData() {}
