#pragma once
// IWYU pragma private; include "JetBrains/Annotations/TerminatesProgramAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TerminatesProgramAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class TerminatesProgramAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::TerminatesProgramAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::TerminatesProgramAttribute*, "JetBrains.Annotations", "TerminatesProgramAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.TerminatesProgramAttribute
class CORDL_TYPE TerminatesProgramAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::TerminatesProgramAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3ac5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerminatesProgramAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerminatesProgramAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerminatesProgramAttribute(TerminatesProgramAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerminatesProgramAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerminatesProgramAttribute(TerminatesProgramAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::TerminatesProgramAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
