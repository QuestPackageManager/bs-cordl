#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_State)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_State;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_State);
// Type: HoudiniEngineUnity::HAPI_PDG_State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_State
struct CORDL_TYPE HAPI_PDG_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_PDG_State_Unwrapped
  enum struct __HAPI_PDG_State_Unwrapped : int32_t {
    __E_HAPI_PDG_STATE_READY = static_cast<int32_t>(0x0),
    __E_HAPI_PDG_STATE_COOKING = static_cast<int32_t>(0x1),
    __E_HAPI_PDG_STATE_MAX = static_cast<int32_t>(0x2),
    __E_HAPI_PDG_STATE_MAX_READY_STATE = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_PDG_State_Unwrapped() const noexcept {
    return static_cast<__HAPI_PDG_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__HAPI_PDG_State_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_PDG_STATE_COOKING value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_COOKING;

  /// @brief Field HAPI_PDG_STATE_MAX value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_MAX;

  /// @brief Field HAPI_PDG_STATE_MAX_READY_STATE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_MAX_READY_STATE;

  /// @brief Field HAPI_PDG_STATE_READY value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_READY;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_State, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_State, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_State, "HoudiniEngineUnity", "HAPI_PDG_State");
