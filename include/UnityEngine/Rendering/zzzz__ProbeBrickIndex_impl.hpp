#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex_Brick._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex_Brick::*)(::UnityEngine::Vector3Int, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex_Brick::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65d276c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex_Brick.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex_Brick::*)(::UnityEngine::Rendering::ProbeBrickIndex_Brick)>(
    &::UnityEngine::Rendering::ProbeBrickIndex_Brick::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65d2778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex_Brick.IntersectArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex_Brick::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::Rendering::ProbeBrickIndex_Brick::IntersectArea)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x65d27c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get(), "IntersectArea", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeBrickIndex_Brick::_ctor(::UnityEngine::Vector3Int position, int32_t subdivisionLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, subdivisionLevel);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex_Brick::Equals(::UnityEngine::Rendering::ProbeBrickIndex_Brick other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex_Brick::IntersectArea(::UnityEngine::Bounds boundInBricksToCheck) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_Brick>::get(), "IntersectArea",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, boundInBricksToCheck);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>"
constexpr UnityEngine::Rendering::ProbeBrickIndex_Brick::operator ::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*
UnityEngine::Rendering::ProbeBrickIndex_Brick::i___System__IEquatable_1___UnityEngine__Rendering__ProbeBrickIndex_Brick_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "subdivisionLevel", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_Brick::ProbeBrickIndex_Brick(::UnityEngine::Vector3Int position, int32_t subdivisionLevel) noexcept {
  this->position = position;
  this->subdivisionLevel = subdivisionLevel;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_Brick::ProbeBrickIndex_Brick() {}
// Ctor Parameters [CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numberOfChunks", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "minSubdivInCell", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minValidBrickIndexForCellAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "maxValidBrickIndexForCellAtMaxResPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "entryPositionInBricksAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo::ProbeBrickIndex_IndirectionEntryUpdateInfo(int32_t firstChunkIndex, int32_t numberOfChunks, int32_t minSubdivInCell,
                                                                                                                           ::UnityEngine::Vector3Int minValidBrickIndexForCellAtMaxRes,
                                                                                                                           ::UnityEngine::Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne,
                                                                                                                           ::UnityEngine::Vector3Int entryPositionInBricksAtMaxRes,
                                                                                                                           bool hasOnlyBiggerBricks) noexcept {
  this->firstChunkIndex = firstChunkIndex;
  this->numberOfChunks = numberOfChunks;
  this->minSubdivInCell = minSubdivInCell;
  this->minValidBrickIndexForCellAtMaxRes = minValidBrickIndexForCellAtMaxRes;
  this->maxValidBrickIndexForCellAtMaxResPlusOne = maxValidBrickIndexForCellAtMaxResPlusOne;
  this->entryPositionInBricksAtMaxRes = entryPositionInBricksAtMaxRes;
  this->hasOnlyBiggerBricks = hasOnlyBiggerBricks;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo::ProbeBrickIndex_IndirectionEntryUpdateInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo.GetNumberOfChunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::GetNumberOfChunks)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65d2960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo>::get(), "GetNumberOfChunks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::GetNumberOfChunks() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo>::get(), "GetNumberOfChunks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "entriesInfo", ty:
// "::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo,::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::ProbeBrickIndex_CellIndexUpdateInfo(
    ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*> entriesInfo) noexcept {
  this->entriesInfo = entriesInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::ProbeBrickIndex_CellIndexUpdateInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65d12c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                               "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65d12c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "set_estimatedVMemCost",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetDebugFragmentationBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex::GetDebugFragmentationBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65d12d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                               "GetDebugFragmentationBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.get_fragmentationRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex::get_fragmentationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65d12d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                               "get_fragmentationRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.set_fragmentationRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::set_fragmentationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65d12e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "set_fragmentationRate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.SizeOfPhysicalIndexFromBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::SizeOfPhysicalIndexFromBudget)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65d12e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "SizeOfPhysicalIndexFromBudget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x65d1330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetRemainingChunkCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex::GetRemainingChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65d15e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                               "GetRemainingChunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.UploadIndexData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::UploadIndexData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65d15e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                               "UploadIndexData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.UpdateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::UpdateDebugData)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x65d1664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                               "UpdateDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::Clear)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65d1528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(
    ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>)>(&::UnityEngine::Rendering::ProbeBrickIndex::GetRuntimeResources)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x65d17dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65d18d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "Cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.ComputeFragmentationRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex::ComputeFragmentationRate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65d196c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                               "ComputeFragmentationRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.MergeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::MergeIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65d19d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "MergeIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetNumberOfChunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::GetNumberOfChunks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65d19dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "GetNumberOfChunks",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.FindSlotsForEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex::*)(
    ::ByRef<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>>)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::FindSlotsForEntries)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x65d1a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "FindSlotsForEntries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ByRef<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.ReserveChunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex::*)(
    ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>, bool)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::ReserveChunks)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x65d1de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "ReserveChunks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.BrickOverlapEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::BrickOverlapEntry)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65d1f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "BrickOverlapEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.LocationToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, ::UnityEngine::Vector3Int)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::LocationToIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65d1f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "LocationToIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.MarkBrickInPhysicalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(
    ::ByRef<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::MarkBrickInPhysicalBuffer)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x65d1f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "MarkBrickInPhysicalBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.AddBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::ProbeBrickIndex::AddBricks)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x65d22bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.RemoveBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::RemoveBricks)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65d26a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "RemoveBricks", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::BitArray*& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexChunks;
}
constexpr ::System::Collections::BitArray* const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexChunks;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_IndexChunks(::System::Collections::BitArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::BitArray*& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexChunksCopyForChecks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexChunksCopyForChecks;
}
constexpr ::System::Collections::BitArray* const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexChunksCopyForChecks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexChunksCopyForChecks;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_IndexChunksCopyForChecks(::System::Collections::BitArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexChunksCopyForChecks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_ChunksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunksCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_ChunksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunksCount;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_ChunksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChunksCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_AvailableChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_AvailableChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvailableChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_AvailableChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AvailableChunkCount = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBuffer;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_PhysicalIndexBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PhysicalIndexBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBufferData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBufferData;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBufferData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBufferData;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_PhysicalIndexBufferData(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PhysicalIndexBufferData = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_DebugFragmentationBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_DebugFragmentationBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationBuffer;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_DebugFragmentationBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugFragmentationBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_DebugFragmentationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationData;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_DebugFragmentationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationData;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_DebugFragmentationData(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugFragmentationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_NeedUpdateIndexComputeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateIndexComputeBuffer;
}
constexpr bool const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_NeedUpdateIndexComputeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateIndexComputeBuffer;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_NeedUpdateIndexComputeBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedUpdateIndexComputeBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_UpdateMinIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMinIndex;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_UpdateMinIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMinIndex;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_UpdateMinIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateMinIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_UpdateMaxIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMaxIndex;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_UpdateMaxIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMaxIndex;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_UpdateMaxIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateMaxIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get__estimatedVMemCost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get__estimatedVMemCost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____estimatedVMemCost_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get__fragmentationRate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentationRate_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get__fragmentationRate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentationRate_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set__fragmentationRate_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fragmentationRate_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_CenterRS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterRS;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_CenterRS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterRS;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_CenterRS(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CenterRS = value;
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                             "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "set_estimatedVMemCost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::ProbeBrickIndex::GetDebugFragmentationBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                             "GetDebugFragmentationBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeBrickIndex::get_fragmentationRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                             "get_fragmentationRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::set_fragmentationRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "set_fragmentationRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::SizeOfPhysicalIndexFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "SizeOfPhysicalIndexFromBudget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, memoryBudget);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memoryBudget);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::GetRemainingChunkCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                             "GetRemainingChunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::UploadIndexData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                             "UploadIndexData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::UpdateDebugData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                             "UpdateDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rr);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::ComputeFragmentationRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(),
                                                                             "ComputeFragmentationRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::MergeIndex(int32_t index, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "MergeIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index, size);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::GetNumberOfChunks(int32_t brickCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "GetNumberOfChunks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, brickCount);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex::FindSlotsForEntries(
    ::ByRef<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>> entriesInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "FindSlotsForEntries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ByRef<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entriesInfo);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex::ReserveChunks(
    ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*> entriesInfo, bool ignoreErrorLog) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "ReserveChunks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entriesInfo, ignoreErrorLog);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex::BrickOverlapEntry(::UnityEngine::Vector3Int brickMin, ::UnityEngine::Vector3Int brickMax, ::UnityEngine::Vector3Int entryMin,
                                                                       ::UnityEngine::Vector3Int entryMax) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "BrickOverlapEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, brickMin, brickMax, entryMin, entryMax);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::LocationToIndex(int32_t x, int32_t y, int32_t z, ::UnityEngine::Vector3Int sizeOfValid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "LocationToIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y, z, sizeOfValid);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::MarkBrickInPhysicalBuffer(::ByRef<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo> entry, ::UnityEngine::Vector3Int brickMin,
                                                                               ::UnityEngine::Vector3Int brickMax, int32_t brickSubdivLevel, int32_t entrySubdivLevel, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "MarkBrickInPhysicalBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry, brickMin, brickMax, brickSubdivLevel, entrySubdivLevel, idx);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::AddBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo,
                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricks,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations, int32_t allocationSize,
                                                               int32_t poolWidth, int32_t poolHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellInfo, bricks, allocations, allocationSize, poolWidth, poolHeight);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::RemoveBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeBrickIndex*>::get(), "RemoveBricks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellInfo);
}
inline ::UnityEngine::Rendering::ProbeBrickIndex* UnityEngine::Rendering::ProbeBrickIndex::New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeBrickIndex*>(memoryBudget));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickIndex::ProbeBrickIndex() {}
