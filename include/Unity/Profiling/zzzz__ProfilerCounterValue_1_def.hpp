#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerCounterValue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilerCounterValue_1)
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerCounterOptions;
}
namespace Unity::Profiling {
struct ProfilerMarkerDataUnit;
}
// Forward declare root types
namespace Unity::Profiling {
template <typename T> struct ProfilerCounterValue_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Profiling::ProfilerCounterValue_1);
// Dependencies
namespace Unity::Profiling {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Profiling.ProfilerCounterValue`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerCounterValue_1 {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Method Sample, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sample();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit, ::Unity::Profiling::ProfilerCounterOptions counterOptions);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit, ::Unity::Profiling::ProfilerCounterOptions counterOptions);

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerCounterValue_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23053 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Profiling::ProfilerCounterValue_1, "Unity.Profiling", "ProfilerCounterValue`1");
