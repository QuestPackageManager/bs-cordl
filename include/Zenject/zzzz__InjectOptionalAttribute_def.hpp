#pragma once
// IWYU pragma private; include "Zenject\InjectOptionalAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
CORDL_MODULE_EXPORT(InjectOptionalAttribute)
// Forward declare root types
namespace Zenject {
class InjectOptionalAttribute;
}
// Write type traits
MARK_REF_T(::Zenject::InjectOptionalAttribute*);
DEFINE_IL2CPP_CLASS(::Zenject::InjectOptionalAttribute*, "Zenject", "InjectOptionalAttribute");
// Dependencies Zenject.InjectAttributeBase
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectOptionalAttribute
class CORDL_TYPE InjectOptionalAttribute : public ::Zenject::InjectAttributeBase {
public:
  // Declarations
  static inline ::Zenject::InjectOptionalAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3d784, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectOptionalAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectOptionalAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectOptionalAttribute(InjectOptionalAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectOptionalAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectOptionalAttribute(InjectOptionalAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22512 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::InjectOptionalAttribute) == 0x28, "Size mismatch!");

} // namespace Zenject
