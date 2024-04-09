#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerMarker)
namespace System {
class IDisposable;
}
namespace Unity::Profiling {
struct __ProfilerMarker__AutoScope;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace Unity::Profiling {
struct __ProfilerMarker__AutoScope;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerMarker);
MARK_VAL_T(::Unity::Profiling::__ProfilerMarker__AutoScope);
// Type: ::AutoScope
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::ProfilerMarker::AutoScope
struct CORDL_TYPE __ProfilerMarker__AutoScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x31cb4fc, size 0x90, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x31cb420, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(void* markerPtr);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfilerMarker__AutoScope();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: None }]
  constexpr __ProfilerMarker__AutoScope(void* m_Ptr) noexcept;

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  void* m_Ptr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::__ProfilerMarker__AutoScope, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::__ProfilerMarker__AutoScope, m_Ptr) == 0x0, "Offset mismatch!");

} // namespace Unity::Profiling
// Type: Unity.Profiling::ProfilerMarker
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::Unity.Profiling::ProfilerMarker
struct CORDL_TYPE ProfilerMarker {
public:
  // Declarations
  using AutoScope = ::Unity::Profiling::__ProfilerMarker__AutoScope;

  /// @brief Method Auto, addr 0x31cb398, size 0x88, virtual false, abstract: false, final false
  inline ::Unity::Profiling::__ProfilerMarker__AutoScope Auto();

  /// @brief Method .ctor, addr 0x31cb2e8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarker();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: None }]
  constexpr ProfilerMarker(void* m_Ptr) noexcept;

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  void* m_Ptr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerMarker, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::ProfilerMarker, m_Ptr) == 0x0, "Offset mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerMarker, "Unity.Profiling", "ProfilerMarker");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::__ProfilerMarker__AutoScope, "Unity.Profiling", "ProfilerMarker/AutoScope");
