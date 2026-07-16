#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommandArray_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommand_impl.hpp"
#include "Unity/Mathematics/zzzz__uint4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingProcessSettings_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSet_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeStreamableAsset_def.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_2_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version::ProbeVolumeBakingSet_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version::ProbeVolumeBakingSet_Version() {}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version UnityEngine::Rendering::ProbeVolumeBakingSet_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version UnityEngine::Rendering::ProbeVolumeBakingSet_Version::RemoveProbeVolumeSceneData{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)(::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x678d8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::IsValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x678e074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo.HasValidData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)(::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::HasValidData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6790ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                                                                           { "HasValidData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo.ComputeHasValidData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)(::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::ComputeHasValidData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6790a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                                                                           { "ComputeHasValidData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6790ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_sceneHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneHash;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_sceneHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneHash;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_set_sceneHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneHash = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_cellDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDataAsset;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_cellDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_set_cellDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellDataAsset = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_cellOptionalDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellOptionalDataAsset;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_cellOptionalDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellOptionalDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_set_cellOptionalDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellOptionalDataAsset = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_cellProbeOcclusionDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellProbeOcclusionDataAsset;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_cellProbeOcclusionDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellProbeOcclusionDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_set_cellProbeOcclusionDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellProbeOcclusionDataAsset = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_m_HasValidData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasValidData;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_get_m_HasValidData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasValidData;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::__cordl_internal_set_m_HasValidData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasValidData = value;
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::Initialize(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shBands);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::HasValidData(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                                                                         { "HasValidData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shBands);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::ComputeHasValidData(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                                                                         { "ComputeHasValidData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shBands);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::ProbeVolumeBakingSet_PerScenarioDataInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::*)(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::Add)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6790ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::Add(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, o);
}
// Ctor Parameters [CppParam { name: "bricksCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "chunksCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::ProbeVolumeBakingSet_CellCounts(int32_t bricksCount, int32_t chunksCount) noexcept {
  this->bricksCount = bricksCount;
  this->chunksCount = chunksCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::ProbeVolumeBakingSet_CellCounts() {}
// Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "cellList", ty: "::System::Collections::Generic::List_1<int32_t>*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList::ProbeVolumeBakingSet_SerializedPerSceneCellList(
    ::StringW sceneGUID, ::System::Collections::Generic::List_1<int32_t>* cellList) noexcept {
  this->sceneGUID = sceneGUID;
  this->cellList = cellList;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList::ProbeVolumeBakingSet_SerializedPerSceneCellList() {}
// Ctor Parameters [CppParam { name: "mask", ty: "::UnityEngine::RenderingLayerMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask::ProbeVolumeBakingSet_ProbeLayerMask(::UnityEngine::RenderingLayerMask mask, ::StringW name) noexcept {
  this->mask = mask;
  this->name = name;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask::ProbeVolumeBakingSet_ProbeLayerMask() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_hasDilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_hasDilation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x678c610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_hasDilation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_sceneGUIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_sceneGUIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678c630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_sceneGUIDs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_lightingScenarios
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_lightingScenarios)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678c638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_lightingScenarios", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_bakedSkyOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyOcclusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x678c640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_bakedSkyOcclusion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.set_bakedSkyOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(bool)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyOcclusion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678c650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "set_bakedSkyOcclusion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_bakedSkyShadingDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyShadingDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x678c668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_bakedSkyShadingDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.set_bakedSkyShadingDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(bool)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyShadingDirection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678c678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "set_bakedSkyShadingDirection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_otherScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_otherScenario)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678c690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_otherScenario", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_scenarioBlendingFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_scenarioBlendingFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678c698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_scenarioBlendingFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_cellSizeInBricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInBricks)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x678c6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_cellSizeInBricks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_maxSubdivision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_maxSubdivision)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678c704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_maxSubdivision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_minBrickSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_minBrickSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x678c718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_minBrickSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_cellSizeInMeters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInMeters)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x678c754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_cellSizeInMeters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ComputeRegionMasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeRegionMasks)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x678c7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ComputeRegionMasks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetCellSizeInBricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellSizeInBricks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x678c6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetCellSizeInBricks", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678c710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetMaxSubdivision", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetMinBrickSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetMinBrickSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x678c738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetMinBrickSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::OnValidate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x678c898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x678ca20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.Migrate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::Migrate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x678ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "Migrate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ComputeHasValidSharedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasValidSharedData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x678cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ComputeHasValidSharedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.HasValidSharedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::HasValidSharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678cc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "HasValidSharedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.CheckCompatibleCellLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::CheckCompatibleCellLayout)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x678cc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "CheckCompatibleCellLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ComputeHasSupportData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasSupportData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x678cb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ComputeHasSupportData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.HasSupportData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::HasSupportData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678cd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "HasSupportData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.HasBakedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::HasBakedData)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x678cd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "HasBakedData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x678ce94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x678d278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(bool)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::Initialize)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x678d460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "Initialize", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::Cleanup)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x678dc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.SetActiveScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW, bool)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::SetActiveScenario)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x678e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "SetActiveScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.BlendLightingScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW, float_t)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::BlendLightingScenario)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x678d934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                           { "BlendLightingScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetBakingHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetBakingHashCode)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x678e38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetBakingHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.AlignUp16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::AlignUp16)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x678e4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "AlignUp16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.RequestScratchBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::RequestScratchBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x678e4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "RequestScratchBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.PruneCellIndexList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexList)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x678e5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                            { "PruneCellIndexList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.PruneCellIndexListForScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexListForScenario)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x678e7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                         { "PruneCellIndexListForScenario",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetSceneCellIndexList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::GetSceneCellIndexList)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x678e9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetSceneCellIndexList", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveAllCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveAllCellData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x678d904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ResolveAllCellData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveCellData)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x678f310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                           { "ResolveCellData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveSharedCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::System::Collections::Generic::List_1<int32_t>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>, ::Unity::Collections::NativeArray_1<uint8_t>,
    ::Unity::Collections::NativeArray_1<uint8_t>)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x678f7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                             { "ResolveSharedCellData",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveSharedCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x678ea5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                           { "ResolveSharedCellData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolvePerScenarioCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x678ec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                             { "ResolvePerScenarioCellData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolvePerScenarioCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>, ::StringW,
    ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x678feb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                            { "ResolvePerScenarioCellData",
                              {},
                              { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                                ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ReleaseCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ReleaseCell)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6790440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ReleaseCell", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetCellDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellDesc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67904dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetCellDesc", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellData* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6790558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetCellData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetChunkGPUMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::GetChunkGPUMemory)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67905d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                           { "GetChunkGPUMemory", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::_ctor)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x6790610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_singleSceneMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleSceneMode;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_singleSceneMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleSceneMode;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_singleSceneMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singleSceneMode = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_dialogNoProbeVolumeInSetShown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dialogNoProbeVolumeInSetShown;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_dialogNoProbeVolumeInSetShown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dialogNoProbeVolumeInSetShown;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_dialogNoProbeVolumeInSetShown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dialogNoProbeVolumeInSetShown = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_settings(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_SceneGUIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SceneGUIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_SceneGUIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SceneGUIDs;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_SceneGUIDs(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SceneGUIDs = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_obsoleteScenesToNotBake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteScenesToNotBake;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_obsoleteScenesToNotBake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteScenesToNotBake;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_obsoleteScenesToNotBake(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obsoleteScenesToNotBake = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_LightingScenarios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightingScenarios;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_LightingScenarios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightingScenarios;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_LightingScenarios(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightingScenarios = value;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>*&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellDescs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDescs;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>* const&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellDescs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDescs;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_cellDescs(
    ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellDescs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>*&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellDataMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDataMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>* const&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellDataMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDataMap;
}
constexpr void
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_cellDataMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellDataMap = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_TotalIndexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TotalIndexList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_TotalIndexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TotalIndexList;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_TotalIndexList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TotalIndexList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>*&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_SerializedPerSceneCellList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SerializedPerSceneCellList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>* const&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_SerializedPerSceneCellList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SerializedPerSceneCellList;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_SerializedPerSceneCellList(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SerializedPerSceneCellList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_perSceneCellLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perSceneCellLists;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* const&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_perSceneCellLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perSceneCellLists;
}
constexpr void
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_perSceneCellLists(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___perSceneCellLists = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellSharedDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSharedDataAsset;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellSharedDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSharedDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_cellSharedDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellSharedDataAsset = value;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>*&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_scenarios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenarios;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>* const&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_scenarios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenarios;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_scenarios(
    ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenarios = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellBricksDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellBricksDataAsset;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellBricksDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellBricksDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_cellBricksDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellBricksDataAsset = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellSupportDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSupportDataAsset;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_cellSupportDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSupportDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_cellSupportDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellSupportDataAsset = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_chunkSizeInBricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSizeInBricks;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_chunkSizeInBricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSizeInBricks;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_chunkSizeInBricks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkSizeInBricks = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_maxCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_maxCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCellPosition;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_maxCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCellPosition = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_minCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_minCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCellPosition;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_minCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minCellPosition = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_globalBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_globalBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalBounds;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_globalBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___globalBounds = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedSimplificationLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedSimplificationLevels;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedSimplificationLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedSimplificationLevels;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedSimplificationLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedSimplificationLevels = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedMinDistanceBetweenProbes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedMinDistanceBetweenProbes;
}
constexpr float_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedMinDistanceBetweenProbes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedMinDistanceBetweenProbes;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedMinDistanceBetweenProbes(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedMinDistanceBetweenProbes = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedProbeOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedProbeOcclusion;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedProbeOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedProbeOcclusion;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedProbeOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedProbeOcclusion = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedSkyOcclusionValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedSkyOcclusionValue;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedSkyOcclusionValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedSkyOcclusionValue;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedSkyOcclusionValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedSkyOcclusionValue = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedSkyShadingDirectionValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedSkyShadingDirectionValue;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedSkyShadingDirectionValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedSkyShadingDirectionValue;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedSkyShadingDirectionValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedSkyShadingDirectionValue = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedProbeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedProbeOffset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedProbeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedProbeOffset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedProbeOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedProbeOffset = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedMaskCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedMaskCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedMaskCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedMaskCount;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedMaskCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedMaskCount = value;
}
constexpr ::Unity::Mathematics::uint4& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedLayerMasks;
}
constexpr ::Unity::Mathematics::uint4 const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_bakedLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedLayerMasks;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_bakedLayerMasks(::Unity::Mathematics::uint4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakedLayerMasks = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_maxSHChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSHChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_maxSHChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSHChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_maxSHChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxSHChunkCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_L0ChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L0ChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_L0ChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L0ChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_L0ChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L0ChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_L1ChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L1ChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_L1ChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L1ChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_L1ChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L1ChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_L2TextureChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L2TextureChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_L2TextureChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L2TextureChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_L2TextureChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L2TextureChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_ProbeOcclusionChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProbeOcclusionChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_ProbeOcclusionChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProbeOcclusionChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_ProbeOcclusionChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ProbeOcclusionChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedValidityMaskChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedValidityMaskChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedValidityMaskChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedValidityMaskChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_sharedValidityMaskChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedValidityMaskChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedSkyOcclusionL0L1ChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedSkyOcclusionL0L1ChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedSkyOcclusionL0L1ChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedSkyOcclusionL0L1ChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_sharedSkyOcclusionL0L1ChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedSkyOcclusionL0L1ChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedSkyShadingDirectionIndicesChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedSkyShadingDirectionIndicesChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedSkyShadingDirectionIndicesChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedSkyShadingDirectionIndicesChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_sharedSkyShadingDirectionIndicesChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedSkyShadingDirectionIndicesChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedDataChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedDataChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_sharedDataChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedDataChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_sharedDataChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedDataChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportPositionChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportPositionChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportPositionChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportPositionChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_supportPositionChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportPositionChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportValidityChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportValidityChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportValidityChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportValidityChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_supportValidityChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportValidityChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportTouchupChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportTouchupChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportTouchupChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportTouchupChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_supportTouchupChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportTouchupChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportLayerMaskChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLayerMaskChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportLayerMaskChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLayerMaskChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_supportLayerMaskChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportLayerMaskChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportOffsetsChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportOffsetsChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportOffsetsChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportOffsetsChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_supportOffsetsChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportOffsetsChunkSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportDataChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportDataChunkSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_supportDataChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportDataChunkSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_supportDataChunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportDataChunkSize = value;
}
constexpr ::StringW& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_lightingScenario() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightingScenario;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_lightingScenario() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightingScenario;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_lightingScenario(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightingScenario = value;
}
constexpr ::StringW& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_OtherScenario() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OtherScenario;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_OtherScenario() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OtherScenario;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_OtherScenario(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OtherScenario = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ScenarioBlendingFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScenarioBlendingFactor;
}
constexpr float_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ScenarioBlendingFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScenarioBlendingFactor;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_ScenarioBlendingFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScenarioBlendingFactor = value;
}
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ReadCommandArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandArray;
}
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ReadCommandArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandArray;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_ReadCommandArray(::Unity::IO::LowLevel::Unsafe::ReadCommandArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadCommandArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand>& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ReadCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ReadCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandBuffer;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_ReadCommandBuffer(::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadCommandBuffer = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ReadOperationScratchBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOperationScratchBuffers;
}
constexpr ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>* const&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_ReadOperationScratchBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOperationScratchBuffers;
}
constexpr void
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_ReadOperationScratchBuffers(::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadOperationScratchBuffers = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_PrunedIndexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrunedIndexList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_PrunedIndexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrunedIndexList;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_PrunedIndexList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrunedIndexList = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_PrunedScenarioIndexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrunedScenarioIndexList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_PrunedScenarioIndexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrunedScenarioIndexList;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_PrunedScenarioIndexList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrunedScenarioIndexList = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_version(::UnityEngine::Rendering::ProbeVolumeBakingSet_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_freezePlacement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezePlacement;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_freezePlacement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezePlacement;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_freezePlacement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___freezePlacement = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_probeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeOffset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_probeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeOffset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_probeOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeOffset = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_simplificationLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simplificationLevels;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_simplificationLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simplificationLevels;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_simplificationLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simplificationLevels = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_minDistanceBetweenProbes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDistanceBetweenProbes;
}
constexpr float_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_minDistanceBetweenProbes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDistanceBetweenProbes;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_minDistanceBetweenProbes(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minDistanceBetweenProbes = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_renderersLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderersLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_renderersLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderersLayerMask;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_renderersLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderersLayerMask = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_minRendererVolumeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minRendererVolumeSize;
}
constexpr float_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_minRendererVolumeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minRendererVolumeSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_minRendererVolumeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minRendererVolumeSize = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusion;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusion;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_skyOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusion = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionBakingSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionBakingSamples;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionBakingSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionBakingSamples;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_skyOcclusionBakingSamples(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionBakingSamples = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionBakingBounces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionBakingBounces;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionBakingBounces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionBakingBounces;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_skyOcclusionBakingBounces(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionBakingBounces = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionAverageAlbedo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionAverageAlbedo;
}
constexpr float_t const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionAverageAlbedo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionAverageAlbedo;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_skyOcclusionAverageAlbedo(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionAverageAlbedo = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionBackFaceCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionBackFaceCulling;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionBackFaceCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionBackFaceCulling;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_skyOcclusionBackFaceCulling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionBackFaceCulling = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionShadingDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionShadingDirection;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_skyOcclusionShadingDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionShadingDirection;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_skyOcclusionShadingDirection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionShadingDirection = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_useRenderingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRenderingLayers;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_useRenderingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRenderingLayers;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_useRenderingLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useRenderingLayers = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_renderingLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask> const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_renderingLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_renderingLayerMasks(::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingLayerMasks = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_HasSupportData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasSupportData;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_HasSupportData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasSupportData;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_HasSupportData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasSupportData = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_SharedDataIsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedDataIsValid;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_SharedDataIsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedDataIsValid;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_SharedDataIsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SharedDataIsValid = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_UseStreamingAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStreamingAsset;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_m_UseStreamingAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStreamingAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_m_UseStreamingAsset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseStreamingAsset = value;
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::get_hasDilation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_hasDilation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* UnityEngine::Rendering::ProbeVolumeBakingSet::get_sceneGUIDs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_sceneGUIDs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* UnityEngine::Rendering::ProbeVolumeBakingSet::get_lightingScenarios() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_lightingScenarios", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyOcclusion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_bakedSkyOcclusion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyOcclusion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "set_bakedSkyOcclusion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyShadingDirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_bakedSkyShadingDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyShadingDirection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "set_bakedSkyShadingDirection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::ProbeVolumeBakingSet::get_otherScenario() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_otherScenario", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_scenarioBlendingFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_scenarioBlendingFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInBricks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_cellSizeInBricks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_maxSubdivision() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_maxSubdivision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_minBrickSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_minBrickSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInMeters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "get_cellSizeInMeters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeRegionMasks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ComputeRegionMasks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellSizeInBricks(int32_t simplificationLevels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetCellSizeInBricks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, simplificationLevels);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetMaxSubdivision(int32_t simplificationLevels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetMaxSubdivision", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, simplificationLevels);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetMinBrickSize(float_t minDistanceBetweenProbes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetMinBrickSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, minDistanceBetweenProbes);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::Migrate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "Migrate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasValidSharedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ComputeHasValidSharedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::HasValidSharedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "HasValidSharedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::CheckCompatibleCellLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "CheckCompatibleCellLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasSupportData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ComputeHasSupportData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::HasSupportData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "HasSupportData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::HasBakedData(::StringW scenario) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "HasBakedData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scenario);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::Initialize(bool useStreamingAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "Initialize", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useStreamingAsset);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::SetActiveScenario(::StringW scenario, bool verbose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "SetActiveScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenario, verbose);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::BlendLightingScenario(::StringW otherScenario, float_t blendingFactor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                         { "BlendLightingScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherScenario, blendingFactor);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetBakingHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetBakingHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::AlignUp16(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "AlignUp16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, count);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Rendering::ProbeVolumeBakingSet::GetSubArray(::Unity::Collections::NativeArray_1<uint8_t> input, int32_t count, ::by_ref<int32_t> offset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
          { "GetSubArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method, input, count, offset);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Rendering::ProbeVolumeBakingSet::RequestScratchBuffer(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "RequestScratchBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method, size);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Rendering::ProbeVolumeBakingSet::LoadStreambleAssetData(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* asset,
                                                                                                                   ::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                              { "LoadStreambleAssetData",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method, asset, cellIndices);
}
template <typename T> inline void UnityEngine::Rendering::ProbeVolumeBakingSet::ReleaseStreamableAssetData(::Unity::Collections::NativeArray_1<T> buffer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                           { "ReleaseStreamableAssetData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexList(::System::Collections::Generic::List_1<int32_t>* cellIndices,
                                                                             ::System::Collections::Generic::List_1<int32_t>* prunedIndexList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                          { "PruneCellIndexList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellIndices, prunedIndexList);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexListForScenario(::System::Collections::Generic::List_1<int32_t>* cellIndices,
                                                                                        ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* scenarioData,
                                                                                        ::System::Collections::Generic::List_1<int32_t>* prunedIndexList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                       { "PruneCellIndexListForScenario",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellIndices, scenarioData, prunedIndexList);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::Rendering::ProbeVolumeBakingSet::GetSceneCellIndexList(::StringW sceneGUID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetSceneCellIndexList", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, sceneGUID);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveAllCellData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ResolveAllCellData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                         { "ResolveCellData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cellIndices);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices,
                                                                                ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricksData,
                                                                                ::Unity::Collections::NativeArray_1<uint8_t> cellSharedData,
                                                                                ::Unity::Collections::NativeArray_1<uint8_t> cellSupportData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                           { "ResolveSharedCellData",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellIndices, bricksData, cellSharedData, cellSupportData);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                         { "ResolveSharedCellData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cellIndices);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                           { "ResolvePerScenarioCellData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cellIndices);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData(::Unity::Collections::NativeArray_1<uint8_t> cellData,
                                                                                     ::Unity::Collections::NativeArray_1<uint8_t> cellOptionalData,
                                                                                     ::Unity::Collections::NativeArray_1<uint8_t> cellProbeOcclusionData, ::StringW scenario,
                                                                                     ::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                          { "ResolvePerScenarioCellData",
                            {},
                            { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                              ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cellData, cellOptionalData, cellProbeOcclusionData, scenario, cellIndices);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::ReleaseCell(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "ReleaseCell", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellIndex);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellDesc(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetCellDesc", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>(this, ___internal_method, cellIndex);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellData(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { "GetCellData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(this, ___internal_method, cellIndex);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetChunkGPUMemory(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(),
                                                                                         { "GetChunkGPUMemory", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, shBands);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSet* UnityEngine::Rendering::ProbeVolumeBakingSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeBakingSet*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::ProbeVolumeBakingSet::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::ProbeVolumeBakingSet::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet::ProbeVolumeBakingSet() {}
