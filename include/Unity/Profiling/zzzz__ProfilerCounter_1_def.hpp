#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerCounter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilerCounter_1)
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerMarkerDataUnit;
}
// Forward declare root types
namespace Unity::Profiling {
template <typename T> struct ProfilerCounter_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Profiling::ProfilerCounter_1);
// Dependencies
namespace Unity::Profiling {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Profiling.ProfilerCounter`1<T>
struct CORDL_TYPE ProfilerCounter_1 {
public:
  // Declarations
  /// @brief Method Sample, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sample(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerCounter_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23086 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Profiling::ProfilerCounter_1, "Unity.Profiling", "ProfilerCounter`1");
