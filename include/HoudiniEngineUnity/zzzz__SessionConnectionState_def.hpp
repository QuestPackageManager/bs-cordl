#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/SessionConnectionState.hpp"
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
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.SessionConnectionState
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SessionConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SessionConnectionState(int32_t value__) noexcept;

  /// @brief Field CONNECTED value: I32(1)
  static ::HoudiniEngineUnity::SessionConnectionState const CONNECTED;

  /// @brief Field FAILED_TO_CONNECT value: I32(2)
  static ::HoudiniEngineUnity::SessionConnectionState const FAILED_TO_CONNECT;

  /// @brief Field NOT_CONNECTED value: I32(0)
  static ::HoudiniEngineUnity::SessionConnectionState const NOT_CONNECTED;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::SessionConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::SessionConnectionState, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::SessionConnectionState, "HoudiniEngineUnity", "SessionConnectionState");
