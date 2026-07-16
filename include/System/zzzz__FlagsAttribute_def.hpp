#pragma once
// IWYU pragma private; include "System/FlagsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(FlagsAttribute)
// Forward declare root types
namespace System {
class FlagsAttribute;
}
// Write type traits
MARK_REF_T(::System::FlagsAttribute*);
DEFINE_IL2CPP_CLASS(::System::FlagsAttribute*, "System", "FlagsAttribute");
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.FlagsAttribute
class CORDL_TYPE FlagsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::FlagsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5c2e530, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlagsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlagsAttribute(FlagsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlagsAttribute(FlagsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::FlagsAttribute) == 0x10, "Size mismatch!");

} // namespace System
