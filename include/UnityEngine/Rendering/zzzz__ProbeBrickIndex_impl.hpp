#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeBrickIndex.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex_Brick::*)(::UnityEngine::Vector3Int, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex_Brick::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67898d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex_Brick.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex_Brick::*)(::UnityEngine::Rendering::ProbeBrickIndex_Brick)>(
    &::UnityEngine::Rendering::ProbeBrickIndex_Brick::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67898e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex_Brick.IntersectArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex_Brick::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::Rendering::ProbeBrickIndex_Brick::IntersectArea)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6789928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>(), { "IntersectArea", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeBrickIndex_Brick::_ctor(::UnityEngine::Vector3Int position, int32_t subdivisionLevel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, subdivisionLevel);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex_Brick::Equals(::UnityEngine::Rendering::ProbeBrickIndex_Brick other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex_Brick::IntersectArea(::UnityEngine::Bounds boundInBricksToCheck) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_Brick>(), { "IntersectArea", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, boundInBricksToCheck);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>"
constexpr UnityEngine::Rendering::ProbeBrickIndex_Brick::operator ::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*
UnityEngine::Rendering::ProbeBrickIndex_Brick::i___System__IEquatable_1___UnityEngine__Rendering__ProbeBrickIndex_Brick_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::GetNumberOfChunks)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6789ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo>(), { "GetNumberOfChunks", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::GetNumberOfChunks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo>(), { "GetNumberOfChunks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "entriesInfo", ty: "::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::ProbeBrickIndex_CellIndexUpdateInfo(
    ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo> entriesInfo) noexcept {
  this->entriesInfo = entriesInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo::ProbeBrickIndex_CellIndexUpdateInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6788428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "get_estimatedVMemCost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(int32_t)>(&::UnityEngine::Rendering::ProbeBrickIndex::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6788430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "set_estimatedVMemCost", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetDebugFragmentationBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Rendering::ProbeBrickIndex::GetDebugFragmentationBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6788438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "GetDebugFragmentationBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.get_fragmentationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::get_fragmentationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6788440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "get_fragmentationRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.set_fragmentationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(float_t)>(&::UnityEngine::Rendering::ProbeBrickIndex::set_fragmentationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6788448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "set_fragmentationRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.SizeOfPhysicalIndexFromBudget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::SizeOfPhysicalIndexFromBudget)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6788450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                             { "SizeOfPhysicalIndexFromBudget", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6788498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetRemainingChunkCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::GetRemainingChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6788748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "GetRemainingChunkCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.UploadIndexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::UploadIndexData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6788750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "UploadIndexData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.UpdateDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::UpdateDebugData)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x67887cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "UpdateDebugData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::Clear)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6788690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::GetRuntimeResources)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6788944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                             { "GetRuntimeResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6788a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.ComputeFragmentationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)()>(&::UnityEngine::Rendering::ProbeBrickIndex::ComputeFragmentationRate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6788ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "ComputeFragmentationRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.MergeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::ProbeBrickIndex::MergeIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6788b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "MergeIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.GetNumberOfChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeBrickIndex::*)(int32_t)>(&::UnityEngine::Rendering::ProbeBrickIndex::GetNumberOfChunks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6788b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "GetNumberOfChunks", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.FindSlotsForEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex::*)(::by_ref<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::FindSlotsForEntries)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x6788bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                { "FindSlotsForEntries", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.ReserveChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeBrickIndex::*)(::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>, bool)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::ReserveChunks)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6788f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                         { "ReserveChunks", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.BrickOverlapEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::BrickOverlapEntry)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6789094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                                                           { "BrickOverlapEntry",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.LocationToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, ::UnityEngine::Vector3Int)>(&::UnityEngine::Rendering::ProbeBrickIndex::LocationToIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67890e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                         { "LocationToIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.MarkBrickInPhysicalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(::by_ref<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>,
                                                                                                           ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::MarkBrickInPhysicalBuffer)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x67890f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                { "MarkBrickInPhysicalBuffer",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>(), ::i2c::type_of<::UnityEngine::Vector3Int>(),
                                                    ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.AddBricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::ProbeBrickIndex::AddBricks)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x6789424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                             { "AddBricks",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeBrickIndex.RemoveBricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeBrickIndex::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*)>(
    &::UnityEngine::Rendering::ProbeBrickIndex::RemoveBricks)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x678980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                             { "RemoveBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>() } })));
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
  this->___m_IndexChunks = value;
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
  this->___m_IndexChunksCopyForChecks = value;
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
  this->___m_PhysicalIndexBuffer = value;
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
  this->___m_DebugFragmentationBuffer = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_DebugFragmentationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationData;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_get_m_DebugFragmentationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationData;
}
constexpr void UnityEngine::Rendering::ProbeBrickIndex::__cordl_internal_set_m_DebugFragmentationData(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugFragmentationData = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "get_estimatedVMemCost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "set_estimatedVMemCost", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::ProbeBrickIndex::GetDebugFragmentationBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "GetDebugFragmentationBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeBrickIndex::get_fragmentationRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "get_fragmentationRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::set_fragmentationRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "set_fragmentationRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::SizeOfPhysicalIndexFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                           { "SizeOfPhysicalIndexFromBudget", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, memoryBudget);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memoryBudget);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::GetRemainingChunkCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "GetRemainingChunkCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::UploadIndexData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "UploadIndexData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::UpdateDebugData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "UpdateDebugData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::GetRuntimeResources(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                           { "GetRuntimeResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rr);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::ComputeFragmentationRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "ComputeFragmentationRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::MergeIndex(int32_t index, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "MergeIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, size);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::GetNumberOfChunks(int32_t brickCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(), { "GetNumberOfChunks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, brickCount);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex::FindSlotsForEntries(::by_ref<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>> entriesInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                              { "FindSlotsForEntries", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entriesInfo);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex::ReserveChunks(::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo> entriesInfo, bool ignoreErrorLog) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                              { "ReserveChunks", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entriesInfo, ignoreErrorLog);
}
inline bool UnityEngine::Rendering::ProbeBrickIndex::BrickOverlapEntry(::UnityEngine::Vector3Int brickMin, ::UnityEngine::Vector3Int brickMax, ::UnityEngine::Vector3Int entryMin,
                                                                       ::UnityEngine::Vector3Int entryMax) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                                                         { "BrickOverlapEntry",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, brickMin, brickMax, entryMin, entryMax);
}
inline int32_t UnityEngine::Rendering::ProbeBrickIndex::LocationToIndex(int32_t x, int32_t y, int32_t z, ::UnityEngine::Vector3Int sizeOfValid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                       { "LocationToIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y, z, sizeOfValid);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::MarkBrickInPhysicalBuffer(::by_ref<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo> entry, ::UnityEngine::Vector3Int brickMin,
                                                                               ::UnityEngine::Vector3Int brickMax, int32_t brickSubdivLevel, int32_t entrySubdivLevel, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                              { "MarkBrickInPhysicalBuffer",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>>(), ::i2c::type_of<::UnityEngine::Vector3Int>(),
                                                  ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry, brickMin, brickMax, brickSubdivLevel, entrySubdivLevel, idx);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::AddBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo,
                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricks,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations, int32_t allocationSize,
                                                               int32_t poolWidth, int32_t poolHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                           { "AddBricks",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellInfo, bricks, allocations, allocationSize, poolWidth, poolHeight);
}
inline void UnityEngine::Rendering::ProbeBrickIndex::RemoveBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeBrickIndex*>(),
                                                                                         { "RemoveBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellInfo);
}
inline ::UnityEngine::Rendering::ProbeBrickIndex* UnityEngine::Rendering::ProbeBrickIndex::New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeBrickIndex*>(memoryBudget));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeBrickIndex::ProbeBrickIndex() {}
