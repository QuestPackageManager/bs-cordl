#pragma once
// IWYU pragma private; include "JetBrains/Annotations/CanBeNullAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CanBeNullAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class CanBeNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::CanBeNullAttribute);
// Type: JetBrains.Annotations::CanBeNullAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::CanBeNullAttribute*
class CORDL_TYPE CanBeNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::CanBeNullAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x363a0b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanBeNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanBeNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanBeNullAttribute(CanBeNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanBeNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanBeNullAttribute(CanBeNullAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::CanBeNullAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::CanBeNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CanBeNullAttribute*, "JetBrains.Annotations", "CanBeNullAttribute");
