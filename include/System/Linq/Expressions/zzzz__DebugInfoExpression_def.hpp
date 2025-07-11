#pragma once
// IWYU pragma private; include "System/Linq/Expressions/DebugInfoExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugInfoExpression)
namespace System::Linq::Expressions {
class SymbolDocumentInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class DebugInfoExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::DebugInfoExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.DebugInfoExpression
class CORDL_TYPE DebugInfoExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Document)) ::System::Linq::Expressions::SymbolDocumentInfo* Document;

  __declspec(property(get = get_EndLine)) int32_t EndLine;

  __declspec(property(get = get_IsClear)) bool IsClear;

  __declspec(property(get = get_StartLine)) int32_t StartLine;

  /// @brief Field <Document>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Document_k__BackingField,
                      put = __cordl_internal_set__Document_k__BackingField)) ::System::Linq::Expressions::SymbolDocumentInfo* _Document_k__BackingField;

  constexpr ::System::Linq::Expressions::SymbolDocumentInfo* const& __cordl_internal_get__Document_k__BackingField() const;

  constexpr ::System::Linq::Expressions::SymbolDocumentInfo*& __cordl_internal_get__Document_k__BackingField();

  constexpr void __cordl_internal_set__Document_k__BackingField(::System::Linq::Expressions::SymbolDocumentInfo* value);

  /// @brief Method get_Document, addr 0x40af110, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::SymbolDocumentInfo* get_Document();

  /// @brief Method get_EndLine, addr 0x40af0e8, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_EndLine();

  /// @brief Method get_IsClear, addr 0x40af118, size 0x28, virtual true, abstract: false, final false
  inline bool get_IsClear();

  /// @brief Method get_StartLine, addr 0x40af0c0, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_StartLine();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugInfoExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugInfoExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugInfoExpression(DebugInfoExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugInfoExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugInfoExpression(DebugInfoExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13668 };

  /// @brief Field <Document>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::SymbolDocumentInfo* ____Document_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::DebugInfoExpression, ____Document_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::DebugInfoExpression, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::DebugInfoExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::DebugInfoExpression*, "System.Linq.Expressions", "DebugInfoExpression");
