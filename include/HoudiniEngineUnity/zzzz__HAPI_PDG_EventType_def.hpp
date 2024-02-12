#pragma once
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
// Type: HoudiniEngineUnity::HAPI_PDG_EventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9515))
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_EventType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_EventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_EventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_PDG_EVENT_NULL value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NULL;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_DEP value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_DEP;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_PARENT value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_PARENT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT value: static_cast<int32_t>(0x7)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT;

  /// @brief Field HAPI_PDG_EVENT_NODE_CLEAR value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CLEAR;

  /// @brief Field HAPI_PDG_EVENT_COOK_ERROR value: static_cast<int32_t>(0x9)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_ERROR;

  /// @brief Field HAPI_PDG_EVENT_COOK_WARNING value: static_cast<int32_t>(0xa)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_WARNING;

  /// @brief Field HAPI_PDG_EVENT_COOK_COMPLETE value: static_cast<int32_t>(0xb)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_COMPLETE;

  /// @brief Field HAPI_PDG_EVENT_DIRTY_START value: static_cast<int32_t>(0xc)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_START;

  /// @brief Field HAPI_PDG_EVENT_DIRTY_STOP value: static_cast<int32_t>(0xd)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_STOP;

  /// @brief Field HAPI_PDG_EVENT_DIRTY_ALL value: static_cast<int32_t>(0xe)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_ALL;

  /// @brief Field HAPI_PDG_EVENT_UI_SELECT value: static_cast<int32_t>(0xf)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_UI_SELECT;

  /// @brief Field HAPI_PDG_EVENT_NODE_CREATE value: static_cast<int32_t>(0x10)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CREATE;

  /// @brief Field HAPI_PDG_EVENT_NODE_REMOVE value: static_cast<int32_t>(0x11)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_REMOVE;

  /// @brief Field HAPI_PDG_EVENT_NODE_RENAME value: static_cast<int32_t>(0x12)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_RENAME;

  /// @brief Field HAPI_PDG_EVENT_NODE_CONNECT value: static_cast<int32_t>(0x13)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CONNECT;

  /// @brief Field HAPI_PDG_EVENT_NODE_DISCONNECT value: static_cast<int32_t>(0x14)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_DISCONNECT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_INT value: static_cast<int32_t>(0x15)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_INT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_FLOAT value: static_cast<int32_t>(0x16)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_FLOAT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_STRING value: static_cast<int32_t>(0x17)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_STRING;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_FILE value: static_cast<int32_t>(0x18)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_FILE;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT value: static_cast<int32_t>(0x19)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY value: static_cast<int32_t>(0x1a)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_MERGE value: static_cast<int32_t>(0x1b)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_MERGE;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_RESULT value: static_cast<int32_t>(0x1c)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_RESULT;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_PRIORITY value: static_cast<int32_t>(0x1d)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_PRIORITY;

  /// @brief Field HAPI_PDG_EVENT_COOK_START value: static_cast<int32_t>(0x1e)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_START;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR value: static_cast<int32_t>(0x1f)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR;

  /// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR value: static_cast<int32_t>(0x20)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR;

  /// @brief Field HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE value: static_cast<int32_t>(0x21)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE;

  /// @brief Field HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED value: static_cast<int32_t>(0x22)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED;

  /// @brief Field HAPI_PDG_EVENT_ALL value: static_cast<int32_t>(0x23)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_ALL;

  /// @brief Field HAPI_PDG_EVENT_LOG value: static_cast<int32_t>(0x24)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_LOG;

  /// @brief Field HAPI_PDG_EVENT_SCHEDULER_ADDED value: static_cast<int32_t>(0x25)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SCHEDULER_ADDED;

  /// @brief Field HAPI_PDG_EVENT_SCHEDULER_REMOVED value: static_cast<int32_t>(0x26)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SCHEDULER_REMOVED;

  /// @brief Field HAPI_PDG_EVENT_SET_SCHEDULER value: static_cast<int32_t>(0x27)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SET_SCHEDULER;

  /// @brief Field HAPI_PDG_EVENT_SERVICE_MANAGER_ALL value: static_cast<int32_t>(0x28)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SERVICE_MANAGER_ALL;

  /// @brief Field HAPI_PDG_CONTEXT_EVENTS value: static_cast<int32_t>(0x29)
  static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_CONTEXT_EVENTS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_EventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_EventType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_EventType, "HoudiniEngineUnity", "HAPI_PDG_EventType");
