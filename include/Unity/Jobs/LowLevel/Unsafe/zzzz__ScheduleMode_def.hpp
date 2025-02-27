#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/ScheduleMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduleMode)
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
struct ScheduleMode;
}
// Write type traits
MARK_VAL_T(::Unity::Jobs::LowLevel::Unsafe::ScheduleMode);
// Dependencies
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Jobs.LowLevel.Unsafe.ScheduleMode
struct CORDL_TYPE ScheduleMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScheduleMode_Unwrapped
  enum struct __ScheduleMode_Unwrapped : int32_t {
    __E_Run = static_cast<int32_t>(0x0),
    __E_Batched = static_cast<int32_t>(0x1),
    __E_Parallel = static_cast<int32_t>(0x1),
    __E_Single = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScheduleMode_Unwrapped() const noexcept {
    return static_cast<__ScheduleMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScheduleMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScheduleMode(int32_t value__) noexcept;

  /// @brief Field Batched value: I32(1)
  static ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Batched;

  /// @brief Field Parallel value: I32(1)
  static ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Parallel;

  /// @brief Field Run value: I32(0)
  static ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Run;

  /// @brief Field Single value: I32(2)
  static ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Single;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10556 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::ScheduleMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode, 0x4>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::ScheduleMode, "Unity.Jobs.LowLevel.Unsafe", "ScheduleMode");
