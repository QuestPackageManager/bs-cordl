#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SilhouettePlaneCache.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache_Slot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache_Slot::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::SilhouettePlaneCache_Slot::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x667b824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache_Slot>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SilhouettePlaneCache_Slot::_ctor(int32_t viewInstanceID, int32_t planeCount, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache_Slot>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID, planeCount, frameIndex);
}
// Ctor Parameters [CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "planeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache_Slot::SilhouettePlaneCache_Slot(bool isActive, int32_t viewInstanceID, int32_t planeCount, int32_t lastUsedFrameIndex) noexcept {
  this->isActive = isActive;
  this->viewInstanceID = viewInstanceID;
  this->planeCount = planeCount;
  this->lastUsedFrameIndex = lastUsedFrameIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache_Slot::SilhouettePlaneCache_Slot() {}
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)()>(&::UnityEngine::Rendering::SilhouettePlaneCache::Init)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x667b20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)()>(
    &::UnityEngine::Rendering::SilhouettePlaneCache::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x667b320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)(
    int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, int32_t)>(&::UnityEngine::Rendering::SilhouettePlaneCache::Update)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x667b3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.FreeUnusedSlots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::SilhouettePlaneCache::FreeUnusedSlots)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x667b838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "FreeUnusedSlots", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.GetSubArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::UnityEngine::Rendering::SilhouettePlaneCache::*)(int32_t)>(&::UnityEngine::Rendering::SilhouettePlaneCache::GetSubArray)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x667b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "GetSubArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SilhouettePlaneCache::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SilhouettePlaneCache::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SilhouettePlaneCache::Update(int32_t viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> planes, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID, planes, frameIndex);
}
inline void UnityEngine::Rendering::SilhouettePlaneCache::FreeUnusedSlots(int32_t frameIndex, int32_t maximumAge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "FreeUnusedSlots", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameIndex, maximumAge);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> UnityEngine::Rendering::SilhouettePlaneCache::GetSubArray(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SilhouettePlaneCache>::get(), "GetSubArray",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, false>(this, ___internal_method, viewInstanceID);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::SilhouettePlaneCache::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::SilhouettePlaneCache::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_SubviewIDToIndexMap", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_SlotFreeList", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Slots", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::SilhouettePlaneCache_Slot>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlaneStorage", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache::SilhouettePlaneCache(::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> m_SubviewIDToIndexMap,
                                                                               ::Unity::Collections::NativeList_1<int32_t> m_SlotFreeList,
                                                                               ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::SilhouettePlaneCache_Slot> m_Slots,
                                                                               ::Unity::Collections::NativeList_1<::UnityEngine::Plane> m_PlaneStorage) noexcept {
  this->m_SubviewIDToIndexMap = m_SubviewIDToIndexMap;
  this->m_SlotFreeList = m_SlotFreeList;
  this->m_Slots = m_Slots;
  this->m_PlaneStorage = m_PlaneStorage;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache::SilhouettePlaneCache() {}
