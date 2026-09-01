#pragma once
// IWYU pragma private; include "GlobalNamespace\TestCommandAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TestCommandAttribute)
// Forward declare root types
namespace GlobalNamespace {
class TestCommandAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestCommandAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestCommandAttribute*, "", "TestCommandAttribute");
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestCommandAttribute
class CORDL_TYPE TestCommandAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::GlobalNamespace::TestCommandAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x32e8ae0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestCommandAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestCommandAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestCommandAttribute(TestCommandAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestCommandAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestCommandAttribute(TestCommandAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TestCommandAttribute) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
