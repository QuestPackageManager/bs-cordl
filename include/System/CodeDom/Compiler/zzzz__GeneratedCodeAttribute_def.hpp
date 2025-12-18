#pragma once
// IWYU pragma private; include "System/CodeDom/Compiler/GeneratedCodeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GeneratedCodeAttribute)
// Forward declare root types
namespace System::CodeDom::Compiler {
class GeneratedCodeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::CodeDom::Compiler::GeneratedCodeAttribute);
// Dependencies System.Attribute
namespace System::CodeDom::Compiler {
// Is value type: false
// CS Name: System.CodeDom.Compiler.GeneratedCodeAttribute
class CORDL_TYPE GeneratedCodeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field tool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tool, put = __cordl_internal_set_tool)) ::StringW tool;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  static inline ::System::CodeDom::Compiler::GeneratedCodeAttribute* New_ctor(::StringW tool, ::StringW version);

  constexpr ::StringW const& __cordl_internal_get_tool() const;

  constexpr ::StringW& __cordl_internal_get_tool();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_tool(::StringW value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x61e1218, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::StringW tool, ::StringW version);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratedCodeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneratedCodeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneratedCodeAttribute(GeneratedCodeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneratedCodeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratedCodeAttribute(GeneratedCodeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11102 };

  /// @brief Field tool, offset: 0x10, size: 0x8, def value: None
  ::StringW ___tool;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::CodeDom::Compiler::GeneratedCodeAttribute, ___tool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::CodeDom::Compiler::GeneratedCodeAttribute, ___version) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::CodeDom::Compiler::GeneratedCodeAttribute, 0x20>, "Size mismatch!");

} // namespace System::CodeDom::Compiler
NEED_NO_BOX(::System::CodeDom::Compiler::GeneratedCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::CodeDom::Compiler::GeneratedCodeAttribute*, "System.CodeDom.Compiler", "GeneratedCodeAttribute");
