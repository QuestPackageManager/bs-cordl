#pragma once
// IWYU pragma private; include "System/Linq/Expressions/BlockN.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockN)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class BlockN;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::BlockN);
// Dependencies System.Linq.Expressions.BlockExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.BlockN
class CORDL_TYPE BlockN : public ::System::Linq::Expressions::BlockExpression {
public:
  // Declarations
  __declspec(property(get = get_ExpressionCount)) int32_t ExpressionCount;

  /// @brief Field _expressions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expressions,
                      put = __cordl_internal_set__expressions)) ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _expressions;

  /// @brief Method GetExpression, addr 0x40ada08, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression(int32_t index);

  /// @brief Method GetOrMakeExpressions, addr 0x40adb50, size 0x48, virtual true, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();

  static inline ::System::Linq::Expressions::BlockN* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Rewrite, addr 0x40adb98, size 0x58, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                               ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const& __cordl_internal_get__expressions() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__expressions();

  constexpr void __cordl_internal_set__expressions(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value);

  /// @brief Method .ctor, addr 0x40ad9e4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method get_ExpressionCount, addr 0x40adab0, size 0xa0, virtual true, abstract: false, final false
  inline int32_t get_ExpressionCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockN();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlockN", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockN(BlockN&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockN", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockN(BlockN const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13652 };

  /// @brief Field _expressions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* ____expressions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::BlockN, ____expressions) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::BlockN, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::BlockN);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::BlockN*, "System.Linq.Expressions", "BlockN");
