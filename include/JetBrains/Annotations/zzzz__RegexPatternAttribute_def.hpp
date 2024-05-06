#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RegexPatternAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RegexPatternAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RegexPatternAttribute);
// Type: JetBrains.Annotations::RegexPatternAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::RegexPatternAttribute*
class CORDL_TYPE RegexPatternAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::RegexPatternAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x360f3d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexPatternAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexPatternAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexPatternAttribute(RegexPatternAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexPatternAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexPatternAttribute(RegexPatternAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RegexPatternAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RegexPatternAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RegexPatternAttribute*, "JetBrains.Annotations", "RegexPatternAttribute");
