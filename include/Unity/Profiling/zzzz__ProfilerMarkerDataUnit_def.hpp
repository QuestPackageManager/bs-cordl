#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarkerDataUnit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerMarkerDataUnit)
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerMarkerDataUnit;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerMarkerDataUnit);
// Dependencies
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarkerDataUnit
struct CORDL_TYPE ProfilerMarkerDataUnit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ProfilerMarkerDataUnit_Unwrapped
  enum struct __ProfilerMarkerDataUnit_Unwrapped : uint8_t {
    __E_Undefined = static_cast<uint8_t>(0x0u),
    __E_TimeNanoseconds = static_cast<uint8_t>(0x1u),
    __E_Bytes = static_cast<uint8_t>(0x2u),
    __E_Count = static_cast<uint8_t>(0x3u),
    __E_Percent = static_cast<uint8_t>(0x4u),
    __E_FrequencyHz = static_cast<uint8_t>(0x5u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProfilerMarkerDataUnit_Unwrapped() const noexcept {
    return static_cast<__ProfilerMarkerDataUnit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarkerDataUnit();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ProfilerMarkerDataUnit(uint8_t value__) noexcept;

  /// @brief Field Bytes value: U8(2)
  static ::Unity::Profiling::ProfilerMarkerDataUnit const Bytes;

  /// @brief Field Count value: U8(3)
  static ::Unity::Profiling::ProfilerMarkerDataUnit const Count;

  /// @brief Field FrequencyHz value: U8(5)
  static ::Unity::Profiling::ProfilerMarkerDataUnit const FrequencyHz;

  /// @brief Field Percent value: U8(4)
  static ::Unity::Profiling::ProfilerMarkerDataUnit const Percent;

  /// @brief Field TimeNanoseconds value: U8(1)
  static ::Unity::Profiling::ProfilerMarkerDataUnit const TimeNanoseconds;

  /// @brief Field Undefined value: U8(0)
  static ::Unity::Profiling::ProfilerMarkerDataUnit const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9920 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerMarkerDataUnit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerMarkerDataUnit, 0x1>, "Size mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerMarkerDataUnit, "Unity.Profiling", "ProfilerMarkerDataUnit");
