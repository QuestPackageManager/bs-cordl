#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IFormattable)
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class IFormattable;
}
// Write type traits
MARK_REF_PTR_T(::System::IFormattable);
// Type: System::IFormattable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2416))
// CS Name: ::System::IFormattable*
class CORDL_TYPE IFormattable {
public:
  // Declarations
  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "", ty: "IFormattable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFormattable(IFormattable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFormattable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFormattable(IFormattable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IFormattable);
DEFINE_IL2CPP_ARG_TYPE(::System::IFormattable*, "System", "IFormattable");
