#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarkerExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerMarkerExtension)
namespace Unity::Profiling {
struct ProfilerMarker;
}
// Forward declare root types
namespace Unity::Profiling {
class ProfilerMarkerExtension;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Profiling::ProfilerMarkerExtension);
// Dependencies System.Object
namespace Unity::Profiling {
// Is value type: false
// CS Name: Unity.Profiling.ProfilerMarkerExtension
class CORDL_TYPE ProfilerMarkerExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method Begin, addr 0x658c17c, size 0xb0, virtual false, abstract: false, final false
  static inline void Begin(::Unity::Profiling::ProfilerMarker marker, ::StringW metadata);

  /// @brief Method Begin, addr 0x658c0b8, size 0xc4, virtual false, abstract: false, final false
  static inline void Begin(::Unity::Profiling::ProfilerMarker marker, double_t metadata);

  /// @brief Method Begin, addr 0x658bff4, size 0xc4, virtual false, abstract: false, final false
  static inline void Begin(::Unity::Profiling::ProfilerMarker marker, float_t metadata);

  /// @brief Method Begin, addr 0x658bce4, size 0xc4, virtual false, abstract: false, final false
  static inline void Begin(::Unity::Profiling::ProfilerMarker marker, int32_t metadata);

  /// @brief Method Begin, addr 0x658be6c, size 0xc4, virtual false, abstract: false, final false
  static inline void Begin(::Unity::Profiling::ProfilerMarker marker, int64_t metadata);

  /// @brief Method Begin, addr 0x658bda8, size 0xc4, virtual false, abstract: false, final false
  static inline void Begin(::Unity::Profiling::ProfilerMarker marker, uint32_t metadata);

  /// @brief Method Begin, addr 0x658bf30, size 0xc4, virtual false, abstract: false, final false
  static inline void Begin(::Unity::Profiling::ProfilerMarker marker, uint64_t metadata);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarkerExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilerMarkerExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerMarkerExtension(ProfilerMarkerExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerMarkerExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerMarkerExtension(ProfilerMarkerExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerMarkerExtension, 0x10>, "Size mismatch!");

} // namespace Unity::Profiling
NEED_NO_BOX(::Unity::Profiling::ProfilerMarkerExtension);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerMarkerExtension*, "Unity.Profiling", "ProfilerMarkerExtension");
