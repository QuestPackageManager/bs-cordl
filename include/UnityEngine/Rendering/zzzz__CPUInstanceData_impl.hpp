#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUInstanceData.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_handlesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x666e290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(),
                                                                               "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.get_instancesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_instancesLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x666e2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(),
                                                                               "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(::ByRef<::UnityEngine::Rendering::CPUInstanceData>)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x666df50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.InstanceToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::InstanceToIndex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x666e31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.IndexToInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::IndexToInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x666e3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "IndexToInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.IsValidInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidInstance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x666e428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "IsValidInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData_ReadOnly.IsValidIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData_ReadOnly::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidIndex)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x666e59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "IsValidIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_handlesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(),
                                                                             "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData_ReadOnly::get_instancesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(),
                                                                             "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData_ReadOnly::_ctor(::ByRef<::UnityEngine::Rendering::CPUInstanceData> instanceData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceData);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData_ReadOnly::InstanceToIndex(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::CPUInstanceData_ReadOnly::IndexToInstance(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "IndexToInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "IsValidInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData_ReadOnly::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>::get(), "IsValidIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData::get_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666cae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                               "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.set_instancesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::set_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666caf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "set_instancesLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.get_instancesCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData::get_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666cafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                               "get_instancesCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.set_instancesCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::set_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666cb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "set_instancesCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.get_handlesLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData::get_handlesLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x666cb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                               "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::Initialize)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x666cb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)()>(&::UnityEngine::Rendering::CPUInstanceData::Dispose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x666ced0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Grow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUInstanceData::Grow)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x666cfec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Grow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.AddUnsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::AddUnsafe)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x666d218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "AddUnsafe", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.InstanceToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::InstanceToIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x666d408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IndexToInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::IndexToInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666d4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IndexToInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IsValidInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::IsValidInstance)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x666d4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IsValidInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IsFreeInstanceHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::IsFreeInstanceHandle)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x666d60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IsFreeInstanceHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.IsValidIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::IsValidIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x666d734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IsValidIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.GetFreeInstancesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData::GetFreeInstancesCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666d7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                               "GetFreeInstancesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.EnsureFreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::EnsureFreeInstances)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x666d80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "EnsureFreeInstances",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.AddNoGrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::AddNoGrow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x666d834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "AddNoGrow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Add)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x666d900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Remove)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x666d954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(
    ::UnityEngine::Rendering::InstanceHandle, ::UnityEngine::Rendering::SharedInstanceHandle, bool, ::ByRef<::UnityEngine::Rendering::AABB>, int32_t, bool, bool, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x666db48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.SetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::SetDefault)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x666d860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "SetDefault", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_SharedInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SharedInstanceHandle (::UnityEngine::Rendering::CPUInstanceData::*)(
    ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUInstanceData::Get_SharedInstance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x666dc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_SharedInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_LocalToWorldIsFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_LocalToWorldIsFlipped)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x666dc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_LocalToWorldIsFlipped", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_WorldAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::AABB (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUInstanceData::Get_WorldAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x666dc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_WorldAABB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_TetrahedronCacheIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_TetrahedronCacheIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x666dca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_TetrahedronCacheIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_WorldBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::AABB> (::UnityEngine::Rendering::CPUInstanceData::*)(
    ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUInstanceData::Get_WorldBounds)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x666dcc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_WorldBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_MovedInCurrentFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_MovedInCurrentFrame)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x666dd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_MovedInCurrentFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_MovedInPreviousFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_MovedInPreviousFrame)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x666dd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_MovedInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Get_VisibleInPreviousFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::CPUInstanceData::Get_VisibleInPreviousFrame)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x666dd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_VisibleInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_SharedInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(
    ::UnityEngine::Rendering::InstanceHandle, ::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUInstanceData::Set_SharedInstance)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x666ddb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_SharedInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_LocalToWorldIsFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_LocalToWorldIsFlipped)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x666dddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_LocalToWorldIsFlipped", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_WorldAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(
    ::UnityEngine::Rendering::InstanceHandle, ::ByRef<::UnityEngine::Rendering::AABB>)>(&::UnityEngine::Rendering::CPUInstanceData::Set_WorldAABB)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x666de10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_WorldAABB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_TetrahedronCacheIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, int32_t)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_TetrahedronCacheIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x666de54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_TetrahedronCacheIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_MovedInCurrentFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_MovedInCurrentFrame)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x666de80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_MovedInCurrentFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_MovedInPreviousFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_MovedInPreviousFrame)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x666deb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_MovedInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.Set_VisibleInPreviousFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CPUInstanceData::*)(::UnityEngine::Rendering::InstanceHandle, bool)>(
    &::UnityEngine::Rendering::CPUInstanceData::Set_VisibleInPreviousFrame)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x666dee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_VisibleInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUInstanceData.AsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CPUInstanceData_ReadOnly (::UnityEngine::Rendering::CPUInstanceData::*)()>(
    &::UnityEngine::Rendering::CPUInstanceData::AsReadOnly)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x666df1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "AsReadOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUInstanceData::get_instancesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                             "get_instancesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::set_instancesLength(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "set_instancesLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::get_instancesCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                             "get_instancesCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::set_instancesCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "set_instancesCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::get_handlesLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                             "get_handlesLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::Initialize(int32_t initCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::CPUInstanceData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::Grow(int32_t newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Grow",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::CPUInstanceData::AddUnsafe(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "AddUnsafe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::InstanceToIndex(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "InstanceToIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::CPUInstanceData::IndexToInstance(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IndexToInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CPUInstanceData::IsValidInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IsValidInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::IsFreeInstanceHandle(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IsFreeInstanceHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::IsValidIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "IsValidIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::GetFreeInstancesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(),
                                                                             "GetFreeInstancesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUInstanceData::EnsureFreeInstances(int32_t instancesCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "EnsureFreeInstances",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instancesCount);
}
inline void UnityEngine::Rendering::CPUInstanceData::AddNoGrow(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "AddNoGrow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Add(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Remove(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set(::UnityEngine::Rendering::InstanceHandle instance, ::UnityEngine::Rendering::SharedInstanceHandle sharedInstance, bool localToWorldIsFlipped,
                                                         ::ByRef<::UnityEngine::Rendering::AABB> worldAABB, int32_t tetrahedronCacheIndex, bool movedInCurrentFrame, bool movedInPreviousFrame,
                                                         bool visibleInPreviousFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, sharedInstance, localToWorldIsFlipped, worldAABB, tetrahedronCacheIndex, movedInCurrentFrame,
                                                          movedInPreviousFrame, visibleInPreviousFrame);
}
inline void UnityEngine::Rendering::CPUInstanceData::SetDefault(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "SetDefault", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::CPUInstanceData::Get_SharedInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_SharedInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SharedInstanceHandle, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_LocalToWorldIsFlipped(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_LocalToWorldIsFlipped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::AABB UnityEngine::Rendering::CPUInstanceData::Get_WorldAABB(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_WorldAABB", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AABB, false>(this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUInstanceData::Get_TetrahedronCacheIndex(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_TetrahedronCacheIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instance);
}
inline ::ByRef<::UnityEngine::Rendering::AABB> UnityEngine::Rendering::CPUInstanceData::Get_WorldBounds(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_WorldBounds", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::AABB>, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_MovedInCurrentFrame(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_MovedInCurrentFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_MovedInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_MovedInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline bool UnityEngine::Rendering::CPUInstanceData::Get_VisibleInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Get_VisibleInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_SharedInstance(::UnityEngine::Rendering::InstanceHandle instance, ::UnityEngine::Rendering::SharedInstanceHandle sharedInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_SharedInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, sharedInstance);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_LocalToWorldIsFlipped(::UnityEngine::Rendering::InstanceHandle instance, bool isFlipped) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_LocalToWorldIsFlipped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, isFlipped);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_WorldAABB(::UnityEngine::Rendering::InstanceHandle instance, ::ByRef<::UnityEngine::Rendering::AABB> worldBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_WorldAABB", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, worldBounds);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_TetrahedronCacheIndex(::UnityEngine::Rendering::InstanceHandle instance, int32_t tetrahedronCacheIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_TetrahedronCacheIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, tetrahedronCacheIndex);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_MovedInCurrentFrame(::UnityEngine::Rendering::InstanceHandle instance, bool movedInCurrentFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_MovedInCurrentFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, movedInCurrentFrame);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_MovedInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance, bool movedInPreviousFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_MovedInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, movedInPreviousFrame);
}
inline void UnityEngine::Rendering::CPUInstanceData::Set_VisibleInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance, bool visibleInPreviousFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "Set_VisibleInPreviousFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, visibleInPreviousFrame);
}
inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly UnityEngine::Rendering::CPUInstanceData::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CPUInstanceData>::get(), "AsReadOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUInstanceData_ReadOnly, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::CPUInstanceData::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::CPUInstanceData::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
