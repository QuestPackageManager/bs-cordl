#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventDebugArray.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info.HasVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info::*)()>(
    &::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info::HasVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6662580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>::get(), "HasVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info::HasVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>::get(), "HasVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventType", ty: "::UnityEngine::Rendering::InstanceOcclusionEventType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info::InstanceOcclusionEventDebugArray_Info(int32_t viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType eventType,
                                                                                                                 int32_t occluderVersion, int32_t subviewMask,
                                                                                                                 ::UnityEngine::Rendering::OcclusionTest occlusionTest) noexcept {
  this->viewInstanceID = viewInstanceID;
  this->eventType = eventType;
  this->occluderVersion = occluderVersion;
  this->subviewMask = subviewMask;
  this->occlusionTest = occlusionTest;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info::InstanceOcclusionEventDebugArray_Info() {}
// Ctor Parameters [CppParam { name: "info", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "readback", ty: "::UnityEngine::Rendering::AsyncGPUReadbackRequest", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request::InstanceOcclusionEventDebugArray_Request(
    ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> info, ::UnityEngine::Rendering::AsyncGPUReadbackRequest readback) noexcept {
  this->info = info;
  this->readback = readback;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request::InstanceOcclusionEventDebugArray_Request() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.get_CounterBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)()>(
    &::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::get_CounterBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6661d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(), "get_CounterBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)()>(
    &::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Init)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6661d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(), "Init",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)()>(
    &::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Dispose)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6661e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.TryAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)(
    int32_t, ::UnityEngine::Rendering::InstanceOcclusionEventType, int32_t, int32_t, ::UnityEngine::Rendering::OcclusionTest)>(&::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::TryAdd)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6661f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(), "TryAdd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceOcclusionEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionTest>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.MoveToDebugStatsAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)(
    ::UnityEngine::Rendering::DebugRendererBatcherStats*)>(&::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::MoveToDebugStatsAndClear)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x66620bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(), "MoveToDebugStatsAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::InstanceOcclusionEventDebugArray::get_CounterBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(),
                                                                             "get_CounterBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(),
                                                                             "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::InstanceOcclusionEventDebugArray::TryAdd(int32_t viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType eventType, int32_t occluderVersion,
                                                                                int32_t subviewMask, ::UnityEngine::Rendering::OcclusionTest occlusionTest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(), "TryAdd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceOcclusionEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionTest>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, viewInstanceID, eventType, occluderVersion, subviewMask, occlusionTest);
}
inline void UnityEngine::Rendering::InstanceOcclusionEventDebugArray::MoveToDebugStatsAndClear(::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>::get(), "MoveToDebugStatsAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugStats);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::InstanceOcclusionEventDebugArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::InstanceOcclusionEventDebugArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_CounterBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingInfo", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Requests", ty:
// "::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LatestInfo", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LatestCounters",
// ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasLatest", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::InstanceOcclusionEventDebugArray(
    ::UnityEngine::GraphicsBuffer* m_CounterBuffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> m_PendingInfo,
    ::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request> m_Requests,
    ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> m_LatestInfo, ::Unity::Collections::NativeArray_1<int32_t> m_LatestCounters,
    bool m_HasLatest) noexcept {
  this->m_CounterBuffer = m_CounterBuffer;
  this->m_PendingInfo = m_PendingInfo;
  this->m_Requests = m_Requests;
  this->m_LatestInfo = m_LatestInfo;
  this->m_LatestCounters = m_LatestCounters;
  this->m_HasLatest = m_HasLatest;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::InstanceOcclusionEventDebugArray() {}
