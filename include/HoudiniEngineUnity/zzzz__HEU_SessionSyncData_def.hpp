#pragma once
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
struct __HEU_SessionSyncData__Status;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_SessionSyncData__Status;
}
namespace HoudiniEngineUnity {
class HEU_SessionSyncData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_SessionSyncData__Status);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionSyncData);
// Type: ::Status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9789))
// CS Name: ::HEU_SessionSyncData::Status
struct CORDL_TYPE __HEU_SessionSyncData__Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_SessionSyncData__Status_Unwrapped
  enum struct ____HEU_SessionSyncData__Status_Unwrapped : int32_t {
    __E_Stopped = static_cast<int32_t>(0x0),
    __E_Started = static_cast<int32_t>(0x1),
    __E_Connecting = static_cast<int32_t>(0x2),
    __E_Initializing = static_cast<int32_t>(0x3),
    __E_Connected = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_SessionSyncData__Status_Unwrapped() const noexcept {
    return static_cast<____HEU_SessionSyncData__Status_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_SessionSyncData__Status(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_SessionSyncData__Status();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Stopped value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Stopped;

  /// @brief Field Started value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Started;

  /// @brief Field Connecting value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Connecting;

  /// @brief Field Initializing value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Initializing;

  /// @brief Field Connected value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Connected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_SessionSyncData__Status, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_SessionSyncData
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 99, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9755)), TypeDefinitionIndex(TypeDefinitionIndex(9756)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9790))
// CS Name: ::HoudiniEngineUnity::HEU_SessionSyncData*
class CORDL_TYPE HEU_SessionSyncData : public ::System::Object {
public:
  // Declarations
  using Status = ::HoudiniEngineUnity::__HEU_SessionSyncData__Status;

  /// @brief Field _status, offset 0x10, size 0x4
  __declspec(property(get = __get__status, put = __set__status)) int32_t _status;

  /// @brief Field _timeLastUpdate, offset 0x14, size 0x4
  __declspec(property(get = __get__timeLastUpdate, put = __set__timeLastUpdate)) float_t _timeLastUpdate;

  /// @brief Field _timeStartConnection, offset 0x18, size 0x4
  __declspec(property(get = __get__timeStartConnection, put = __set__timeStartConnection)) float_t _timeStartConnection;

  /// @brief Field _newNodeName, offset 0x20, size 0x8
  __declspec(property(get = __get__newNodeName, put = __set__newNodeName))::StringW _newNodeName;

  /// @brief Field _nodeTypeIndex, offset 0x28, size 0x4
  __declspec(property(get = __get__nodeTypeIndex, put = __set__nodeTypeIndex)) int32_t _nodeTypeIndex;

  /// @brief Field _validForConnection, offset 0x2c, size 0x1
  __declspec(property(get = __get__validForConnection, put = __set__validForConnection)) bool _validForConnection;

  /// @brief Field _viewportHAPI, offset 0x30, size 0x18
  __declspec(property(get = __get__viewportHAPI, put = __set__viewportHAPI))::HoudiniEngineUnity::HAPI_Viewport _viewportHAPI;

  /// @brief Field _viewportLocal, offset 0x48, size 0x18
  __declspec(property(get = __get__viewportLocal, put = __set__viewportLocal))::HoudiniEngineUnity::HAPI_Viewport _viewportLocal;

  /// @brief Field _viewportJustUpdated, offset 0x60, size 0x1
  __declspec(property(get = __get__viewportJustUpdated, put = __set__viewportJustUpdated)) bool _viewportJustUpdated;

  /// @brief Field _syncInfo, offset 0x61, size 0x2
  __declspec(property(get = __get__syncInfo, put = __set__syncInfo))::HoudiniEngineUnity::HAPI_SessionSyncInfo _syncInfo;

  __declspec(property(get = get_SyncStatus, put = set_SyncStatus))::HoudiniEngineUnity::__HEU_SessionSyncData__Status SyncStatus;

  constexpr int32_t& __get__status();

  constexpr int32_t const& __get__status() const;

  constexpr void __set__status(int32_t value);

  constexpr float_t& __get__timeLastUpdate();

  constexpr float_t const& __get__timeLastUpdate() const;

  constexpr void __set__timeLastUpdate(float_t value);

  constexpr float_t& __get__timeStartConnection();

  constexpr float_t const& __get__timeStartConnection() const;

  constexpr void __set__timeStartConnection(float_t value);

  constexpr ::StringW& __get__newNodeName();

  constexpr ::StringW const& __get__newNodeName() const;

  constexpr void __set__newNodeName(::StringW value);

  constexpr int32_t& __get__nodeTypeIndex();

  constexpr int32_t const& __get__nodeTypeIndex() const;

  constexpr void __set__nodeTypeIndex(int32_t value);

  constexpr bool& __get__validForConnection();

  constexpr bool const& __get__validForConnection() const;

  constexpr void __set__validForConnection(bool value);

  constexpr ::HoudiniEngineUnity::HAPI_Viewport& __get__viewportHAPI();

  constexpr ::HoudiniEngineUnity::HAPI_Viewport const& __get__viewportHAPI() const;

  constexpr void __set__viewportHAPI(::HoudiniEngineUnity::HAPI_Viewport value);

  constexpr ::HoudiniEngineUnity::HAPI_Viewport& __get__viewportLocal();

  constexpr ::HoudiniEngineUnity::HAPI_Viewport const& __get__viewportLocal() const;

  constexpr void __set__viewportLocal(::HoudiniEngineUnity::HAPI_Viewport value);

  constexpr bool& __get__viewportJustUpdated();

  constexpr bool const& __get__viewportJustUpdated() const;

  constexpr void __set__viewportJustUpdated(bool value);

  constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo& __get__syncInfo();

  constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo const& __get__syncInfo() const;

  constexpr void __set__syncInfo(::HoudiniEngineUnity::HAPI_SessionSyncInfo value);

  /// @brief Method get_SyncStatus addr 0x21a53d0 size 0x14 virtual false final false
  inline ::HoudiniEngineUnity::__HEU_SessionSyncData__Status get_SyncStatus();

  /// @brief Method set_SyncStatus addr 0x21a53e4 size 0xc virtual false final false
  inline void set_SyncStatus(::HoudiniEngineUnity::__HEU_SessionSyncData__Status value);

  static inline ::HoudiniEngineUnity::HEU_SessionSyncData* New_ctor();

  /// @brief Method .ctor addr 0x21a2764 size 0xac virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionSyncData(HEU_SessionSyncData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionSyncData(HEU_SessionSyncData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionSyncData();

public:
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionSyncData, 0x68>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_SessionSyncData__Status, "HoudiniEngineUnity", "HEU_SessionSyncData/Status");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionSyncData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionSyncData*, "HoudiniEngineUnity", "HEU_SessionSyncData");
