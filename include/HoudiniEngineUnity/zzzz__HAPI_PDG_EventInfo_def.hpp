#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PDG_EventInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_EventInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_EventInfo);
// Type: HoudiniEngineUnity::HAPI_PDG_EventInfo
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_EventInfo
struct CORDL_TYPE HAPI_PDG_EventInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_EventInfo();

  // Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "workitemId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "dependencyId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastState", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "eventType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "msgSH", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_EventInfo(int32_t nodeId, int32_t workitemId, int32_t dependencyId, int32_t currentState, int32_t lastState, int32_t eventType, int32_t msgSH) noexcept;

  /// @brief Field nodeId, offset: 0x0, size: 0x4, def value: None
  int32_t nodeId;

  /// @brief Field workitemId, offset: 0x4, size: 0x4, def value: None
  int32_t workitemId;

  /// @brief Field dependencyId, offset: 0x8, size: 0x4, def value: None
  int32_t dependencyId;

  /// @brief Field currentState, offset: 0xc, size: 0x4, def value: None
  int32_t currentState;

  /// @brief Field lastState, offset: 0x10, size: 0x4, def value: None
  int32_t lastState;

  /// @brief Field eventType, offset: 0x14, size: 0x4, def value: None
  int32_t eventType;

  /// @brief Field msgSH, offset: 0x18, size: 0x4, def value: None
  int32_t msgSH;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_EventInfo, 0x1c>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventInfo, nodeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventInfo, workitemId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventInfo, dependencyId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventInfo, currentState) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventInfo, lastState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventInfo, eventType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventInfo, msgSH) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_EventInfo, "HoudiniEngineUnity", "HAPI_PDG_EventInfo");
