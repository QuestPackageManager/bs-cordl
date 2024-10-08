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
// Type: ::IEditTimeValidated
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IEditTimeValidated*
class CORDL_TYPE IEditTimeValidated {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IEditTimeValidated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEditTimeValidated(IEditTimeValidated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEditTimeValidated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEditTimeValidated(IEditTimeValidated const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16346 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IEditTimeValidated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IEditTimeValidated*, "", "IEditTimeValidated");
