#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PDG_EventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_EventType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_EventType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_PDG_EventType
struct CORDL_TYPE HAPI_PDG_EventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_PDG_EventType_Unwrapped
  enum struct __HAPI_PDG_EventType_Unwrapped : int32_t {
    __E_HAPI_PDG_EVENT_NULL = static_cast<int32_t>(0x0),
    __E_HAPI_PDG_EVENT_WORKITEM_ADD = static_cast<int32_t>(0x1),
    __E_HAPI_PDG_EVENT_WORKITEM_REMOVE = static_cast<int32_t>(0x2),
    __E_HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE = static_cast<int32_t>(0x3),
    __E_HAPI_PDG_EVENT_WORKITEM_ADD_DEP = static_cast<int32_t>(0x4),
    __E_HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP = static_cast<int32_t>(0x5),
    __E_HAPI_PDG_EVENT_WORKITEM_ADD_PARENT = static_cast<int32_t>(0x6),
    __E_HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT = static_cast<int32_t>(0x7),
    __E_HAPI_PDG_EVENT_NODE_CLEAR = static_cast<int32_t>(0x8),
    __E_HAPI_PDG_EVENT_COOK_ERROR = static_cast<int32_t>(0x9),
    __E_HAPI_PDG_EVENT_COOK_WARNING = static_cast<int32_t>(0xa),
    __E_HAPI_PDG_EVENT_COOK_COMPLETE = static_cast<int32_t>(0xb),
    __E_HAPI_PDG_EVENT_DIRTY_START = static_cast<int32_t>(0xc),
    __E_HAPI_PDG_EVENT_DIRTY_STOP = static_cast<int32_t>(0xd),
    __E_HAPI_PDG_EVENT_DIRTY_ALL = static_cast<int32_t>(0xe),
    __E_HAPI_PDG_EVENT_UI_SELECT = static_cast<int32_t>(0xf),
    __E_HAPI_PDG_EVENT_NODE_CREATE = static_cast<int32_t>(0x10),
    __E_HAPI_PDG_EVENT_NODE_REMOVE = static_cast<int32_t>(0x11),
    __E_HAPI_PDG_EVENT_NODE_RENAME = static_cast<int32_t>(0x12),
    __E_HAPI_PDG_EVENT_NODE_CONNECT = static_cast<int32_t>(0x13),
    __E_HAPI_PDG_EVENT_NODE_DISCONNECT = static_cast<int32_t>(0x14),
    __E_HAPI_PDG_EVENT_WORKITEM_SET_INT = static_cast<int32_t>(0x15),
    __E_HAPI_PDG_EVENT_WORKITEM_SET_FLOAT = static_cast<int32_t>(0x16),
    __E_HAPI_PDG_EVENT_WORKITEM_SET_STRING = static_cast<int32_t>(0x17),
    __E_HAPI_PDG_EVENT_WORKITEM_SET_FILE = static_cast<int32_t>(0x18),
    __E_HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT = static_cast<int32_t>(0x19),
    __E_HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY = static_cast<int32_t>(0x1a),
    __E_HAPI_PDG_EVENT_WORKITEM_MERGE = static_cast<int32_t>(0x1b),
    __E_HAPI_PDG_EVENT_WORKITEM_RESULT = static_cast<int32_t>(0x1c),
    __E_HAPI_PDG_EVENT_WORKITEM_PRIORITY = static_cast<int32_t>(0x1d),
    __E_HAPI_PDG_EVENT_COOK_START = static_cast<int32_t>(0x1e),
    __E_HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR = static_cast<int32_t>(0x1f),
    __E_HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR = static_cast<int32_t>(0x20),
    __E_HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE = static_cast<int32_t>(0x21),
    __E_HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED = static_cast<int32_t>(0x22),
    __E_HAPI_PDG_EVENT_ALL = static_cast<int32_t>(0x23),
    __E_HAPI_PDG_EVENT_LOG = static_cast<int32_t>(0x24),
    __E_HAPI_PDG_EVENT_SCHEDULER_ADDED = static_cast<int32_t>(0x25),
    __E_HAPI_PDG_EVENT_SCHEDULER_REMOVED = static_cast<int32_t>(0x26),
    __E_HAPI_PDG_EVENT_SET_SCHEDULER = static_cast<int32_t>(0x27),
    __E_HAPI_PDG_EVENT_SERVICE_MANAGER_ALL = static_cast<int32_t>(0x28),
    __E_HAPI_PDG_CONTEXT_EVENTS = static_cast<int32_t>(0x29),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_PDG_EventType_Unwrapped() const noexcept {
    return static_cast<__HAPI_PDG_EventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_EventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_EventType(int32_t value__) noexcept;

  /// @brief Field HAPI_PDG_CONTEXT_EVENTS value: I32(41)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_CONTEXT_EVENTS;

  /// @brief Field HAPI_PDG_EVENT_ALL value: I32(35)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_ALL;

  /// @brief Field HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED value: I32(34)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED;

  /// @brief Field HAPI_PDG_EVENT_COOK_COMPLETE value: I32(11)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_COMPLETE;

  /// @brief Field HAPI_PDG_EVENT_COOK_ERROR value: I32(9)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_ERROR;

  /// @brief Field HAPI_PDG_EVENT_COOK_START value: I32(30)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_START;

  /// @brief Field HAPI_PDG_EVENT_COOK_WARNING value: I32(10)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_WARNING;

  /// @brief Field HAPI_PDG_EVENT_DIRTY_ALL value: I32(14)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_ALL;

  /// @brief Field HAPI_PDG_EVENT_DIRTY_START value: I32(12)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_START;

  /// @brief Field HAPI_PDG_EVENT_DIRTY_STOP value: I32(13)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_STOP;

  /// @brief Field HAPI_PDG_EVENT_LOG value: I32(36)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_LOG;

  /// @brief Field HAPI_PDG_EVENT_NODE_CLEAR value: I32(8)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CLEAR;

  /// @brief Field HAPI_PDG_EVENT_NODE_CONNECT value: I32(19)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CONNECT;

  /// @brief Field HAPI_PDG_EVENT_NODE_CREATE value: I32(16)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CREATE;

  /// @brief Field HAPI_PDG_EVENT_NODE_DISCONNECT value: I32(20)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_DISCONNECT;

  /// @brief Field HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE value: I32(33)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE;

  /// @brief Field HAPI_PDG_EVENT_NODE_REMOVE value: I32(17)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_REMOVE;

  /// @brief Field HAPI_PDG_EVENT_NODE_RENAME value: I32(18)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_RENAME;

  /// @brief Field HAPI_PDG_EVENT_NULL value: I32(0)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NULL;

  /// @brief Field HAPI_PDG_EVENT_SCHEDULER_ADDED value: I32(37)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SCHEDULER_ADDED;

  /// @brief Field HAPI_PDG_EVENT_SCHEDULER_REMOVED value: I32(38)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SCHEDULER_REMOVED;

  /// @brief Field HAPI_PDG_EVENT_SERVICE_MANAGER_ALL value: I32(40)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SERVICE_MANAGER_ALL;

  /// @brief Field HAPI_PDG_EVENT_SET_SCHEDULER value: I32(39)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SET_SCHEDULER;

  /// @brief Field HAPI_PDG_EVENT_UI_SELECT value: I32(15)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_UI_SELECT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD value: I32(1)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_DEP value: I32(4)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_DEP;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_PARENT value: I32(6)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_PARENT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR value: I32(31)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_MERGE value: I32(27)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_MERGE;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_PRIORITY value: I32(29)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_PRIORITY;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE value: I32(2)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP value: I32(5)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT value: I32(7)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR value: I32(32)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_RESULT value: I32(28)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_RESULT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_FILE value: I32(24)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_FILE;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_FLOAT value: I32(22)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_FLOAT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY value: I32(26)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_INT value: I32(21)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_INT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT value: I32(25)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_STRING value: I32(23)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_STRING;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE value: I32(3)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11708 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_EventType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_EventType, "HoudiniEngineUnity", "HAPI_PDG_EventType");
