#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionSyncData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionSyncData)
namespace HoudiniEngineUnity {
struct HEU_SessionSyncData_Status;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_SessionSyncData_Status;
}
namespace HoudiniEngineUnity {
class HEU_SessionSyncData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_SessionSyncData_Status);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionSyncData);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_SessionSyncData/Status
struct CORDL_TYPE HEU_SessionSyncData_Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_SessionSyncData_Status_Unwrapped
  enum struct __HEU_SessionSyncData_Status_Unwrapped : int32_t {
    __E_Stopped = static_cast<int32_t>(0x0),
    __E_Started = static_cast<int32_t>(0x1),
    __E_Connecting = static_cast<int32_t>(0x2),
    __E_Initializing = static_cast<int32_t>(0x3),
    __E_Connected = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_SessionSyncData_Status_Unwrapped() const noexcept {
    return static_cast<__HEU_SessionSyncData_Status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionSyncData_Status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_SessionSyncData_Status(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(4)
  static ::HoudiniEngineUnity::HEU_SessionSyncData_Status const Connected;

  /// @brief Field Connecting value: I32(2)
  static ::HoudiniEngineUnity::HEU_SessionSyncData_Status const Connecting;

  /// @brief Field Initializing value: I32(3)
  static ::HoudiniEngineUnity::HEU_SessionSyncData_Status const Initializing;

  /// @brief Field Started value: I32(1)
  static ::HoudiniEngineUnity::HEU_SessionSyncData_Status const Started;

  /// @brief Field Stopped value: I32(0)
  static ::HoudiniEngineUnity::HEU_SessionSyncData_Status const Stopped;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData_Status, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionSyncData_Status, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HAPI_SessionSyncInfo, HoudiniEngineUnity.HAPI_Viewport, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionSyncData
class CORDL_TYPE HEU_SessionSyncData : public ::System::Object {
public:
  // Declarations
  using Status = ::HoudiniEngineUnity::HEU_SessionSyncData_Status;

  __declspec(property(get = get_SyncStatus, put = set_SyncStatus)) ::HoudiniEngineUnity::HEU_SessionSyncData_Status SyncStatus;

  /// @brief Field _newNodeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__newNodeName, put = __cordl_internal_set__newNodeName)) ::StringW _newNodeName;

  /// @brief Field _nodeTypeIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__nodeTypeIndex, put = __cordl_internal_set__nodeTypeIndex)) int32_t _nodeTypeIndex;

  /// @brief Field _status, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status)) int32_t _status;

  /// @brief Field _syncInfo, offset 0x61, size 0x2
  __declspec(property(get = __cordl_internal_get__syncInfo, put = __cordl_internal_set__syncInfo)) ::HoudiniEngineUnity::HAPI_SessionSyncInfo _syncInfo;

  /// @brief Field _timeLastUpdate, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__timeLastUpdate, put = __cordl_internal_set__timeLastUpdate)) float_t _timeLastUpdate;

  /// @brief Field _timeStartConnection, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__timeStartConnection, put = __cordl_internal_set__timeStartConnection)) float_t _timeStartConnection;

  /// @brief Field _validForConnection, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__validForConnection, put = __cordl_internal_set__validForConnection)) bool _validForConnection;

  /// @brief Field _viewportHAPI, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get__viewportHAPI, put = __cordl_internal_set__viewportHAPI)) ::HoudiniEngineUnity::HAPI_Viewport _viewportHAPI;

  /// @brief Field _viewportJustUpdated, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__viewportJustUpdated, put = __cordl_internal_set__viewportJustUpdated)) bool _viewportJustUpdated;

  /// @brief Field _viewportLocal, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get__viewportLocal, put = __cordl_internal_set__viewportLocal)) ::HoudiniEngineUnity::HAPI_Viewport _viewportLocal;

  static inline ::HoudiniEngineUnity::HEU_SessionSyncData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__newNodeName() const;

  constexpr ::StringW& __cordl_internal_get__newNodeName();

  constexpr int32_t const& __cordl_internal_get__nodeTypeIndex() const;

  constexpr int32_t& __cordl_internal_get__nodeTypeIndex();

  constexpr int32_t const& __cordl_internal_get__status() const;

  constexpr int32_t& __cordl_internal_get__status();

  constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo const& __cordl_internal_get__syncInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo& __cordl_internal_get__syncInfo();

  constexpr float_t const& __cordl_internal_get__timeLastUpdate() const;

  constexpr float_t& __cordl_internal_get__timeLastUpdate();

  constexpr float_t const& __cordl_internal_get__timeStartConnection() const;

  constexpr float_t& __cordl_internal_get__timeStartConnection();

  constexpr bool const& __cordl_internal_get__validForConnection() const;

  constexpr bool& __cordl_internal_get__validForConnection();

  constexpr ::HoudiniEngineUnity::HAPI_Viewport const& __cordl_internal_get__viewportHAPI() const;

  constexpr ::HoudiniEngineUnity::HAPI_Viewport& __cordl_internal_get__viewportHAPI();

  constexpr bool const& __cordl_internal_get__viewportJustUpdated() const;

  constexpr bool& __cordl_internal_get__viewportJustUpdated();

  constexpr ::HoudiniEngineUnity::HAPI_Viewport const& __cordl_internal_get__viewportLocal() const;

  constexpr ::HoudiniEngineUnity::HAPI_Viewport& __cordl_internal_get__viewportLocal();

  constexpr void __cordl_internal_set__newNodeName(::StringW value);

  constexpr void __cordl_internal_set__nodeTypeIndex(int32_t value);

  constexpr void __cordl_internal_set__status(int32_t value);

  constexpr void __cordl_internal_set__syncInfo(::HoudiniEngineUnity::HAPI_SessionSyncInfo value);

  constexpr void __cordl_internal_set__timeLastUpdate(float_t value);

  constexpr void __cordl_internal_set__timeStartConnection(float_t value);

  constexpr void __cordl_internal_set__validForConnection(bool value);

  constexpr void __cordl_internal_set__viewportHAPI(::HoudiniEngineUnity::HAPI_Viewport value);

  constexpr void __cordl_internal_set__viewportJustUpdated(bool value);

  constexpr void __cordl_internal_set__viewportLocal(::HoudiniEngineUnity::HAPI_Viewport value);

  /// @brief Method .ctor, addr 0x3a5bb90, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SyncStatus, addr 0x3a5e76c, size 0x14, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionSyncData_Status get_SyncStatus();

  /// @brief Method set_SyncStatus, addr 0x3a5e780, size 0xc, virtual false, abstract: false, final false
  inline void set_SyncStatus(::HoudiniEngineUnity::HEU_SessionSyncData_Status value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionSyncData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionSyncData(HEU_SessionSyncData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionSyncData(HEU_SessionSyncData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11775 };

  /// @brief Field _status, offset: 0x10, size: 0x4, def value: None
  int32_t ____status;

  /// @brief Field _timeLastUpdate, offset: 0x14, size: 0x4, def value: None
  float_t ____timeLastUpdate;

  /// @brief Field _timeStartConnection, offset: 0x18, size: 0x4, def value: None
  float_t ____timeStartConnection;

  /// @brief Field _newNodeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____newNodeName;

  /// @brief Field _nodeTypeIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ____nodeTypeIndex;

  /// @brief Field _validForConnection, offset: 0x2c, size: 0x1, def value: None
  bool ____validForConnection;

  /// @brief Field _viewportHAPI, offset: 0x30, size: 0x18, def value: None
  ::HoudiniEngineUnity::HAPI_Viewport ____viewportHAPI;

  /// @brief Field _viewportLocal, offset: 0x48, size: 0x18, def value: None
  ::HoudiniEngineUnity::HAPI_Viewport ____viewportLocal;

  /// @brief Field _viewportJustUpdated, offset: 0x60, size: 0x1, def value: None
  bool ____viewportJustUpdated;

  /// @brief Field _syncInfo, offset: 0x61, size: 0x2, def value: None
  ::HoudiniEngineUnity::HAPI_SessionSyncInfo ____syncInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____timeLastUpdate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____timeStartConnection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____newNodeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____nodeTypeIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____validForConnection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____viewportHAPI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____viewportLocal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____viewportJustUpdated) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionSyncData, ____syncInfo) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionSyncData, 0x68>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionSyncData_Status, "HoudiniEngineUnity", "HEU_SessionSyncData/Status");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionSyncData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionSyncData*, "HoudiniEngineUnity", "HEU_SessionSyncData");
