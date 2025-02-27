#pragma once
// IWYU pragma private; include "Zenject/IValidatable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IValidatable)
// Forward declare root types
namespace Zenject {
class IValidatable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IValidatable);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IValidatable
class CORDL_TYPE IValidatable {
public:
  // Declarations
  /// @brief Method Validate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Validate();

  // Ctor Parameters [CppParam { name: "", ty: "IValidatable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValidatable(IValidatable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IValidatable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IValidatable*, "Zenject", "IValidatable");
