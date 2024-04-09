#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
CORDL_MODULE_EXPORT(InjectLocalAttribute)
// Forward declare root types
namespace Zenject {
class InjectLocalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectLocalAttribute);
// Type: Zenject::InjectLocalAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::InjectLocalAttribute*
class CORDL_TYPE InjectLocalAttribute : public ::Zenject::InjectAttributeBase {
public:
  // Declarations
  static inline ::Zenject::InjectLocalAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3406728, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectLocalAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectLocalAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectLocalAttribute(InjectLocalAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectLocalAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectLocalAttribute(InjectLocalAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectLocalAttribute, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectLocalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectLocalAttribute*, "Zenject", "InjectLocalAttribute");
