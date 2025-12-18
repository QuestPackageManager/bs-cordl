#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize)
namespace GlobalNamespace {
struct ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OVRDeserialize_BoundaryVisibilityChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionDiscoveryResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_CreateDynamicObjectTrackerResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_PassthroughLayerResumedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SetDynamicObjectTrackedClassesResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ShareSpacesToGroupsCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceShareResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesEraseResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpatialAnchorCreateCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StartColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StartColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StopColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StopColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRPlugin_EventDataBuffer;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDeserialize;
}
namespace GlobalNamespace {
struct ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer;
}
namespace GlobalNamespace {
struct OVRDeserialize_BoundaryVisibilityChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionDiscoveryResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_CreateDynamicObjectTrackerResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_PassthroughLayerResumedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SetDynamicObjectTrackedClassesResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ShareSpacesToGroupsCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceShareResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesEraseResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpatialAnchorCreateCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StartColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StartColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StopColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StopColocationSessionDiscoveryCompleteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDeserialize);
MARK_VAL_T(::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceShareResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/DisplayRefreshRateChangedData
struct CORDL_TYPE OVRDeserialize_DisplayRefreshRateChangedData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_DisplayRefreshRateChangedData();

  // Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_DisplayRefreshRateChangedData(float_t FromRefreshRate, float_t ToRefreshRate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7861 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field FromRefreshRate, offset: 0x0, size: 0x4, def value: None
  float_t FromRefreshRate;

  /// @brief Field ToRefreshRate, offset: 0x4, size: 0x4, def value: None
  float_t ToRefreshRate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, FromRefreshRate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, ToRefreshRate) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceQueryResultsData
struct CORDL_TYPE OVRDeserialize_SpaceQueryResultsData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceQueryResultsData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceQueryResultsData(uint64_t RequestId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7862 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData, RequestId) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceQueryCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceQueryCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceQueryCompleteData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceQueryCompleteData(uint64_t RequestId, int32_t Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7863 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SceneCaptureCompleteData
struct CORDL_TYPE OVRDeserialize_SceneCaptureCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SceneCaptureCompleteData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SceneCaptureCompleteData(uint64_t RequestId, int32_t Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7864 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpatialAnchorCreateCompleteData
struct CORDL_TYPE OVRDeserialize_SpatialAnchorCreateCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpatialAnchorCreateCompleteData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpatialAnchorCreateCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, ::System::Guid Uuid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7865 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Space, offset: 0x10, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Uuid, offset: 0x18, size: 0x10, def value: None
  ::System::Guid Uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, Space) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, Uuid) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::SpaceComponentType, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceSetComponentStatusCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceSetComponentStatusCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceSetComponentStatusCompleteData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ComponentType", ty:
  // "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceSetComponentStatusCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, ::System::Guid Uuid, ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentType,
                                                               int32_t Enabled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7866 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Space, offset: 0x10, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Uuid, offset: 0x18, size: 0x10, def value: None
  ::System::Guid Uuid;

  /// @brief Field ComponentType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentType;

  /// @brief Field Enabled, offset: 0x2c, size: 0x4, def value: None
  int32_t Enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Space) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Uuid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, ComponentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Enabled) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceSaveCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceSaveCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceSaveCompleteData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceSaveCompleteData(uint64_t RequestId, uint64_t Space, int32_t Result, ::System::Guid Uuid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7867 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Space, offset: 0x8, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Uuid, offset: 0x14, size: 0x10, def value: None
  ::System::Guid Uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, Space) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, Uuid) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::SpaceStorageLocation, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceEraseCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceEraseCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceEraseCompleteData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "Location", ty: "::GlobalNamespace::OVRPlugin_SpaceStorageLocation", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceEraseCompleteData(uint64_t RequestId, int32_t Result, ::System::Guid Uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation Location) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Uuid, offset: 0xc, size: 0x10, def value: None
  ::System::Guid Uuid;

  /// @brief Field Location, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceStorageLocation Location;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, Uuid) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, Location) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceShareResultData
struct CORDL_TYPE OVRDeserialize_SpaceShareResultData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceShareResultData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceShareResultData(uint64_t RequestId, int32_t Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7869 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceShareResultData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceShareResultData, Result) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceShareResultData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceListSaveResultData
struct CORDL_TYPE OVRDeserialize_SpaceListSaveResultData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceListSaveResultData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceListSaveResultData(uint64_t RequestId, int32_t Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7870 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData, Result) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/StartColocationSessionAdvertisementCompleteData
struct CORDL_TYPE OVRDeserialize_StartColocationSessionAdvertisementCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_StartColocationSessionAdvertisementCompleteData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }, CppParam { name: "AdvertisementUuid", ty: "::System::Guid", modifiers:
  // "", def_value: None }]
  constexpr OVRDeserialize_StartColocationSessionAdvertisementCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result,
                                                                           ::System::Guid AdvertisementUuid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  /// @brief Field AdvertisementUuid, offset: 0x14, size: 0x10, def value: None
  ::System::Guid AdvertisementUuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, AdvertisementUuid) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/StopColocationSessionAdvertisementCompleteData
struct CORDL_TYPE OVRDeserialize_StopColocationSessionAdvertisementCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_StopColocationSessionAdvertisementCompleteData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_StopColocationSessionAdvertisementCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7872 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/StartColocationSessionDiscoveryCompleteData
struct CORDL_TYPE OVRDeserialize_StartColocationSessionDiscoveryCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_StartColocationSessionDiscoveryCompleteData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_StartColocationSessionDiscoveryCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7873 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/StopColocationSessionDiscoveryCompleteData
struct CORDL_TYPE OVRDeserialize_StopColocationSessionDiscoveryCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_StopColocationSessionDiscoveryCompleteData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_StopColocationSessionDiscoveryCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7874 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/ColocationSessionDiscoveryResultData/<AdvertisementMetadata>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7875 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x400 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x400 - 0x1 = 0x3ff, packed as 0x3ff
  uint8_t _cordl_size_padding[0x3ff];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer, 0x400>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRDeserialize::ColocationSessionDiscoveryResultData::<AdvertisementMetadata>e__FixedBuffer, OVRPlugin::EventType, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/ColocationSessionDiscoveryResultData
struct CORDL_TYPE OVRDeserialize_ColocationSessionDiscoveryResultData {
public:
  // Declarations
  using _AdvertisementMetadata_e__FixedBuffer = ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_ColocationSessionDiscoveryResultData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "AdvertisementUuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "AdvertisementMetadataCount", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "AdvertisementMetadata", ty: "::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer", modifiers: "",
  // def_value: None }]
  constexpr OVRDeserialize_ColocationSessionDiscoveryResultData(
      ::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::System::Guid AdvertisementUuid, uint32_t AdvertisementMetadataCount,
      ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer AdvertisementMetadata) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7876 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x428 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field AdvertisementUuid, offset: 0x10, size: 0x10, def value: None
  ::System::Guid AdvertisementUuid;

  /// @brief Field AdvertisementMetadataCount, offset: 0x20, size: 0x4, def value: None
  uint32_t AdvertisementMetadataCount;

  /// @brief Field AdvertisementMetadata, offset: 0x24, size: 0x400, def value: None
  ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer AdvertisementMetadata;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, AdvertisementUuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, AdvertisementMetadataCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, AdvertisementMetadata) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, 0x428>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/ColocationSessionAdvertisementCompleteData
struct CORDL_TYPE OVRDeserialize_ColocationSessionAdvertisementCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_ColocationSessionAdvertisementCompleteData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_ColocationSessionAdvertisementCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7877 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/ColocationSessionDiscoveryCompleteData
struct CORDL_TYPE OVRDeserialize_ColocationSessionDiscoveryCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_ColocationSessionDiscoveryCompleteData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_ColocationSessionDiscoveryCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7878 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/ShareSpacesToGroupsCompleteData
struct CORDL_TYPE OVRDeserialize_ShareSpacesToGroupsCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_ShareSpacesToGroupsCompleteData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_ShareSpacesToGroupsCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7879 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceDiscoveryCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceDiscoveryCompleteData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceDiscoveryCompleteData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceDiscoveryCompleteData(uint64_t RequestId, int32_t Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7880 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceDiscoveryResultsData
struct CORDL_TYPE OVRDeserialize_SpaceDiscoveryResultsData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpaceDiscoveryResultsData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SpaceDiscoveryResultsData(uint64_t RequestId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7881 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData, RequestId) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::SaveResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpacesSaveResultData
struct CORDL_TYPE OVRDeserialize_SpacesSaveResultData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpacesSaveResultData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRAnchor_SaveResult", modifiers: "",
  // def_value: None }]
  constexpr OVRDeserialize_SpacesSaveResultData(uint64_t RequestId, ::GlobalNamespace::OVRAnchor_SaveResult Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7882 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::OVRAnchor_SaveResult Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData, Result) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpacesSaveResultData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::EraseResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpacesEraseResultData
struct CORDL_TYPE OVRDeserialize_SpacesEraseResultData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SpacesEraseResultData();

  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRAnchor_EraseResult", modifiers: "",
  // def_value: None }]
  constexpr OVRDeserialize_SpacesEraseResultData(uint64_t RequestId, ::GlobalNamespace::OVRAnchor_EraseResult Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7883 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::OVRAnchor_EraseResult Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData, Result) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SpacesEraseResultData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/PassthroughLayerResumedData
struct CORDL_TYPE OVRDeserialize_PassthroughLayerResumedData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_PassthroughLayerResumedData();

  // Ctor Parameters [CppParam { name: "LayerId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_PassthroughLayerResumedData(int32_t LayerId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7884 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field LayerId, offset: 0x0, size: 0x4, def value: None
  int32_t LayerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData, LayerId) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::BoundaryVisibility
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/BoundaryVisibilityChangedData
struct CORDL_TYPE OVRDeserialize_BoundaryVisibilityChangedData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_BoundaryVisibilityChangedData();

  // Ctor Parameters [CppParam { name: "BoundaryVisibility", ty: "::GlobalNamespace::OVRPlugin_BoundaryVisibility", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_BoundaryVisibilityChangedData(::GlobalNamespace::OVRPlugin_BoundaryVisibility BoundaryVisibility) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7885 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BoundaryVisibility, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_BoundaryVisibility BoundaryVisibility;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData, BoundaryVisibility) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/CreateDynamicObjectTrackerResultData
struct CORDL_TYPE OVRDeserialize_CreateDynamicObjectTrackerResultData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_CreateDynamicObjectTrackerResultData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "Tracker", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_CreateDynamicObjectTrackerResultData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t Tracker, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7886 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field Tracker, offset: 0x8, size: 0x8, def value: None
  uint64_t Tracker;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData, Tracker) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SetDynamicObjectTrackedClassesResultData
struct CORDL_TYPE OVRDeserialize_SetDynamicObjectTrackedClassesResultData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize_SetDynamicObjectTrackedClassesResultData();

  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None }, CppParam { name: "Tracker", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None }]
  constexpr OVRDeserialize_SetDynamicObjectTrackedClassesResultData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t Tracker, ::GlobalNamespace::OVRPlugin_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7887 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_EventType EventType;

  /// @brief Field Tracker, offset: 0x8, size: 0x8, def value: None
  uint64_t Tracker;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, Tracker) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, Result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRDeserialize
class CORDL_TYPE OVRDeserialize : public ::System::Object {
public:
  // Declarations
  using BoundaryVisibilityChangedData = ::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData;

  using ColocationSessionAdvertisementCompleteData = ::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData;

  using ColocationSessionDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData;

  using ColocationSessionDiscoveryResultData = ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData;

  using CreateDynamicObjectTrackerResultData = ::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData;

  using DisplayRefreshRateChangedData = ::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData;

  using PassthroughLayerResumedData = ::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData;

  using SceneCaptureCompleteData = ::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData;

  using SetDynamicObjectTrackedClassesResultData = ::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData;

  using ShareSpacesToGroupsCompleteData = ::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData;

  using SpaceDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData;

  using SpaceDiscoveryResultsData = ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData;

  using SpaceEraseCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData;

  using SpaceListSaveResultData = ::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData;

  using SpaceQueryCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData;

  using SpaceQueryResultsData = ::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData;

  using SpaceSaveCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData;

  using SpaceSetComponentStatusCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData;

  using SpaceShareResultData = ::GlobalNamespace::OVRDeserialize_SpaceShareResultData;

  using SpacesEraseResultData = ::GlobalNamespace::OVRDeserialize_SpacesEraseResultData;

  using SpacesSaveResultData = ::GlobalNamespace::OVRDeserialize_SpacesSaveResultData;

  using SpatialAnchorCreateCompleteData = ::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData;

  using StartColocationSessionAdvertisementCompleteData = ::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData;

  using StartColocationSessionDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData;

  using StopColocationSessionAdvertisementCompleteData = ::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData;

  using StopColocationSessionDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData;

  /// @brief Method ByteArrayToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ByteArrayToStructure(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method MarshalEntireStructAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T MarshalEntireStructAs(::GlobalNamespace::OVRPlugin_EventDataBuffer eventDataBuffer, ::Unity::Collections::Allocator allocator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDeserialize(OVRDeserialize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDeserialize(OVRDeserialize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDeserialize);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize*, "", "OVRDeserialize");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer, "",
                       "OVRDeserialize/ColocationSessionDiscoveryResultData/<AdvertisementMetadata>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData, "", "OVRDeserialize/BoundaryVisibilityChangedData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData, "", "OVRDeserialize/ColocationSessionAdvertisementCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData, "", "OVRDeserialize/ColocationSessionDiscoveryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, "", "OVRDeserialize/ColocationSessionDiscoveryResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData, "", "OVRDeserialize/CreateDynamicObjectTrackerResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, "", "OVRDeserialize/DisplayRefreshRateChangedData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData, "", "OVRDeserialize/PassthroughLayerResumedData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData, "", "OVRDeserialize/SceneCaptureCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, "", "OVRDeserialize/SetDynamicObjectTrackedClassesResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData, "", "OVRDeserialize/ShareSpacesToGroupsCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData, "", "OVRDeserialize/SpaceDiscoveryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData, "", "OVRDeserialize/SpaceDiscoveryResultsData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, "", "OVRDeserialize/SpaceEraseCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData, "", "OVRDeserialize/SpaceListSaveResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData, "", "OVRDeserialize/SpaceQueryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData, "", "OVRDeserialize/SpaceQueryResultsData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, "", "OVRDeserialize/SpaceSaveCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, "", "OVRDeserialize/SpaceSetComponentStatusCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceShareResultData, "", "OVRDeserialize/SpaceShareResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData, "", "OVRDeserialize/SpacesEraseResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData, "", "OVRDeserialize/SpacesSaveResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, "", "OVRDeserialize/SpatialAnchorCreateCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, "", "OVRDeserialize/StartColocationSessionAdvertisementCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData, "", "OVRDeserialize/StartColocationSessionDiscoveryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData, "", "OVRDeserialize/StopColocationSessionAdvertisementCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData, "", "OVRDeserialize/StopColocationSessionDiscoveryCompleteData");
