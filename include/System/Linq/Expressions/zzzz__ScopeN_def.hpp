#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ScopeExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScopeN)
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
class ScopeN;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ScopeN);
// Type: System.Linq.Expressions::ScopeN
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::ScopeN*
class CORDL_TYPE ScopeN : public ::System::Linq::Expressions::ScopeExpression {
public:
  // Declarations
  __declspec(property(get = get_Body))::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* Body;

  __declspec(property(get = get_ExpressionCount)) int32_t ExpressionCount;

  /// @brief Field _body, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__body, put = __cordl_internal_set__body))::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _body;

  /// @brief Method GetExpression, addr 0x2affbf8, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression(int32_t index);

  /// @brief Method GetOrMakeExpressions, addr 0x2affd40, size 0x48, virtual true, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();

  static inline ::System::Linq::Expressions::ScopeN* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                              ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* body);

  /// @brief Method Rewrite, addr 0x2affd88, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                               ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__body();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*> const& __cordl_internal_get__body() const;

  constexpr void __cordl_internal_set__body(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value);

  /// @brief Method .ctor, addr 0x2affbc8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* body);

  /// @brief Method get_Body, addr 0x2affbf0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* get_Body();

  /// @brief Method get_ExpressionCount, addr 0x2affca0, size 0xa0, virtual true, abstract: false, final false
  inline int32_t get_ExpressionCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopeN();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScopeN", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopeN(ScopeN&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopeN", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopeN(ScopeN const&) = delete;

  /// @brief Field _body, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* ____body;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ScopeN, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::ScopeN, ____body) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ScopeN);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ScopeN*, "System.Linq.Expressions", "ScopeN");
