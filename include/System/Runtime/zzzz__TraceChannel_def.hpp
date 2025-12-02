#pragma once
// IWYU pragma private; include "System/Runtime/TraceChannel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceChannel)
// Forward declare root types
namespace System::Runtime {
struct TraceChannel;
}
// Write type traits
MARK_VAL_T(::System::Runtime::TraceChannel);
// Dependencies
namespace System::Runtime {
// Is value type: true
// CS Name: System.Runtime.TraceChannel
struct CORDL_TYPE TraceChannel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TraceChannel_Unwrapped
  enum struct __TraceChannel_Unwrapped : int32_t {
    __E_Admin = static_cast<int32_t>(0x10),
    __E_Operational = static_cast<int32_t>(0x11),
    __E_Analytic = static_cast<int32_t>(0x12),
    __E_Debug = static_cast<int32_t>(0x13),
    __E_Perf = static_cast<int32_t>(0x14),
    __E_Application = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TraceChannel_Unwrapped() const noexcept {
    return static_cast<__TraceChannel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceChannel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TraceChannel(int32_t value__) noexcept;

  /// @brief Field Admin value: I32(16)
  static ::System::Runtime::TraceChannel const Admin;

  /// @brief Field Analytic value: I32(18)
  static ::System::Runtime::TraceChannel const Analytic;

  /// @brief Field Application value: I32(9)
  static ::System::Runtime::TraceChannel const Application;

  /// @brief Field Debug value: I32(19)
  static ::System::Runtime::TraceChannel const Debug;

  /// @brief Field Operational value: I32(17)
  static ::System::Runtime::TraceChannel const Operational;

  /// @brief Field Perf value: I32(20)
  static ::System::Runtime::TraceChannel const Perf;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21087 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::TraceChannel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::TraceChannel, 0x4>, "Size mismatch!");

} // namespace System::Runtime
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::TraceChannel, "System.Runtime", "TraceChannel");
