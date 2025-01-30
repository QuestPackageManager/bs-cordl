#pragma once
// IWYU pragma private; include "Zenject/InjectAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
CORDL_MODULE_EXPORT(InjectAttribute)
// Forward declare root types
namespace Zenject {
class InjectAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectAttribute);
// Dependencies Zenject.InjectAttributeBase
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectAttribute
class CORDL_TYPE InjectAttribute : public ::Zenject::InjectAttributeBase {
public:
  // Declarations
  static inline ::Zenject::InjectAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4af3368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectAttribute(InjectAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectAttribute(InjectAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectAttribute, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectAttribute*, "Zenject", "InjectAttribute");
