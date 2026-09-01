#pragma once
// IWYU pragma private; include "System\CLSCompliantAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CLSCompliantAttribute)
// Forward declare root types
namespace System {
class CLSCompliantAttribute;
}
// Write type traits
MARK_REF_T(::System::CLSCompliantAttribute*);
DEFINE_IL2CPP_CLASS(::System::CLSCompliantAttribute*, "System", "CLSCompliantAttribute");
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.CLSCompliantAttribute
class CORDL_TYPE CLSCompliantAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _compliant, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__compliant, put = __cordl_internal_set__compliant)) bool _compliant;

  static inline ::System::CLSCompliantAttribute* New_ctor(bool isCompliant);

  constexpr bool const& __cordl_internal_get__compliant() const;

  constexpr bool& __cordl_internal_get__compliant();

  constexpr void __cordl_internal_set__compliant(bool value);

  /// @brief Method .ctor, addr 0x5bb2c1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool isCompliant);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CLSCompliantAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CLSCompliantAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CLSCompliantAttribute(CLSCompliantAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CLSCompliantAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CLSCompliantAttribute(CLSCompliantAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2363 };

  /// @brief Field _compliant, offset: 0x10, size: 0x1, def value: None
  bool ____compliant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::CLSCompliantAttribute, ____compliant) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::CLSCompliantAttribute) == 0x18, "Size mismatch!");

} // namespace System
