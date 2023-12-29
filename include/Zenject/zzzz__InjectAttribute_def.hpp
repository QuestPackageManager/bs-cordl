#pragma once
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
// Type: Zenject::InjectAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15658))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15659))
// CS Name: ::Zenject::InjectAttribute*
class CORDL_TYPE InjectAttribute : public ::Zenject::InjectAttributeBase {
public:
  // Declarations
  static inline ::Zenject::InjectAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2d51a6c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectAttribute(InjectAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectAttribute(InjectAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectAttribute, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectAttribute*, "Zenject", "InjectAttribute");
