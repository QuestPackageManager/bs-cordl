#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(EmbeddedAttribute)
// Forward declare root types
namespace Microsoft::CodeAnalysis {
class EmbeddedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::CodeAnalysis::EmbeddedAttribute);
// Type: Microsoft.CodeAnalysis::EmbeddedAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::CodeAnalysis {
// Is value type: false
// CS Name: ::Microsoft.CodeAnalysis::EmbeddedAttribute*
class CORDL_TYPE EmbeddedAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Microsoft::CodeAnalysis::EmbeddedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x1061990, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmbeddedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmbeddedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmbeddedAttribute(EmbeddedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmbeddedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmbeddedAttribute(EmbeddedAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::CodeAnalysis::EmbeddedAttribute, 0x10>, "Size mismatch!");

} // namespace Microsoft::CodeAnalysis
NEED_NO_BOX(::Microsoft::CodeAnalysis::EmbeddedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::CodeAnalysis::EmbeddedAttribute*, "Microsoft.CodeAnalysis", "EmbeddedAttribute");
