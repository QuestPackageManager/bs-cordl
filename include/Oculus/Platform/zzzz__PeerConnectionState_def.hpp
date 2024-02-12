#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerConnectionState)
// Forward declare root types
namespace Oculus::Platform {
struct PeerConnectionState;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PeerConnectionState);
// Type: Oculus.Platform::PeerConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13266))
// CS Name: ::Oculus.Platform::PeerConnectionState
struct CORDL_TYPE PeerConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PeerConnectionState_Unwrapped
  enum struct __PeerConnectionState_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Connected = static_cast<int32_t>(0x1),
    __E_Timeout = static_cast<int32_t>(0x2),
    __E_Closed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PeerConnectionState_Unwrapped() const noexcept {
    return static_cast<__PeerConnectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PeerConnectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PeerConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::PeerConnectionState const Unknown;

  /// @brief Field Connected value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::PeerConnectionState const Connected;

  /// @brief Field Timeout value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::PeerConnectionState const Timeout;

  /// @brief Field Closed value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::PeerConnectionState const Closed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PeerConnectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::PeerConnectionState, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PeerConnectionState, "Oculus.Platform", "PeerConnectionState");
