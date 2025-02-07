#pragma once
// IWYU pragma private; include "Unity/Profiling/IgnoredByDeepProfilerAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IgnoredByDeepProfilerAttribute)
// Forward declare root types
namespace Unity::Profiling {
class IgnoredByDeepProfilerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Profiling::IgnoredByDeepProfilerAttribute);
// Dependencies System.Attribute
namespace Unity::Profiling {
// Is value type: false
// CS Name: Unity.Profiling.IgnoredByDeepProfilerAttribute
class CORDL_TYPE IgnoredByDeepProfilerAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Profiling::IgnoredByDeepProfilerAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4863a90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoredByDeepProfilerAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoredByDeepProfilerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoredByDeepProfilerAttribute(IgnoredByDeepProfilerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoredByDeepProfilerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoredByDeepProfilerAttribute(IgnoredByDeepProfilerAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10560 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::IgnoredByDeepProfilerAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Profiling
NEED_NO_BOX(::Unity::Profiling::IgnoredByDeepProfilerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::IgnoredByDeepProfilerAttribute*, "Unity.Profiling", "IgnoredByDeepProfilerAttribute");
