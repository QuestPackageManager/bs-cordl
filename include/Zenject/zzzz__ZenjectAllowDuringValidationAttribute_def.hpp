#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ZenjectAllowDuringValidationAttribute)
// Forward declare root types
namespace Zenject {
class ZenjectAllowDuringValidationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenjectAllowDuringValidationAttribute);
// Type: Zenject::ZenjectAllowDuringValidationAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ZenjectAllowDuringValidationAttribute*
class CORDL_TYPE ZenjectAllowDuringValidationAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Zenject::ZenjectAllowDuringValidationAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3022a70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectAllowDuringValidationAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectAllowDuringValidationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectAllowDuringValidationAttribute(ZenjectAllowDuringValidationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectAllowDuringValidationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectAllowDuringValidationAttribute(ZenjectAllowDuringValidationAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectAllowDuringValidationAttribute, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectAllowDuringValidationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectAllowDuringValidationAttribute*, "Zenject", "ZenjectAllowDuringValidationAttribute");
