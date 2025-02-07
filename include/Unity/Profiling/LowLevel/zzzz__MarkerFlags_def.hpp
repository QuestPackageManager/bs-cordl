#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/MarkerFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkerFlags)
// Forward declare root types
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::MarkerFlags);
// Dependencies
namespace Unity::Profiling::LowLevel {
// Is value type: true
// CS Name: Unity.Profiling.LowLevel.MarkerFlags
struct CORDL_TYPE MarkerFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __MarkerFlags_Unwrapped
  enum struct __MarkerFlags_Unwrapped : uint16_t {
    __E_Default = static_cast<uint16_t>(0x0u),
    __E_Script = static_cast<uint16_t>(0x2u),
    __E_ScriptInvoke = static_cast<uint16_t>(0x20u),
    __E_ScriptDeepProfiler = static_cast<uint16_t>(0x40u),
    __E_AvailabilityEditor = static_cast<uint16_t>(0x4u),
    __E_AvailabilityNonDevelopment = static_cast<uint16_t>(0x8u),
    __E_Warning = static_cast<uint16_t>(0x10u),
    __E_Counter = static_cast<uint16_t>(0x80u),
    __E_SampleGPU = static_cast<uint16_t>(0x100u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MarkerFlags_Unwrapped() const noexcept {
    return static_cast<__MarkerFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkerFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr MarkerFlags(uint16_t value__) noexcept;

  /// @brief Field AvailabilityEditor value: U16(4)
  static ::Unity::Profiling::LowLevel::MarkerFlags const AvailabilityEditor;

  /// @brief Field AvailabilityNonDevelopment value: U16(8)
  static ::Unity::Profiling::LowLevel::MarkerFlags const AvailabilityNonDevelopment;

  /// @brief Field Counter value: U16(128)
  static ::Unity::Profiling::LowLevel::MarkerFlags const Counter;

  /// @brief Field Default value: U16(0)
  static ::Unity::Profiling::LowLevel::MarkerFlags const Default;

  /// @brief Field SampleGPU value: U16(256)
  static ::Unity::Profiling::LowLevel::MarkerFlags const SampleGPU;

  /// @brief Field Script value: U16(2)
  static ::Unity::Profiling::LowLevel::MarkerFlags const Script;

  /// @brief Field ScriptDeepProfiler value: U16(64)
  static ::Unity::Profiling::LowLevel::MarkerFlags const ScriptDeepProfiler;

  /// @brief Field ScriptInvoke value: U16(32)
  static ::Unity::Profiling::LowLevel::MarkerFlags const ScriptInvoke;

  /// @brief Field Warning value: U16(16)
  static ::Unity::Profiling::LowLevel::MarkerFlags const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::LowLevel::MarkerFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::MarkerFlags, 0x2>, "Size mismatch!");

} // namespace Unity::Profiling::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::MarkerFlags, "Unity.Profiling.LowLevel", "MarkerFlags");
