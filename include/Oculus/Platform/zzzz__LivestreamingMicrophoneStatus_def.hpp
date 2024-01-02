#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingMicrophoneStatus)
// Forward declare root types
namespace Oculus::Platform {
struct LivestreamingMicrophoneStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LivestreamingMicrophoneStatus);
// Type: Oculus.Platform::LivestreamingMicrophoneStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13256))
// CS Name: ::Oculus.Platform::LivestreamingMicrophoneStatus
struct CORDL_TYPE LivestreamingMicrophoneStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LivestreamingMicrophoneStatus_Unwrapped
  enum struct __LivestreamingMicrophoneStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_MicrophoneOn = static_cast<int32_t>(0x1),
    __E_MicrophoneOff = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LivestreamingMicrophoneStatus_Unwrapped() const noexcept {
    return static_cast<__LivestreamingMicrophoneStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LivestreamingMicrophoneStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingMicrophoneStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::LivestreamingMicrophoneStatus const Unknown;

  /// @brief Field MicrophoneOn value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::LivestreamingMicrophoneStatus const MicrophoneOn;

  /// @brief Field MicrophoneOff value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::LivestreamingMicrophoneStatus const MicrophoneOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LivestreamingMicrophoneStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::LivestreamingMicrophoneStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LivestreamingMicrophoneStatus, "Oculus.Platform", "LivestreamingMicrophoneStatus");
