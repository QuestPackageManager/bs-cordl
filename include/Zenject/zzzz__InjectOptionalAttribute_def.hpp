#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
CORDL_MODULE_EXPORT(InjectOptionalAttribute)
// Forward declare root types
namespace Zenject {
class InjectOptionalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectOptionalAttribute);
// Type: Zenject::InjectOptionalAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::InjectOptionalAttribute*
class CORDL_TYPE InjectOptionalAttribute : public ::Zenject::InjectAttributeBase {
public:
  // Declarations
  static inline ::Zenject::InjectOptionalAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3409744, size 0x20, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectOptionalAttribute, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectOptionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectOptionalAttribute*, "Zenject", "InjectOptionalAttribute");
