#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionConnectionState)
// Forward declare root types
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::SessionConnectionState);
// Type: HoudiniEngineUnity::SessionConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9782))
// CS Name: ::HoudiniEngineUnity::SessionConnectionState
struct CORDL_TYPE SessionConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SessionConnectionState_Unwrapped
  enum struct __SessionConnectionState_Unwrapped : int32_t {
    __E_NOT_CONNECTED = static_cast<int32_t>(0x0),
    __E_CONNECTED = static_cast<int32_t>(0x1),
    __E_FAILED_TO_CONNECT = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SessionConnectionState_Unwrapped() const noexcept {
    return static_cast<__SessionConnectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SessionConnectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SessionConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NOT_CONNECTED value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::SessionConnectionState const NOT_CONNECTED;

  /// @brief Field CONNECTED value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::SessionConnectionState const CONNECTED;

  /// @brief Field FAILED_TO_CONNECT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::SessionConnectionState const FAILED_TO_CONNECT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::SessionConnectionState, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::SessionConnectionState, "HoudiniEngineUnity", "SessionConnectionState");
