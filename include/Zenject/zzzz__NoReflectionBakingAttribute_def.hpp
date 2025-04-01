#pragma once
// IWYU pragma private; include "Zenject/NoReflectionBakingAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NoReflectionBakingAttribute)
// Forward declare root types
namespace Zenject {
class NoReflectionBakingAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NoReflectionBakingAttribute);
// Dependencies System.Attribute
namespace Zenject {
// Is value type: false
// CS Name: Zenject.NoReflectionBakingAttribute
class CORDL_TYPE NoReflectionBakingAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Zenject::NoReflectionBakingAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4aedd34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoReflectionBakingAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoReflectionBakingAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoReflectionBakingAttribute(NoReflectionBakingAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoReflectionBakingAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoReflectionBakingAttribute(NoReflectionBakingAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NoReflectionBakingAttribute, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NoReflectionBakingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NoReflectionBakingAttribute*, "Zenject", "NoReflectionBakingAttribute");
