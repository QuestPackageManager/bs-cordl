#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerUtility)
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerUtility;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerUtility);
// Dependencies
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerUtility
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerUtility {
public:
  // Declarations
  /// @brief Method GetProfilerMarkerDataType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline uint8_t GetProfilerMarkerDataType();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerUtility();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23061 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerUtility, 0x1>, "Size mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerUtility, "Unity.Profiling", "ProfilerUtility");
