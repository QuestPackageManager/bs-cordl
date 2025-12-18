#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorderSample.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorderSample)
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerRecorderSample;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerRecorderSample);
// Dependencies
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorderSample
struct CORDL_TYPE ProfilerRecorderSample {
public:
  // Declarations
  __declspec(property(get = get_Count)) int64_t Count;

  /// @brief Method get_Count, addr 0x6890a8c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Count();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorderSample();

  // Ctor Parameters [CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "refValue",
  // ty: "int64_t", modifiers: "", def_value: None }]
  constexpr ProfilerRecorderSample(int64_t value, int64_t count, int64_t refValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9927 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  int64_t value;

  /// @brief Field count, offset: 0x8, size: 0x8, def value: None
  int64_t count;

  /// @brief Field refValue, offset: 0x10, size: 0x8, def value: None
  int64_t refValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorderSample, value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Profiling::ProfilerRecorderSample, count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Profiling::ProfilerRecorderSample, refValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerRecorderSample, 0x18>, "Size mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerRecorderSample, "Unity.Profiling", "ProfilerRecorderSample");
