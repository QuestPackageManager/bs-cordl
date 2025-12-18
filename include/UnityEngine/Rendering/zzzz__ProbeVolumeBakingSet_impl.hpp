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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)(
    ::UnityEngine::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65dbf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::IsValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65dc724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo.HasValidData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)(
    ::UnityEngine::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::HasValidData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65df188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "HasValidData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo.ComputeHasValidData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)(
    ::UnityEngine::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::ComputeHasValidData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65df130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "ComputeHasValidData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65df190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellDataAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellOptionalDataAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellProbeOcclusionDataAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shBands);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::HasValidData(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "HasValidData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, shBands);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::ComputeHasValidData(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), "ComputeHasValidData",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, shBands);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo::ProbeVolumeBakingSet_PerScenarioDataInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::*)(
    ::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::Add)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65df194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts::Add(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_hasDilation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65dacc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_hasDilation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_sceneGUIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_sceneGUIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65dace0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_sceneGUIDs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_lightingScenarios
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_lightingScenarios)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65dace8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_lightingScenarios", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_bakedSkyOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyOcclusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65dacf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_bakedSkyOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.set_bakedSkyOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(bool)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyOcclusion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65dad00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "set_bakedSkyOcclusion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_bakedSkyShadingDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyShadingDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65dad18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_bakedSkyShadingDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.set_bakedSkyShadingDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(bool)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyShadingDirection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65dad28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "set_bakedSkyShadingDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_otherScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_otherScenario)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65dad40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_otherScenario", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_scenarioBlendingFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_scenarioBlendingFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65dad48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_scenarioBlendingFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_cellSizeInBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInBricks)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65dad50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_cellSizeInBricks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_maxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_maxSubdivision)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65dadb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_maxSubdivision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_minBrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_minBrickSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65dadc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_minBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.get_cellSizeInMeters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInMeters)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65dae04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "get_cellSizeInMeters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ComputeRegionMasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint4 (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeRegionMasks)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x65dae68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "ComputeRegionMasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetCellSizeInBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellSizeInBricks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65dad84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetCellSizeInBricks",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65dadc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetMaxSubdivision",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetMinBrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetMinBrickSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65dade8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetMinBrickSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::OnValidate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x65daf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65db0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.Migrate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::Migrate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65db120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "Migrate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ComputeHasValidSharedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasValidSharedData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65db204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "ComputeHasValidSharedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.HasValidSharedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::HasValidSharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65db32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "HasValidSharedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.CheckCompatibleCellLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::CheckCompatibleCellLayout)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65db334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "CheckCompatibleCellLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ComputeHasSupportData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasSupportData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65db1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "ComputeHasSupportData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.HasSupportData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::HasSupportData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65db3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "HasSupportData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.HasBakedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::HasBakedData)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x65db3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "HasBakedData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x65db544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                    "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x65db928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(bool)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::Initialize)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x65dbb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "Initialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::Cleanup)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x65dc328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.SetActiveScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW, bool)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::SetActiveScenario)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x65dc74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "SetActiveScenario", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.BlendLightingScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW, float_t)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::BlendLightingScenario)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x65dbfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "BlendLightingScenario", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetBakingHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::GetBakingHashCode)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x65dca3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "GetBakingHashCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.AlignUp16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::AlignUp16)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65dcb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "AlignUp16",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.RequestScratchBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::RequestScratchBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65dcba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "RequestScratchBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.PruneCellIndexList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexList)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x65dcca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "PruneCellIndexList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.PruneCellIndexListForScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexListForScenario)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x65dce8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "PruneCellIndexListForScenario", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetSceneCellIndexList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::GetSceneCellIndexList)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65dd090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetSceneCellIndexList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveAllCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveAllCellData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65dbfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                               "ResolveAllCellData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveCellData)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x65dd9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolveCellData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveSharedCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::System::Collections::Generic::List_1<int32_t>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>, ::Unity::Collections::NativeArray_1<uint8_t>,
    ::Unity::Collections::NativeArray_1<uint8_t>)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x65dde60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolveSharedCellData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolveSharedCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x65dd10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolveSharedCellData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolvePerScenarioCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x65dd340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolvePerScenarioCellData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ResolvePerScenarioCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(
    ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>, ::StringW,
    ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x65de568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolvePerScenarioCellData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.ReleaseCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::ReleaseCell)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65deaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ReleaseCell",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetCellDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellDesc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65deb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetCellDesc",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellData* (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65dec08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetCellData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet.GetChunkGPUMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)(::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeVolumeBakingSet::GetChunkGPUMemory)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65dec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetChunkGPUMemory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingSet::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingSet::_ctor)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x65decc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SceneGUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obsoleteScenesToNotBake)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightingScenarios)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellDescs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellDataMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TotalIndexList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SerializedPerSceneCellList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___perSceneCellLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellSharedDataAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenarios)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellBricksDataAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellSupportDataAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightingScenario)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OtherScenario)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReadOperationScratchBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrunedIndexList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrunedScenarioIndexList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*>&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_renderingLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*> const&
UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_get_renderingLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr void UnityEngine::Rendering::ProbeVolumeBakingSet::__cordl_internal_set_renderingLayerMasks(
    ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderingLayerMasks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_hasDilation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* UnityEngine::Rendering::ProbeVolumeBakingSet::get_sceneGUIDs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_sceneGUIDs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* UnityEngine::Rendering::ProbeVolumeBakingSet::get_lightingScenarios() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_lightingScenarios", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyOcclusion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_bakedSkyOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyOcclusion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "set_bakedSkyOcclusion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::get_bakedSkyShadingDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_bakedSkyShadingDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::set_bakedSkyShadingDirection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "set_bakedSkyShadingDirection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::ProbeVolumeBakingSet::get_otherScenario() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_otherScenario", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_scenarioBlendingFactor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_scenarioBlendingFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInBricks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_cellSizeInBricks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_maxSubdivision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_maxSubdivision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_minBrickSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_minBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::get_cellSizeInMeters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "get_cellSizeInMeters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeRegionMasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "ComputeRegionMasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellSizeInBricks(int32_t simplificationLevels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetCellSizeInBricks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, simplificationLevels);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetMaxSubdivision(int32_t simplificationLevels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetMaxSubdivision",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, simplificationLevels);
}
inline float_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetMinBrickSize(float_t minDistanceBetweenProbes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetMinBrickSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, minDistanceBetweenProbes);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::Migrate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "Migrate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasValidSharedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "ComputeHasValidSharedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::HasValidSharedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "HasValidSharedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::CheckCompatibleCellLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "CheckCompatibleCellLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ComputeHasSupportData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "ComputeHasSupportData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::HasSupportData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "HasSupportData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::HasBakedData(::StringW scenario) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "HasBakedData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scenario);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::Initialize(bool useStreamingAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useStreamingAsset);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::SetActiveScenario(::StringW scenario, bool verbose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "SetActiveScenario", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenario, verbose);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::BlendLightingScenario(::StringW otherScenario, float_t blendingFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "BlendLightingScenario", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherScenario, blendingFactor);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetBakingHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "GetBakingHashCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::AlignUp16(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "AlignUp16",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, count);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Rendering::ProbeVolumeBakingSet::GetSubArray(::Unity::Collections::NativeArray_1<uint8_t> input, int32_t count, ::ByRef<int32_t> offset) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetSubArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method, input, count, offset);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Rendering::ProbeVolumeBakingSet::RequestScratchBuffer(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "RequestScratchBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(this, ___internal_method, size);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Rendering::ProbeVolumeBakingSet::LoadStreambleAssetData(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* asset,
                                                                                                                   ::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "LoadStreambleAssetData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method, asset, cellIndices);
}
template <typename T> inline void UnityEngine::Rendering::ProbeVolumeBakingSet::ReleaseStreamableAssetData(::Unity::Collections::NativeArray_1<T> buffer) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ReleaseStreamableAssetData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexList(::System::Collections::Generic::List_1<int32_t>* cellIndices,
                                                                             ::System::Collections::Generic::List_1<int32_t>* prunedIndexList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "PruneCellIndexList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellIndices, prunedIndexList);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::PruneCellIndexListForScenario(::System::Collections::Generic::List_1<int32_t>* cellIndices,
                                                                                        ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* scenarioData,
                                                                                        ::System::Collections::Generic::List_1<int32_t>* prunedIndexList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "PruneCellIndexListForScenario", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellIndices, scenarioData, prunedIndexList);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::Rendering::ProbeVolumeBakingSet::GetSceneCellIndexList(::StringW sceneGUID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetSceneCellIndexList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method, sceneGUID);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveAllCellData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                                                             "ResolveAllCellData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolveCellData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellIndices);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices,
                                                                                ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricksData,
                                                                                ::Unity::Collections::NativeArray_1<uint8_t> cellSharedData,
                                                                                ::Unity::Collections::NativeArray_1<uint8_t> cellSupportData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolveSharedCellData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellIndices, bricksData, cellSharedData, cellSupportData);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolveSharedCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolveSharedCellData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellIndices);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolvePerScenarioCellData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellIndices);
}
inline bool UnityEngine::Rendering::ProbeVolumeBakingSet::ResolvePerScenarioCellData(::Unity::Collections::NativeArray_1<uint8_t> cellData,
                                                                                     ::Unity::Collections::NativeArray_1<uint8_t> cellOptionalData,
                                                                                     ::Unity::Collections::NativeArray_1<uint8_t> cellProbeOcclusionData, ::StringW scenario,
                                                                                     ::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ResolvePerScenarioCellData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellData, cellOptionalData, cellProbeOcclusionData, scenario, cellIndices);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::ReleaseCell(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "ReleaseCell",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellIndex);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellDesc(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetCellDesc",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*, false>(this, ___internal_method, cellIndex);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* UnityEngine::Rendering::ProbeVolumeBakingSet::GetCellData(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetCellData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*, false>(this, ___internal_method, cellIndex);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeBakingSet::GetChunkGPUMemory(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), "GetChunkGPUMemory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, shBands);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSet* UnityEngine::Rendering::ProbeVolumeBakingSet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeBakingSet*>());
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
