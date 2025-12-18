#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumePerSceneData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumePerSceneData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class ObsoleteProbeVolumeAsset;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet;
}
namespace UnityEngine::Rendering {
struct ProbeVolumePerSceneData_ObsoletePerScenarioData;
}
namespace UnityEngine::Rendering {
struct ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumePerSceneData;
}
namespace UnityEngine::Rendering {
struct ProbeVolumePerSceneData_ObsoletePerScenarioData;
}
namespace UnityEngine::Rendering {
struct ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumePerSceneData);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumePerSceneData/ObsoletePerScenarioData
struct CORDL_TYPE ProbeVolumePerSceneData_ObsoletePerScenarioData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumePerSceneData_ObsoletePerScenarioData();

  // Ctor Parameters [CppParam { name: "sceneHash", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cellDataAsset", ty: "::UnityW<::UnityEngine::TextAsset>", modifiers: "",
  // def_value: None }, CppParam { name: "cellOptionalDataAsset", ty: "::UnityW<::UnityEngine::TextAsset>", modifiers: "", def_value: None }]
  constexpr ProbeVolumePerSceneData_ObsoletePerScenarioData(int32_t sceneHash, ::UnityW<::UnityEngine::TextAsset> cellDataAsset, ::UnityW<::UnityEngine::TextAsset> cellOptionalDataAsset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12120 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field sceneHash, offset: 0x0, size: 0x4, def value: None
  int32_t sceneHash;

  /// @brief Field cellDataAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> cellDataAsset;

  /// @brief Field cellOptionalDataAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> cellOptionalDataAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData, sceneHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData, cellDataAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData, cellOptionalDataAsset) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.ProbeVolumePerSceneData::ObsoletePerScenarioData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumePerSceneData/ObsoleteSerializablePerScenarioDataItem
struct CORDL_TYPE ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem();

  // Ctor Parameters [CppParam { name: "scenario", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "data", ty:
  // "::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData", modifiers: "", def_value: None }]
  constexpr ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem(::StringW scenario, ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12121 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field scenario, offset: 0x0, size: 0x8, def value: None
  ::StringW scenario;

  /// @brief Field data, offset: 0x8, size: 0x18, def value: None
  ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem, scenario) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem, data) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumePerSceneData
class CORDL_TYPE ProbeVolumePerSceneData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ObsoletePerScenarioData = ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData;

  using ObsoleteSerializablePerScenarioDataItem = ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem;

  __declspec(property(get = get_bakingSet)) ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> bakingSet;

  /// @brief Field obsoleteAsset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_obsoleteAsset, put = __cordl_internal_set_obsoleteAsset)) ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset> obsoleteAsset;

  /// @brief Field obsoleteCellSharedDataAsset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_obsoleteCellSharedDataAsset, put = __cordl_internal_set_obsoleteCellSharedDataAsset)) ::UnityW<::UnityEngine::TextAsset> obsoleteCellSharedDataAsset;

  /// @brief Field obsoleteCellSupportDataAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_obsoleteCellSupportDataAsset, put = __cordl_internal_set_obsoleteCellSupportDataAsset)) ::UnityW<::UnityEngine::TextAsset>
      obsoleteCellSupportDataAsset;

  /// @brief Field obsoleteSerializedScenarios, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_obsoleteSerializedScenarios, put = __cordl_internal_set_obsoleteSerializedScenarios)) ::System::Collections::Generic::List_1<
      ::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>* obsoleteSerializedScenarios;

  /// @brief Field sceneGUID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneGUID, put = __cordl_internal_set_sceneGUID)) ::StringW sceneGUID;

  /// @brief Field serializedBakingSet, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedBakingSet, put = __cordl_internal_set_serializedBakingSet)) ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> serializedBakingSet;

  /// @brief Method Clear, addr 0x65df868, size 0x18, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Initialize, addr 0x65dfbec, size 0xc0, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::UnityEngine::Rendering::ProbeVolumePerSceneData* New_ctor();

  /// @brief Method OnDisable, addr 0x65dfb30, size 0xb8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x65dfa80, size 0xb0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x65dfbe8, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method QueueSceneLoading, addr 0x65df980, size 0x100, virtual false, abstract: false, final false
  inline void QueueSceneLoading();

  /// @brief Method QueueSceneRemoval, addr 0x65df880, size 0x100, virtual false, abstract: false, final false
  inline void QueueSceneRemoval();

  /// @brief Method ResolveCellData, addr 0x65dfcac, size 0x9c, virtual false, abstract: false, final false
  inline bool ResolveCellData();

  constexpr ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset> const& __cordl_internal_get_obsoleteAsset() const;

  constexpr ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset>& __cordl_internal_get_obsoleteAsset();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_obsoleteCellSharedDataAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_obsoleteCellSharedDataAsset();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_obsoleteCellSupportDataAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_obsoleteCellSupportDataAsset();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>* const&
  __cordl_internal_get_obsoleteSerializedScenarios() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>*& __cordl_internal_get_obsoleteSerializedScenarios();

  constexpr ::StringW const& __cordl_internal_get_sceneGUID() const;

  constexpr ::StringW& __cordl_internal_get_sceneGUID();

  constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> const& __cordl_internal_get_serializedBakingSet() const;

  constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>& __cordl_internal_get_serializedBakingSet();

  constexpr void __cordl_internal_set_obsoleteAsset(::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset> value);

  constexpr void __cordl_internal_set_obsoleteCellSharedDataAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_obsoleteCellSupportDataAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void
  __cordl_internal_set_obsoleteSerializedScenarios(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>* value);

  constexpr void __cordl_internal_set_sceneGUID(::StringW value);

  constexpr void __cordl_internal_set_serializedBakingSet(::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> value);

  /// @brief Method .ctor, addr 0x65dfd48, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakingSet, addr 0x65df860, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> get_bakingSet();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumePerSceneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePerSceneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumePerSceneData(ProbeVolumePerSceneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePerSceneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumePerSceneData(ProbeVolumePerSceneData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12122 };

  /// @brief Field serializedBakingSet, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> ___serializedBakingSet;

  /// @brief Field sceneGUID, offset: 0x28, size: 0x8, def value: None
  ::StringW ___sceneGUID;

  /// @brief Field obsoleteAsset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset> ___obsoleteAsset;

  /// @brief Field obsoleteCellSharedDataAsset, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___obsoleteCellSharedDataAsset;

  /// @brief Field obsoleteCellSupportDataAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___obsoleteCellSupportDataAsset;

  /// @brief Field obsoleteSerializedScenarios, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>* ___obsoleteSerializedScenarios;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___serializedBakingSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___sceneGUID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteAsset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteCellSharedDataAsset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteCellSupportDataAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteSerializedScenarios) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumePerSceneData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumePerSceneData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumePerSceneData*, "UnityEngine.Rendering", "ProbeVolumePerSceneData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoletePerScenarioData, "UnityEngine.Rendering", "ProbeVolumePerSceneData/ObsoletePerScenarioData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem, "UnityEngine.Rendering",
                       "ProbeVolumePerSceneData/ObsoleteSerializablePerScenarioDataItem");
