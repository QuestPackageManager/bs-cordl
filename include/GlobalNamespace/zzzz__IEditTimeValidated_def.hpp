#pragma once
// IWYU pragma private; include "GlobalNamespace/IEditTimeValidated.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEditTimeValidated)
// Forward declare root types
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IEditTimeValidated);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IEditTimeValidated
class CORDL_TYPE IEditTimeValidated {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IEditTimeValidated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEditTimeValidated(IEditTimeValidated const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20017 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IEditTimeValidated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IEditTimeValidated*, "", "IEditTimeValidated");
