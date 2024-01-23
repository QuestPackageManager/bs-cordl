#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_WorkitemState)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemState;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_WorkitemState);
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9724))
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_WorkitemState
struct CORDL_TYPE HAPI_PDG_WorkitemState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_PDG_WorkitemState_Unwrapped
  enum struct __HAPI_PDG_WorkitemState_Unwrapped : int32_t {
    __E_HAPI_PDG_WORKITEM_UNDEFINED = static_cast<int32_t>(0x0),
    __E_HAPI_PDG_WORKITEM_UNCOOKED = static_cast<int32_t>(0x1),
    __E_HAPI_PDG_WORKITEM_WAITING = static_cast<int32_t>(0x2),
    __E_HAPI_PDG_WORKITEM_SCHEDULED = static_cast<int32_t>(0x3),
    __E_HAPI_PDG_WORKITEM_COOKING = static_cast<int32_t>(0x4),
    __E_HAPI_PDG_WORKITEM_COOKED_SUCCESS = static_cast<int32_t>(0x5),
    __E_HAPI_PDG_WORKITEM_COOKED_CACHE = static_cast<int32_t>(0x6),
    __E_HAPI_PDG_WORKITEM_COOKED_FAIL = static_cast<int32_t>(0x7),
    __E_HAPI_PDG_WORKITEM_COOKED_CANCEL = static_cast<int32_t>(0x8),
    __E_HAPI_PDG_WORKITEM_DIRTY = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_PDG_WorkitemState_Unwrapped() const noexcept {
    return static_cast<__HAPI_PDG_WorkitemState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_WorkitemState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_WorkitemState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_PDG_WORKITEM_UNDEFINED value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_UNDEFINED;

  /// @brief Field HAPI_PDG_WORKITEM_UNCOOKED value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_UNCOOKED;

  /// @brief Field HAPI_PDG_WORKITEM_WAITING value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_WAITING;

  /// @brief Field HAPI_PDG_WORKITEM_SCHEDULED value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_SCHEDULED;

  /// @brief Field HAPI_PDG_WORKITEM_COOKING value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKING;

  /// @brief Field HAPI_PDG_WORKITEM_COOKED_SUCCESS value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_SUCCESS;

  /// @brief Field HAPI_PDG_WORKITEM_COOKED_CACHE value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_CACHE;

  /// @brief Field HAPI_PDG_WORKITEM_COOKED_FAIL value: static_cast<int32_t>(0x7)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_FAIL;

  /// @brief Field HAPI_PDG_WORKITEM_COOKED_CANCEL value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_CANCEL;

  /// @brief Field HAPI_PDG_WORKITEM_DIRTY value: static_cast<int32_t>(0x9)
  static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_DIRTY;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_WorkitemState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemState, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemState, "HoudiniEngineUnity", "HAPI_PDG_WorkitemState");
