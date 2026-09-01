#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeVolumePerSceneData.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumePerSceneData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObsoleteProbeVolumeAsset_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSet_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumePerSceneData_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
// Ctor Parameters [CppParam { name: "sceneHash", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cellDataAsset", ty: "::UnityW<::UnityEngine::TextAsset>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cellOptionalDataAsset", ty: "::UnityW<::UnityEngine::TextAsset>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData::ProbeVolumePerSceneData_ObsoletePerScenarioData(
    int32_t sceneHash, ::UnityW<::UnityEngine::TextAsset> cellDataAsset, ::UnityW<::UnityEngine::TextAsset> cellOptionalDataAsset) noexcept {
  this->sceneHash = sceneHash;
  this->cellDataAsset = cellDataAsset;
  this->cellOptionalDataAsset = cellOptionalDataAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData::ProbeVolumePerSceneData_ObsoletePerScenarioData() {}
// Ctor Parameters [CppParam { name: "scenario", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty:
// "::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem(
    ::StringW scenario, ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData data) noexcept {
  this->scenario = scenario;
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.get_bakingSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Rendering::ProbeVolumePerSceneData::get_bakingSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67969c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "get_bakingSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::Clear)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67969d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.QueueSceneLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::QueueSceneLoading)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6796ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "QueueSceneLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.QueueSceneRemoval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::QueueSceneRemoval)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67969e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "QueueSceneRemoval", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6796be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::OnDisable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6796c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6796d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::Initialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6796d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData.ResolveCellData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::ResolveCellData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6796e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "ResolveCellData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePerSceneData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Rendering::ProbeVolumePerSceneData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6796eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_serializedBakingSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBakingSet;
}
constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> const& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_serializedBakingSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedBakingSet;
}
constexpr void UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_serializedBakingSet(::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializedBakingSet = value;
}
constexpr ::StringW& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_sceneGUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneGUID;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_sceneGUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneGUID;
}
constexpr void UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_sceneGUID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneGUID = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset>& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteAsset;
}
constexpr ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset> const& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_obsoleteAsset(::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obsoleteAsset = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteCellSharedDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteCellSharedDataAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteCellSharedDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteCellSharedDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_obsoleteCellSharedDataAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obsoleteCellSharedDataAsset = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteCellSupportDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteCellSupportDataAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteCellSupportDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteCellSupportDataAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_obsoleteCellSupportDataAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obsoleteCellSupportDataAsset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>*&
UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteSerializedScenarios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteSerializedScenarios;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>* const&
UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_obsoleteSerializedScenarios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteSerializedScenarios;
}
constexpr void UnityEngine::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_obsoleteSerializedScenarios(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obsoleteSerializedScenarios = value;
}
inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> UnityEngine::Rendering::ProbeVolumePerSceneData::get_bakingSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "get_bakingSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::QueueSceneLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "QueueSceneLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::QueueSceneRemoval() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "QueueSceneRemoval", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumePerSceneData::ResolveCellData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { "ResolveCellData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumePerSceneData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumePerSceneData* UnityEngine::Rendering::ProbeVolumePerSceneData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumePerSceneData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumePerSceneData::ProbeVolumePerSceneData() {}
