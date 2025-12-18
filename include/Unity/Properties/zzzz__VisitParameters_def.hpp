#pragma once
// IWYU pragma private; include "Unity/Properties/VisitParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__VisitExceptionKind_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VisitParameters)
namespace Unity::Properties {
struct VisitExceptionKind;
}
// Forward declare root types
namespace Unity::Properties {
struct VisitParameters;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::VisitParameters);
// Dependencies Unity.Properties.VisitExceptionKind
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.VisitParameters
struct CORDL_TYPE VisitParameters {
public:
  // Declarations
  __declspec(property(get = get_IgnoreExceptions)) ::Unity::Properties::VisitExceptionKind IgnoreExceptions;

  /// @brief Method get_IgnoreExceptions, addr 0x69d2d40, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Properties::VisitExceptionKind get_IgnoreExceptions();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisitParameters();

  // Ctor Parameters [CppParam { name: "_IgnoreExceptions_k__BackingField", ty: "::Unity::Properties::VisitExceptionKind", modifiers: "", def_value: None }]
  constexpr VisitParameters(::Unity::Properties::VisitExceptionKind _IgnoreExceptions_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19322 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field <IgnoreExceptions>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::Unity::Properties::VisitExceptionKind _IgnoreExceptions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::VisitParameters, _IgnoreExceptions_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::VisitParameters, 0x4>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::VisitParameters, "Unity.Properties", "VisitParameters");
