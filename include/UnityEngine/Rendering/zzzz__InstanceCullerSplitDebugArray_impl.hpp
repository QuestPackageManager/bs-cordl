#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerSplitDebugArray.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerSplitDebugArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerSplitDebugArray_def.hpp"
// Ctor Parameters [CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewInstanceID", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "splitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info::InstanceCullerSplitDebugArray_Info(::UnityEngine::Rendering::BatchCullingViewType viewType, int32_t viewInstanceID,
                                                                                                           int32_t splitIndex) noexcept {
  this->viewType = viewType;
  this->viewInstanceID = viewInstanceID;
  this->splitIndex = splitIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info::InstanceCullerSplitDebugArray_Info() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullerSplitDebugArray.get_Counters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::InstanceCullerSplitDebugArray::*)()>(
    &::UnityEngine::Rendering::InstanceCullerSplitDebugArray::get_Counters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65f9c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(),
                                                                               "get_Counters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullerSplitDebugArray.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCullerSplitDebugArray::*)()>(
    &::UnityEngine::Rendering::InstanceCullerSplitDebugArray::Init)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65f9c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(),
                                                                               "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullerSplitDebugArray.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCullerSplitDebugArray::*)()>(
    &::UnityEngine::Rendering::InstanceCullerSplitDebugArray::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65f9d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullerSplitDebugArray.TryAddSplits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceCullerSplitDebugArray::*)(
    ::UnityEngine::Rendering::BatchCullingViewType, int32_t, int32_t)>(&::UnityEngine::Rendering::InstanceCullerSplitDebugArray::TryAddSplits)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x65f9ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(), "TryAddSplits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingViewType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullerSplitDebugArray.AddSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCullerSplitDebugArray::*)(int32_t, ::Unity::Jobs::JobHandle)>(
    &::UnityEngine::Rendering::InstanceCullerSplitDebugArray::AddSync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65f9ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(), "AddSync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullerSplitDebugArray.MoveToDebugStatsAndClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCullerSplitDebugArray::*)(
    ::UnityEngine::Rendering::DebugRendererBatcherStats*)>(&::UnityEngine::Rendering::InstanceCullerSplitDebugArray::MoveToDebugStatsAndClear)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x65f9f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(), "MoveToDebugStatsAndClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::InstanceCullerSplitDebugArray::get_Counters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(),
                                                                             "get_Counters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCullerSplitDebugArray::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(),
                                                                             "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCullerSplitDebugArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::InstanceCullerSplitDebugArray::TryAddSplits(::UnityEngine::Rendering::BatchCullingViewType viewType, int32_t viewInstanceID, int32_t splitCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(), "TryAddSplits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingViewType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, viewType, viewInstanceID, splitCount);
}
inline void UnityEngine::Rendering::InstanceCullerSplitDebugArray::AddSync(int32_t baseIndex, ::Unity::Jobs::JobHandle jobHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(), "AddSync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseIndex, jobHandle);
}
inline void UnityEngine::Rendering::InstanceCullerSplitDebugArray::MoveToDebugStatsAndClear(::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullerSplitDebugArray>::get(), "MoveToDebugStatsAndClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugStats);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::InstanceCullerSplitDebugArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::InstanceCullerSplitDebugArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Info", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info>", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "m_Counters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CounterSync", ty:
// "::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCullerSplitDebugArray::InstanceCullerSplitDebugArray(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info> m_Info, ::Unity::Collections::NativeArray_1<int32_t> m_Counters,
    ::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle> m_CounterSync) noexcept {
  this->m_Info = m_Info;
  this->m_Counters = m_Counters;
  this->m_CounterSync = m_CounterSync;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullerSplitDebugArray::InstanceCullerSplitDebugArray() {}
