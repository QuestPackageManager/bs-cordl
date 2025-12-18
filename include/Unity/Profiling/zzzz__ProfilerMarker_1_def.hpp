#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilerMarker_1)
namespace System {
class IDisposable;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
template <typename TP1> struct ProfilerMarker_1_AutoScope;
}
// Forward declare root types
namespace Unity::Profiling {
template <typename TP1> struct ProfilerMarker_1;
}
namespace Unity::Profiling {
template <typename TP1> struct ProfilerMarker_1_AutoScope;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Profiling::ProfilerMarker_1);
MARK_GEN_VAL_T(::Unity::Profiling::ProfilerMarker_1_AutoScope);
// Dependencies
namespace Unity::Profiling {
// cpp template
template <typename TP1>
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker`1/AutoScope<TP1>
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerMarker_1_AutoScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerMarker_1<TP1> marker, TP1 p1);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarker_1_AutoScope();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23088 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Profiling
// Dependencies
namespace Unity::Profiling {
// cpp template
template <typename TP1>
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker`1<TP1>
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerMarker_1 {
public:
  // Declarations
  using AutoScope = ::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>;

  /// @brief Method Auto, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1> Auto(TP1 p1);

  /// @brief Method Begin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Begin(TP1 p1);

  /// @brief Method End, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void End();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::StringW param1Name);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW param1Name);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarker_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23089 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Profiling::ProfilerMarker_1, "Unity.Profiling", "ProfilerMarker`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Profiling::ProfilerMarker_1_AutoScope, "Unity.Profiling", "ProfilerMarker`1/AutoScope");
