#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilerMarker)
namespace System {
struct IntPtr;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerMarker_AutoScope;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace Unity::Profiling {
struct ProfilerMarker_AutoScope;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerMarker);
MARK_VAL_T(::Unity::Profiling::ProfilerMarker_AutoScope);
// Dependencies System.IDisposable, System.IntPtr
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker/AutoScope
struct CORDL_TYPE ProfilerMarker_AutoScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4860758, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x48606bc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr markerPtr);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarker_AutoScope();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr ProfilerMarker_AutoScope(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10564 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerMarker_AutoScope, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerMarker_AutoScope, 0x8>, "Size mismatch!");

} // namespace Unity::Profiling
// Dependencies System.IntPtr
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker
struct CORDL_TYPE ProfilerMarker {
public:
  // Declarations
  using AutoScope = ::Unity::Profiling::ProfilerMarker_AutoScope;

  /// @brief Method Auto, addr 0x4860664, size 0x58, virtual false, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker_AutoScope Auto();

  /// @brief Method .ctor, addr 0x4860604, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name);

  /// @brief Method .ctor, addr 0x4860554, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarker();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr ProfilerMarker(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10565 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerMarker, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerMarker, 0x8>, "Size mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerMarker, "Unity.Profiling", "ProfilerMarker");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerMarker_AutoScope, "Unity.Profiling", "ProfilerMarker/AutoScope");
