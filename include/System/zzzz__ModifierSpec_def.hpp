#pragma once
// IWYU pragma private; include "System/ModifierSpec.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ModifierSpec)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ModifierSpec;
}
// Write type traits
MARK_REF_PTR_T(::System::ModifierSpec);
// Type: System::ModifierSpec
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ModifierSpec*
class CORDL_TYPE ModifierSpec {
public:
  // Declarations
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb);

  /// @brief Method Resolve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* Resolve(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "ModifierSpec", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModifierSpec(ModifierSpec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModifierSpec", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModifierSpec(ModifierSpec const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::ModifierSpec);
DEFINE_IL2CPP_ARG_TYPE(::System::ModifierSpec*, "System", "ModifierSpec");
