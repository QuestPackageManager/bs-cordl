#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorderOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorderOptions)
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerRecorderOptions;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerRecorderOptions);
// Dependencies
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorderOptions
struct CORDL_TYPE ProfilerRecorderOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProfilerRecorderOptions_Unwrapped
  enum struct __ProfilerRecorderOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_StartImmediately = static_cast<int32_t>(0x1),
    __E_KeepAliveDuringDomainReload = static_cast<int32_t>(0x2),
    __E_CollectOnlyOnCurrentThread = static_cast<int32_t>(0x4),
    __E_WrapAroundWhenCapacityReached = static_cast<int32_t>(0x8),
    __E_SumAllSamplesInFrame = static_cast<int32_t>(0x10),
    __E_GpuRecorder = static_cast<int32_t>(0x40),
    __E_Default = static_cast<int32_t>(0x18),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProfilerRecorderOptions_Unwrapped() const noexcept {
    return static_cast<__ProfilerRecorderOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorderOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProfilerRecorderOptions(int32_t value__) noexcept;

  /// @brief Field CollectOnlyOnCurrentThread value: I32(4)
  static ::Unity::Profiling::ProfilerRecorderOptions const CollectOnlyOnCurrentThread;

  /// @brief Field Default value: I32(24)
  static ::Unity::Profiling::ProfilerRecorderOptions const Default;

  /// @brief Field GpuRecorder value: I32(64)
  static ::Unity::Profiling::ProfilerRecorderOptions const GpuRecorder;

  /// @brief Field KeepAliveDuringDomainReload value: I32(2)
  static ::Unity::Profiling::ProfilerRecorderOptions const KeepAliveDuringDomainReload;

  /// @brief Field None value: I32(0)
  static ::Unity::Profiling::ProfilerRecorderOptions const None;

  /// @brief Field StartImmediately value: I32(1)
  static ::Unity::Profiling::ProfilerRecorderOptions const StartImmediately;

  /// @brief Field SumAllSamplesInFrame value: I32(16)
  static ::Unity::Profiling::ProfilerRecorderOptions const SumAllSamplesInFrame;

  /// @brief Field WrapAroundWhenCapacityReached value: I32(8)
  static ::Unity::Profiling::ProfilerRecorderOptions const WrapAroundWhenCapacityReached;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorderOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerRecorderOptions, 0x4>, "Size mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerRecorderOptions, "Unity.Profiling", "ProfilerRecorderOptions");
