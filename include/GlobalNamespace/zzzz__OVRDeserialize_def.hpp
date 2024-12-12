#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize)
namespace GlobalNamespace {
struct OVRDeserialize_DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SceneCaptureCompleteData;
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
struct OVRDeserialize_SpatialAnchorCreateCompleteData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDeserialize;
}
namespace GlobalNamespace {
struct OVRDeserialize_DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SceneCaptureCompleteData;
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
struct OVRDeserialize_SpatialAnchorCreateCompleteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDeserialize);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceShareResultData);
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8404 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8405 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8406 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8407 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8408 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8409 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8410 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8411 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8412 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8413 };

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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRDeserialize
class CORDL_TYPE OVRDeserialize : public ::System::Object {
public:
  // Declarations
  using DisplayRefreshRateChangedData = ::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData;

  using SceneCaptureCompleteData = ::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData;

  using SpaceEraseCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData;

  using SpaceListSaveResultData = ::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData;

  using SpaceQueryCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData;

  using SpaceQueryResultsData = ::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData;

  using SpaceSaveCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData;

  using SpaceSetComponentStatusCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData;

  using SpaceShareResultData = ::GlobalNamespace::OVRDeserialize_SpaceShareResultData;

  using SpatialAnchorCreateCompleteData = ::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData;

  /// @brief Method ByteArrayToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ByteArrayToStructure(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDeserialize);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize*, "", "OVRDeserialize");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, "", "OVRDeserialize/DisplayRefreshRateChangedData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData, "", "OVRDeserialize/SceneCaptureCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, "", "OVRDeserialize/SpaceEraseCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData, "", "OVRDeserialize/SpaceListSaveResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData, "", "OVRDeserialize/SpaceQueryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData, "", "OVRDeserialize/SpaceQueryResultsData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, "", "OVRDeserialize/SpaceSaveCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, "", "OVRDeserialize/SpaceSetComponentStatusCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpaceShareResultData, "", "OVRDeserialize/SpaceShareResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, "", "OVRDeserialize/SpatialAnchorCreateCompleteData");
